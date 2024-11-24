/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EnergyConnection.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

EnergyConnection::EnergyConnection() {};
EnergyConnection::~EnergyConnection() {};



const char EnergyConnection::debugName[] = "EnergyConnection";
const char* EnergyConnection::debugString() const
{
	return EnergyConnection::debugName;
}

void EnergyConnection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:EnergyConnection"), &EnergyConnection_factory));
}

void EnergyConnection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void EnergyConnection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner EnergyConnection::declare()
{
	return BaseClassDefiner(EnergyConnection::addConstructToMap, EnergyConnection::addPrimitiveAssignFnsToMap, EnergyConnection::addClassAssignFnsToMap, EnergyConnection::debugName);
}

namespace CIMPP
{
	BaseClass* EnergyConnection_factory()
	{
		return new EnergyConnection;
	}
}
