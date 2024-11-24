/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCTerminal.hpp"

#include <algorithm>
#include <sstream>

#include "DCConductingEquipment.hpp"

using namespace CIMPP;

DCTerminal::DCTerminal() : DCConductingEquipment(nullptr) {};
DCTerminal::~DCTerminal() {};




bool assign_DCConductingEquipment_DCTerminals(BaseClass*, BaseClass*);
bool assign_DCTerminal_DCConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCTerminal* element = dynamic_cast<DCTerminal*>(BaseClass_ptr1);
	DCConductingEquipment* element2 = dynamic_cast<DCConductingEquipment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DCConductingEquipment != element2)
		{
			element->DCConductingEquipment = element2;
			return assign_DCConductingEquipment_DCTerminals(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char DCTerminal::debugName[] = "DCTerminal";
const char* DCTerminal::debugString() const
{
	return DCTerminal::debugName;
}

void DCTerminal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCTerminal"), &DCTerminal_factory));
}

void DCTerminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCTerminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DCTerminal.DCConductingEquipment"), &assign_DCTerminal_DCConductingEquipment));
}

const BaseClassDefiner DCTerminal::declare()
{
	return BaseClassDefiner(DCTerminal::addConstructToMap, DCTerminal::addPrimitiveAssignFnsToMap, DCTerminal::addClassAssignFnsToMap, DCTerminal::debugName);
}

namespace CIMPP
{
	BaseClass* DCTerminal_factory()
	{
		return new DCTerminal;
	}
}
