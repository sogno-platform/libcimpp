/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindAeroTwoDimIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
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

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindAeroTwoDimIEC.WindTurbineType3IEC", { CGMESProfile::DY, } },
	{ "cim:WindAeroTwoDimIEC.dpomega", { CGMESProfile::DY, } },
	{ "cim:WindAeroTwoDimIEC.dptheta", { CGMESProfile::DY, } },
	{ "cim:WindAeroTwoDimIEC.dpv1", { CGMESProfile::DY, } },
	{ "cim:WindAeroTwoDimIEC.omegazero", { CGMESProfile::DY, } },
	{ "cim:WindAeroTwoDimIEC.pavail", { CGMESProfile::DY, } },
	{ "cim:WindAeroTwoDimIEC.thetav2", { CGMESProfile::DY, } },
	{ "cim:WindAeroTwoDimIEC.thetazero", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindAeroTwoDimIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindAeroTwoDimIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


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

bool get_WindAeroTwoDimIEC_dpomega(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindAeroTwoDimIEC* element = dynamic_cast<const WindAeroTwoDimIEC*>(BaseClass_ptr1))
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

bool get_WindAeroTwoDimIEC_dptheta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindAeroTwoDimIEC* element = dynamic_cast<const WindAeroTwoDimIEC*>(BaseClass_ptr1))
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

bool get_WindAeroTwoDimIEC_dpv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindAeroTwoDimIEC* element = dynamic_cast<const WindAeroTwoDimIEC*>(BaseClass_ptr1))
	{
		buffer << element->dpv1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindAeroTwoDimIEC_omegazero(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindAeroTwoDimIEC* element = dynamic_cast<const WindAeroTwoDimIEC*>(BaseClass_ptr1))
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

bool get_WindAeroTwoDimIEC_pavail(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindAeroTwoDimIEC* element = dynamic_cast<const WindAeroTwoDimIEC*>(BaseClass_ptr1))
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

bool get_WindAeroTwoDimIEC_thetav2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindAeroTwoDimIEC* element = dynamic_cast<const WindAeroTwoDimIEC*>(BaseClass_ptr1))
	{
		buffer << element->thetav2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindAeroTwoDimIEC_thetazero(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindAeroTwoDimIEC* element = dynamic_cast<const WindAeroTwoDimIEC*>(BaseClass_ptr1))
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

void WindAeroTwoDimIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindAeroTwoDimIEC.dpomega", &get_WindAeroTwoDimIEC_dpomega);
	get_map.emplace("cim:WindAeroTwoDimIEC.dptheta", &get_WindAeroTwoDimIEC_dptheta);
	get_map.emplace("cim:WindAeroTwoDimIEC.dpv1", &get_WindAeroTwoDimIEC_dpv1);
	get_map.emplace("cim:WindAeroTwoDimIEC.omegazero", &get_WindAeroTwoDimIEC_omegazero);
	get_map.emplace("cim:WindAeroTwoDimIEC.pavail", &get_WindAeroTwoDimIEC_pavail);
	get_map.emplace("cim:WindAeroTwoDimIEC.thetav2", &get_WindAeroTwoDimIEC_thetav2);
	get_map.emplace("cim:WindAeroTwoDimIEC.thetazero", &get_WindAeroTwoDimIEC_thetazero);
}

void WindAeroTwoDimIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindAeroTwoDimIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
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
