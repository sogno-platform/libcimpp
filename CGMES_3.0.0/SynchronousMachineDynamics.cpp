/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "CrossCompoundTurbineGovernorDynamics.hpp"
#include "ExcitationSystemDynamics.hpp"
#include "GenICompensationForGenJ.hpp"
#include "MechanicalLoadDynamics.hpp"
#include "SynchronousMachine.hpp"
#include "TurbineGovernorDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SynchronousMachineDynamics(),
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
		{ "SynchronousMachineDynamics.CrossCompoundTurbineGovernorDyanmics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineDynamics.CrossCompoundTurbineGovernorDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineDynamics.ExcitationSystemDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineDynamics.GenICompensationForGenJ", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineDynamics.MechanicalLoadDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineDynamics.SynchronousMachine", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineDynamics.TurbineGovernorDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

SynchronousMachineDynamics::SynchronousMachineDynamics() : CrossCompoundTurbineGovernorDyanmics(nullptr), CrossCompoundTurbineGovernorDynamics(nullptr), ExcitationSystemDynamics(nullptr), MechanicalLoadDynamics(nullptr), SynchronousMachine(nullptr) {}
SynchronousMachineDynamics::~SynchronousMachineDynamics() {}

const std::list<std::string>& SynchronousMachineDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SynchronousMachineDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SynchronousMachineDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SynchronousMachineDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SynchronousMachineDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SynchronousMachineDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SynchronousMachineDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_CrossCompoundTurbineGovernorDynamics_HighPressureSynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDyanmics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1);
	CrossCompoundTurbineGovernorDynamics* element2 = dynamic_cast<CrossCompoundTurbineGovernorDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CrossCompoundTurbineGovernorDyanmics != element2)
		{
			element->CrossCompoundTurbineGovernorDyanmics = element2;
			return assign_CrossCompoundTurbineGovernorDynamics_HighPressureSynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_CrossCompoundTurbineGovernorDynamics_LowPressureSynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1);
	CrossCompoundTurbineGovernorDynamics* element2 = dynamic_cast<CrossCompoundTurbineGovernorDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CrossCompoundTurbineGovernorDynamics != element2)
		{
			element->CrossCompoundTurbineGovernorDynamics = element2;
			return assign_CrossCompoundTurbineGovernorDynamics_LowPressureSynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ExcitationSystemDynamics_SynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_SynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_GenICompensationForGenJ_SynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_GenICompensationForGenJ(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1);
	GenICompensationForGenJ* element2 = dynamic_cast<GenICompensationForGenJ*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->GenICompensationForGenJ.begin(), element->GenICompensationForGenJ.end(), element2) == element->GenICompensationForGenJ.end())
		{
			element->GenICompensationForGenJ.push_back(element2);
			return assign_GenICompensationForGenJ_SynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_MechanicalLoadDynamics_SynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1);
	MechanicalLoadDynamics* element2 = dynamic_cast<MechanicalLoadDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->MechanicalLoadDynamics != element2)
		{
			element->MechanicalLoadDynamics = element2;
			return assign_MechanicalLoadDynamics_SynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachine_SynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_SynchronousMachine(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1);
	SynchronousMachine* element2 = dynamic_cast<SynchronousMachine*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SynchronousMachine != element2)
		{
			element->SynchronousMachine = element2;
			return assign_SynchronousMachine_SynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TurbineGovernorDynamics_SynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1);
	TurbineGovernorDynamics* element2 = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TurbineGovernorDynamics.begin(), element->TurbineGovernorDynamics.end(), element2) == element->TurbineGovernorDynamics.end())
		{
			element->TurbineGovernorDynamics.push_back(element2);
			return assign_TurbineGovernorDynamics_SynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}






bool get_SynchronousMachineDynamics_SynchronousMachine(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SynchronousMachineDynamics* element = dynamic_cast<const SynchronousMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->SynchronousMachine != 0)
		{
			BaseClass_list.push_back(element->SynchronousMachine);
			return true;
		}
	}
	return false;
}


const char SynchronousMachineDynamics::debugName[] = "SynchronousMachineDynamics";
const char* SynchronousMachineDynamics::debugString() const
{
	return SynchronousMachineDynamics::debugName;
}

void SynchronousMachineDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SynchronousMachineDynamics", &SynchronousMachineDynamics_factory);
}

void SynchronousMachineDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SynchronousMachineDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("SynchronousMachineDynamics.CrossCompoundTurbineGovernorDyanmics", &assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDyanmics);
	assign_map.emplace("SynchronousMachineDynamics.CrossCompoundTurbineGovernorDynamics", &assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDynamics);
	assign_map.emplace("SynchronousMachineDynamics.ExcitationSystemDynamics", &assign_SynchronousMachineDynamics_ExcitationSystemDynamics);
	assign_map.emplace("SynchronousMachineDynamics.GenICompensationForGenJ", &assign_SynchronousMachineDynamics_GenICompensationForGenJ);
	assign_map.emplace("SynchronousMachineDynamics.MechanicalLoadDynamics", &assign_SynchronousMachineDynamics_MechanicalLoadDynamics);
	assign_map.emplace("SynchronousMachineDynamics.SynchronousMachine", &assign_SynchronousMachineDynamics_SynchronousMachine);
	assign_map.emplace("SynchronousMachineDynamics.TurbineGovernorDynamics", &assign_SynchronousMachineDynamics_TurbineGovernorDynamics);
}

void SynchronousMachineDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RotatingMachineDynamics::addPrimitiveGetFnsToMap(get_map);
}

void SynchronousMachineDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RotatingMachineDynamics::addClassGetFnsToMap(get_map);
	get_map.emplace("SynchronousMachineDynamics.SynchronousMachine", &get_SynchronousMachineDynamics_SynchronousMachine);
}

void SynchronousMachineDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RotatingMachineDynamics::addEnumGetFnsToMap(get_map);
}

bool SynchronousMachineDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SynchronousMachineDynamics" &&
		dynamic_cast<SynchronousMachineDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner SynchronousMachineDynamics::declare()
{
	return BaseClassDefiner(SynchronousMachineDynamics::addConstructToMap, SynchronousMachineDynamics::addPrimitiveAssignFnsToMap, SynchronousMachineDynamics::addClassAssignFnsToMap, SynchronousMachineDynamics::debugName);
}

std::map<std::string, AttrDetails> SynchronousMachineDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = RotatingMachineDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SynchronousMachineDynamics_factory()
	{
		return new SynchronousMachineDynamics;
	}
}
