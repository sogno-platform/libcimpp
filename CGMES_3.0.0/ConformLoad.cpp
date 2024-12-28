/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ConformLoad.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ConformLoadGroup.hpp"

using namespace CIMPP;

ConformLoad::ConformLoad() : LoadGroup(nullptr) {};
ConformLoad::~ConformLoad() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ConformLoad.LoadGroup", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
ConformLoad::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ConformLoad::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EnergyConsumer::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_ConformLoadGroup_EnergyConsumers(BaseClass*, BaseClass*);
bool assign_ConformLoad_LoadGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConformLoad* element = dynamic_cast<ConformLoad*>(BaseClass_ptr1);
	ConformLoadGroup* element2 = dynamic_cast<ConformLoadGroup*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadGroup != element2)
		{
			element->LoadGroup = element2;
			return assign_ConformLoadGroup_EnergyConsumers(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_ConformLoad_LoadGroup(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const ConformLoad* element = dynamic_cast<const ConformLoad*>(BaseClass_ptr1))
	{
		if (element->LoadGroup != 0)
		{
			BaseClass_list.push_back(element->LoadGroup);
			return true;
		}
	}
	return false;
}


const char ConformLoad::debugName[] = "ConformLoad";
const char* ConformLoad::debugString() const
{
	return ConformLoad::debugName;
}

void ConformLoad::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ConformLoad"), &ConformLoad_factory));
}

void ConformLoad::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ConformLoad::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ConformLoad.LoadGroup"), &assign_ConformLoad_LoadGroup));
}

void ConformLoad::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConsumer::addPrimitiveGetFnsToMap(get_map);
}

void ConformLoad::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EnergyConsumer::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:ConformLoad.LoadGroup", &get_ConformLoad_LoadGroup);
}

void ConformLoad::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConsumer::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ConformLoad::declare()
{
	return BaseClassDefiner(ConformLoad::addConstructToMap, ConformLoad::addPrimitiveAssignFnsToMap, ConformLoad::addClassAssignFnsToMap, ConformLoad::debugName);
}

namespace CIMPP
{
	BaseClass* ConformLoad_factory()
	{
		return new ConformLoad;
	}
}
