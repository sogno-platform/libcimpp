/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TapChangerControl.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "TapChanger.hpp"

using namespace CIMPP;

TapChangerControl::TapChangerControl() {};
TapChangerControl::~TapChangerControl() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:TapChangerControl.TapChanger", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
TapChangerControl::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
TapChangerControl::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = RegulatingControl::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



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

void TapChangerControl::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingControl::addPrimitiveGetFnsToMap(get_map);
}

void TapChangerControl::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RegulatingControl::addClassGetFnsToMap(get_map);
}

void TapChangerControl::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingControl::addEnumGetFnsToMap(get_map);
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
