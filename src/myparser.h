#ifndef MYPARSER_H
#define MYPARSER_H

#include <libxml++/libxml++.h>
#include <stack>
#include <queue>
#include <unordered_map>

#include "base.h"
#include "task.h"

class MyParser : public xmlpp::SaxParser
{
public:
    MyParser();
    ~MyParser();

    void print();

    std::unordered_map<std::string, base*> elements;

protected:
    void on_start_document() override;
    void on_end_document() override;
    void on_start_element(const Glib::ustring& name, const AttributeList& properties) override;
    void on_end_element(const Glib::ustring& name) override;
    void on_characters(const Glib::ustring& characters) override;
    //void on_comment(const Glib::ustring& text) override;
    //void on_warning(const Glib::ustring& text) override;
    //void on_error(const Glib::ustring& text) override;
    //void on_fatal_error(const Glib::ustring& text) override;

private:
    std::stack<base*> elementStack;
    std::stack<std::string> tagStack;
    std::queue<task> taskQueue;
};

#endif // MYPARSER_H
