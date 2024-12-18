/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindTurbineType4bIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindContPType4bIEC.hpp"
#include "WindGenType4IEC.hpp"
#include "WindMechIEC.hpp"

using namespace CIMPP;

WindTurbineType4bIEC::WindTurbineType4bIEC() : WindContPType4bIEC(nullptr), WindGenType4IEC(nullptr), WindMechIEC(nullptr) {};
WindTurbineType4bIEC::~WindTurbineType4bIEC() {};






bool assign_WindContPType4bIEC_WindTurbineType4bIEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType4bIEC_WindContPType4bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType4bIEC* element = dynamic_cast<WindTurbineType4bIEC*>(BaseClass_ptr1);
	WindContPType4bIEC* element2 = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPType4bIEC != element2)
		{
			element->WindContPType4bIEC = element2;
			return assign_WindContPType4bIEC_WindTurbineType4bIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGenType4IEC_WindTurbineType4bIEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType4bIEC_WindGenType4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType4bIEC* element = dynamic_cast<WindTurbineType4bIEC*>(BaseClass_ptr1);
	WindGenType4IEC* element2 = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenType4IEC != element2)
		{
			element->WindGenType4IEC = element2;
			return assign_WindGenType4IEC_WindTurbineType4bIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindMechIEC_WindTurbineType4bIEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType4bIEC_WindMechIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType4bIEC* element = dynamic_cast<WindTurbineType4bIEC*>(BaseClass_ptr1);
	WindMechIEC* element2 = dynamic_cast<WindMechIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindMechIEC != element2)
		{
			element->WindMechIEC = element2;
			return assign_WindMechIEC_WindTurbineType4bIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char WindTurbineType4bIEC::debugName[] = "WindTurbineType4bIEC";
const char* WindTurbineType4bIEC::debugString() const
{
	return WindTurbineType4bIEC::debugName;
}

void WindTurbineType4bIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindTurbineType4bIEC"), &WindTurbineType4bIEC_factory));
}

void WindTurbineType4bIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType4bIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType4bIEC.WindContPType4bIEC"), &assign_WindTurbineType4bIEC_WindContPType4bIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType4bIEC.WindGenType4IEC"), &assign_WindTurbineType4bIEC_WindGenType4IEC));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType4bIEC.WindMechIEC"), &assign_WindTurbineType4bIEC_WindMechIEC));
}

const BaseClassDefiner WindTurbineType4bIEC::declare()
{
	return BaseClassDefiner(WindTurbineType4bIEC::addConstructToMap, WindTurbineType4bIEC::addPrimitiveAssignFnsToMap, WindTurbineType4bIEC::addClassAssignFnsToMap, WindTurbineType4bIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindTurbineType4bIEC_factory()
	{
		return new WindTurbineType4bIEC;
	}
}
