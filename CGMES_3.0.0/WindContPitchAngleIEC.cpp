/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContPitchAngleIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindTurbineType3IEC.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "AngleDegrees.hpp"
#include "AngleDegrees.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindContPitchAngleIEC::WindContPitchAngleIEC() : WindTurbineType3IEC(nullptr) {};
WindContPitchAngleIEC::~WindContPitchAngleIEC() {};



bool assign_WindContPitchAngleIEC_dthetamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dthetamax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_dthetamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dthetamin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kic(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kic;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kiomega(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kiomega;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kpc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kpc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kpomega(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kpomega;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kpx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kpx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_thetamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->thetamax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_thetamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->thetamin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_ttheta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->ttheta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindTurbineType3IEC_WindContPitchAngleIEC(BaseClass*, BaseClass*);
bool assign_WindContPitchAngleIEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1);
	WindTurbineType3IEC* element2 = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3IEC != element2)
		{
			element->WindTurbineType3IEC = element2;
			return assign_WindTurbineType3IEC_WindContPitchAngleIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}











const char WindContPitchAngleIEC::debugName[] = "WindContPitchAngleIEC";
const char* WindContPitchAngleIEC::debugString() const
{
	return WindContPitchAngleIEC::debugName;
}

void WindContPitchAngleIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC"), &WindContPitchAngleIEC_factory));
}

void WindContPitchAngleIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.dthetamax"), &assign_WindContPitchAngleIEC_dthetamax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.dthetamin"), &assign_WindContPitchAngleIEC_dthetamin));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kic"), &assign_WindContPitchAngleIEC_kic));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kiomega"), &assign_WindContPitchAngleIEC_kiomega));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kpc"), &assign_WindContPitchAngleIEC_kpc));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kpomega"), &assign_WindContPitchAngleIEC_kpomega));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kpx"), &assign_WindContPitchAngleIEC_kpx));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.thetamax"), &assign_WindContPitchAngleIEC_thetamax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.thetamin"), &assign_WindContPitchAngleIEC_thetamin));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.ttheta"), &assign_WindContPitchAngleIEC_ttheta));
}

void WindContPitchAngleIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.WindTurbineType3IEC"), &assign_WindContPitchAngleIEC_WindTurbineType3IEC));
}

const BaseClassDefiner WindContPitchAngleIEC::declare()
{
	return BaseClassDefiner(WindContPitchAngleIEC::addConstructToMap, WindContPitchAngleIEC::addPrimitiveAssignFnsToMap, WindContPitchAngleIEC::addClassAssignFnsToMap, WindContPitchAngleIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindContPitchAngleIEC_factory()
	{
		return new WindContPitchAngleIEC;
	}
}
