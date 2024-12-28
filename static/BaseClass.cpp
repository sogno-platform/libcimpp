#include "BaseClass.hpp"

using namespace CIMPP;

BaseClass::~BaseClass() {}

std::list<CGMESProfile> BaseClass::getPossibleProfilesForClass() const { return {}; }
std::map<std::string, std::list<CGMESProfile>> BaseClass::getPossibleProfilesForAttributes() const { return {}; }

const char BaseClass::debugName[] = "BaseClass";
const char* BaseClass::debugString() const
{
	return BaseClass::debugName;
}

void BaseClass::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}
void BaseClass::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}
void BaseClass::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}
void BaseClass::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const {}
void BaseClass::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const {}
void BaseClass::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const {}

const BaseClassDefiner BaseClass::declare()
{
	return BaseClassDefiner(BaseClass::addConstructToMap, BaseClass::addPrimitiveAssignFnsToMap, BaseClass::addClassAssignFnsToMap, BaseClass::debugName);
}
