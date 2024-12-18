/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindAeroLinearIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindGenTurbineType3IEC.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "AngleDegrees.hpp"

using namespace CIMPP;

WindAeroLinearIEC::WindAeroLinearIEC() : WindGenTurbineType3IEC(nullptr) {};
WindAeroLinearIEC::~WindAeroLinearIEC() {};



bool assign_WindAeroLinearIEC_dpomega(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindAeroLinearIEC* element = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dpomega;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindAeroLinearIEC_dptheta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindAeroLinearIEC* element = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dptheta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindAeroLinearIEC_omegazero(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindAeroLinearIEC* element = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr1))
	{
		buffer >> element->omegazero;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindAeroLinearIEC_pavail(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindAeroLinearIEC* element = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr1))
	{
		buffer >> element->pavail;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindAeroLinearIEC_thetazero(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindAeroLinearIEC* element = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr1))
	{
		buffer >> element->thetazero;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindGenTurbineType3IEC_WindAeroLinearIEC(BaseClass*, BaseClass*);
bool assign_WindAeroLinearIEC_WindGenTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindAeroLinearIEC* element = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr1);
	WindGenTurbineType3IEC* element2 = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType3IEC != element2)
		{
			element->WindGenTurbineType3IEC = element2;
			return assign_WindGenTurbineType3IEC_WindAeroLinearIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}






const char WindAeroLinearIEC::debugName[] = "WindAeroLinearIEC";
const char* WindAeroLinearIEC::debugString() const
{
	return WindAeroLinearIEC::debugName;
}

void WindAeroLinearIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindAeroLinearIEC"), &WindAeroLinearIEC_factory));
}

void WindAeroLinearIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindAeroLinearIEC.dpomega"), &assign_WindAeroLinearIEC_dpomega));
	assign_map.insert(std::make_pair(std::string("cim:WindAeroLinearIEC.dptheta"), &assign_WindAeroLinearIEC_dptheta));
	assign_map.insert(std::make_pair(std::string("cim:WindAeroLinearIEC.omegazero"), &assign_WindAeroLinearIEC_omegazero));
	assign_map.insert(std::make_pair(std::string("cim:WindAeroLinearIEC.pavail"), &assign_WindAeroLinearIEC_pavail));
	assign_map.insert(std::make_pair(std::string("cim:WindAeroLinearIEC.thetazero"), &assign_WindAeroLinearIEC_thetazero));
}

void WindAeroLinearIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindAeroLinearIEC.WindGenTurbineType3IEC"), &assign_WindAeroLinearIEC_WindGenTurbineType3IEC));
}

const BaseClassDefiner WindAeroLinearIEC::declare()
{
	return BaseClassDefiner(WindAeroLinearIEC::addConstructToMap, WindAeroLinearIEC::addPrimitiveAssignFnsToMap, WindAeroLinearIEC::addClassAssignFnsToMap, WindAeroLinearIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindAeroLinearIEC_factory()
	{
		return new WindAeroLinearIEC;
	}
}
