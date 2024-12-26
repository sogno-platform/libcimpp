/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadDynamics.hpp"

#include <algorithm>
#include <sstream>

#include "EnergyConsumer.hpp"

using namespace CIMPP;

LoadDynamics::LoadDynamics() {};
LoadDynamics::~LoadDynamics() {};




bool assign_EnergyConsumer_LoadDynamics(BaseClass*, BaseClass*);
bool assign_LoadDynamics_EnergyConsumer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadDynamics* element = dynamic_cast<LoadDynamics*>(BaseClass_ptr1);
	EnergyConsumer* element2 = dynamic_cast<EnergyConsumer*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->EnergyConsumer.begin(), element->EnergyConsumer.end(), element2) == element->EnergyConsumer.end())
		{
			element->EnergyConsumer.push_back(element2);
			return assign_EnergyConsumer_LoadDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char LoadDynamics::debugName[] = "LoadDynamics";
const char* LoadDynamics::debugString() const
{
	return LoadDynamics::debugName;
}

void LoadDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:LoadDynamics"), &LoadDynamics_factory));
}

void LoadDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void LoadDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:LoadDynamics.EnergyConsumer"), &assign_LoadDynamics_EnergyConsumer));
}

const BaseClassDefiner LoadDynamics::declare()
{
	return BaseClassDefiner(LoadDynamics::addConstructToMap, LoadDynamics::addPrimitiveAssignFnsToMap, LoadDynamics::addClassAssignFnsToMap, LoadDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* LoadDynamics_factory()
	{
		return new LoadDynamics;
	}
}
