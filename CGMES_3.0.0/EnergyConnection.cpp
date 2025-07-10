/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EnergyConnection.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		EnergyConnection(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DY,
			CGMESProfile::EQ,
			CGMESProfile::SC,
			CGMESProfile::SSH,
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

EnergyConnection::EnergyConnection() {}
EnergyConnection::~EnergyConnection() {}

const std::list<std::string>& EnergyConnection::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& EnergyConnection::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& EnergyConnection::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& EnergyConnection::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& EnergyConnection::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& EnergyConnection::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& EnergyConnection::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char EnergyConnection::debugName[] = "EnergyConnection";
const char* EnergyConnection::debugString() const
{
	return EnergyConnection::debugName;
}

void EnergyConnection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("EnergyConnection", &EnergyConnection_factory);
}

void EnergyConnection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void EnergyConnection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void EnergyConnection::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
}

void EnergyConnection::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
}

void EnergyConnection::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool EnergyConnection::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "EnergyConnection" &&
		dynamic_cast<EnergyConnection*>(otherObject) != nullptr;
}

const BaseClassDefiner EnergyConnection::declare()
{
	return BaseClassDefiner(EnergyConnection::addConstructToMap, EnergyConnection::addPrimitiveAssignFnsToMap, EnergyConnection::addClassAssignFnsToMap, EnergyConnection::debugName);
}

std::map<std::string, AttrDetails> EnergyConnection::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* EnergyConnection_factory()
	{
		return new EnergyConnection;
	}
}
