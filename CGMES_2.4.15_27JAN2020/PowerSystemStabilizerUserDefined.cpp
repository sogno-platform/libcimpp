/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerSystemStabilizerUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PowerSystemStabilizerUserDefined(),
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
		{ "PowerSystemStabilizerUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PowerSystemStabilizerUserDefined.proprietary", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PowerSystemStabilizerUserDefined::PowerSystemStabilizerUserDefined() {}
PowerSystemStabilizerUserDefined::~PowerSystemStabilizerUserDefined() {}

const std::list<std::string>& PowerSystemStabilizerUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PowerSystemStabilizerUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PowerSystemStabilizerUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PowerSystemStabilizerUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PowerSystemStabilizerUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PowerSystemStabilizerUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PowerSystemStabilizerUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined(BaseClass*, BaseClass*);
bool assign_PowerSystemStabilizerUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerSystemStabilizerUserDefined* element = dynamic_cast<PowerSystemStabilizerUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PowerSystemStabilizerUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerSystemStabilizerUserDefined* element = dynamic_cast<PowerSystemStabilizerUserDefined*>(BaseClass_ptr1);
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


bool get_PowerSystemStabilizerUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerSystemStabilizerUserDefined* element = dynamic_cast<const PowerSystemStabilizerUserDefined*>(BaseClass_ptr1);
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

const char PowerSystemStabilizerUserDefined::debugName[] = "PowerSystemStabilizerUserDefined";
const char* PowerSystemStabilizerUserDefined::debugString() const
{
	return PowerSystemStabilizerUserDefined::debugName;
}

void PowerSystemStabilizerUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PowerSystemStabilizerUserDefined", &PowerSystemStabilizerUserDefined_factory);
}

void PowerSystemStabilizerUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PowerSystemStabilizerUserDefined.proprietary", &assign_PowerSystemStabilizerUserDefined_proprietary);
}

void PowerSystemStabilizerUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PowerSystemStabilizerUserDefined.ProprietaryParameterDynamics", &assign_PowerSystemStabilizerUserDefined_ProprietaryParameterDynamics);
}

void PowerSystemStabilizerUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PowerSystemStabilizerUserDefined.proprietary", &get_PowerSystemStabilizerUserDefined_proprietary);
}

void PowerSystemStabilizerUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PowerSystemStabilizerUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

bool PowerSystemStabilizerUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PowerSystemStabilizerUserDefined" &&
		dynamic_cast<PowerSystemStabilizerUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner PowerSystemStabilizerUserDefined::declare()
{
	return BaseClassDefiner(PowerSystemStabilizerUserDefined::addConstructToMap, PowerSystemStabilizerUserDefined::addPrimitiveAssignFnsToMap, PowerSystemStabilizerUserDefined::addClassAssignFnsToMap, PowerSystemStabilizerUserDefined::debugName);
}

std::map<std::string, AttrDetails> PowerSystemStabilizerUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemStabilizerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PowerSystemStabilizerUserDefined_factory()
	{
		return new PowerSystemStabilizerUserDefined;
	}
}
