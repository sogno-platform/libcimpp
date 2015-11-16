#include "task.h"
#include "DSLModem.h"
#include "LTEModem.h"
#include "Modem.h"
#include "commchannel.h"
#include "PowerSystemResource.h"
#include <iostream>

task::task()
  : m_what(UNDEFINED),
    m_basePtr(nullptr)
{
}

task::task(base* basePtr, std::string rdfID, type what)
  : m_what(what),
    m_basePtr(basePtr),
    m_rdfID(rdfID)
{
}

void task::resolve(std::unordered_map<std::string, base*> &map)
{
    if(m_what == UNDEFINED)
        return;
    if(m_basePtr == nullptr)
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
    if(m_what == PowerSystemResource_ComMod)
    {
        ((PowerSystemResource*) m_basePtr)->ComMod.push_back(iterator->second);
    }
    if(m_what == CommChannel_src)
    {
        ((CommChannel*) m_basePtr)->src = (Modem*) iterator->second;
    }
    if(m_what == CommChannel_dest)
    {
        ((CommChannel*) m_basePtr)->dest = (Modem*) iterator->second;
    }
}
