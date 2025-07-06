/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Sensor.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Sensor(),
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
	};
    return ClassAttrDetailsMap;
}

Sensor::Sensor() {}
Sensor::~Sensor() {}

const std::list<std::string>& Sensor::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Sensor::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Sensor::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Sensor::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Sensor::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Sensor::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Sensor::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char Sensor::debugName[] = "Sensor";
const char* Sensor::debugString() const
{
	return Sensor::debugName;
}

void Sensor::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Sensor", &Sensor_factory);
}

void Sensor::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Sensor::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Sensor::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addPrimitiveGetFnsToMap(get_map);
}

void Sensor::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AuxiliaryEquipment::addClassGetFnsToMap(get_map);
}

void Sensor::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addEnumGetFnsToMap(get_map);
}

bool Sensor::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Sensor" &&
		dynamic_cast<Sensor*>(otherObject) != nullptr;
}

const BaseClassDefiner Sensor::declare()
{
	return BaseClassDefiner(Sensor::addConstructToMap, Sensor::addPrimitiveAssignFnsToMap, Sensor::addClassAssignFnsToMap, Sensor::debugName);
}

std::map<std::string, AttrDetails> Sensor::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = AuxiliaryEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Sensor_factory()
	{
		return new Sensor;
	}
}
