/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerElectronicsConnection.hpp"

#include <algorithm>
#include <sstream>

#include "PowerElectronicsUnit.hpp"
#include "WindTurbineType3or4Dynamics.hpp"
#include "ReactivePower.hpp"
#include "ReactivePower.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "ApparentPower.hpp"
#include "Voltage.hpp"

using namespace CIMPP;

PowerElectronicsConnection::PowerElectronicsConnection() : PowerElectronicsUnit(nullptr), WindTurbineType3or4Dynamics(nullptr) {};
PowerElectronicsConnection::~PowerElectronicsConnection() {};




bool assign_PowerElectronicsConnection_maxQ(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1))
	{
		buffer >> element->maxQ;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerElectronicsConnection_minQ(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1))
	{
		buffer >> element->minQ;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerElectronicsConnection_p(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1))
	{
		buffer >> element->p;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerElectronicsConnection_q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1))
	{
		buffer >> element->q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerElectronicsConnection_ratedS(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1))
	{
		buffer >> element->ratedS;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerElectronicsConnection_ratedU(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1))
	{
		buffer >> element->ratedU;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_PowerElectronicsUnit_PowerElectronicsConnection(BaseClass*, BaseClass*);
bool assign_PowerElectronicsConnection_PowerElectronicsUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1);
	PowerElectronicsUnit* element2 = dynamic_cast<PowerElectronicsUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PowerElectronicsUnit != element2)
		{
			element->PowerElectronicsUnit = element2;
			return assign_PowerElectronicsUnit_PowerElectronicsConnection(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3or4Dynamics_PowerElectronicsConnection(BaseClass*, BaseClass*);
bool assign_PowerElectronicsConnection_WindTurbineType3or4Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1);
	WindTurbineType3or4Dynamics* element2 = dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4Dynamics != element2)
		{
			element->WindTurbineType3or4Dynamics = element2;
			return assign_WindTurbineType3or4Dynamics_PowerElectronicsConnection(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}







const char PowerElectronicsConnection::debugName[] = "PowerElectronicsConnection";
const char* PowerElectronicsConnection::debugString() const
{
	return PowerElectronicsConnection::debugName;
}

void PowerElectronicsConnection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PowerElectronicsConnection"), &PowerElectronicsConnection_factory));
}

void PowerElectronicsConnection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PowerElectronicsConnection.maxQ"), &assign_PowerElectronicsConnection_maxQ));
	assign_map.insert(std::make_pair(std::string("cim:PowerElectronicsConnection.minQ"), &assign_PowerElectronicsConnection_minQ));
	assign_map.insert(std::make_pair(std::string("cim:PowerElectronicsConnection.p"), &assign_PowerElectronicsConnection_p));
	assign_map.insert(std::make_pair(std::string("cim:PowerElectronicsConnection.q"), &assign_PowerElectronicsConnection_q));
	assign_map.insert(std::make_pair(std::string("cim:PowerElectronicsConnection.ratedS"), &assign_PowerElectronicsConnection_ratedS));
	assign_map.insert(std::make_pair(std::string("cim:PowerElectronicsConnection.ratedU"), &assign_PowerElectronicsConnection_ratedU));
}

void PowerElectronicsConnection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PowerElectronicsConnection.PowerElectronicsUnit"), &assign_PowerElectronicsConnection_PowerElectronicsUnit));
	assign_map.insert(std::make_pair(std::string("cim:PowerElectronicsConnection.WindTurbineType3or4Dynamics"), &assign_PowerElectronicsConnection_WindTurbineType3or4Dynamics));
}

const BaseClassDefiner PowerElectronicsConnection::declare()
{
	return BaseClassDefiner(PowerElectronicsConnection::addConstructToMap, PowerElectronicsConnection::addPrimitiveAssignFnsToMap, PowerElectronicsConnection::addClassAssignFnsToMap, PowerElectronicsConnection::debugName);
}

namespace CIMPP
{
	BaseClass* PowerElectronicsConnection_factory()
	{
		return new PowerElectronicsConnection;
	}
}
