/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SwitchSchedule.hpp"

#include <algorithm>
#include <sstream>

#include "Switch.hpp"

using namespace CIMPP;

SwitchSchedule::SwitchSchedule() : Switch(nullptr) {};
SwitchSchedule::~SwitchSchedule() {};




bool assign_Switch_SwitchSchedules(BaseClass*, BaseClass*);
bool assign_SwitchSchedule_Switch(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SwitchSchedule* element = dynamic_cast<SwitchSchedule*>(BaseClass_ptr1);
	Switch* element2 = dynamic_cast<Switch*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Switch != element2)
		{
			element->Switch = element2;
			return assign_Switch_SwitchSchedules(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char SwitchSchedule::debugName[] = "SwitchSchedule";
const char* SwitchSchedule::debugString() const
{
	return SwitchSchedule::debugName;
}

void SwitchSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SwitchSchedule"), &SwitchSchedule_factory));
}

void SwitchSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SwitchSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SwitchSchedule.Switch"), &assign_SwitchSchedule_Switch));
}

const BaseClassDefiner SwitchSchedule::declare()
{
	return BaseClassDefiner(SwitchSchedule::addConstructToMap, SwitchSchedule::addPrimitiveAssignFnsToMap, SwitchSchedule::addClassAssignFnsToMap, SwitchSchedule::debugName);
}

namespace CIMPP
{
	BaseClass* SwitchSchedule_factory()
	{
		return new SwitchSchedule;
	}
}
