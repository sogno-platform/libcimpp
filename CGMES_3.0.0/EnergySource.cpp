/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EnergySource.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
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

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SC,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:EnergySource.EnergySchedulingType", { CGMESProfile::EQ, } },
	{ "cim:EnergySource.activePower", { CGMESProfile::SSH, } },
	{ "cim:EnergySource.nominalVoltage", { CGMESProfile::EQ, } },
	{ "cim:EnergySource.pMax", { CGMESProfile::EQ, } },
	{ "cim:EnergySource.pMin", { CGMESProfile::EQ, } },
	{ "cim:EnergySource.r", { CGMESProfile::SC, } },
	{ "cim:EnergySource.r0", { CGMESProfile::SC, } },
	{ "cim:EnergySource.reactivePower", { CGMESProfile::SSH, } },
	{ "cim:EnergySource.rn", { CGMESProfile::SC, } },
	{ "cim:EnergySource.voltageAngle", { CGMESProfile::SSH, } },
	{ "cim:EnergySource.voltageMagnitude", { CGMESProfile::SSH, } },
	{ "cim:EnergySource.x", { CGMESProfile::SC, } },
	{ "cim:EnergySource.x0", { CGMESProfile::SC, } },
	{ "cim:EnergySource.xn", { CGMESProfile::SC, } },
};

std::list<CGMESProfile>
EnergySource::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
EnergySource::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EnergyConnection::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


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

bool get_EnergySource_activePower(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1))
	{
		buffer << element->activePower;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_nominalVoltage(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1))
	{
		buffer << element->nominalVoltage;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_pMax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1))
	{
		buffer << element->pMax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_pMin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1))
	{
		buffer << element->pMin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1))
	{
		buffer << element->r;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_r0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1))
	{
		buffer << element->r0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_reactivePower(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1))
	{
		buffer << element->reactivePower;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_rn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1))
	{
		buffer << element->rn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_voltageAngle(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1))
	{
		buffer << element->voltageAngle;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_voltageMagnitude(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1))
	{
		buffer << element->voltageMagnitude;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1))
	{
		buffer << element->x;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_x0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1))
	{
		buffer << element->x0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_xn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1))
	{
		buffer << element->xn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_EnergySource_EnergySchedulingType(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1))
	{
		if (element->EnergySchedulingType != 0)
		{
			BaseClass_list.push_back(element->EnergySchedulingType);
			return true;
		}
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

void EnergySource::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConnection::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:EnergySource.activePower", &get_EnergySource_activePower);
	get_map.emplace("cim:EnergySource.nominalVoltage", &get_EnergySource_nominalVoltage);
	get_map.emplace("cim:EnergySource.pMax", &get_EnergySource_pMax);
	get_map.emplace("cim:EnergySource.pMin", &get_EnergySource_pMin);
	get_map.emplace("cim:EnergySource.r", &get_EnergySource_r);
	get_map.emplace("cim:EnergySource.r0", &get_EnergySource_r0);
	get_map.emplace("cim:EnergySource.reactivePower", &get_EnergySource_reactivePower);
	get_map.emplace("cim:EnergySource.rn", &get_EnergySource_rn);
	get_map.emplace("cim:EnergySource.voltageAngle", &get_EnergySource_voltageAngle);
	get_map.emplace("cim:EnergySource.voltageMagnitude", &get_EnergySource_voltageMagnitude);
	get_map.emplace("cim:EnergySource.x", &get_EnergySource_x);
	get_map.emplace("cim:EnergySource.x0", &get_EnergySource_x0);
	get_map.emplace("cim:EnergySource.xn", &get_EnergySource_xn);
}

void EnergySource::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EnergyConnection::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:EnergySource.EnergySchedulingType", &get_EnergySource_EnergySchedulingType);
}

void EnergySource::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConnection::addEnumGetFnsToMap(get_map);
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
