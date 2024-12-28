/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindAeroLinearIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
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

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindAeroLinearIEC.WindGenTurbineType3IEC", { CGMESProfile::DY, } },
	{ "cim:WindAeroLinearIEC.dpomega", { CGMESProfile::DY, } },
	{ "cim:WindAeroLinearIEC.dptheta", { CGMESProfile::DY, } },
	{ "cim:WindAeroLinearIEC.omegazero", { CGMESProfile::DY, } },
	{ "cim:WindAeroLinearIEC.pavail", { CGMESProfile::DY, } },
	{ "cim:WindAeroLinearIEC.thetazero", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindAeroLinearIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindAeroLinearIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


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

bool get_WindAeroLinearIEC_dpomega(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindAeroLinearIEC* element = dynamic_cast<const WindAeroLinearIEC*>(BaseClass_ptr1))
	{
		buffer << element->dpomega;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindAeroLinearIEC_dptheta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindAeroLinearIEC* element = dynamic_cast<const WindAeroLinearIEC*>(BaseClass_ptr1))
	{
		buffer << element->dptheta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindAeroLinearIEC_omegazero(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindAeroLinearIEC* element = dynamic_cast<const WindAeroLinearIEC*>(BaseClass_ptr1))
	{
		buffer << element->omegazero;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindAeroLinearIEC_pavail(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindAeroLinearIEC* element = dynamic_cast<const WindAeroLinearIEC*>(BaseClass_ptr1))
	{
		buffer << element->pavail;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindAeroLinearIEC_thetazero(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindAeroLinearIEC* element = dynamic_cast<const WindAeroLinearIEC*>(BaseClass_ptr1))
	{
		buffer << element->thetazero;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
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

void WindAeroLinearIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindAeroLinearIEC.dpomega", &get_WindAeroLinearIEC_dpomega);
	get_map.emplace("cim:WindAeroLinearIEC.dptheta", &get_WindAeroLinearIEC_dptheta);
	get_map.emplace("cim:WindAeroLinearIEC.omegazero", &get_WindAeroLinearIEC_omegazero);
	get_map.emplace("cim:WindAeroLinearIEC.pavail", &get_WindAeroLinearIEC_pavail);
	get_map.emplace("cim:WindAeroLinearIEC.thetazero", &get_WindAeroLinearIEC_thetazero);
}

void WindAeroLinearIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindAeroLinearIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
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
