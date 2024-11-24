/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType2IEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindContRotorRIEC.hpp"
#include "WindPitchContPowerIEC.hpp"

using namespace CIMPP;

WindGenTurbineType2IEC::WindGenTurbineType2IEC() : WindContRotorRIEC(nullptr), WindPitchContPowerIEC(nullptr) {};
WindGenTurbineType2IEC::~WindGenTurbineType2IEC() {};





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

const char WindGenTurbineType2IEC::debugName[] = "WindGenTurbineType2IEC";
const char* WindGenTurbineType2IEC::debugString() const
{
	return WindGenTurbineType2IEC::debugName;
}

void WindGenTurbineType2IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindGenTurbineType2IEC"), &WindGenTurbineType2IEC_factory));
}

void WindGenTurbineType2IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindGenTurbineType2IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType2IEC.WindContRotorRIEC"), &assign_WindGenTurbineType2IEC_WindContRotorRIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType2IEC.WindPitchContPowerIEC"), &assign_WindGenTurbineType2IEC_WindPitchContPowerIEC));
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
