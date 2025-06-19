/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Measurement.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ACDCTerminal.hpp"
#include "PowerSystemResource.hpp"

using namespace CIMPP;

Measurement::Measurement() : PowerSystemResource(nullptr), Terminal(nullptr) {}
Measurement::~Measurement() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::OP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Measurement.PowerSystemResource", { CGMESProfile::OP, } },
	{ "cim:Measurement.Terminal", { CGMESProfile::OP, } },
	{ "cim:Measurement.measurementType", { CGMESProfile::OP, } },
	{ "cim:Measurement.phases", { CGMESProfile::OP, } },
	{ "cim:Measurement.unitMultiplier", { CGMESProfile::OP, } },
	{ "cim:Measurement.unitSymbol", { CGMESProfile::OP, } },
};

std::list<CGMESProfile>
Measurement::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Measurement::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_PowerSystemResource_Measurements(BaseClass*, BaseClass*);
bool assign_Measurement_PowerSystemResource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Measurement* element = dynamic_cast<Measurement*>(BaseClass_ptr1);
	PowerSystemResource* element2 = dynamic_cast<PowerSystemResource*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PowerSystemResource != element2)
		{
			element->PowerSystemResource = element2;
			return assign_PowerSystemResource_Measurements(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ACDCTerminal_Measurements(BaseClass*, BaseClass*);
bool assign_Measurement_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Measurement* element = dynamic_cast<Measurement*>(BaseClass_ptr1);
	ACDCTerminal* element2 = dynamic_cast<ACDCTerminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Terminal != element2)
		{
			element->Terminal = element2;
			return assign_ACDCTerminal_Measurements(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Measurement_measurementType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Measurement* element = dynamic_cast<Measurement*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->measurementType = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Measurement_phases(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Measurement* element = dynamic_cast<Measurement*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->phases;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Measurement_unitMultiplier(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Measurement* element = dynamic_cast<Measurement*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->unitMultiplier;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Measurement_unitSymbol(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Measurement* element = dynamic_cast<Measurement*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->unitSymbol;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_Measurement_PowerSystemResource(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Measurement* element = dynamic_cast<const Measurement*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->PowerSystemResource != 0)
		{
			BaseClass_list.push_back(element->PowerSystemResource);
			return true;
		}
	}
	return false;
}

bool get_Measurement_Terminal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Measurement* element = dynamic_cast<const Measurement*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Terminal != 0)
		{
			BaseClass_list.push_back(element->Terminal);
			return true;
		}
	}
	return false;
}

bool get_Measurement_measurementType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Measurement* element = dynamic_cast<const Measurement*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->measurementType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Measurement_phases(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Measurement* element = dynamic_cast<const Measurement*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->phases;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Measurement_unitMultiplier(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Measurement* element = dynamic_cast<const Measurement*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->unitMultiplier;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Measurement_unitSymbol(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Measurement* element = dynamic_cast<const Measurement*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->unitSymbol;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Measurement::debugName[] = "Measurement";
const char* Measurement::debugString() const
{
	return Measurement::debugName;
}

void Measurement::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Measurement", &Measurement_factory);
}

void Measurement::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:Measurement.measurementType", &assign_Measurement_measurementType);
	assign_map.emplace("cim:Measurement.phases", &assign_Measurement_phases);
	assign_map.emplace("cim:Measurement.unitMultiplier", &assign_Measurement_unitMultiplier);
	assign_map.emplace("cim:Measurement.unitSymbol", &assign_Measurement_unitSymbol);
}

void Measurement::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:Measurement.PowerSystemResource", &assign_Measurement_PowerSystemResource);
	assign_map.emplace("cim:Measurement.Terminal", &assign_Measurement_Terminal);
}

void Measurement::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:Measurement.measurementType", &get_Measurement_measurementType);
}

void Measurement::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:Measurement.PowerSystemResource", &get_Measurement_PowerSystemResource);
	get_map.emplace("cim:Measurement.Terminal", &get_Measurement_Terminal);
}

void Measurement::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:Measurement.phases", &get_Measurement_phases);
	get_map.emplace("cim:Measurement.unitMultiplier", &get_Measurement_unitMultiplier);
	get_map.emplace("cim:Measurement.unitSymbol", &get_Measurement_unitSymbol);
}

const BaseClassDefiner Measurement::declare()
{
	return BaseClassDefiner(Measurement::addConstructToMap, Measurement::addPrimitiveAssignFnsToMap, Measurement::addClassAssignFnsToMap, Measurement::debugName);
}

namespace CIMPP
{
	BaseClass* Measurement_factory()
	{
		return new Measurement;
	}
}
