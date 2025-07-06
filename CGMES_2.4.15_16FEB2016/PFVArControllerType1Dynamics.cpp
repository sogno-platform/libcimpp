/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArControllerType1Dynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ExcitationSystemDynamics.hpp"
#include "RemoteInputSignal.hpp"
#include "VoltageAdjusterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PFVArControllerType1Dynamics(),
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
		{ "PFVArControllerType1Dynamics.ExcitationSystemDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PFVArControllerType1Dynamics.RemoteInputSignal", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PFVArControllerType1Dynamics.VoltageAdjusterDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PFVArControllerType1Dynamics::PFVArControllerType1Dynamics() : ExcitationSystemDynamics(nullptr), RemoteInputSignal(nullptr), VoltageAdjusterDynamics(nullptr) {}
PFVArControllerType1Dynamics::~PFVArControllerType1Dynamics() {}

const std::list<std::string>& PFVArControllerType1Dynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PFVArControllerType1Dynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PFVArControllerType1Dynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PFVArControllerType1Dynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PFVArControllerType1Dynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PFVArControllerType1Dynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PFVArControllerType1Dynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcitationSystemDynamics_PFVArControllerType1Dynamics(BaseClass*, BaseClass*);
bool assign_PFVArControllerType1Dynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType1Dynamics* element = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_PFVArControllerType1Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RemoteInputSignal_PFVArControllerType1Dynamics(BaseClass*, BaseClass*);
bool assign_PFVArControllerType1Dynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType1Dynamics* element = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RemoteInputSignal != element2)
		{
			element->RemoteInputSignal = element2;
			return assign_RemoteInputSignal_PFVArControllerType1Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics(BaseClass*, BaseClass*);
bool assign_PFVArControllerType1Dynamics_VoltageAdjusterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType1Dynamics* element = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr1);
	VoltageAdjusterDynamics* element2 = dynamic_cast<VoltageAdjusterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VoltageAdjusterDynamics != element2)
		{
			element->VoltageAdjusterDynamics = element2;
			return assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_PFVArControllerType1Dynamics_ExcitationSystemDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const PFVArControllerType1Dynamics* element = dynamic_cast<const PFVArControllerType1Dynamics*>(BaseClass_ptr1);
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



const char PFVArControllerType1Dynamics::debugName[] = "PFVArControllerType1Dynamics";
const char* PFVArControllerType1Dynamics::debugString() const
{
	return PFVArControllerType1Dynamics::debugName;
}

void PFVArControllerType1Dynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PFVArControllerType1Dynamics", &PFVArControllerType1Dynamics_factory);
}

void PFVArControllerType1Dynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PFVArControllerType1Dynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PFVArControllerType1Dynamics.ExcitationSystemDynamics", &assign_PFVArControllerType1Dynamics_ExcitationSystemDynamics);
	assign_map.emplace("PFVArControllerType1Dynamics.RemoteInputSignal", &assign_PFVArControllerType1Dynamics_RemoteInputSignal);
	assign_map.emplace("PFVArControllerType1Dynamics.VoltageAdjusterDynamics", &assign_PFVArControllerType1Dynamics_VoltageAdjusterDynamics);
}

void PFVArControllerType1Dynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void PFVArControllerType1Dynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("PFVArControllerType1Dynamics.ExcitationSystemDynamics", &get_PFVArControllerType1Dynamics_ExcitationSystemDynamics);
}

void PFVArControllerType1Dynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool PFVArControllerType1Dynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PFVArControllerType1Dynamics" &&
		dynamic_cast<PFVArControllerType1Dynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner PFVArControllerType1Dynamics::declare()
{
	return BaseClassDefiner(PFVArControllerType1Dynamics::addConstructToMap, PFVArControllerType1Dynamics::addPrimitiveAssignFnsToMap, PFVArControllerType1Dynamics::addClassAssignFnsToMap, PFVArControllerType1Dynamics::debugName);
}

std::map<std::string, AttrDetails> PFVArControllerType1Dynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PFVArControllerType1Dynamics_factory()
	{
		return new PFVArControllerType1Dynamics;
	}
}
