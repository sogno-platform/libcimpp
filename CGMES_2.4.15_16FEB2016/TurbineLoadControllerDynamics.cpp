/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TurbineLoadControllerDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "TurbineGovernorDynamics.hpp"

using namespace CIMPP;

TurbineLoadControllerDynamics::TurbineLoadControllerDynamics() : TurbineGovernorDynamics(nullptr) {}
TurbineLoadControllerDynamics::~TurbineLoadControllerDynamics() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:TurbineLoadControllerDynamics.TurbineGovernorDynamics", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
TurbineLoadControllerDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
TurbineLoadControllerDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_TurbineGovernorDynamics_TurbineLoadControllerDynamics(BaseClass*, BaseClass*);
bool assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TurbineLoadControllerDynamics* element = dynamic_cast<TurbineLoadControllerDynamics*>(BaseClass_ptr1);
	TurbineGovernorDynamics* element2 = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TurbineGovernorDynamics != element2)
		{
			element->TurbineGovernorDynamics = element2;
			return assign_TurbineGovernorDynamics_TurbineLoadControllerDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_TurbineLoadControllerDynamics_TurbineGovernorDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const TurbineLoadControllerDynamics* element = dynamic_cast<const TurbineLoadControllerDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->TurbineGovernorDynamics != 0)
		{
			BaseClass_list.push_back(element->TurbineGovernorDynamics);
			return true;
		}
	}
	return false;
}

const char TurbineLoadControllerDynamics::debugName[] = "TurbineLoadControllerDynamics";
const char* TurbineLoadControllerDynamics::debugString() const
{
	return TurbineLoadControllerDynamics::debugName;
}

void TurbineLoadControllerDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:TurbineLoadControllerDynamics", &TurbineLoadControllerDynamics_factory);
}

void TurbineLoadControllerDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void TurbineLoadControllerDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:TurbineLoadControllerDynamics.TurbineGovernorDynamics", &assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics);
}

void TurbineLoadControllerDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void TurbineLoadControllerDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:TurbineLoadControllerDynamics.TurbineGovernorDynamics", &get_TurbineLoadControllerDynamics_TurbineGovernorDynamics);
}

void TurbineLoadControllerDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner TurbineLoadControllerDynamics::declare()
{
	return BaseClassDefiner(TurbineLoadControllerDynamics::addConstructToMap, TurbineLoadControllerDynamics::addPrimitiveAssignFnsToMap, TurbineLoadControllerDynamics::addClassAssignFnsToMap, TurbineLoadControllerDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* TurbineLoadControllerDynamics_factory()
	{
		return new TurbineLoadControllerDynamics;
	}
}
