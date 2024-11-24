/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadGroup.hpp"

#include <algorithm>
#include <sstream>

#include "SubLoadArea.hpp"

using namespace CIMPP;

LoadGroup::LoadGroup() : SubLoadArea(nullptr) {};
LoadGroup::~LoadGroup() {};




bool assign_SubLoadArea_LoadGroups(BaseClass*, BaseClass*);
bool assign_LoadGroup_SubLoadArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadGroup* element = dynamic_cast<LoadGroup*>(BaseClass_ptr1);
	SubLoadArea* element2 = dynamic_cast<SubLoadArea*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SubLoadArea != element2)
		{
			element->SubLoadArea = element2;
			return assign_SubLoadArea_LoadGroups(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char LoadGroup::debugName[] = "LoadGroup";
const char* LoadGroup::debugString() const
{
	return LoadGroup::debugName;
}

void LoadGroup::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:LoadGroup"), &LoadGroup_factory));
}

void LoadGroup::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void LoadGroup::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:LoadGroup.SubLoadArea"), &assign_LoadGroup_SubLoadArea));
}

const BaseClassDefiner LoadGroup::declare()
{
	return BaseClassDefiner(LoadGroup::addConstructToMap, LoadGroup::addPrimitiveAssignFnsToMap, LoadGroup::addClassAssignFnsToMap, LoadGroup::debugName);
}

namespace CIMPP
{
	BaseClass* LoadGroup_factory()
	{
		return new LoadGroup;
	}
}
