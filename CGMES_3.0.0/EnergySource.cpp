/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EnergySource.hpp"

#include <algorithm>
#include <sstream>

#include "EnergySchedulingType.hpp"
#include "ActivePower.hpp"
#include "Voltage.hpp"
#include "ActivePower.hpp"
#include "ActivePower.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "ReactivePower.hpp"
#include "Resistance.hpp"
#include "AngleRadians.hpp"
#include "Voltage.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

EnergySource::EnergySource() : EnergySchedulingType(nullptr) {};
EnergySource::~EnergySource() {};



bool assign_EnergySource_activePower(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1))
	{
		buffer >> element->activePower;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergySource_nominalVoltage(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1))
	{
		buffer >> element->nominalVoltage;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergySource_pMax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1))
	{
		buffer >> element->pMax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergySource_pMin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1))
	{
		buffer >> element->pMin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergySource_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergySource_r0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1))
	{
		buffer >> element->r0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergySource_reactivePower(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1))
	{
		buffer >> element->reactivePower;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergySource_rn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1))
	{
		buffer >> element->rn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergySource_voltageAngle(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1))
	{
		buffer >> element->voltageAngle;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergySource_voltageMagnitude(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1))
	{
		buffer >> element->voltageMagnitude;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergySource_x(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1))
	{
		buffer >> element->x;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergySource_x0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1))
	{
		buffer >> element->x0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EnergySource_xn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1))
	{
		buffer >> element->xn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_EnergySchedulingType_EnergySource(BaseClass*, BaseClass*);
bool assign_EnergySource_EnergySchedulingType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1);
	EnergySchedulingType* element2 = dynamic_cast<EnergySchedulingType*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->EnergySchedulingType != element2)
		{
			element->EnergySchedulingType = element2;
			return assign_EnergySchedulingType_EnergySource(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}














const char EnergySource::debugName[] = "EnergySource";
const char* EnergySource::debugString() const
{
	return EnergySource::debugName;
}

void EnergySource::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:EnergySource"), &EnergySource_factory));
}

void EnergySource::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.activePower"), &assign_EnergySource_activePower));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.nominalVoltage"), &assign_EnergySource_nominalVoltage));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.pMax"), &assign_EnergySource_pMax));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.pMin"), &assign_EnergySource_pMin));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.r"), &assign_EnergySource_r));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.r0"), &assign_EnergySource_r0));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.reactivePower"), &assign_EnergySource_reactivePower));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.rn"), &assign_EnergySource_rn));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.voltageAngle"), &assign_EnergySource_voltageAngle));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.voltageMagnitude"), &assign_EnergySource_voltageMagnitude));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.x"), &assign_EnergySource_x));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.x0"), &assign_EnergySource_x0));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.xn"), &assign_EnergySource_xn));
}

void EnergySource::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.EnergySchedulingType"), &assign_EnergySource_EnergySchedulingType));
}

const BaseClassDefiner EnergySource::declare()
{
	return BaseClassDefiner(EnergySource::addConstructToMap, EnergySource::addPrimitiveAssignFnsToMap, EnergySource::addClassAssignFnsToMap, EnergySource::debugName);
}

namespace CIMPP
{
	BaseClass* EnergySource_factory()
	{
		return new EnergySource;
	}
}
