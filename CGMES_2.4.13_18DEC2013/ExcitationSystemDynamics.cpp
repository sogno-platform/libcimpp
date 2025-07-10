/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcitationSystemDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DiscontinuousExcitationControlDynamics.hpp"
#include "OverexcitationLimiterDynamics.hpp"
#include "PFVArControllerType1Dynamics.hpp"
#include "PFVArControllerType2Dynamics.hpp"
#include "PowerSystemStabilizerDynamics.hpp"
#include "SynchronousMachineDynamics.hpp"
#include "UnderexcitationLimiterDynamics.hpp"
#include "VoltageCompensatorDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcitationSystemDynamics(),
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
		{ "ExcitationSystemDynamics.DiscontinuousExcitationControlDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcitationSystemDynamics.OverexcitationLimiterDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcitationSystemDynamics.PFVArControllerType1Dynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcitationSystemDynamics.PFVArControllerType2Dynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcitationSystemDynamics.PowerSystemStabilizerDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcitationSystemDynamics.SynchronousMachineDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcitationSystemDynamics.UnderexcitationLimiterDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcitationSystemDynamics.VoltageCompensatorDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcitationSystemDynamics::ExcitationSystemDynamics() : DiscontinuousExcitationControlDynamics(nullptr), OverexcitationLimiterDynamics(nullptr), PFVArControllerType1Dynamics(nullptr), PFVArControllerType2Dynamics(nullptr), PowerSystemStabilizerDynamics(nullptr), SynchronousMachineDynamics(nullptr), UnderexcitationLimiterDynamics(nullptr), VoltageCompensatorDynamics(nullptr) {}
ExcitationSystemDynamics::~ExcitationSystemDynamics() {}

const std::list<std::string>& ExcitationSystemDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcitationSystemDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcitationSystemDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcitationSystemDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcitationSystemDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcitationSystemDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcitationSystemDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics(BaseClass*, BaseClass*);
bool assign_ExcitationSystemDynamics_DiscontinuousExcitationControlDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1);
	DiscontinuousExcitationControlDynamics* element2 = dynamic_cast<DiscontinuousExcitationControlDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DiscontinuousExcitationControlDynamics != element2)
		{
			element->DiscontinuousExcitationControlDynamics = element2;
			return assign_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_OverexcitationLimiterDynamics_ExcitationSystemDynamics(BaseClass*, BaseClass*);
bool assign_ExcitationSystemDynamics_OverexcitationLimiterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1);
	OverexcitationLimiterDynamics* element2 = dynamic_cast<OverexcitationLimiterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->OverexcitationLimiterDynamics != element2)
		{
			element->OverexcitationLimiterDynamics = element2;
			return assign_OverexcitationLimiterDynamics_ExcitationSystemDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PFVArControllerType1Dynamics_ExcitationSystemDynamics(BaseClass*, BaseClass*);
bool assign_ExcitationSystemDynamics_PFVArControllerType1Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1);
	PFVArControllerType1Dynamics* element2 = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PFVArControllerType1Dynamics != element2)
		{
			element->PFVArControllerType1Dynamics = element2;
			return assign_PFVArControllerType1Dynamics_ExcitationSystemDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PFVArControllerType2Dynamics_ExcitationSystemDynamics(BaseClass*, BaseClass*);
bool assign_ExcitationSystemDynamics_PFVArControllerType2Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1);
	PFVArControllerType2Dynamics* element2 = dynamic_cast<PFVArControllerType2Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PFVArControllerType2Dynamics != element2)
		{
			element->PFVArControllerType2Dynamics = element2;
			return assign_PFVArControllerType2Dynamics_ExcitationSystemDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics(BaseClass*, BaseClass*);
bool assign_ExcitationSystemDynamics_PowerSystemStabilizerDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1);
	PowerSystemStabilizerDynamics* element2 = dynamic_cast<PowerSystemStabilizerDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PowerSystemStabilizerDynamics != element2)
		{
			element->PowerSystemStabilizerDynamics = element2;
			return assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachineDynamics_ExcitationSystemDynamics(BaseClass*, BaseClass*);
bool assign_ExcitationSystemDynamics_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1);
	SynchronousMachineDynamics* element2 = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SynchronousMachineDynamics != element2)
		{
			element->SynchronousMachineDynamics = element2;
			return assign_SynchronousMachineDynamics_ExcitationSystemDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_UnderexcitationLimiterDynamics_ExcitationSystemDynamics(BaseClass*, BaseClass*);
bool assign_ExcitationSystemDynamics_UnderexcitationLimiterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1);
	UnderexcitationLimiterDynamics* element2 = dynamic_cast<UnderexcitationLimiterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->UnderexcitationLimiterDynamics != element2)
		{
			element->UnderexcitationLimiterDynamics = element2;
			return assign_UnderexcitationLimiterDynamics_ExcitationSystemDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VoltageCompensatorDynamics_ExcitationSystemDynamics(BaseClass*, BaseClass*);
bool assign_ExcitationSystemDynamics_VoltageCompensatorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1);
	VoltageCompensatorDynamics* element2 = dynamic_cast<VoltageCompensatorDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VoltageCompensatorDynamics != element2)
		{
			element->VoltageCompensatorDynamics = element2;
			return assign_VoltageCompensatorDynamics_ExcitationSystemDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}






