/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnderexcitationLimiterDynamics.hpp"

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
		UnderexcitationLimiterDynamics(),
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
		{ "UnderexcitationLimiterDynamics.ExcitationSystemDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "UnderexcitationLimiterDynamics.RemoteInputSignal", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics() : ExcitationSystemDynamics(nullptr), RemoteInputSignal(nullptr) {}
UnderexcitationLimiterDynamics::~UnderexcitationLimiterDynamics() {}

const std::list<std::string>& UnderexcitationLimiterDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& UnderexcitationLimiterDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& UnderexcitationLimiterDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& UnderexcitationLimiterDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& UnderexcitationLimiterDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& UnderexcitationLimiterDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& UnderexcitationLimiterDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcitationSystemDynamics_UnderexcitationLimiterDynamics(BaseClass*, BaseClass*);
bool assign_UnderexcitationLimiterDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	UnderexcitationLimiterDynamics* element = dynamic_cast<UnderexcitationLimiterDynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_UnderexcitationLimiterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RemoteInputSignal_UnderexcitationLimiterDynamics(BaseClass*, BaseClass*);
bool assign_UnderexcitationLimiterDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	UnderexcitationLimiterDynamics* element = dynamic_cast<UnderexcitationLimiterDynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RemoteInputSignal != element2)
		{
			element->RemoteInputSignal = element2;
			return assign_RemoteInputSignal_UnderexcitationLimiterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_UnderexcitationLimiterDynamics_ExcitationSystemDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const UnderexcitationLimiterDynamics* element = dynamic_cast<const UnderexcitationLimiterDynamics*>(BaseClass_ptr1);
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


const char UnderexcitationLimiterDynamics::debugName[] = "UnderexcitationLimiterDynamics";
const char* UnderexcitationLimiterDynamics::debugString() const
{
	return UnderexcitationLimiterDynamics::debugName;
}

void UnderexcitationLimiterDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("UnderexcitationLimiterDynamics", &UnderexcitationLimiterDynamics_factory);
}

void UnderexcitationLimiterDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void UnderexcitationLimiterDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("UnderexcitationLimiterDynamics.ExcitationSystemDynamics", &assign_UnderexcitationLimiterDynamics_ExcitationSystemDynamics);
	assign_map.emplace("UnderexcitationLimiterDynamics.RemoteInputSignal", &assign_UnderexcitationLimiterDynamics_RemoteInputSignal);
}

void UnderexcitationLimiterDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void UnderexcitationLimiterDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("UnderexcitationLimiterDynamics.ExcitationSystemDynamics", &get_UnderexcitationLimiterDynamics_ExcitationSystemDynamics);
}

void UnderexcitationLimiterDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool UnderexcitationLimiterDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "UnderexcitationLimiterDynamics" &&
		dynamic_cast<UnderexcitationLimiterDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner UnderexcitationLimiterDynamics::declare()
{
	return BaseClassDefiner(UnderexcitationLimiterDynamics::addConstructToMap, UnderexcitationLimiterDynamics::addPrimitiveAssignFnsToMap, UnderexcitationLimiterDynamics::addClassAssignFnsToMap, UnderexcitationLimiterDynamics::debugName);
}

std::map<std::string, AttrDetails> UnderexcitationLimiterDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* UnderexcitationLimiterDynamics_factory()
	{
		return new UnderexcitationLimiterDynamics;
	}
}
