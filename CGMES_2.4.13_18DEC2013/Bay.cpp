/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Bay.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "VoltageLevel.hpp"

using namespace CIMPP;

Bay::Bay() : VoltageLevel(nullptr) {};
Bay::~Bay() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Bay.VoltageLevel", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
Bay::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Bay::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EquipmentContainer::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_VoltageLevel_Bays(BaseClass*, BaseClass*);
bool assign_Bay_VoltageLevel(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Bay* element = dynamic_cast<Bay*>(BaseClass_ptr1);
	VoltageLevel* element2 = dynamic_cast<VoltageLevel*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VoltageLevel != element2)
		{
			element->VoltageLevel = element2;
			return assign_VoltageLevel_Bays(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_Bay_VoltageLevel(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const Bay* element = dynamic_cast<const Bay*>(BaseClass_ptr1))
	{
		if (element->VoltageLevel != 0)
		{
			BaseClass_list.push_back(element->VoltageLevel);
			return true;
		}
	}
	return false;
}


const char Bay::debugName[] = "Bay";
const char* Bay::debugString() const
{
	return Bay::debugName;
}

void Bay::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Bay"), &Bay_factory));
}

void Bay::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Bay::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Bay.VoltageLevel"), &assign_Bay_VoltageLevel));
}

void Bay::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addPrimitiveGetFnsToMap(get_map);
}

void Bay::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquipmentContainer::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:Bay.VoltageLevel", &get_Bay_VoltageLevel);
}

void Bay::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Bay::declare()
{
	return BaseClassDefiner(Bay::addConstructToMap, Bay::addPrimitiveAssignFnsToMap, Bay::addClassAssignFnsToMap, Bay::debugName);
}

namespace CIMPP
{
	BaseClass* Bay_factory()
	{
		return new Bay;
	}
}
