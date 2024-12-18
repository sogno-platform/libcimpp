/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType1bIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindPitchContPowerIEC.hpp"

using namespace CIMPP;

WindGenTurbineType1bIEC::WindGenTurbineType1bIEC() : WindPitchContPowerIEC(nullptr) {};
WindGenTurbineType1bIEC::~WindGenTurbineType1bIEC() {};




bool assign_WindPitchContPowerIEC_WindGenTurbineType1bIEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType1bIEC_WindPitchContPowerIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType1bIEC* element = dynamic_cast<WindGenTurbineType1bIEC*>(BaseClass_ptr1);
	WindPitchContPowerIEC* element2 = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPitchContPowerIEC != element2)
		{
			element->WindPitchContPowerIEC = element2;
			return assign_WindPitchContPowerIEC_WindGenTurbineType1bIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char WindGenTurbineType1bIEC::debugName[] = "WindGenTurbineType1bIEC";
const char* WindGenTurbineType1bIEC::debugString() const
{
	return WindGenTurbineType1bIEC::debugName;
}

void WindGenTurbineType1bIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindGenTurbineType1bIEC"), &WindGenTurbineType1bIEC_factory));
}

void WindGenTurbineType1bIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindGenTurbineType1bIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType1bIEC.WindPitchContPowerIEC"), &assign_WindGenTurbineType1bIEC_WindPitchContPowerIEC));
}

const BaseClassDefiner WindGenTurbineType1bIEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType1bIEC::addConstructToMap, WindGenTurbineType1bIEC::addPrimitiveAssignFnsToMap, WindGenTurbineType1bIEC::addClassAssignFnsToMap, WindGenTurbineType1bIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindGenTurbineType1bIEC_factory()
	{
		return new WindGenTurbineType1bIEC;
	}
}
