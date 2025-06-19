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

PowerElectronicsUnit::PowerElectronicsUnit() : PowerElectronicsConnection(nullptr) {}
PowerElectronicsUnit::~PowerElectronicsUnit() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PowerElectronicsUnit.PowerElectronicsConnection", { CGMESProfile::EQ, } },
	{ "cim:PowerElectronicsUnit.maxP", { CGMESProfile::EQ, } },
	{ "cim:PowerElectronicsUnit.minP", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
PowerElectronicsUnit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PowerElectronicsUnit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Equipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:PowerElectronicsUnit", &PowerElectronicsUnit_factory);
}

void PowerElectronicsUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:PowerElectronicsUnit.maxP", &assign_PowerElectronicsUnit_maxP);
	assign_map.emplace("cim:PowerElectronicsUnit.minP", &assign_PowerElectronicsUnit_minP);
}

void PowerElectronicsUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:PowerElectronicsUnit.PowerElectronicsConnection", &assign_PowerElectronicsUnit_PowerElectronicsConnection);
}

void PowerElectronicsUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PowerElectronicsUnit.maxP", &get_PowerElectronicsUnit_maxP);
	get_map.emplace("cim:PowerElectronicsUnit.minP", &get_PowerElectronicsUnit_minP);
}

void PowerElectronicsUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Equipment::addClassGetFnsToMap(get_map);
}

void PowerElectronicsUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PowerElectronicsUnit::declare()
{
	return BaseClassDefiner(PowerElectronicsUnit::addConstructToMap, PowerElectronicsUnit::addPrimitiveAssignFnsToMap, PowerElectronicsUnit::addClassAssignFnsToMap, PowerElectronicsUnit::debugName);
}

namespace CIMPP
{
	BaseClass* PowerElectronicsUnit_factory()
	{
		return new PowerElectronicsUnit;
	}
}
