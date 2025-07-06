/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SynchronousMachineUserDefined(),
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
		{ "SynchronousMachineUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineUserDefined.proprietary", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

SynchronousMachineUserDefined::SynchronousMachineUserDefined() {}
SynchronousMachineUserDefined::~SynchronousMachineUserDefined() {}

const std::list<std::string>& SynchronousMachineUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SynchronousMachineUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SynchronousMachineUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SynchronousMachineUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SynchronousMachineUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SynchronousMachineUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SynchronousMachineUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_SynchronousMachineUserDefined(BaseClass*, BaseClass*);
bool assign_SynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineUserDefined* element = dynamic_cast<SynchronousMachineUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_SynchronousMachineUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachineUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineUserDefined* element = dynamic_cast<SynchronousMachineUserDefined*>(BaseClass_ptr1);
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


bool get_SynchronousMachineUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineUserDefined* element = dynamic_cast<const SynchronousMachineUserDefined*>(BaseClass_ptr1);
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

const char SynchronousMachineUserDefined::debugName[] = "SynchronousMachineUserDefined";
const char* SynchronousMachineUserDefined::debugString() const
{
	return SynchronousMachineUserDefined::debugName;
}

void SynchronousMachineUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SynchronousMachineUserDefined", &SynchronousMachineUserDefined_factory);
}

void SynchronousMachineUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("SynchronousMachineUserDefined.proprietary", &assign_SynchronousMachineUserDefined_proprietary);
}

void SynchronousMachineUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("SynchronousMachineUserDefined.ProprietaryParameterDynamics", &assign_SynchronousMachineUserDefined_ProprietaryParameterDynamics);
}

void SynchronousMachineUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("SynchronousMachineUserDefined.proprietary", &get_SynchronousMachineUserDefined_proprietary);
}

void SynchronousMachineUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SynchronousMachineDynamics::addClassGetFnsToMap(get_map);
}

void SynchronousMachineUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDynamics::addEnumGetFnsToMap(get_map);
}

bool SynchronousMachineUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SynchronousMachineUserDefined" &&
		dynamic_cast<SynchronousMachineUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner SynchronousMachineUserDefined::declare()
{
	return BaseClassDefiner(SynchronousMachineUserDefined::addConstructToMap, SynchronousMachineUserDefined::addPrimitiveAssignFnsToMap, SynchronousMachineUserDefined::addClassAssignFnsToMap, SynchronousMachineUserDefined::debugName);
}

std::map<std::string, AttrDetails> SynchronousMachineUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = SynchronousMachineDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SynchronousMachineUserDefined_factory()
	{
		return new SynchronousMachineUserDefined;
	}
}
