/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerElectronicsUnit.hpp"

#include <algorithm>
#include <sstream>

#include "PowerElectronicsConnection.hpp"
#include "ActivePower.hpp"
#include "ActivePower.hpp"

using namespace CIMPP;

PowerElectronicsUnit::PowerElectronicsUnit() : PowerElectronicsConnection(nullptr) {};
PowerElectronicsUnit::~PowerElectronicsUnit() {};



bool assign_PowerElectronicsUnit_maxP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerElectronicsUnit* element = dynamic_cast<PowerElectronicsUnit*>(BaseClass_ptr1))
	{
		buffer >> element->maxP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerElectronicsUnit_minP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerElectronicsUnit* element = dynamic_cast<PowerElectronicsUnit*>(BaseClass_ptr1))
	{
		buffer >> element->minP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
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



const char PowerElectronicsUnit::debugName[] = "PowerElectronicsUnit";
const char* PowerElectronicsUnit::debugString() const
{
	return PowerElectronicsUnit::debugName;
}

void PowerElectronicsUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PowerElectronicsUnit"), &PowerElectronicsUnit_factory));
}

void PowerElectronicsUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PowerElectronicsUnit.maxP"), &assign_PowerElectronicsUnit_maxP));
	assign_map.insert(std::make_pair(std::string("cim:PowerElectronicsUnit.minP"), &assign_PowerElectronicsUnit_minP));
}

void PowerElectronicsUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PowerElectronicsUnit.PowerElectronicsConnection"), &assign_PowerElectronicsUnit_PowerElectronicsConnection));
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
