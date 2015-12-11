#ifndef MYPARSER_H
#define MYPARSER_H

#include <libxml++/libxml++.h>
#include <glibmm/ustring.h>
#include <stack>
#include <queue>
#include <unordered_map>
#include <memory>

#include "IdentifiedObject.h"
#include "task.h"

class MyParser : public xmlpp::SaxParser
{
public:
    MyParser();
    ~MyParser();

    void print();

	std::unordered_map<std::string, std::shared_ptr<IdentifiedObject>> elements;

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

	static Glib::ustring get_rdf_id(const AttributeList &properties);
	static Glib::ustring get_rdf_resource(const AttributeList &properties);

private:
	std::stack<std::shared_ptr<IdentifiedObject>> elementStack;
	std::stack<Glib::ustring> tagStack;
    std::queue<task> taskQueue;
};



#endif // MYPARSER_H
