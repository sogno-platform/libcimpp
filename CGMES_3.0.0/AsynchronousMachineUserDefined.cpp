/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AsynchronousMachineUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		AsynchronousMachineUserDefined(),
		"http://iec.ch/TC57/CIM100#",
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
		{ "AsynchronousMachineUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "AsynchronousMachineUserDefined.proprietary", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

AsynchronousMachineUserDefined::AsynchronousMachineUserDefined() {}
AsynchronousMachineUserDefined::~AsynchronousMachineUserDefined() {}

const std::list<std::string>& AsynchronousMachineUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& AsynchronousMachineUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& AsynchronousMachineUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& AsynchronousMachineUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& AsynchronousMachineUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& AsynchronousMachineUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& AsynchronousMachineUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_AsynchronousMachineUserDefined(BaseClass*, BaseClass*);
bool assign_AsynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AsynchronousMachineUserDefined* element = dynamic_cast<AsynchronousMachineUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_AsynchronousMachineUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AsynchronousMachineUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachineUserDefined* element = dynamic_cast<AsynchronousMachineUserDefined*>(BaseClass_ptr1);
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


bool get_AsynchronousMachineUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachineUserDefined* element = dynamic_cast<const AsynchronousMachineUserDefined*>(BaseClass_ptr1);
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

const char AsynchronousMachineUserDefined::debugName[] = "AsynchronousMachineUserDefined";
const char* AsynchronousMachineUserDefined::debugString() const
{
	return AsynchronousMachineUserDefined::debugName;
}

void AsynchronousMachineUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("AsynchronousMachineUserDefined", &AsynchronousMachineUserDefined_factory);
}

void AsynchronousMachineUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("AsynchronousMachineUserDefined.proprietary", &assign_AsynchronousMachineUserDefined_proprietary);
}

void AsynchronousMachineUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("AsynchronousMachineUserDefined.ProprietaryParameterDynamics", &assign_AsynchronousMachineUserDefined_ProprietaryParameterDynamics);
}

void AsynchronousMachineUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AsynchronousMachineDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("AsynchronousMachineUserDefined.proprietary", &get_AsynchronousMachineUserDefined_proprietary);
}

void AsynchronousMachineUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AsynchronousMachineDynamics::addClassGetFnsToMap(get_map);
}

void AsynchronousMachineUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AsynchronousMachineDynamics::addEnumGetFnsToMap(get_map);
}

bool AsynchronousMachineUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "AsynchronousMachineUserDefined" &&
		dynamic_cast<AsynchronousMachineUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner AsynchronousMachineUserDefined::declare()
{
	return BaseClassDefiner(AsynchronousMachineUserDefined::addConstructToMap, AsynchronousMachineUserDefined::addPrimitiveAssignFnsToMap, AsynchronousMachineUserDefined::addClassAssignFnsToMap, AsynchronousMachineUserDefined::debugName);
}

std::map<std::string, AttrDetails> AsynchronousMachineUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = AsynchronousMachineDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* AsynchronousMachineUserDefined_factory()
	{
		return new AsynchronousMachineUserDefined;
	}
}
