/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArControllerType2Dynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ExcitationSystemDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PFVArControllerType2Dynamics(),
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
		{ "PFVArControllerType2Dynamics.ExcitationSystemDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PFVArControllerType2Dynamics::PFVArControllerType2Dynamics() : ExcitationSystemDynamics(nullptr) {}
PFVArControllerType2Dynamics::~PFVArControllerType2Dynamics() {}

const std::list<std::string>& PFVArControllerType2Dynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PFVArControllerType2Dynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PFVArControllerType2Dynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PFVArControllerType2Dynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PFVArControllerType2Dynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PFVArControllerType2Dynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PFVArControllerType2Dynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcitationSystemDynamics_PFVArControllerType2Dynamics(BaseClass*, BaseClass*);
bool assign_PFVArControllerType2Dynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType2Dynamics* element = dynamic_cast<PFVArControllerType2Dynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_PFVArControllerType2Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_PFVArControllerType2Dynamics_ExcitationSystemDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const PFVArControllerType2Dynamics* element = dynamic_cast<const PFVArControllerType2Dynamics*>(BaseClass_ptr1);
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

const char PFVArControllerType2Dynamics::debugName[] = "PFVArControllerType2Dynamics";
const char* PFVArControllerType2Dynamics::debugString() const
{
	return PFVArControllerType2Dynamics::debugName;
}

void PFVArControllerType2Dynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PFVArControllerType2Dynamics", &PFVArControllerType2Dynamics_factory);
}

void PFVArControllerType2Dynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PFVArControllerType2Dynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PFVArControllerType2Dynamics.ExcitationSystemDynamics", &assign_PFVArControllerType2Dynamics_ExcitationSystemDynamics);
}

void PFVArControllerType2Dynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void PFVArControllerType2Dynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("PFVArControllerType2Dynamics.ExcitationSystemDynamics", &get_PFVArControllerType2Dynamics_ExcitationSystemDynamics);
}

void PFVArControllerType2Dynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool PFVArControllerType2Dynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PFVArControllerType2Dynamics" &&
		dynamic_cast<PFVArControllerType2Dynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner PFVArControllerType2Dynamics::declare()
{
	return BaseClassDefiner(PFVArControllerType2Dynamics::addConstructToMap, PFVArControllerType2Dynamics::addPrimitiveAssignFnsToMap, PFVArControllerType2Dynamics::addClassAssignFnsToMap, PFVArControllerType2Dynamics::debugName);
}

std::map<std::string, AttrDetails> PFVArControllerType2Dynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PFVArControllerType2Dynamics_factory()
	{
		return new PFVArControllerType2Dynamics;
	}
}
