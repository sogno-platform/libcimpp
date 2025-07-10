/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BatteryUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		BatteryUnit(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
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
		{ "BatteryUnit.batteryState", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "BatteryUnit.ratedE", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "BatteryUnit.storedE", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
	};
    return ClassAttrDetailsMap;
}

BatteryUnit::BatteryUnit() {}
BatteryUnit::~BatteryUnit() {}

const std::list<std::string>& BatteryUnit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& BatteryUnit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& BatteryUnit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& BatteryUnit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& BatteryUnit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& BatteryUnit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& BatteryUnit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_BatteryUnit_batteryState(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BatteryUnit* element = dynamic_cast<BatteryUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->batteryState;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_BatteryUnit_ratedE(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BatteryUnit* element = dynamic_cast<BatteryUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedE;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_BatteryUnit_storedE(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BatteryUnit* element = dynamic_cast<BatteryUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->storedE;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_BatteryUnit_batteryState(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BatteryUnit* element = dynamic_cast<const BatteryUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->batteryState;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_BatteryUnit_ratedE(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BatteryUnit* element = dynamic_cast<const BatteryUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedE;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_BatteryUnit_storedE(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BatteryUnit* element = dynamic_cast<const BatteryUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->storedE;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char BatteryUnit::debugName[] = "BatteryUnit";
const char* BatteryUnit::debugString() const
{
	return BatteryUnit::debugName;
}

void BatteryUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("BatteryUnit", &BatteryUnit_factory);
}

void BatteryUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("BatteryUnit.batteryState", &assign_BatteryUnit_batteryState);
	assign_map.emplace("BatteryUnit.ratedE", &assign_BatteryUnit_ratedE);
	assign_map.emplace("BatteryUnit.storedE", &assign_BatteryUnit_storedE);
}

void BatteryUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void BatteryUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerElectronicsUnit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("BatteryUnit.ratedE", &get_BatteryUnit_ratedE);
	get_map.emplace("BatteryUnit.storedE", &get_BatteryUnit_storedE);
}

void BatteryUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerElectronicsUnit::addClassGetFnsToMap(get_map);
}

void BatteryUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerElectronicsUnit::addEnumGetFnsToMap(get_map);
	get_map.emplace("BatteryUnit.batteryState", &get_BatteryUnit_batteryState);
}

bool BatteryUnit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "BatteryUnit" &&
		dynamic_cast<BatteryUnit*>(otherObject) != nullptr;
}

const BaseClassDefiner BatteryUnit::declare()
{
	return BaseClassDefiner(BatteryUnit::addConstructToMap, BatteryUnit::addPrimitiveAssignFnsToMap, BatteryUnit::addClassAssignFnsToMap, BatteryUnit::debugName);
}

std::map<std::string, AttrDetails> BatteryUnit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerElectronicsUnit::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* BatteryUnit_factory()
	{
		return new BatteryUnit;
	}
}
