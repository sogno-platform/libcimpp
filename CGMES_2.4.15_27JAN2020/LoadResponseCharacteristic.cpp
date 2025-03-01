/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadResponseCharacteristic.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "EnergyConsumer.hpp"

using namespace CIMPP;

LoadResponseCharacteristic::LoadResponseCharacteristic() {}
LoadResponseCharacteristic::~LoadResponseCharacteristic() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:LoadResponseCharacteristic.EnergyConsumer", { CGMESProfile::EQ, } },
	{ "cim:LoadResponseCharacteristic.exponentModel", { CGMESProfile::EQ, } },
	{ "cim:LoadResponseCharacteristic.pConstantCurrent", { CGMESProfile::EQ, } },
	{ "cim:LoadResponseCharacteristic.pConstantImpedance", { CGMESProfile::EQ, } },
	{ "cim:LoadResponseCharacteristic.pConstantPower", { CGMESProfile::EQ, } },
	{ "cim:LoadResponseCharacteristic.pFrequencyExponent", { CGMESProfile::EQ, } },
	{ "cim:LoadResponseCharacteristic.pVoltageExponent", { CGMESProfile::EQ, } },
	{ "cim:LoadResponseCharacteristic.qConstantCurrent", { CGMESProfile::EQ, } },
	{ "cim:LoadResponseCharacteristic.qConstantImpedance", { CGMESProfile::EQ, } },
	{ "cim:LoadResponseCharacteristic.qConstantPower", { CGMESProfile::EQ, } },
	{ "cim:LoadResponseCharacteristic.qFrequencyExponent", { CGMESProfile::EQ, } },
	{ "cim:LoadResponseCharacteristic.qVoltageExponent", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
LoadResponseCharacteristic::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
LoadResponseCharacteristic::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_EnergyConsumer_LoadResponse(BaseClass*, BaseClass*);
bool assign_LoadResponseCharacteristic_EnergyConsumer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	EnergyConsumer* element2 = dynamic_cast<EnergyConsumer*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->EnergyConsumer.begin(), element->EnergyConsumer.end(), element2) == element->EnergyConsumer.end())
		{
			element->EnergyConsumer.push_back(element2);
			return assign_EnergyConsumer_LoadResponse(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_LoadResponseCharacteristic_exponentModel(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->exponentModel;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pConstantCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pConstantCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pConstantImpedance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pConstantImpedance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pConstantPower(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pConstantPower;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pFrequencyExponent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pFrequencyExponent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pVoltageExponent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pVoltageExponent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qConstantCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qConstantCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qConstantImpedance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qConstantImpedance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qConstantPower(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qConstantPower;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qFrequencyExponent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qFrequencyExponent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qVoltageExponent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qVoltageExponent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_LoadResponseCharacteristic_exponentModel(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->exponentModel;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_pConstantCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pConstantCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_pConstantImpedance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pConstantImpedance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_pConstantPower(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pConstantPower;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_pFrequencyExponent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pFrequencyExponent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_pVoltageExponent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pVoltageExponent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_qConstantCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qConstantCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_qConstantImpedance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qConstantImpedance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_qConstantPower(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qConstantPower;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_qFrequencyExponent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qFrequencyExponent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_qVoltageExponent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qVoltageExponent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char LoadResponseCharacteristic::debugName[] = "LoadResponseCharacteristic";
const char* LoadResponseCharacteristic::debugString() const
{
	return LoadResponseCharacteristic::debugName;
}

void LoadResponseCharacteristic::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:LoadResponseCharacteristic", &LoadResponseCharacteristic_factory);
}

void LoadResponseCharacteristic::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:LoadResponseCharacteristic.exponentModel", &assign_LoadResponseCharacteristic_exponentModel);
	assign_map.emplace("cim:LoadResponseCharacteristic.pConstantCurrent", &assign_LoadResponseCharacteristic_pConstantCurrent);
	assign_map.emplace("cim:LoadResponseCharacteristic.pConstantImpedance", &assign_LoadResponseCharacteristic_pConstantImpedance);
	assign_map.emplace("cim:LoadResponseCharacteristic.pConstantPower", &assign_LoadResponseCharacteristic_pConstantPower);
	assign_map.emplace("cim:LoadResponseCharacteristic.pFrequencyExponent", &assign_LoadResponseCharacteristic_pFrequencyExponent);
	assign_map.emplace("cim:LoadResponseCharacteristic.pVoltageExponent", &assign_LoadResponseCharacteristic_pVoltageExponent);
	assign_map.emplace("cim:LoadResponseCharacteristic.qConstantCurrent", &assign_LoadResponseCharacteristic_qConstantCurrent);
	assign_map.emplace("cim:LoadResponseCharacteristic.qConstantImpedance", &assign_LoadResponseCharacteristic_qConstantImpedance);
	assign_map.emplace("cim:LoadResponseCharacteristic.qConstantPower", &assign_LoadResponseCharacteristic_qConstantPower);
	assign_map.emplace("cim:LoadResponseCharacteristic.qFrequencyExponent", &assign_LoadResponseCharacteristic_qFrequencyExponent);
	assign_map.emplace("cim:LoadResponseCharacteristic.qVoltageExponent", &assign_LoadResponseCharacteristic_qVoltageExponent);
}

void LoadResponseCharacteristic::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:LoadResponseCharacteristic.EnergyConsumer", &assign_LoadResponseCharacteristic_EnergyConsumer);
}

void LoadResponseCharacteristic::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:LoadResponseCharacteristic.exponentModel", &get_LoadResponseCharacteristic_exponentModel);
	get_map.emplace("cim:LoadResponseCharacteristic.pConstantCurrent", &get_LoadResponseCharacteristic_pConstantCurrent);
	get_map.emplace("cim:LoadResponseCharacteristic.pConstantImpedance", &get_LoadResponseCharacteristic_pConstantImpedance);
	get_map.emplace("cim:LoadResponseCharacteristic.pConstantPower", &get_LoadResponseCharacteristic_pConstantPower);
	get_map.emplace("cim:LoadResponseCharacteristic.pFrequencyExponent", &get_LoadResponseCharacteristic_pFrequencyExponent);
	get_map.emplace("cim:LoadResponseCharacteristic.pVoltageExponent", &get_LoadResponseCharacteristic_pVoltageExponent);
	get_map.emplace("cim:LoadResponseCharacteristic.qConstantCurrent", &get_LoadResponseCharacteristic_qConstantCurrent);
	get_map.emplace("cim:LoadResponseCharacteristic.qConstantImpedance", &get_LoadResponseCharacteristic_qConstantImpedance);
	get_map.emplace("cim:LoadResponseCharacteristic.qConstantPower", &get_LoadResponseCharacteristic_qConstantPower);
	get_map.emplace("cim:LoadResponseCharacteristic.qFrequencyExponent", &get_LoadResponseCharacteristic_qFrequencyExponent);
	get_map.emplace("cim:LoadResponseCharacteristic.qVoltageExponent", &get_LoadResponseCharacteristic_qVoltageExponent);
}

void LoadResponseCharacteristic::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void LoadResponseCharacteristic::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner LoadResponseCharacteristic::declare()
{
	return BaseClassDefiner(LoadResponseCharacteristic::addConstructToMap, LoadResponseCharacteristic::addPrimitiveAssignFnsToMap, LoadResponseCharacteristic::addClassAssignFnsToMap, LoadResponseCharacteristic::debugName);
}

namespace CIMPP
{
	BaseClass* LoadResponseCharacteristic_factory()
	{
		return new LoadResponseCharacteristic;
	}
}
