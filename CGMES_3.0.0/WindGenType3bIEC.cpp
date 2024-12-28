/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenType3bIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindGenType3bIEC::WindGenType3bIEC() {};
WindGenType3bIEC::~WindGenType3bIEC() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindGenType3bIEC.WindDynamicsLookupTable", { CGMESProfile::DY, } },
	{ "cim:WindGenType3bIEC.mwtcwp", { CGMESProfile::DY, } },
	{ "cim:WindGenType3bIEC.tg", { CGMESProfile::DY, } },
	{ "cim:WindGenType3bIEC.two", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindGenType3bIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindGenType3bIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WindGenType3IEC::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_WindGenType3bIEC_mwtcwp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType3bIEC* element = dynamic_cast<WindGenType3bIEC*>(BaseClass_ptr1))
	{
		buffer >> element->mwtcwp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenType3bIEC_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType3bIEC* element = dynamic_cast<WindGenType3bIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenType3bIEC_two(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType3bIEC* element = dynamic_cast<WindGenType3bIEC*>(BaseClass_ptr1))
	{
		buffer >> element->two;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindDynamicsLookupTable_WindGenType3bIEC(BaseClass*, BaseClass*);
bool assign_WindGenType3bIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenType3bIEC* element = dynamic_cast<WindGenType3bIEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindGenType3bIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindGenType3bIEC_mwtcwp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindGenType3bIEC* element = dynamic_cast<const WindGenType3bIEC*>(BaseClass_ptr1))
	{
		buffer << element->mwtcwp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenType3bIEC_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindGenType3bIEC* element = dynamic_cast<const WindGenType3bIEC*>(BaseClass_ptr1))
	{
		buffer << element->tg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenType3bIEC_two(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindGenType3bIEC* element = dynamic_cast<const WindGenType3bIEC*>(BaseClass_ptr1))
	{
		buffer << element->two;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char WindGenType3bIEC::debugName[] = "WindGenType3bIEC";
const char* WindGenType3bIEC::debugString() const
{
	return WindGenType3bIEC::debugName;
}

void WindGenType3bIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindGenType3bIEC"), &WindGenType3bIEC_factory));
}

void WindGenType3bIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3bIEC.mwtcwp"), &assign_WindGenType3bIEC_mwtcwp));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3bIEC.tg"), &assign_WindGenType3bIEC_tg));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3bIEC.two"), &assign_WindGenType3bIEC_two));
}

void WindGenType3bIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3bIEC.WindDynamicsLookupTable"), &assign_WindGenType3bIEC_WindDynamicsLookupTable));
}

void WindGenType3bIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenType3IEC::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindGenType3bIEC.mwtcwp", &get_WindGenType3bIEC_mwtcwp);
	get_map.emplace("cim:WindGenType3bIEC.tg", &get_WindGenType3bIEC_tg);
	get_map.emplace("cim:WindGenType3bIEC.two", &get_WindGenType3bIEC_two);
}

void WindGenType3bIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindGenType3IEC::addClassGetFnsToMap(get_map);
}

void WindGenType3bIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenType3IEC::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindGenType3bIEC::declare()
{
	return BaseClassDefiner(WindGenType3bIEC::addConstructToMap, WindGenType3bIEC::addPrimitiveAssignFnsToMap, WindGenType3bIEC::addClassAssignFnsToMap, WindGenType3bIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindGenType3bIEC_factory()
	{
		return new WindGenType3bIEC;
	}
}
