/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerTransformer.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PowerTransformerEnd.hpp"
#include "CurrentFlow.hpp"
#include "Voltage.hpp"
#include "AngleDegrees.hpp"
#include "Voltage.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

PowerTransformer::PowerTransformer() {};
PowerTransformer::~PowerTransformer() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PowerTransformer.PowerTransformerEnd", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformer.beforeShCircuitHighestOperatingCurrent", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformer.beforeShCircuitHighestOperatingVoltage", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformer.beforeShortCircuitAnglePf", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformer.highSideMinOperatingU", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformer.isPartOfGeneratorUnit", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformer.operationalValuesConsidered", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
PowerTransformer::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PowerTransformer::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ConductingEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_PowerTransformer_beforeShCircuitHighestOperatingCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1))
	{
		buffer >> element->beforeShCircuitHighestOperatingCurrent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformer_beforeShCircuitHighestOperatingVoltage(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1))
	{
		buffer >> element->beforeShCircuitHighestOperatingVoltage;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformer_beforeShortCircuitAnglePf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1))
	{
		buffer >> element->beforeShortCircuitAnglePf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformer_highSideMinOperatingU(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1))
	{
		buffer >> element->highSideMinOperatingU;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformer_isPartOfGeneratorUnit(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1))
	{
		buffer >> element->isPartOfGeneratorUnit;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformer_operationalValuesConsidered(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1))
	{
		buffer >> element->operationalValuesConsidered;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_PowerTransformerEnd_PowerTransformer(BaseClass*, BaseClass*);
bool assign_PowerTransformer_PowerTransformerEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1);
	PowerTransformerEnd* element2 = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->PowerTransformerEnd.begin(), element->PowerTransformerEnd.end(), element2) == element->PowerTransformerEnd.end())
		{
			element->PowerTransformerEnd.push_back(element2);
			return assign_PowerTransformerEnd_PowerTransformer(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_PowerTransformer_beforeShCircuitHighestOperatingCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformer* element = dynamic_cast<const PowerTransformer*>(BaseClass_ptr1))
	{
		buffer << element->beforeShCircuitHighestOperatingCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformer_beforeShCircuitHighestOperatingVoltage(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformer* element = dynamic_cast<const PowerTransformer*>(BaseClass_ptr1))
	{
		buffer << element->beforeShCircuitHighestOperatingVoltage;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformer_beforeShortCircuitAnglePf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformer* element = dynamic_cast<const PowerTransformer*>(BaseClass_ptr1))
	{
		buffer << element->beforeShortCircuitAnglePf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformer_highSideMinOperatingU(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformer* element = dynamic_cast<const PowerTransformer*>(BaseClass_ptr1))
	{
		buffer << element->highSideMinOperatingU;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformer_isPartOfGeneratorUnit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformer* element = dynamic_cast<const PowerTransformer*>(BaseClass_ptr1))
	{
		buffer << element->isPartOfGeneratorUnit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformer_operationalValuesConsidered(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformer* element = dynamic_cast<const PowerTransformer*>(BaseClass_ptr1))
	{
		buffer << element->operationalValuesConsidered;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char PowerTransformer::debugName[] = "PowerTransformer";
const char* PowerTransformer::debugString() const
{
	return PowerTransformer::debugName;
}

void PowerTransformer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PowerTransformer"), &PowerTransformer_factory));
}

void PowerTransformer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformer.beforeShCircuitHighestOperatingCurrent"), &assign_PowerTransformer_beforeShCircuitHighestOperatingCurrent));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformer.beforeShCircuitHighestOperatingVoltage"), &assign_PowerTransformer_beforeShCircuitHighestOperatingVoltage));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformer.beforeShortCircuitAnglePf"), &assign_PowerTransformer_beforeShortCircuitAnglePf));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformer.highSideMinOperatingU"), &assign_PowerTransformer_highSideMinOperatingU));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformer.isPartOfGeneratorUnit"), &assign_PowerTransformer_isPartOfGeneratorUnit));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformer.operationalValuesConsidered"), &assign_PowerTransformer_operationalValuesConsidered));
}

void PowerTransformer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformer.PowerTransformerEnd"), &assign_PowerTransformer_PowerTransformerEnd));
}

void PowerTransformer::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PowerTransformer.beforeShCircuitHighestOperatingCurrent", &get_PowerTransformer_beforeShCircuitHighestOperatingCurrent);
	get_map.emplace("cim:PowerTransformer.beforeShCircuitHighestOperatingVoltage", &get_PowerTransformer_beforeShCircuitHighestOperatingVoltage);
	get_map.emplace("cim:PowerTransformer.beforeShortCircuitAnglePf", &get_PowerTransformer_beforeShortCircuitAnglePf);
	get_map.emplace("cim:PowerTransformer.highSideMinOperatingU", &get_PowerTransformer_highSideMinOperatingU);
	get_map.emplace("cim:PowerTransformer.isPartOfGeneratorUnit", &get_PowerTransformer_isPartOfGeneratorUnit);
	get_map.emplace("cim:PowerTransformer.operationalValuesConsidered", &get_PowerTransformer_operationalValuesConsidered);
}

void PowerTransformer::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
}

void PowerTransformer::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PowerTransformer::declare()
{
	return BaseClassDefiner(PowerTransformer::addConstructToMap, PowerTransformer::addPrimitiveAssignFnsToMap, PowerTransformer::addClassAssignFnsToMap, PowerTransformer::debugName);
}

namespace CIMPP
{
	BaseClass* PowerTransformer_factory()
	{
		return new PowerTransformer;
	}
}
