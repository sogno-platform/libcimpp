#include "task.h"
#include <iostream>
#include <typeinfo>

#include "IdentifiedObject.h"

task::task()
	: ptr(nullptr)
{
}

task::task(void* ptr, std::string rdfID)
	: ptr(ptr),
	  m_rdfID(rdfID)
{
}

void task::resolve(std::unordered_map<std::string, std::shared_ptr<IdentifiedObject>> &map)
{
	if(ptr == nullptr)
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

	std::cout << typeid(*(iterator->second)).name() << std::endl;
}
