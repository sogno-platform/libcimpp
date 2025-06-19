/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindAeroOneDimIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindTurbineType3IEC.hpp"

using namespace CIMPP;

WindAeroOneDimIEC::WindAeroOneDimIEC() : WindTurbineType3IEC(nullptr) {}
WindAeroOneDimIEC::~WindAeroOneDimIEC() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindAeroOneDimIEC.WindTurbineType3IEC", { CGMESProfile::DY, } },
	{ "cim:WindAeroOneDimIEC.ka", { CGMESProfile::DY, } },
	{ "cim:WindAeroOneDimIEC.thetaomega", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindAeroOneDimIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindAeroOneDimIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_WindTurbineType3IEC_WindAeroOneDimIEC(BaseClass*, BaseClass*);
bool assign_WindAeroOneDimIEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindAeroOneDimIEC* element = dynamic_cast<WindAeroOneDimIEC*>(BaseClass_ptr1);
	WindTurbineType3IEC* element2 = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3IEC != element2)
		{
			element->WindTurbineType3IEC = element2;
			return assign_WindTurbineType3IEC_WindAeroOneDimIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindAeroOneDimIEC_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindAeroOneDimIEC* element = dynamic_cast<WindAeroOneDimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ka;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindAeroOneDimIEC_thetaomega(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindAeroOneDimIEC* element = dynamic_cast<WindAeroOneDimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->thetaomega;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_WindAeroOneDimIEC_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindAeroOneDimIEC* element = dynamic_cast<const WindAeroOneDimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ka;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindAeroOneDimIEC_thetaomega(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindAeroOneDimIEC* element = dynamic_cast<const WindAeroOneDimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->thetaomega;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindAeroOneDimIEC::debugName[] = "WindAeroOneDimIEC";
const char* WindAeroOneDimIEC::debugString() const
{
	return WindAeroOneDimIEC::debugName;
}

void WindAeroOneDimIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:WindAeroOneDimIEC", &WindAeroOneDimIEC_factory);
}

void WindAeroOneDimIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:WindAeroOneDimIEC.ka", &assign_WindAeroOneDimIEC_ka);
	assign_map.emplace("cim:WindAeroOneDimIEC.thetaomega", &assign_WindAeroOneDimIEC_thetaomega);
}

void WindAeroOneDimIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:WindAeroOneDimIEC.WindTurbineType3IEC", &assign_WindAeroOneDimIEC_WindTurbineType3IEC);
}

void WindAeroOneDimIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindAeroOneDimIEC.ka", &get_WindAeroOneDimIEC_ka);
	get_map.emplace("cim:WindAeroOneDimIEC.thetaomega", &get_WindAeroOneDimIEC_thetaomega);
}

void WindAeroOneDimIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindAeroOneDimIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindAeroOneDimIEC::declare()
{
	return BaseClassDefiner(WindAeroOneDimIEC::addConstructToMap, WindAeroOneDimIEC::addPrimitiveAssignFnsToMap, WindAeroOneDimIEC::addClassAssignFnsToMap, WindAeroOneDimIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindAeroOneDimIEC_factory()
	{
		return new WindAeroOneDimIEC;
	}
}
