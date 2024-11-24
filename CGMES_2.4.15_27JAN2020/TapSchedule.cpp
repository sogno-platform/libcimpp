/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TapSchedule.hpp"

#include <algorithm>
#include <sstream>

#include "TapChanger.hpp"

using namespace CIMPP;

TapSchedule::TapSchedule() : TapChanger(nullptr) {};
TapSchedule::~TapSchedule() {};




bool assign_TapChanger_TapSchedules(BaseClass*, BaseClass*);
bool assign_TapSchedule_TapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TapSchedule* element = dynamic_cast<TapSchedule*>(BaseClass_ptr1);
	TapChanger* element2 = dynamic_cast<TapChanger*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TapChanger != element2)
		{
			element->TapChanger = element2;
			return assign_TapChanger_TapSchedules(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char TapSchedule::debugName[] = "TapSchedule";
const char* TapSchedule::debugString() const
{
	return TapSchedule::debugName;
}

void TapSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TapSchedule"), &TapSchedule_factory));
}

void TapSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void TapSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TapSchedule.TapChanger"), &assign_TapSchedule_TapChanger));
}

const BaseClassDefiner TapSchedule::declare()
{
	return BaseClassDefiner(TapSchedule::addConstructToMap, TapSchedule::addPrimitiveAssignFnsToMap, TapSchedule::addClassAssignFnsToMap, TapSchedule::debugName);
}

namespace CIMPP
{
	BaseClass* TapSchedule_factory()
	{
		return new TapSchedule;
	}
}
