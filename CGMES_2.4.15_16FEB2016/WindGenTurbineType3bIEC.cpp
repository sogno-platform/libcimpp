/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType3bIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

WindGenTurbineType3bIEC::WindGenTurbineType3bIEC() {}
WindGenTurbineType3bIEC::~WindGenTurbineType3bIEC() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindGenTurbineType3bIEC.fducw", { CGMESProfile::DY, } },
	{ "cim:WindGenTurbineType3bIEC.mwtcwp", { CGMESProfile::DY, } },
	{ "cim:WindGenTurbineType3bIEC.tg", { CGMESProfile::DY, } },
	{ "cim:WindGenTurbineType3bIEC.two", { CGMESProfile::DY, } },
	{ "cim:WindGenTurbineType3bIEC.xs", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindGenTurbineType3bIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindGenTurbineType3bIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WindGenTurbineType3IEC::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_WindGenTurbineType3bIEC_fducw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fducw;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindGenTurbineType3bIEC_mwtcwp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mwtcwp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindGenTurbineType3bIEC_tg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindGenTurbineType3bIEC_two(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->two;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindGenTurbineType3bIEC_xs(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xs;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_WindGenTurbineType3bIEC_fducw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3bIEC* element = dynamic_cast<const WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fducw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenTurbineType3bIEC_mwtcwp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3bIEC* element = dynamic_cast<const WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_WindGenTurbineType3bIEC_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3bIEC* element = dynamic_cast<const WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_WindGenTurbineType3bIEC_two(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3bIEC* element = dynamic_cast<const WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_WindGenTurbineType3bIEC_xs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3bIEC* element = dynamic_cast<const WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindGenTurbineType3bIEC::debugName[] = "WindGenTurbineType3bIEC";
const char* WindGenTurbineType3bIEC::debugString() const
{
	return WindGenTurbineType3bIEC::debugName;
}

void WindGenTurbineType3bIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:WindGenTurbineType3bIEC", &WindGenTurbineType3bIEC_factory);
}

void WindGenTurbineType3bIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:WindGenTurbineType3bIEC.fducw", &assign_WindGenTurbineType3bIEC_fducw);
	assign_map.emplace("cim:WindGenTurbineType3bIEC.mwtcwp", &assign_WindGenTurbineType3bIEC_mwtcwp);
	assign_map.emplace("cim:WindGenTurbineType3bIEC.tg", &assign_WindGenTurbineType3bIEC_tg);
	assign_map.emplace("cim:WindGenTurbineType3bIEC.two", &assign_WindGenTurbineType3bIEC_two);
	assign_map.emplace("cim:WindGenTurbineType3bIEC.xs", &assign_WindGenTurbineType3bIEC_xs);
}

void WindGenTurbineType3bIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void WindGenTurbineType3bIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenTurbineType3IEC::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindGenTurbineType3bIEC.fducw", &get_WindGenTurbineType3bIEC_fducw);
	get_map.emplace("cim:WindGenTurbineType3bIEC.mwtcwp", &get_WindGenTurbineType3bIEC_mwtcwp);
	get_map.emplace("cim:WindGenTurbineType3bIEC.tg", &get_WindGenTurbineType3bIEC_tg);
	get_map.emplace("cim:WindGenTurbineType3bIEC.two", &get_WindGenTurbineType3bIEC_two);
	get_map.emplace("cim:WindGenTurbineType3bIEC.xs", &get_WindGenTurbineType3bIEC_xs);
}

void WindGenTurbineType3bIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindGenTurbineType3IEC::addClassGetFnsToMap(get_map);
}

void WindGenTurbineType3bIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenTurbineType3IEC::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindGenTurbineType3bIEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType3bIEC::addConstructToMap, WindGenTurbineType3bIEC::addPrimitiveAssignFnsToMap, WindGenTurbineType3bIEC::addClassAssignFnsToMap, WindGenTurbineType3bIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindGenTurbineType3bIEC_factory()
	{
		return new WindGenTurbineType3bIEC;
	}
}
