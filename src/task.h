#ifndef TASK_H
#define TASK_H

#include <vector>
#include <string>
#include <unordered_map>
#include "base.h"

enum type
{
    UNDEFINED,
    VECTOR,
    POINTER
};

class task
{
public:
    task();
    task(std::vector<base*>* vectorPtr, std::string rdfID);
    task(base** basePtr, std::string rdfID);
    
    void resolve(std::unordered_map<std::string, base*> &map);
    
private:
    type what;
    std::vector<base*>* m_vectorPtr;
    base** m_basePtr;
    std::string m_rdfID;
};

#endif // TASK_H
