#include "BaseClass.hpp"

using namespace CIMPP;

BaseClass::~BaseClass() {}

const std::list<std::string>& BaseClass::getAttributeNames() const { return CimClassDetails::UnknownAttributes; };

const std::string& BaseClass::getClassNamespaceUrl() const { return CimClassDetails::UnknownNamespace; }
const std::string& BaseClass::getAttributeNamespaceUrl(const std::string& /*attrName*/) const { return CimClassDetails::UnknownNamespace; }

const std::list<CGMESProfile>& BaseClass::getPossibleProfiles() const { return CimClassDetails::UnknownProfiles; }
const CGMESProfile& BaseClass::getRecommendedProfile() const { return UnknownProfile; }
const std::list<CGMESProfile>& BaseClass::getPossibleAttributeProfiles(const std::string& /*attrName*/) const { return CimClassDetails::UnknownProfiles; }
const std::list<CGMESProfile>& BaseClass::getPossibleProfilesIncludingAttributes() const { return CimClassDetails::UnknownProfiles; }

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

std::map<std::string, AttrDetails> BaseClass::allAttrDetailsMap() const
{
	return {};
}
