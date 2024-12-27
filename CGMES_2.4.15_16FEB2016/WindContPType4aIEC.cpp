/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContPType4aIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindTurbineType4aIEC.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindContPType4aIEC::WindContPType4aIEC() : WindTurbineType4aIEC(nullptr) {};
WindContPType4aIEC::~WindContPType4aIEC() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindContPType4aIEC.WindTurbineType4aIEC", { CGMESProfile::DY, } },
	{ "cim:WindContPType4aIEC.dpmax", { CGMESProfile::DY, } },
	{ "cim:WindContPType4aIEC.tpord", { CGMESProfile::DY, } },
	{ "cim:WindContPType4aIEC.tufilt", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindContPType4aIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindContPType4aIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_WindContPType4aIEC_dpmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dpmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType4aIEC_tpord(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tpord;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType4aIEC_tufilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tufilt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindTurbineType4aIEC_WindContPType4aIEC(BaseClass*, BaseClass*);
bool assign_WindContPType4aIEC_WindTurbineType4aIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1);
	WindTurbineType4aIEC* element2 = dynamic_cast<WindTurbineType4aIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType4aIEC != element2)
		{
			element->WindTurbineType4aIEC = element2;
			return assign_WindTurbineType4aIEC_WindContPType4aIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindContPType4aIEC_dpmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType4aIEC* element = dynamic_cast<const WindContPType4aIEC*>(BaseClass_ptr1))
	{
		buffer << element->dpmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType4aIEC_tpord(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType4aIEC* element = dynamic_cast<const WindContPType4aIEC*>(BaseClass_ptr1))
	{
		buffer << element->tpord;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType4aIEC_tufilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType4aIEC* element = dynamic_cast<const WindContPType4aIEC*>(BaseClass_ptr1))
	{
		buffer << element->tufilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char WindContPType4aIEC::debugName[] = "WindContPType4aIEC";
const char* WindContPType4aIEC::debugString() const
{
	return WindContPType4aIEC::debugName;
}

void WindContPType4aIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC"), &WindContPType4aIEC_factory));
}

void WindContPType4aIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC.dpmax"), &assign_WindContPType4aIEC_dpmax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC.tpord"), &assign_WindContPType4aIEC_tpord));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC.tufilt"), &assign_WindContPType4aIEC_tufilt));
}

void WindContPType4aIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC.WindTurbineType4aIEC"), &assign_WindContPType4aIEC_WindTurbineType4aIEC));
}

void WindContPType4aIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindContPType4aIEC.dpmax", &get_WindContPType4aIEC_dpmax);
	get_map.emplace("cim:WindContPType4aIEC.tpord", &get_WindContPType4aIEC_tpord);
	get_map.emplace("cim:WindContPType4aIEC.tufilt", &get_WindContPType4aIEC_tufilt);
}

void WindContPType4aIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindContPType4aIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindContPType4aIEC::declare()
{
	return BaseClassDefiner(WindContPType4aIEC::addConstructToMap, WindContPType4aIEC::addPrimitiveAssignFnsToMap, WindContPType4aIEC::addClassAssignFnsToMap, WindContPType4aIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindContPType4aIEC_factory()
	{
		return new WindContPType4aIEC;
	}
}
