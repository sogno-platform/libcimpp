/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindAeroConstIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindGenTurbineType1aIEC.hpp"

using namespace CIMPP;

WindAeroConstIEC::WindAeroConstIEC() : WindGenTurbineType1aIEC(nullptr) {};
WindAeroConstIEC::~WindAeroConstIEC() {};




bool assign_WindGenTurbineType1aIEC_WindAeroConstIEC(BaseClass*, BaseClass*);
bool assign_WindAeroConstIEC_WindGenTurbineType1aIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindAeroConstIEC* element = dynamic_cast<WindAeroConstIEC*>(BaseClass_ptr1);
	WindGenTurbineType1aIEC* element2 = dynamic_cast<WindGenTurbineType1aIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType1aIEC != element2)
		{
			element->WindGenTurbineType1aIEC = element2;
			return assign_WindGenTurbineType1aIEC_WindAeroConstIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char WindAeroConstIEC::debugName[] = "WindAeroConstIEC";
const char* WindAeroConstIEC::debugString() const
{
	return WindAeroConstIEC::debugName;
}

void WindAeroConstIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindAeroConstIEC"), &WindAeroConstIEC_factory));
}

void WindAeroConstIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindAeroConstIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindAeroConstIEC.WindGenTurbineType1aIEC"), &assign_WindAeroConstIEC_WindGenTurbineType1aIEC));
}

const BaseClassDefiner WindAeroConstIEC::declare()
{
	return BaseClassDefiner(WindAeroConstIEC::addConstructToMap, WindAeroConstIEC::addPrimitiveAssignFnsToMap, WindAeroConstIEC::addClassAssignFnsToMap, WindAeroConstIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindAeroConstIEC_factory()
	{
		return new WindAeroConstIEC;
	}
}
