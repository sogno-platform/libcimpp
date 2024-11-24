/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindPlantFreqPcontrolIEC.hpp"
#include "WindPlantReactiveControlIEC.hpp"

using namespace CIMPP;

WindPlantIEC::WindPlantIEC() : WindPlantFreqPcontrolIEC(nullptr), WindPlantReactiveControlIEC(nullptr) {};
WindPlantIEC::~WindPlantIEC() {};





bool assign_WindPlantFreqPcontrolIEC_WindPlantIEC(BaseClass*, BaseClass*);
bool assign_WindPlantIEC_WindPlantFreqPcontrolIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantIEC* element = dynamic_cast<WindPlantIEC*>(BaseClass_ptr1);
	WindPlantFreqPcontrolIEC* element2 = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantFreqPcontrolIEC != element2)
		{
			element->WindPlantFreqPcontrolIEC = element2;
			return assign_WindPlantFreqPcontrolIEC_WindPlantIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_WindPlantIEC(BaseClass*, BaseClass*);
bool assign_WindPlantIEC_WindPlantReactiveControlIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantIEC* element = dynamic_cast<WindPlantIEC*>(BaseClass_ptr1);
	WindPlantReactiveControlIEC* element2 = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantReactiveControlIEC != element2)
		{
			element->WindPlantReactiveControlIEC = element2;
			return assign_WindPlantReactiveControlIEC_WindPlantIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char WindPlantIEC::debugName[] = "WindPlantIEC";
const char* WindPlantIEC::debugString() const
{
	return WindPlantIEC::debugName;
}

void WindPlantIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindPlantIEC"), &WindPlantIEC_factory));
}

void WindPlantIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindPlantIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindPlantIEC.WindPlantFreqPcontrolIEC"), &assign_WindPlantIEC_WindPlantFreqPcontrolIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantIEC.WindPlantReactiveControlIEC"), &assign_WindPlantIEC_WindPlantReactiveControlIEC));
}

const BaseClassDefiner WindPlantIEC::declare()
{
	return BaseClassDefiner(WindPlantIEC::addConstructToMap, WindPlantIEC::addPrimitiveAssignFnsToMap, WindPlantIEC::addClassAssignFnsToMap, WindPlantIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindPlantIEC_factory()
	{
		return new WindPlantIEC;
	}
}
