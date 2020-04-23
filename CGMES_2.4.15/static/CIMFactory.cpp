#include "CIMFactory.hpp"
#include "Folders.hpp"
#include "CIMClassList.hpp"
#include <algorithm>
#include <iostream>

using namespace CGMES;

static std::unordered_map<std::string, BaseClass* (*)()> initialize();
std::unordered_map<std::string, BaseClass* (*)()> CIMFactory::factory_map = initialize();

BaseClass* CIMFactory::CreateNew(const std::string& name) {
    std::unordered_map<std::string, BaseClass* (*)()>::iterator it = factory_map.find(name);
    if(it != factory_map.end()) {
        return (*it->second)();
    }
    else {
        std::cerr << "!! ** Could not find factory for " << name << " ** !!" << std::endl;
        return nullptr;
    }
}

bool CIMFactory::IsCIMClass(const std::string& name) {
    std::unordered_map<std::string, BaseClass* (*)()>::iterator it = factory_map.find(name);
    if(it == factory_map.end()) {
        return false;
    }
    else {
        return true;
    }
}

CIMFactory::CIMFactory() {}

CIMFactory::~CIMFactory() {}

static std::unordered_map<std::string, BaseClass* (*)()> initialize() {
    std::unordered_map<std::string, BaseClass* (*)()> map;
    for (const BaseClassDefiner& CIMClass : CIMClassList)
    {
        CIMClass.addConstructToMap(map);
    }
    return map;
}
