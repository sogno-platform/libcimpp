/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindAeroTwoDimIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindTurbineType3IEC.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "AngleDegrees.hpp"
#include "AngleDegrees.hpp"

using namespace CIMPP;

WindAeroTwoDimIEC::WindAeroTwoDimIEC() : WindTurbineType3IEC(nullptr) {};
WindAeroTwoDimIEC::~WindAeroTwoDimIEC() {};



bool assign_WindAeroTwoDimIEC_dpomega(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dpomega;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindAeroTwoDimIEC_dptheta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dptheta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindAeroTwoDimIEC_dpv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dpv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindAeroTwoDimIEC_omegazero(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->omegazero;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindAeroTwoDimIEC_pavail(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->pavail;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindAeroTwoDimIEC_thetav2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->thetav2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindAeroTwoDimIEC_thetazero(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->thetazero;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindTurbineType3IEC_WindAeroTwoDimIEC(BaseClass*, BaseClass*);
bool assign_WindAeroTwoDimIEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1);
	WindTurbineType3IEC* element2 = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3IEC != element2)
		{
			element->WindTurbineType3IEC = element2;
			return assign_WindTurbineType3IEC_WindAeroTwoDimIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}








const char WindAeroTwoDimIEC::debugName[] = "WindAeroTwoDimIEC";
const char* WindAeroTwoDimIEC::debugString() const
{
	return WindAeroTwoDimIEC::debugName;
}

void WindAeroTwoDimIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindAeroTwoDimIEC"), &WindAeroTwoDimIEC_factory));
}

void WindAeroTwoDimIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindAeroTwoDimIEC.dpomega"), &assign_WindAeroTwoDimIEC_dpomega));
	assign_map.insert(std::make_pair(std::string("cim:WindAeroTwoDimIEC.dptheta"), &assign_WindAeroTwoDimIEC_dptheta));
	assign_map.insert(std::make_pair(std::string("cim:WindAeroTwoDimIEC.dpv1"), &assign_WindAeroTwoDimIEC_dpv1));
	assign_map.insert(std::make_pair(std::string("cim:WindAeroTwoDimIEC.omegazero"), &assign_WindAeroTwoDimIEC_omegazero));
	assign_map.insert(std::make_pair(std::string("cim:WindAeroTwoDimIEC.pavail"), &assign_WindAeroTwoDimIEC_pavail));
	assign_map.insert(std::make_pair(std::string("cim:WindAeroTwoDimIEC.thetav2"), &assign_WindAeroTwoDimIEC_thetav2));
	assign_map.insert(std::make_pair(std::string("cim:WindAeroTwoDimIEC.thetazero"), &assign_WindAeroTwoDimIEC_thetazero));
}

void WindAeroTwoDimIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindAeroTwoDimIEC.WindTurbineType3IEC"), &assign_WindAeroTwoDimIEC_WindTurbineType3IEC));
}

const BaseClassDefiner WindAeroTwoDimIEC::declare()
{
	return BaseClassDefiner(WindAeroTwoDimIEC::addConstructToMap, WindAeroTwoDimIEC::addPrimitiveAssignFnsToMap, WindAeroTwoDimIEC::addClassAssignFnsToMap, WindAeroTwoDimIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindAeroTwoDimIEC_factory()
	{
		return new WindAeroTwoDimIEC;
	}
}
