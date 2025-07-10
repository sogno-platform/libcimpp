/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EnergySchedulingType.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "EnergySource.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		EnergySchedulingType(),
		"http://entsoe.eu/CIM/SchemaExtension/3/1#",
		{
			CGMESProfile::EQ_BD,
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
		{ "EnergySchedulingType.EnergySource", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

EnergySchedulingType::EnergySchedulingType() {}
EnergySchedulingType::~EnergySchedulingType() {}

const std::list<std::string>& EnergySchedulingType::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& EnergySchedulingType::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& EnergySchedulingType::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& EnergySchedulingType::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& EnergySchedulingType::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& EnergySchedulingType::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& EnergySchedulingType::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_EnergySource_EnergySchedulingType(BaseClass*, BaseClass*);
bool assign_EnergySchedulingType_EnergySource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EnergySchedulingType* element = dynamic_cast<EnergySchedulingType*>(BaseClass_ptr1);
	EnergySource* element2 = dynamic_cast<EnergySource*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->EnergySource.begin(), element->EnergySource.end(), element2) == element->EnergySource.end())
		{
			element->EnergySource.push_back(element2);
			return assign_EnergySource_EnergySchedulingType(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char EnergySchedulingType::debugName[] = "EnergySchedulingType";
const char* EnergySchedulingType::debugString() const
{
	return EnergySchedulingType::debugName;
}

void EnergySchedulingType::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("EnergySchedulingType", &EnergySchedulingType_factory);
}

void EnergySchedulingType::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void EnergySchedulingType::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("EnergySchedulingType.EnergySource", &assign_EnergySchedulingType_EnergySource);
}

void EnergySchedulingType::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void EnergySchedulingType::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void EnergySchedulingType::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool EnergySchedulingType::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "EnergySchedulingType" &&
		dynamic_cast<EnergySchedulingType*>(otherObject) != nullptr;
}

const BaseClassDefiner EnergySchedulingType::declare()
{
	return BaseClassDefiner(EnergySchedulingType::addConstructToMap, EnergySchedulingType::addPrimitiveAssignFnsToMap, EnergySchedulingType::addClassAssignFnsToMap, EnergySchedulingType::debugName);
}

std::map<std::string, AttrDetails> EnergySchedulingType::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* EnergySchedulingType_factory()
	{
		return new EnergySchedulingType;
	}
}
