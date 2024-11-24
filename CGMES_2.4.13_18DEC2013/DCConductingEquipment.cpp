/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCConductingEquipment.hpp"

#include <algorithm>
#include <sstream>

#include "DCTerminal.hpp"

using namespace CIMPP;

DCConductingEquipment::DCConductingEquipment() {};
DCConductingEquipment::~DCConductingEquipment() {};




bool assign_DCTerminal_DCConductingEquipment(BaseClass*, BaseClass*);
bool assign_DCConductingEquipment_DCTerminals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCConductingEquipment* element = dynamic_cast<DCConductingEquipment*>(BaseClass_ptr1);
	DCTerminal* element2 = dynamic_cast<DCTerminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCTerminals.begin(), element->DCTerminals.end(), element2) == element->DCTerminals.end())
		{
			element->DCTerminals.push_back(element2);
			return assign_DCTerminal_DCConductingEquipment(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char DCConductingEquipment::debugName[] = "DCConductingEquipment";
const char* DCConductingEquipment::debugString() const
{
	return DCConductingEquipment::debugName;
}

void DCConductingEquipment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCConductingEquipment"), &DCConductingEquipment_factory));
}

void DCConductingEquipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCConductingEquipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DCConductingEquipment.DCTerminals"), &assign_DCConductingEquipment_DCTerminals));
}

const BaseClassDefiner DCConductingEquipment::declare()
{
	return BaseClassDefiner(DCConductingEquipment::addConstructToMap, DCConductingEquipment::addPrimitiveAssignFnsToMap, DCConductingEquipment::addClassAssignFnsToMap, DCConductingEquipment::debugName);
}

namespace CIMPP
{
	BaseClass* DCConductingEquipment_factory()
	{
		return new DCConductingEquipment;
	}
}
