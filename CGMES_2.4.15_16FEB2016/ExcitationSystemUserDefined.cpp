/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcitationSystemUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcitationSystemUserDefined(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "ExcitationSystemUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcitationSystemUserDefined.proprietary", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcitationSystemUserDefined::ExcitationSystemUserDefined() {}
ExcitationSystemUserDefined::~ExcitationSystemUserDefined() {}

const std::list<std::string>& ExcitationSystemUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcitationSystemUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcitationSystemUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcitationSystemUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcitationSystemUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcitationSystemUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcitationSystemUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_ExcitationSystemUserDefined(BaseClass*, BaseClass*);
bool assign_ExcitationSystemUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ExcitationSystemUserDefined* element = dynamic_cast<ExcitationSystemUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_ExcitationSystemUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ExcitationSystemUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcitationSystemUserDefined* element = dynamic_cast<ExcitationSystemUserDefined*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->proprietary;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_ExcitationSystemUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcitationSystemUserDefined* element = dynamic_cast<const ExcitationSystemUserDefined*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->proprietary;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcitationSystemUserDefined::debugName[] = "ExcitationSystemUserDefined";
const char* ExcitationSystemUserDefined::debugString() const
{
	return ExcitationSystemUserDefined::debugName;
}

void ExcitationSystemUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcitationSystemUserDefined", &ExcitationSystemUserDefined_factory);
}

void ExcitationSystemUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcitationSystemUserDefined.proprietary", &assign_ExcitationSystemUserDefined_proprietary);
}

void ExcitationSystemUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ExcitationSystemUserDefined.ProprietaryParameterDynamics", &assign_ExcitationSystemUserDefined_ProprietaryParameterDynamics);
}

void ExcitationSystemUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcitationSystemUserDefined.proprietary", &get_ExcitationSystemUserDefined_proprietary);
}

void ExcitationSystemUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcitationSystemUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcitationSystemUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcitationSystemUserDefined" &&
		dynamic_cast<ExcitationSystemUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcitationSystemUserDefined::declare()
{
	return BaseClassDefiner(ExcitationSystemUserDefined::addConstructToMap, ExcitationSystemUserDefined::addPrimitiveAssignFnsToMap, ExcitationSystemUserDefined::addClassAssignFnsToMap, ExcitationSystemUserDefined::debugName);
}

std::map<std::string, AttrDetails> ExcitationSystemUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcitationSystemUserDefined_factory()
	{
		return new ExcitationSystemUserDefined;
	}
}
