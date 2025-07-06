/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerElectronicsUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PowerElectronicsConnection.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PowerElectronicsUnit(),
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
		{ "PowerElectronicsUnit.PowerElectronicsConnection", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "PowerElectronicsUnit.maxP", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "PowerElectronicsUnit.minP", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

PowerElectronicsUnit::PowerElectronicsUnit() : PowerElectronicsConnection(nullptr) {}
PowerElectronicsUnit::~PowerElectronicsUnit() {}

const std::list<std::string>& PowerElectronicsUnit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PowerElectronicsUnit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PowerElectronicsUnit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PowerElectronicsUnit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PowerElectronicsUnit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PowerElectronicsUnit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PowerElectronicsUnit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PowerElectronicsConnection_PowerElectronicsUnit(BaseClass*, BaseClass*);
bool assign_PowerElectronicsUnit_PowerElectronicsConnection(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerElectronicsUnit* element = dynamic_cast<PowerElectronicsUnit*>(BaseClass_ptr1);
	PowerElectronicsConnection* element2 = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PowerElectronicsConnection != element2)
		{
			element->PowerElectronicsConnection = element2;
			return assign_PowerElectronicsConnection_PowerElectronicsUnit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PowerElectronicsUnit_maxP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerElectronicsUnit* element = dynamic_cast<PowerElectronicsUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PowerElectronicsUnit_minP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerElectronicsUnit* element = dynamic_cast<PowerElectronicsUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_PowerElectronicsUnit_maxP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerElectronicsUnit* element = dynamic_cast<const PowerElectronicsUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerElectronicsUnit_minP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerElectronicsUnit* element = dynamic_cast<const PowerElectronicsUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PowerElectronicsUnit::debugName[] = "PowerElectronicsUnit";
const char* PowerElectronicsUnit::debugString() const
{
	return PowerElectronicsUnit::debugName;
}

void PowerElectronicsUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PowerElectronicsUnit", &PowerElectronicsUnit_factory);
}

void PowerElectronicsUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PowerElectronicsUnit.maxP", &assign_PowerElectronicsUnit_maxP);
	assign_map.emplace("PowerElectronicsUnit.minP", &assign_PowerElectronicsUnit_minP);
}

void PowerElectronicsUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PowerElectronicsUnit.PowerElectronicsConnection", &assign_PowerElectronicsUnit_PowerElectronicsConnection);
}

void PowerElectronicsUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PowerElectronicsUnit.maxP", &get_PowerElectronicsUnit_maxP);
	get_map.emplace("PowerElectronicsUnit.minP", &get_PowerElectronicsUnit_minP);
}

void PowerElectronicsUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Equipment::addClassGetFnsToMap(get_map);
}

void PowerElectronicsUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addEnumGetFnsToMap(get_map);
}

bool PowerElectronicsUnit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PowerElectronicsUnit" &&
		dynamic_cast<PowerElectronicsUnit*>(otherObject) != nullptr;
}

const BaseClassDefiner PowerElectronicsUnit::declare()
{
	return BaseClassDefiner(PowerElectronicsUnit::addConstructToMap, PowerElectronicsUnit::addPrimitiveAssignFnsToMap, PowerElectronicsUnit::addClassAssignFnsToMap, PowerElectronicsUnit::debugName);
}

std::map<std::string, AttrDetails> PowerElectronicsUnit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Equipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PowerElectronicsUnit_factory()
	{
		return new PowerElectronicsUnit;
	}
}
