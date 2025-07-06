/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiscontinuousExcitationControlDynamics.hpp"

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
		DiscontinuousExcitationControlDynamics(),
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
		{ "DiscontinuousExcitationControlDynamics.ExcitationSystemDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "DiscontinuousExcitationControlDynamics.RemoteInputSignal", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics() : ExcitationSystemDynamics(nullptr), RemoteInputSignal(nullptr) {}
DiscontinuousExcitationControlDynamics::~DiscontinuousExcitationControlDynamics() {}

const std::list<std::string>& DiscontinuousExcitationControlDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DiscontinuousExcitationControlDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DiscontinuousExcitationControlDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DiscontinuousExcitationControlDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DiscontinuousExcitationControlDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DiscontinuousExcitationControlDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DiscontinuousExcitationControlDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcitationSystemDynamics_DiscontinuousExcitationControlDynamics(BaseClass*, BaseClass*);
bool assign_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiscontinuousExcitationControlDynamics* element = dynamic_cast<DiscontinuousExcitationControlDynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_DiscontinuousExcitationControlDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RemoteInputSignal_DiscontinuousExcitationControlDynamics(BaseClass*, BaseClass*);
bool assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiscontinuousExcitationControlDynamics* element = dynamic_cast<DiscontinuousExcitationControlDynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RemoteInputSignal != element2)
		{
			element->RemoteInputSignal = element2;
			return assign_RemoteInputSignal_DiscontinuousExcitationControlDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const DiscontinuousExcitationControlDynamics* element = dynamic_cast<const DiscontinuousExcitationControlDynamics*>(BaseClass_ptr1);
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


const char DiscontinuousExcitationControlDynamics::debugName[] = "DiscontinuousExcitationControlDynamics";
const char* DiscontinuousExcitationControlDynamics::debugString() const
{
	return DiscontinuousExcitationControlDynamics::debugName;
}

void DiscontinuousExcitationControlDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DiscontinuousExcitationControlDynamics", &DiscontinuousExcitationControlDynamics_factory);
}

void DiscontinuousExcitationControlDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DiscontinuousExcitationControlDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DiscontinuousExcitationControlDynamics.ExcitationSystemDynamics", &assign_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics);
	assign_map.emplace("DiscontinuousExcitationControlDynamics.RemoteInputSignal", &assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal);
}

void DiscontinuousExcitationControlDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void DiscontinuousExcitationControlDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("DiscontinuousExcitationControlDynamics.ExcitationSystemDynamics", &get_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics);
}

void DiscontinuousExcitationControlDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool DiscontinuousExcitationControlDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DiscontinuousExcitationControlDynamics" &&
		dynamic_cast<DiscontinuousExcitationControlDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner DiscontinuousExcitationControlDynamics::declare()
{
	return BaseClassDefiner(DiscontinuousExcitationControlDynamics::addConstructToMap, DiscontinuousExcitationControlDynamics::addPrimitiveAssignFnsToMap, DiscontinuousExcitationControlDynamics::addClassAssignFnsToMap, DiscontinuousExcitationControlDynamics::debugName);
}

std::map<std::string, AttrDetails> DiscontinuousExcitationControlDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DiscontinuousExcitationControlDynamics_factory()
	{
		return new DiscontinuousExcitationControlDynamics;
	}
}
