/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ConformLoad.hpp"

#include <algorithm>
#include <sstream>

#include "ConformLoadGroup.hpp"

using namespace CIMPP;

ConformLoad::ConformLoad() : LoadGroup(nullptr) {};
ConformLoad::~ConformLoad() {};




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
