/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerSystemStabilizerDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ExcitationSystemDynamics.hpp"
#include "RemoteInputSignal.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PowerSystemStabilizerDynamics(),
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
		{ "PowerSystemStabilizerDynamics.ExcitationSystemDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PowerSystemStabilizerDynamics.RemoteInputSignal", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics() : ExcitationSystemDynamics(nullptr) {}
PowerSystemStabilizerDynamics::~PowerSystemStabilizerDynamics() {}

const std::list<std::string>& PowerSystemStabilizerDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PowerSystemStabilizerDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PowerSystemStabilizerDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PowerSystemStabilizerDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PowerSystemStabilizerDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PowerSystemStabilizerDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PowerSystemStabilizerDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcitationSystemDynamics_PowerSystemStabilizerDynamics(BaseClass*, BaseClass*);
bool assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerSystemStabilizerDynamics* element = dynamic_cast<PowerSystemStabilizerDynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_PowerSystemStabilizerDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RemoteInputSignal_PowerSystemStabilizerDynamics(BaseClass*, BaseClass*);
bool assign_PowerSystemStabilizerDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerSystemStabilizerDynamics* element = dynamic_cast<PowerSystemStabilizerDynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->RemoteInputSignal.begin(), element->RemoteInputSignal.end(), element2) == element->RemoteInputSignal.end())
		{
			element->RemoteInputSignal.push_back(element2);
			return assign_RemoteInputSignal_PowerSystemStabilizerDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_PowerSystemStabilizerDynamics_ExcitationSystemDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const PowerSystemStabilizerDynamics* element = dynamic_cast<const PowerSystemStabilizerDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ExcitationSystemDynamics != 0)
		{
			BaseClass_list.push_back(element->ExcitationSystemDynamics);
			return true;
		}
	}
	return false;
}


const char PowerSystemStabilizerDynamics::debugName[] = "PowerSystemStabilizerDynamics";
const char* PowerSystemStabilizerDynamics::debugString() const
{
	return PowerSystemStabilizerDynamics::debugName;
}

void PowerSystemStabilizerDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PowerSystemStabilizerDynamics", &PowerSystemStabilizerDynamics_factory);
}

void PowerSystemStabilizerDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PowerSystemStabilizerDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PowerSystemStabilizerDynamics.ExcitationSystemDynamics", &assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics);
	assign_map.emplace("PowerSystemStabilizerDynamics.RemoteInputSignal", &assign_PowerSystemStabilizerDynamics_RemoteInputSignal);
}

void PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void PowerSystemStabilizerDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("PowerSystemStabilizerDynamics.ExcitationSystemDynamics", &get_PowerSystemStabilizerDynamics_ExcitationSystemDynamics);
}

void PowerSystemStabilizerDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool PowerSystemStabilizerDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PowerSystemStabilizerDynamics" &&
		dynamic_cast<PowerSystemStabilizerDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner PowerSystemStabilizerDynamics::declare()
{
	return BaseClassDefiner(PowerSystemStabilizerDynamics::addConstructToMap, PowerSystemStabilizerDynamics::addPrimitiveAssignFnsToMap, PowerSystemStabilizerDynamics::addClassAssignFnsToMap, PowerSystemStabilizerDynamics::debugName);
}

std::map<std::string, AttrDetails> PowerSystemStabilizerDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PowerSystemStabilizerDynamics_factory()
	{
		return new PowerSystemStabilizerDynamics;
	}
}
