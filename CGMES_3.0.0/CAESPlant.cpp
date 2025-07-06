/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CAESPlant.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ThermalGeneratingUnit.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		CAESPlant(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "CAESPlant.ThermalGeneratingUnit", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

CAESPlant::CAESPlant() : ThermalGeneratingUnit(nullptr) {}
CAESPlant::~CAESPlant() {}

const std::list<std::string>& CAESPlant::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& CAESPlant::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& CAESPlant::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& CAESPlant::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& CAESPlant::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& CAESPlant::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& CAESPlant::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ThermalGeneratingUnit_CAESPlant(BaseClass*, BaseClass*);
bool assign_CAESPlant_ThermalGeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CAESPlant* element = dynamic_cast<CAESPlant*>(BaseClass_ptr1);
	ThermalGeneratingUnit* element2 = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ThermalGeneratingUnit != element2)
		{
			element->ThermalGeneratingUnit = element2;
			return assign_ThermalGeneratingUnit_CAESPlant(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char CAESPlant::debugName[] = "CAESPlant";
const char* CAESPlant::debugString() const
{
	return CAESPlant::debugName;
}

void CAESPlant::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("CAESPlant", &CAESPlant_factory);
}

void CAESPlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void CAESPlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("CAESPlant.ThermalGeneratingUnit", &assign_CAESPlant_ThermalGeneratingUnit);
}

void CAESPlant::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
}

void CAESPlant::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
}

void CAESPlant::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
}

bool CAESPlant::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "CAESPlant" &&
		dynamic_cast<CAESPlant*>(otherObject) != nullptr;
}

const BaseClassDefiner CAESPlant::declare()
{
	return BaseClassDefiner(CAESPlant::addConstructToMap, CAESPlant::addPrimitiveAssignFnsToMap, CAESPlant::addClassAssignFnsToMap, CAESPlant::debugName);
}

std::map<std::string, AttrDetails> CAESPlant::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemResource::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* CAESPlant_factory()
	{
		return new CAESPlant;
	}
}