bool get_ExcitationSystemDynamics_SynchronousMachineDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ExcitationSystemDynamics* element = dynamic_cast<const ExcitationSystemDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->SynchronousMachineDynamics != 0)
		{
			BaseClass_list.push_back(element->SynchronousMachineDynamics);
			return true;
		}
	}
	return false;
}



const char ExcitationSystemDynamics::debugName[] = "ExcitationSystemDynamics";
const char* ExcitationSystemDynamics::debugString() const
{
	return ExcitationSystemDynamics::debugName;
}

void ExcitationSystemDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcitationSystemDynamics", &ExcitationSystemDynamics_factory);
}

void ExcitationSystemDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ExcitationSystemDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ExcitationSystemDynamics.DiscontinuousExcitationControlDynamics", &assign_ExcitationSystemDynamics_DiscontinuousExcitationControlDynamics);
	assign_map.emplace("ExcitationSystemDynamics.OverexcitationLimiterDynamics", &assign_ExcitationSystemDynamics_OverexcitationLimiterDynamics);
	assign_map.emplace("ExcitationSystemDynamics.PFVArControllerType1Dynamics", &assign_ExcitationSystemDynamics_PFVArControllerType1Dynamics);
	assign_map.emplace("ExcitationSystemDynamics.PFVArControllerType2Dynamics", &assign_ExcitationSystemDynamics_PFVArControllerType2Dynamics);
	assign_map.emplace("ExcitationSystemDynamics.PowerSystemStabilizerDynamics", &assign_ExcitationSystemDynamics_PowerSystemStabilizerDynamics);
	assign_map.emplace("ExcitationSystemDynamics.SynchronousMachineDynamics", &assign_ExcitationSystemDynamics_SynchronousMachineDynamics);
	assign_map.emplace("ExcitationSystemDynamics.UnderexcitationLimiterDynamics", &assign_ExcitationSystemDynamics_UnderexcitationLimiterDynamics);
	assign_map.emplace("ExcitationSystemDynamics.VoltageCompensatorDynamics", &assign_ExcitationSystemDynamics_VoltageCompensatorDynamics);
}

void ExcitationSystemDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void ExcitationSystemDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("ExcitationSystemDynamics.SynchronousMachineDynamics", &get_ExcitationSystemDynamics_SynchronousMachineDynamics);
}

void ExcitationSystemDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool ExcitationSystemDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcitationSystemDynamics" &&
		dynamic_cast<ExcitationSystemDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcitationSystemDynamics::declare()
{
	return BaseClassDefiner(ExcitationSystemDynamics::addConstructToMap, ExcitationSystemDynamics::addPrimitiveAssignFnsToMap, ExcitationSystemDynamics::addClassAssignFnsToMap, ExcitationSystemDynamics::debugName);
}

std::map<std::string, AttrDetails> ExcitationSystemDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcitationSystemDynamics_factory()
	{
		return new ExcitationSystemDynamics;
	}
}
