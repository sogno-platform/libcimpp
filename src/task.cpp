#include "task.h"
#include <iostream>

task::task()
  : what(UNDEFINED),
    m_vectorPtr(nullptr),
    m_basePtr(nullptr)
{
}

task::task(std::vector<base*>* vectorPtr, std::string rdfID)
  : what(VECTOR),
    m_vectorPtr(vectorPtr),
    m_basePtr(nullptr),
    m_rdfID(rdfID)

{
}

task::task(base **basePtr, std::string rdfID)
  : what(POINTER),
    m_vectorPtr(nullptr),
    m_basePtr(basePtr),
    m_rdfID(rdfID)
{
}

void task::resolve(std::unordered_map<std::string, base*> &map)
{
    if(what == UNDEFINED)
        return;

    // Search for item in map
    // std::unordered_map<std::string, base*>::const_iterator
    auto iterator = map.find(m_rdfID);
    if(iterator == map.end())
    {
        // not found throw something
        std::cerr << "not found" << std::endl;
        return;
    }
    if(what == VECTOR)
    {
        if(m_vectorPtr != nullptr)
        {
            // Add base* to specified vector
            m_vectorPtr->push_back(iterator->second);
        }
    }
    
    if(what == POINTER)
    {
        if(m_basePtr != nullptr)
        {
            // Set base*
            (*m_basePtr) = iterator->second;
        }
    }
}
