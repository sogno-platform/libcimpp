/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CrossCompoundTurbineGovernorDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SynchronousMachineDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		CrossCompoundTurbineGovernorDynamics(),
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
		{ "CrossCompoundTurbineGovernorDynamics.HighPressureSynchronousMachineDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "CrossCompoundTurbineGovernorDynamics.LowPressureSynchronousMachineDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

CrossCompoundTurbineGovernorDynamics::CrossCompoundTurbineGovernorDynamics() : HighPressureSynchronousMachineDynamics(nullptr), LowPressureSynchronousMachineDynamics(nullptr) {}
CrossCompoundTurbineGovernorDynamics::~CrossCompoundTurbineGovernorDynamics() {}

const std::list<std::string>& CrossCompoundTurbineGovernorDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& CrossCompoundTurbineGovernorDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& CrossCompoundTurbineGovernorDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& CrossCompoundTurbineGovernorDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& CrossCompoundTurbineGovernorDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& CrossCompoundTurbineGovernorDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& CrossCompoundTurbineGovernorDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDyanmics(BaseClass*, BaseClass*);
bool assign_CrossCompoundTurbineGovernorDynamics_HighPressureSynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CrossCompoundTurbineGovernorDynamics* element = dynamic_cast<CrossCompoundTurbineGovernorDynamics*>(BaseClass_ptr1);
	SynchronousMachineDynamics* element2 = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->HighPressureSynchronousMachineDynamics != element2)
		{
			element->HighPressureSynchronousMachineDynamics = element2;
			return assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDyanmics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDynamics(BaseClass*, BaseClass*);
bool assign_CrossCompoundTurbineGovernorDynamics_LowPressureSynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CrossCompoundTurbineGovernorDynamics* element = dynamic_cast<CrossCompoundTurbineGovernorDynamics*>(BaseClass_ptr1);
	SynchronousMachineDynamics* element2 = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LowPressureSynchronousMachineDynamics != element2)
		{
			element->LowPressureSynchronousMachineDynamics = element2;
			return assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_CrossCompoundTurbineGovernorDynamics_HighPressureSynchronousMachineDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const CrossCompoundTurbineGovernorDynamics* element = dynamic_cast<const CrossCompoundTurbineGovernorDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->HighPressureSynchronousMachineDynamics != 0)
		{
			BaseClass_list.push_back(element->HighPressureSynchronousMachineDynamics);
			return true;
		}
	}
	return false;
}

bool get_CrossCompoundTurbineGovernorDynamics_LowPressureSynchronousMachineDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const CrossCompoundTurbineGovernorDynamics* element = dynamic_cast<const CrossCompoundTurbineGovernorDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->LowPressureSynchronousMachineDynamics != 0)
		{
			BaseClass_list.push_back(element->LowPressureSynchronousMachineDynamics);
			return true;
		}
	}
	return false;
}

const char CrossCompoundTurbineGovernorDynamics::debugName[] = "CrossCompoundTurbineGovernorDynamics";
const char* CrossCompoundTurbineGovernorDynamics::debugString() const
{
	return CrossCompoundTurbineGovernorDynamics::debugName;
}

void CrossCompoundTurbineGovernorDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("CrossCompoundTurbineGovernorDynamics", &CrossCompoundTurbineGovernorDynamics_factory);
}

void CrossCompoundTurbineGovernorDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void CrossCompoundTurbineGovernorDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("CrossCompoundTurbineGovernorDynamics.HighPressureSynchronousMachineDynamics", &assign_CrossCompoundTurbineGovernorDynamics_HighPressureSynchronousMachineDynamics);
	assign_map.emplace("CrossCompoundTurbineGovernorDynamics.LowPressureSynchronousMachineDynamics", &assign_CrossCompoundTurbineGovernorDynamics_LowPressureSynchronousMachineDynamics);
}

void CrossCompoundTurbineGovernorDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void CrossCompoundTurbineGovernorDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("CrossCompoundTurbineGovernorDynamics.HighPressureSynchronousMachineDynamics", &get_CrossCompoundTurbineGovernorDynamics_HighPressureSynchronousMachineDynamics);
	get_map.emplace("CrossCompoundTurbineGovernorDynamics.LowPressureSynchronousMachineDynamics", &get_CrossCompoundTurbineGovernorDynamics_LowPressureSynchronousMachineDynamics);
}

void CrossCompoundTurbineGovernorDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool CrossCompoundTurbineGovernorDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "CrossCompoundTurbineGovernorDynamics" &&
		dynamic_cast<CrossCompoundTurbineGovernorDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner CrossCompoundTurbineGovernorDynamics::declare()
{
	return BaseClassDefiner(CrossCompoundTurbineGovernorDynamics::addConstructToMap, CrossCompoundTurbineGovernorDynamics::addPrimitiveAssignFnsToMap, CrossCompoundTurbineGovernorDynamics::addClassAssignFnsToMap, CrossCompoundTurbineGovernorDynamics::debugName);
}

std::map<std::string, AttrDetails> CrossCompoundTurbineGovernorDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* CrossCompoundTurbineGovernorDynamics_factory()
	{
		return new CrossCompoundTurbineGovernorDynamics;
	}
}
