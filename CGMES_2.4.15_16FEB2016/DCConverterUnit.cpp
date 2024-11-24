/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCConverterUnit.hpp"

#include <algorithm>
#include <sstream>

#include "Substation.hpp"
#include "DCConverterOperatingModeKind.hpp"

using namespace CIMPP;

DCConverterUnit::DCConverterUnit() : Substation(nullptr) {};
DCConverterUnit::~DCConverterUnit() {};



bool assign_DCConverterUnit_operationMode(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DCConverterUnit* element = dynamic_cast<DCConverterUnit*>(BaseClass_ptr1))
	{
		buffer >> element->operationMode;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_Substation_DCConverterUnit(BaseClass*, BaseClass*);
bool assign_DCConverterUnit_Substation(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCConverterUnit* element = dynamic_cast<DCConverterUnit*>(BaseClass_ptr1);
	Substation* element2 = dynamic_cast<Substation*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Substation != element2)
		{
			element->Substation = element2;
			return assign_Substation_DCConverterUnit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char DCConverterUnit::debugName[] = "DCConverterUnit";
const char* DCConverterUnit::debugString() const
{
	return DCConverterUnit::debugName;
}

void DCConverterUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCConverterUnit"), &DCConverterUnit_factory));
}

void DCConverterUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DCConverterUnit.operationMode"), &assign_DCConverterUnit_operationMode));
}

void DCConverterUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DCConverterUnit.Substation"), &assign_DCConverterUnit_Substation));
}

const BaseClassDefiner DCConverterUnit::declare()
{
	return BaseClassDefiner(DCConverterUnit::addConstructToMap, DCConverterUnit::addPrimitiveAssignFnsToMap, DCConverterUnit::addClassAssignFnsToMap, DCConverterUnit::debugName);
}

namespace CIMPP
{
	BaseClass* DCConverterUnit_factory()
	{
		return new DCConverterUnit;
	}
}
