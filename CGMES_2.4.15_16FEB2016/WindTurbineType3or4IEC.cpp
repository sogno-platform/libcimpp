/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindTurbineType3or4IEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindContQIEC.hpp"
#include "WindContCurrLimIEC.hpp"
#include "WindProtectionIEC.hpp"

using namespace CIMPP;

WindTurbineType3or4IEC::WindTurbineType3or4IEC() : WIndContQIEC(nullptr), WindContCurrLimIEC(nullptr), WindProtectionIEC(nullptr) {};
WindTurbineType3or4IEC::~WindTurbineType3or4IEC() {};






bool assign_WindContQIEC_WindTurbineType3or4IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4IEC_WIndContQIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3or4IEC* element = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr1);
	WindContQIEC* element2 = dynamic_cast<WindContQIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WIndContQIEC != element2)
		{
			element->WIndContQIEC = element2;
			return assign_WindContQIEC_WindTurbineType3or4IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContCurrLimIEC_WindTurbineType3or4IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4IEC_WindContCurrLimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3or4IEC* element = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr1);
	WindContCurrLimIEC* element2 = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContCurrLimIEC != element2)
		{
			element->WindContCurrLimIEC = element2;
			return assign_WindContCurrLimIEC_WindTurbineType3or4IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindProtectionIEC_WindTurbineType3or4IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4IEC_WindProtectionIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3or4IEC* element = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr1);
	WindProtectionIEC* element2 = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindProtectionIEC != element2)
		{
			element->WindProtectionIEC = element2;
			return assign_WindProtectionIEC_WindTurbineType3or4IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char WindTurbineType3or4IEC::debugName[] = "WindTurbineType3or4IEC";
const char* WindTurbineType3or4IEC::debugString() const
{
	return WindTurbineType3or4IEC::debugName;
}

void WindTurbineType3or4IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindTurbineType3or4IEC"), &WindTurbineType3or4IEC_factory));
}

void WindTurbineType3or4IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType3or4IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3or4IEC.WIndContQIEC"), &assign_WindTurbineType3or4IEC_WIndContQIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3or4IEC.WindContCurrLimIEC"), &assign_WindTurbineType3or4IEC_WindContCurrLimIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3or4IEC.WindProtectionIEC"), &assign_WindTurbineType3or4IEC_WindProtectionIEC));
}

const BaseClassDefiner WindTurbineType3or4IEC::declare()
{
	return BaseClassDefiner(WindTurbineType3or4IEC::addConstructToMap, WindTurbineType3or4IEC::addPrimitiveAssignFnsToMap, WindTurbineType3or4IEC::addClassAssignFnsToMap, WindTurbineType3or4IEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindTurbineType3or4IEC_factory()
	{
		return new WindTurbineType3or4IEC;
	}
}
