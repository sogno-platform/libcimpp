/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AsynchronousMachine.hpp"

#include <algorithm>
#include <sstream>

#include "AsynchronousMachineDynamics.hpp"
#include "AsynchronousMachineKind.hpp"
#include "Boolean.hpp"
#include "PerCent.hpp"
#include "Float.hpp"
#include "Frequency.hpp"
#include "RotationSpeed.hpp"
#include "Integer.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "Float.hpp"

using namespace CIMPP;

AsynchronousMachine::AsynchronousMachine() : AsynchronousMachineDynamics(nullptr) {};
AsynchronousMachine::~AsynchronousMachine() {};



bool assign_AsynchronousMachine_asynchronousMachineType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->asynchronousMachineType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachine_converterFedDrive(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->converterFedDrive;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachine_efficiency(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->efficiency;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachine_iaIrRatio(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->iaIrRatio;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachine_nominalFrequency(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->nominalFrequency;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachine_nominalSpeed(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->nominalSpeed;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachine_polePairNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->polePairNumber;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachine_ratedMechanicalPower(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->ratedMechanicalPower;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachine_reversible(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->reversible;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AsynchronousMachine_rxLockedRotorRatio(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1))
	{
		buffer >> element->rxLockedRotorRatio;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_AsynchronousMachineDynamics_AsynchronousMachine(BaseClass*, BaseClass*);
bool assign_AsynchronousMachine_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1);
	AsynchronousMachineDynamics* element2 = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AsynchronousMachineDynamics != element2)
		{
			element->AsynchronousMachineDynamics = element2;
			return assign_AsynchronousMachineDynamics_AsynchronousMachine(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}











const char AsynchronousMachine::debugName[] = "AsynchronousMachine";
const char* AsynchronousMachine::debugString() const
{
	return AsynchronousMachine::debugName;
}

void AsynchronousMachine::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AsynchronousMachine"), &AsynchronousMachine_factory));
}

void AsynchronousMachine::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.asynchronousMachineType"), &assign_AsynchronousMachine_asynchronousMachineType));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.converterFedDrive"), &assign_AsynchronousMachine_converterFedDrive));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.efficiency"), &assign_AsynchronousMachine_efficiency));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.iaIrRatio"), &assign_AsynchronousMachine_iaIrRatio));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.nominalFrequency"), &assign_AsynchronousMachine_nominalFrequency));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.nominalSpeed"), &assign_AsynchronousMachine_nominalSpeed));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.polePairNumber"), &assign_AsynchronousMachine_polePairNumber));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.ratedMechanicalPower"), &assign_AsynchronousMachine_ratedMechanicalPower));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.reversible"), &assign_AsynchronousMachine_reversible));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.rxLockedRotorRatio"), &assign_AsynchronousMachine_rxLockedRotorRatio));
}

void AsynchronousMachine::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.AsynchronousMachineDynamics"), &assign_AsynchronousMachine_AsynchronousMachineDynamics));
}

const BaseClassDefiner AsynchronousMachine::declare()
{
	return BaseClassDefiner(AsynchronousMachine::addConstructToMap, AsynchronousMachine::addPrimitiveAssignFnsToMap, AsynchronousMachine::addClassAssignFnsToMap, AsynchronousMachine::debugName);
}

namespace CIMPP
{
	BaseClass* AsynchronousMachine_factory()
	{
		return new AsynchronousMachine;
	}
}
