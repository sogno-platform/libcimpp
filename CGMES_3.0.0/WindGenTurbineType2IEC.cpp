/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType2IEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindContRotorRIEC.hpp"
#include "WindPitchContPowerIEC.hpp"

using namespace CIMPP;

WindGenTurbineType2IEC::WindGenTurbineType2IEC() : WindContRotorRIEC(nullptr), WindPitchContPowerIEC(nullptr) {}
WindGenTurbineType2IEC::~WindGenTurbineType2IEC() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindGenTurbineType2IEC.WindContRotorRIEC", { CGMESProfile::DY, } },
	{ "cim:WindGenTurbineType2IEC.WindPitchContPowerIEC", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindGenTurbineType2IEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindGenTurbineType2IEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WindTurbineType1or2IEC::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_WindContRotorRIEC_WindGenTurbineType2IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType2IEC_WindContRotorRIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType2IEC* element = dynamic_cast<WindGenTurbineType2IEC*>(BaseClass_ptr1);
	WindContRotorRIEC* element2 = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContRotorRIEC != element2)
		{
			element->WindContRotorRIEC = element2;
			return assign_WindContRotorRIEC_WindGenTurbineType2IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPitchContPowerIEC_WindGenTurbineType2IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType2IEC_WindPitchContPowerIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType2IEC* element = dynamic_cast<WindGenTurbineType2IEC*>(BaseClass_ptr1);
	WindPitchContPowerIEC* element2 = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPitchContPowerIEC != element2)
		{
			element->WindPitchContPowerIEC = element2;
			return assign_WindPitchContPowerIEC_WindGenTurbineType2IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindGenTurbineType2IEC_WindContRotorRIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindGenTurbineType2IEC* element = dynamic_cast<const WindGenTurbineType2IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContRotorRIEC != 0)
		{
			BaseClass_list.push_back(element->WindContRotorRIEC);
			return true;
		}
	}
	return false;
}

bool get_WindGenTurbineType2IEC_WindPitchContPowerIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindGenTurbineType2IEC* element = dynamic_cast<const WindGenTurbineType2IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindPitchContPowerIEC != 0)
		{
			BaseClass_list.push_back(element->WindPitchContPowerIEC);
			return true;
		}
	}
	return false;
}

const char WindGenTurbineType2IEC::debugName[] = "WindGenTurbineType2IEC";
const char* WindGenTurbineType2IEC::debugString() const
{
	return WindGenTurbineType2IEC::debugName;
}

void WindGenTurbineType2IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:WindGenTurbineType2IEC", &WindGenTurbineType2IEC_factory);
}

void WindGenTurbineType2IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindGenTurbineType2IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:WindGenTurbineType2IEC.WindContRotorRIEC", &assign_WindGenTurbineType2IEC_WindContRotorRIEC);
	assign_map.emplace("cim:WindGenTurbineType2IEC.WindPitchContPowerIEC", &assign_WindGenTurbineType2IEC_WindPitchContPowerIEC);
}

void WindGenTurbineType2IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2IEC::addPrimitiveGetFnsToMap(get_map);
}

void WindGenTurbineType2IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType1or2IEC::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:WindGenTurbineType2IEC.WindContRotorRIEC", &get_WindGenTurbineType2IEC_WindContRotorRIEC);
	get_map.emplace("cim:WindGenTurbineType2IEC.WindPitchContPowerIEC", &get_WindGenTurbineType2IEC_WindPitchContPowerIEC);
}

void WindGenTurbineType2IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2IEC::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindGenTurbineType2IEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType2IEC::addConstructToMap, WindGenTurbineType2IEC::addPrimitiveAssignFnsToMap, WindGenTurbineType2IEC::addClassAssignFnsToMap, WindGenTurbineType2IEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindGenTurbineType2IEC_factory()
	{
		return new WindGenTurbineType2IEC;
	}
}
