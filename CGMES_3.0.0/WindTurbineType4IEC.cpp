/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindTurbineType4IEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindGenType3aIEC.hpp"

using namespace CIMPP;

WindTurbineType4IEC::WindTurbineType4IEC() : WindGenType3aIEC(nullptr) {};
WindTurbineType4IEC::~WindTurbineType4IEC() {};




bool assign_WindGenType3aIEC_WindTurbineType4IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType4IEC_WindGenType3aIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType4IEC* element = dynamic_cast<WindTurbineType4IEC*>(BaseClass_ptr1);
	WindGenType3aIEC* element2 = dynamic_cast<WindGenType3aIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenType3aIEC != element2)
		{
			element->WindGenType3aIEC = element2;
			return assign_WindGenType3aIEC_WindTurbineType4IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char WindTurbineType4IEC::debugName[] = "WindTurbineType4IEC";
const char* WindTurbineType4IEC::debugString() const
{
	return WindTurbineType4IEC::debugName;
}

void WindTurbineType4IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindTurbineType4IEC"), &WindTurbineType4IEC_factory));
}

void WindTurbineType4IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType4IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType4IEC.WindGenType3aIEC"), &assign_WindTurbineType4IEC_WindGenType3aIEC));
}

const BaseClassDefiner WindTurbineType4IEC::declare()
{
	return BaseClassDefiner(WindTurbineType4IEC::addConstructToMap, WindTurbineType4IEC::addPrimitiveAssignFnsToMap, WindTurbineType4IEC::addClassAssignFnsToMap, WindTurbineType4IEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindTurbineType4IEC_factory()
	{
		return new WindTurbineType4IEC;
	}
}
