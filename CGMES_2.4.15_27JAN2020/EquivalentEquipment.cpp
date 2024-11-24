/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquivalentEquipment.hpp"

#include <algorithm>
#include <sstream>

#include "EquivalentNetwork.hpp"

using namespace CIMPP;

EquivalentEquipment::EquivalentEquipment() : EquivalentNetwork(nullptr) {};
EquivalentEquipment::~EquivalentEquipment() {};




bool assign_EquivalentNetwork_EquivalentEquipments(BaseClass*, BaseClass*);
bool assign_EquivalentEquipment_EquivalentNetwork(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EquivalentEquipment* element = dynamic_cast<EquivalentEquipment*>(BaseClass_ptr1);
	EquivalentNetwork* element2 = dynamic_cast<EquivalentNetwork*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->EquivalentNetwork != element2)
		{
			element->EquivalentNetwork = element2;
			return assign_EquivalentNetwork_EquivalentEquipments(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char EquivalentEquipment::debugName[] = "EquivalentEquipment";
const char* EquivalentEquipment::debugString() const
{
	return EquivalentEquipment::debugName;
}

void EquivalentEquipment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:EquivalentEquipment"), &EquivalentEquipment_factory));
}

void EquivalentEquipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void EquivalentEquipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EquivalentEquipment.EquivalentNetwork"), &assign_EquivalentEquipment_EquivalentNetwork));
}

const BaseClassDefiner EquivalentEquipment::declare()
{
	return BaseClassDefiner(EquivalentEquipment::addConstructToMap, EquivalentEquipment::addPrimitiveAssignFnsToMap, EquivalentEquipment::addClassAssignFnsToMap, EquivalentEquipment::debugName);
}

namespace CIMPP
{
	BaseClass* EquivalentEquipment_factory()
	{
		return new EquivalentEquipment;
	}
}
