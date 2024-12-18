/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RegulationSchedule.hpp"

#include <algorithm>
#include <sstream>

#include "RegulatingControl.hpp"

using namespace CIMPP;

RegulationSchedule::RegulationSchedule() : RegulatingControl(nullptr) {};
RegulationSchedule::~RegulationSchedule() {};




bool assign_RegulatingControl_RegulationSchedule(BaseClass*, BaseClass*);
bool assign_RegulationSchedule_RegulatingControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RegulationSchedule* element = dynamic_cast<RegulationSchedule*>(BaseClass_ptr1);
	RegulatingControl* element2 = dynamic_cast<RegulatingControl*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RegulatingControl != element2)
		{
			element->RegulatingControl = element2;
			return assign_RegulatingControl_RegulationSchedule(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char RegulationSchedule::debugName[] = "RegulationSchedule";
const char* RegulationSchedule::debugString() const
{
	return RegulationSchedule::debugName;
}

void RegulationSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:RegulationSchedule"), &RegulationSchedule_factory));
}

void RegulationSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void RegulationSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RegulationSchedule.RegulatingControl"), &assign_RegulationSchedule_RegulatingControl));
}

const BaseClassDefiner RegulationSchedule::declare()
{
	return BaseClassDefiner(RegulationSchedule::addConstructToMap, RegulationSchedule::addPrimitiveAssignFnsToMap, RegulationSchedule::addClassAssignFnsToMap, RegulationSchedule::debugName);
}

namespace CIMPP
{
	BaseClass* RegulationSchedule_factory()
	{
		return new RegulationSchedule;
	}
}
