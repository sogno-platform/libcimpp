/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindTurbineType3IEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindAeroOneDimIEC.hpp"
#include "WindAeroTwoDimIEC.hpp"
#include "WindContPType3IEC.hpp"
#include "WindContPitchAngleIEC.hpp"
#include "WindGenType3IEC.hpp"
#include "WindMechIEC.hpp"

using namespace CIMPP;

WindTurbineType3IEC::WindTurbineType3IEC() : WindAeroOneDimIEC(nullptr), WindAeroTwoDimIEC(nullptr), WindContPType3IEC(nullptr), WindContPitchAngleIEC(nullptr), WindGenType3IEC(nullptr), WindMechIEC(nullptr) {}
WindTurbineType3IEC::~WindTurbineType3IEC() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindTurbineType3IEC.WindAeroOneDimIEC", { CGMESProfile::DY, } },
	{ "cim:WindTurbineType3IEC.WindAeroTwoDimIEC", { CGMESProfile::DY, } },
	{ "cim:WindTurbineType3IEC.WindContPType3IEC", { CGMESProfile::DY, } },
	{ "cim:WindTurbineType3IEC.WindContPitchAngleIEC", { CGMESProfile::DY, } },
	{ "cim:WindTurbineType3IEC.WindGenType3IEC", { CGMESProfile::DY, } },
	{ "cim:WindTurbineType3IEC.WindMechIEC", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindTurbineType3IEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindTurbineType3IEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WindTurbineType3or4IEC::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_WindAeroOneDimIEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindAeroOneDimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindAeroOneDimIEC* element2 = dynamic_cast<WindAeroOneDimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindAeroOneDimIEC != element2)
		{
			element->WindAeroOneDimIEC = element2;
			return assign_WindAeroOneDimIEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindAeroTwoDimIEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindAeroTwoDimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindAeroTwoDimIEC* element2 = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindAeroTwoDimIEC != element2)
		{
			element->WindAeroTwoDimIEC = element2;
			return assign_WindAeroTwoDimIEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPType3IEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindContPType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindContPType3IEC* element2 = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPType3IEC != element2)
		{
			element->WindContPType3IEC = element2;
			return assign_WindContPType3IEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindContPitchAngleIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindContPitchAngleIEC* element2 = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPitchAngleIEC != element2)
		{
			element->WindContPitchAngleIEC = element2;
			return assign_WindContPitchAngleIEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGenType3IEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindGenType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindGenType3IEC* element2 = dynamic_cast<WindGenType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenType3IEC != element2)
		{
			element->WindGenType3IEC = element2;
			return assign_WindGenType3IEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindMechIEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindMechIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindMechIEC* element2 = dynamic_cast<WindMechIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindMechIEC != element2)
		{
			element->WindMechIEC = element2;
			return assign_WindMechIEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindTurbineType3IEC_WindAeroOneDimIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3IEC* element = dynamic_cast<const WindTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindAeroOneDimIEC != 0)
		{
			BaseClass_list.push_back(element->WindAeroOneDimIEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3IEC_WindAeroTwoDimIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3IEC* element = dynamic_cast<const WindTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindAeroTwoDimIEC != 0)
		{
			BaseClass_list.push_back(element->WindAeroTwoDimIEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3IEC_WindContPType3IEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3IEC* element = dynamic_cast<const WindTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContPType3IEC != 0)
		{
			BaseClass_list.push_back(element->WindContPType3IEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3IEC_WindContPitchAngleIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3IEC* element = dynamic_cast<const WindTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContPitchAngleIEC != 0)
		{
			BaseClass_list.push_back(element->WindContPitchAngleIEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3IEC_WindGenType3IEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3IEC* element = dynamic_cast<const WindTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindGenType3IEC != 0)
		{
			BaseClass_list.push_back(element->WindGenType3IEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3IEC_WindMechIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3IEC* element = dynamic_cast<const WindTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindMechIEC != 0)
		{
			BaseClass_list.push_back(element->WindMechIEC);
			return true;
		}
	}
	return false;
}

const char WindTurbineType3IEC::debugName[] = "WindTurbineType3IEC";
const char* WindTurbineType3IEC::debugString() const
{
	return WindTurbineType3IEC::debugName;
}

void WindTurbineType3IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:WindTurbineType3IEC", &WindTurbineType3IEC_factory);
}

void WindTurbineType3IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType3IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:WindTurbineType3IEC.WindAeroOneDimIEC", &assign_WindTurbineType3IEC_WindAeroOneDimIEC);
	assign_map.emplace("cim:WindTurbineType3IEC.WindAeroTwoDimIEC", &assign_WindTurbineType3IEC_WindAeroTwoDimIEC);
	assign_map.emplace("cim:WindTurbineType3IEC.WindContPType3IEC", &assign_WindTurbineType3IEC_WindContPType3IEC);
	assign_map.emplace("cim:WindTurbineType3IEC.WindContPitchAngleIEC", &assign_WindTurbineType3IEC_WindContPitchAngleIEC);
	assign_map.emplace("cim:WindTurbineType3IEC.WindGenType3IEC", &assign_WindTurbineType3IEC_WindGenType3IEC);
	assign_map.emplace("cim:WindTurbineType3IEC.WindMechIEC", &assign_WindTurbineType3IEC_WindMechIEC);
}

void WindTurbineType3IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4IEC::addPrimitiveGetFnsToMap(get_map);
}

void WindTurbineType3IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType3or4IEC::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:WindTurbineType3IEC.WindAeroOneDimIEC", &get_WindTurbineType3IEC_WindAeroOneDimIEC);
	get_map.emplace("cim:WindTurbineType3IEC.WindAeroTwoDimIEC", &get_WindTurbineType3IEC_WindAeroTwoDimIEC);
	get_map.emplace("cim:WindTurbineType3IEC.WindContPType3IEC", &get_WindTurbineType3IEC_WindContPType3IEC);
	get_map.emplace("cim:WindTurbineType3IEC.WindContPitchAngleIEC", &get_WindTurbineType3IEC_WindContPitchAngleIEC);
	get_map.emplace("cim:WindTurbineType3IEC.WindGenType3IEC", &get_WindTurbineType3IEC_WindGenType3IEC);
	get_map.emplace("cim:WindTurbineType3IEC.WindMechIEC", &get_WindTurbineType3IEC_WindMechIEC);
}

void WindTurbineType3IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4IEC::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindTurbineType3IEC::declare()
{
	return BaseClassDefiner(WindTurbineType3IEC::addConstructToMap, WindTurbineType3IEC::addPrimitiveAssignFnsToMap, WindTurbineType3IEC::addClassAssignFnsToMap, WindTurbineType3IEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindTurbineType3IEC_factory()
	{
		return new WindTurbineType3IEC;
	}
}
