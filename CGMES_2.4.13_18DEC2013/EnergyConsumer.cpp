/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EnergyConsumer.hpp"

#include <algorithm>
#include <sstream>

#include "LoadDynamics.hpp"
#include "LoadResponseCharacteristic.hpp"
#include "ActivePower.hpp"
#include "ActivePower.hpp"
#include "PerCent.hpp"
#include "ReactivePower.hpp"
#include "ReactivePower.hpp"
#include "PerCent.hpp"

using namespace CIMPP;

EnergyConsumer::EnergyConsumer() : LoadDynamics(nullptr), LoadResponse(nullptr) {};
EnergyConsumer::~EnergyConsumer() {};




bool assign_EnergyConsumer_p(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1))
	{
		buffer >> element->p;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergyConsumer_pfixed(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1))
	{
		buffer >> element->pfixed;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergyConsumer_pfixedPct(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1))
	{
		buffer >> element->pfixedPct;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergyConsumer_q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1))
	{
		buffer >> element->q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergyConsumer_qfixed(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1))
	{
		buffer >> element->qfixed;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergyConsumer_qfixedPct(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1))
	{
		buffer >> element->qfixedPct;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_LoadDynamics_EnergyConsumer(BaseClass*, BaseClass*);
bool assign_EnergyConsumer_LoadDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1);
	LoadDynamics* element2 = dynamic_cast<LoadDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadDynamics != element2)
		{
			element->LoadDynamics = element2;
			return assign_LoadDynamics_EnergyConsumer(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_LoadResponseCharacteristic_EnergyConsumer(BaseClass*, BaseClass*);
bool assign_EnergyConsumer_LoadResponse(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1);
	LoadResponseCharacteristic* element2 = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadResponse != element2)
		{
			element->LoadResponse = element2;
			return assign_LoadResponseCharacteristic_EnergyConsumer(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}







const char EnergyConsumer::debugName[] = "EnergyConsumer";
const char* EnergyConsumer::debugString() const
{
	return EnergyConsumer::debugName;
}

void EnergyConsumer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:EnergyConsumer"), &EnergyConsumer_factory));
}

void EnergyConsumer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.p"), &assign_EnergyConsumer_p));
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.pfixed"), &assign_EnergyConsumer_pfixed));
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.pfixedPct"), &assign_EnergyConsumer_pfixedPct));
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.q"), &assign_EnergyConsumer_q));
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.qfixed"), &assign_EnergyConsumer_qfixed));
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.qfixedPct"), &assign_EnergyConsumer_qfixedPct));
}

void EnergyConsumer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.LoadDynamics"), &assign_EnergyConsumer_LoadDynamics));
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.LoadResponse"), &assign_EnergyConsumer_LoadResponse));
}

const BaseClassDefiner EnergyConsumer::declare()
{
	return BaseClassDefiner(EnergyConsumer::addConstructToMap, EnergyConsumer::addPrimitiveAssignFnsToMap, EnergyConsumer::addClassAssignFnsToMap, EnergyConsumer::debugName);
}

namespace CIMPP
{
	BaseClass* EnergyConsumer_factory()
	{
		return new EnergyConsumer;
	}
}
