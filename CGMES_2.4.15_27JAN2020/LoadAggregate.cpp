/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadAggregate.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "LoadMotor.hpp"
#include "LoadStatic.hpp"

using namespace CIMPP;

LoadAggregate::LoadAggregate() : LoadMotor(nullptr), LoadStatic(nullptr) {}
LoadAggregate::~LoadAggregate() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:LoadAggregate.LoadMotor", { CGMESProfile::DY, } },
	{ "cim:LoadAggregate.LoadStatic", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
LoadAggregate::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
LoadAggregate::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = LoadDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_LoadMotor_LoadAggregate(BaseClass*, BaseClass*);
bool assign_LoadAggregate_LoadMotor(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadAggregate* element = dynamic_cast<LoadAggregate*>(BaseClass_ptr1);
	LoadMotor* element2 = dynamic_cast<LoadMotor*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadMotor != element2)
		{
			element->LoadMotor = element2;
			return assign_LoadMotor_LoadAggregate(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_LoadStatic_LoadAggregate(BaseClass*, BaseClass*);
bool assign_LoadAggregate_LoadStatic(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadAggregate* element = dynamic_cast<LoadAggregate*>(BaseClass_ptr1);
	LoadStatic* element2 = dynamic_cast<LoadStatic*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadStatic != element2)
		{
			element->LoadStatic = element2;
			return assign_LoadStatic_LoadAggregate(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char LoadAggregate::debugName[] = "LoadAggregate";
const char* LoadAggregate::debugString() const
{
	return LoadAggregate::debugName;
}

void LoadAggregate::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:LoadAggregate", &LoadAggregate_factory);
}

void LoadAggregate::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void LoadAggregate::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:LoadAggregate.LoadMotor", &assign_LoadAggregate_LoadMotor);
	assign_map.emplace("cim:LoadAggregate.LoadStatic", &assign_LoadAggregate_LoadStatic);
}

void LoadAggregate::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadDynamics::addPrimitiveGetFnsToMap(get_map);
}

void LoadAggregate::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	LoadDynamics::addClassGetFnsToMap(get_map);
}

void LoadAggregate::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner LoadAggregate::declare()
{
	return BaseClassDefiner(LoadAggregate::addConstructToMap, LoadAggregate::addPrimitiveAssignFnsToMap, LoadAggregate::addClassAssignFnsToMap, LoadAggregate::debugName);
}

namespace CIMPP
{
	BaseClass* LoadAggregate_factory()
	{
		return new LoadAggregate;
	}
}
