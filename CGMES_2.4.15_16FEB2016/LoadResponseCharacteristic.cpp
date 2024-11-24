/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadResponseCharacteristic.hpp"

#include <algorithm>
#include <sstream>

#include "EnergyConsumer.hpp"
#include "Boolean.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

LoadResponseCharacteristic::LoadResponseCharacteristic() {};
LoadResponseCharacteristic::~LoadResponseCharacteristic() {};



bool assign_LoadResponseCharacteristic_exponentModel(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1))
	{
		buffer >> element->exponentModel;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pConstantCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1))
	{
		buffer >> element->pConstantCurrent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pConstantImpedance(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1))
	{
		buffer >> element->pConstantImpedance;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pConstantPower(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1))
	{
		buffer >> element->pConstantPower;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pFrequencyExponent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1))
	{
		buffer >> element->pFrequencyExponent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pVoltageExponent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1))
	{
		buffer >> element->pVoltageExponent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qConstantCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1))
	{
		buffer >> element->qConstantCurrent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qConstantImpedance(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1))
	{
		buffer >> element->qConstantImpedance;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qConstantPower(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1))
	{
		buffer >> element->qConstantPower;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qFrequencyExponent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1))
	{
		buffer >> element->qFrequencyExponent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qVoltageExponent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1))
	{
		buffer >> element->qVoltageExponent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
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












const char LoadResponseCharacteristic::debugName[] = "LoadResponseCharacteristic";
const char* LoadResponseCharacteristic::debugString() const
{
	return LoadResponseCharacteristic::debugName;
}

void LoadResponseCharacteristic::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:LoadResponseCharacteristic"), &LoadResponseCharacteristic_factory));
}

void LoadResponseCharacteristic::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:LoadResponseCharacteristic.exponentModel"), &assign_LoadResponseCharacteristic_exponentModel));
	assign_map.insert(std::make_pair(std::string("cim:LoadResponseCharacteristic.pConstantCurrent"), &assign_LoadResponseCharacteristic_pConstantCurrent));
	assign_map.insert(std::make_pair(std::string("cim:LoadResponseCharacteristic.pConstantImpedance"), &assign_LoadResponseCharacteristic_pConstantImpedance));
	assign_map.insert(std::make_pair(std::string("cim:LoadResponseCharacteristic.pConstantPower"), &assign_LoadResponseCharacteristic_pConstantPower));
	assign_map.insert(std::make_pair(std::string("cim:LoadResponseCharacteristic.pFrequencyExponent"), &assign_LoadResponseCharacteristic_pFrequencyExponent));
	assign_map.insert(std::make_pair(std::string("cim:LoadResponseCharacteristic.pVoltageExponent"), &assign_LoadResponseCharacteristic_pVoltageExponent));
	assign_map.insert(std::make_pair(std::string("cim:LoadResponseCharacteristic.qConstantCurrent"), &assign_LoadResponseCharacteristic_qConstantCurrent));
	assign_map.insert(std::make_pair(std::string("cim:LoadResponseCharacteristic.qConstantImpedance"), &assign_LoadResponseCharacteristic_qConstantImpedance));
	assign_map.insert(std::make_pair(std::string("cim:LoadResponseCharacteristic.qConstantPower"), &assign_LoadResponseCharacteristic_qConstantPower));
	assign_map.insert(std::make_pair(std::string("cim:LoadResponseCharacteristic.qFrequencyExponent"), &assign_LoadResponseCharacteristic_qFrequencyExponent));
	assign_map.insert(std::make_pair(std::string("cim:LoadResponseCharacteristic.qVoltageExponent"), &assign_LoadResponseCharacteristic_qVoltageExponent));
}

void LoadResponseCharacteristic::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:LoadResponseCharacteristic.EnergyConsumer"), &assign_LoadResponseCharacteristic_EnergyConsumer));
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
