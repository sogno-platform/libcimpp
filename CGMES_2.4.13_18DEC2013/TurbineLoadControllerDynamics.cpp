/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TurbineLoadControllerDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "TurbineGovernorDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TurbineLoadControllerDynamics(),
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
		{ "TurbineLoadControllerDynamics.TurbineGovernorDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

TurbineLoadControllerDynamics::TurbineLoadControllerDynamics() : TurbineGovernorDynamics(nullptr) {}
TurbineLoadControllerDynamics::~TurbineLoadControllerDynamics() {}

const std::list<std::string>& TurbineLoadControllerDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TurbineLoadControllerDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TurbineLoadControllerDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TurbineLoadControllerDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TurbineLoadControllerDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TurbineLoadControllerDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TurbineLoadControllerDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_TurbineGovernorDynamics_TurbineLoadControllerDynamics(BaseClass*, BaseClass*);
bool assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TurbineLoadControllerDynamics* element = dynamic_cast<TurbineLoadControllerDynamics*>(BaseClass_ptr1);
	TurbineGovernorDynamics* element2 = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TurbineGovernorDynamics != element2)
		{
			element->TurbineGovernorDynamics = element2;
			return assign_TurbineGovernorDynamics_TurbineLoadControllerDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_TurbineLoadControllerDynamics_TurbineGovernorDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const TurbineLoadControllerDynamics* element = dynamic_cast<const TurbineLoadControllerDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->TurbineGovernorDynamics != 0)
		{
			BaseClass_list.push_back(element->TurbineGovernorDynamics);
			return true;
		}
	}
	return false;
}

const char TurbineLoadControllerDynamics::debugName[] = "TurbineLoadControllerDynamics";
const char* TurbineLoadControllerDynamics::debugString() const
{
	return TurbineLoadControllerDynamics::debugName;
}

void TurbineLoadControllerDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TurbineLoadControllerDynamics", &TurbineLoadControllerDynamics_factory);
}

void TurbineLoadControllerDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void TurbineLoadControllerDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("TurbineLoadControllerDynamics.TurbineGovernorDynamics", &assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics);
}

void TurbineLoadControllerDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void TurbineLoadControllerDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("TurbineLoadControllerDynamics.TurbineGovernorDynamics", &get_TurbineLoadControllerDynamics_TurbineGovernorDynamics);
}

void TurbineLoadControllerDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool TurbineLoadControllerDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TurbineLoadControllerDynamics" &&
		dynamic_cast<TurbineLoadControllerDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner TurbineLoadControllerDynamics::declare()
{
	return BaseClassDefiner(TurbineLoadControllerDynamics::addConstructToMap, TurbineLoadControllerDynamics::addPrimitiveAssignFnsToMap, TurbineLoadControllerDynamics::addClassAssignFnsToMap, TurbineLoadControllerDynamics::debugName);
}

std::map<std::string, AttrDetails> TurbineLoadControllerDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TurbineLoadControllerDynamics_factory()
	{
		return new TurbineLoadControllerDynamics;
	}
}
