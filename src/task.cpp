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

task::task(std::shared_ptr<base> basePtr, std::string rdfID, type what)
  : m_what(what),
    m_basePtr(basePtr),
    m_rdfID(rdfID)
{
}

void task::resolve(std::unordered_map<std::string, std::shared_ptr<base>> &map)
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
        std::dynamic_pointer_cast<PowerSystemResource>(m_basePtr)->ComMod.push_back(iterator->second);
    }
    if(m_what == CommChannel_src)
    {
        std::dynamic_pointer_cast<CommChannel>(m_basePtr)->src = std::dynamic_pointer_cast<Modem>(iterator->second);
    }
    if(m_what == CommChannel_dest)
    {
        std::dynamic_pointer_cast<CommChannel>(m_basePtr)->dest = std::dynamic_pointer_cast<Modem>(iterator->second);
    }
}
