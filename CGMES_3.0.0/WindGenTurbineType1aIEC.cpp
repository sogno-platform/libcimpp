/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType1aIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindAeroConstIEC.hpp"

using namespace CIMPP;

WindGenTurbineType1aIEC::WindGenTurbineType1aIEC() : WindAeroConstIEC(nullptr) {};
WindGenTurbineType1aIEC::~WindGenTurbineType1aIEC() {};




bool assign_WindAeroConstIEC_WindGenTurbineType1aIEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType1aIEC_WindAeroConstIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType1aIEC* element = dynamic_cast<WindGenTurbineType1aIEC*>(BaseClass_ptr1);
	WindAeroConstIEC* element2 = dynamic_cast<WindAeroConstIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindAeroConstIEC != element2)
		{
			element->WindAeroConstIEC = element2;
			return assign_WindAeroConstIEC_WindGenTurbineType1aIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char WindGenTurbineType1aIEC::debugName[] = "WindGenTurbineType1aIEC";
const char* WindGenTurbineType1aIEC::debugString() const
{
	return WindGenTurbineType1aIEC::debugName;
}

void WindGenTurbineType1aIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindGenTurbineType1aIEC"), &WindGenTurbineType1aIEC_factory));
}

void WindGenTurbineType1aIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindGenTurbineType1aIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType1aIEC.WindAeroConstIEC"), &assign_WindGenTurbineType1aIEC_WindAeroConstIEC));
}

const BaseClassDefiner WindGenTurbineType1aIEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType1aIEC::addConstructToMap, WindGenTurbineType1aIEC::addPrimitiveAssignFnsToMap, WindGenTurbineType1aIEC::addClassAssignFnsToMap, WindGenTurbineType1aIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindGenTurbineType1aIEC_factory()
	{
		return new WindGenTurbineType1aIEC;
	}
}
