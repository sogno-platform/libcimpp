/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TapChangerControl.hpp"

#include <algorithm>
#include <sstream>

#include "TapChanger.hpp"

using namespace CIMPP;

TapChangerControl::TapChangerControl() {};
TapChangerControl::~TapChangerControl() {};




bool assign_TapChanger_TapChangerControl(BaseClass*, BaseClass*);
bool assign_TapChangerControl_TapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TapChangerControl* element = dynamic_cast<TapChangerControl*>(BaseClass_ptr1);
	TapChanger* element2 = dynamic_cast<TapChanger*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TapChanger.begin(), element->TapChanger.end(), element2) == element->TapChanger.end())
		{
			element->TapChanger.push_back(element2);
			return assign_TapChanger_TapChangerControl(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char TapChangerControl::debugName[] = "TapChangerControl";
const char* TapChangerControl::debugString() const
{
	return TapChangerControl::debugName;
}

void TapChangerControl::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TapChangerControl"), &TapChangerControl_factory));
}

void TapChangerControl::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void TapChangerControl::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TapChangerControl.TapChanger"), &assign_TapChangerControl_TapChanger));
}

const BaseClassDefiner TapChangerControl::declare()
{
	return BaseClassDefiner(TapChangerControl::addConstructToMap, TapChangerControl::addPrimitiveAssignFnsToMap, TapChangerControl::addClassAssignFnsToMap, TapChangerControl::debugName);
}

namespace CIMPP
{
	BaseClass* TapChangerControl_factory()
	{
		return new TapChangerControl;
	}
}
