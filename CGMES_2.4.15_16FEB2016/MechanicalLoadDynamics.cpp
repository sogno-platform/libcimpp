/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MechanicalLoadDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AsynchronousMachineDynamics.hpp"
#include "SynchronousMachineDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		MechanicalLoadDynamics(),
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
		{ "MechanicalLoadDynamics.AsynchronousMachineDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "MechanicalLoadDynamics.SynchronousMachineDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

MechanicalLoadDynamics::MechanicalLoadDynamics() : AsynchronousMachineDynamics(nullptr), SynchronousMachineDynamics(nullptr) {}
MechanicalLoadDynamics::~MechanicalLoadDynamics() {}

const std::list<std::string>& MechanicalLoadDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& MechanicalLoadDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& MechanicalLoadDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& MechanicalLoadDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& MechanicalLoadDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& MechanicalLoadDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& MechanicalLoadDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_AsynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass*, BaseClass*);
bool assign_MechanicalLoadDynamics_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MechanicalLoadDynamics* element = dynamic_cast<MechanicalLoadDynamics*>(BaseClass_ptr1);
	AsynchronousMachineDynamics* element2 = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AsynchronousMachineDynamics != element2)
		{
			element->AsynchronousMachineDynamics = element2;
			return assign_AsynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass*, BaseClass*);
bool assign_MechanicalLoadDynamics_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MechanicalLoadDynamics* element = dynamic_cast<MechanicalLoadDynamics*>(BaseClass_ptr1);
	SynchronousMachineDynamics* element2 = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SynchronousMachineDynamics != element2)
		{
			element->SynchronousMachineDynamics = element2;
			return assign_SynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_MechanicalLoadDynamics_AsynchronousMachineDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const MechanicalLoadDynamics* element = dynamic_cast<const MechanicalLoadDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->AsynchronousMachineDynamics != 0)
		{
			BaseClass_list.push_back(element->AsynchronousMachineDynamics);
			return true;
		}
	}
	return false;
}

bool get_MechanicalLoadDynamics_SynchronousMachineDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const MechanicalLoadDynamics* element = dynamic_cast<const MechanicalLoadDynamics*>(BaseClass_ptr1);
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

const char MechanicalLoadDynamics::debugName[] = "MechanicalLoadDynamics";
const char* MechanicalLoadDynamics::debugString() const
{
	return MechanicalLoadDynamics::debugName;
}

void MechanicalLoadDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("MechanicalLoadDynamics", &MechanicalLoadDynamics_factory);
}

void MechanicalLoadDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void MechanicalLoadDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("MechanicalLoadDynamics.AsynchronousMachineDynamics", &assign_MechanicalLoadDynamics_AsynchronousMachineDynamics);
	assign_map.emplace("MechanicalLoadDynamics.SynchronousMachineDynamics", &assign_MechanicalLoadDynamics_SynchronousMachineDynamics);
}

void MechanicalLoadDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void MechanicalLoadDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("MechanicalLoadDynamics.AsynchronousMachineDynamics", &get_MechanicalLoadDynamics_AsynchronousMachineDynamics);
	get_map.emplace("MechanicalLoadDynamics.SynchronousMachineDynamics", &get_MechanicalLoadDynamics_SynchronousMachineDynamics);
}

void MechanicalLoadDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool MechanicalLoadDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "MechanicalLoadDynamics" &&
		dynamic_cast<MechanicalLoadDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner MechanicalLoadDynamics::declare()
{
	return BaseClassDefiner(MechanicalLoadDynamics::addConstructToMap, MechanicalLoadDynamics::addPrimitiveAssignFnsToMap, MechanicalLoadDynamics::addClassAssignFnsToMap, MechanicalLoadDynamics::debugName);
}

std::map<std::string, AttrDetails> MechanicalLoadDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* MechanicalLoadDynamics_factory()
	{
		return new MechanicalLoadDynamics;
	}
}
