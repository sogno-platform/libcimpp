/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "EnergyConsumer.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		LoadDynamics(),
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
		{ "LoadDynamics.EnergyConsumer", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

LoadDynamics::LoadDynamics() {}
LoadDynamics::~LoadDynamics() {}

const std::list<std::string>& LoadDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& LoadDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& LoadDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& LoadDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& LoadDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& LoadDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& LoadDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_EnergyConsumer_LoadDynamics(BaseClass*, BaseClass*);
bool assign_LoadDynamics_EnergyConsumer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadDynamics* element = dynamic_cast<LoadDynamics*>(BaseClass_ptr1);
	EnergyConsumer* element2 = dynamic_cast<EnergyConsumer*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->EnergyConsumer.begin(), element->EnergyConsumer.end(), element2) == element->EnergyConsumer.end())
		{
			element->EnergyConsumer.push_back(element2);
			return assign_EnergyConsumer_LoadDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char LoadDynamics::debugName[] = "LoadDynamics";
const char* LoadDynamics::debugString() const
{
	return LoadDynamics::debugName;
}

void LoadDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("LoadDynamics", &LoadDynamics_factory);
}

void LoadDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void LoadDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("LoadDynamics.EnergyConsumer", &assign_LoadDynamics_EnergyConsumer);
}

void LoadDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void LoadDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void LoadDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool LoadDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "LoadDynamics" &&
		dynamic_cast<LoadDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner LoadDynamics::declare()
{
	return BaseClassDefiner(LoadDynamics::addConstructToMap, LoadDynamics::addPrimitiveAssignFnsToMap, LoadDynamics::addClassAssignFnsToMap, LoadDynamics::debugName);
}

std::map<std::string, AttrDetails> LoadDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* LoadDynamics_factory()
	{
		return new LoadDynamics;
	}
}
