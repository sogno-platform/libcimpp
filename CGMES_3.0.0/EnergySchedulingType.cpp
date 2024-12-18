/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EnergySchedulingType.hpp"

#include <algorithm>
#include <sstream>

#include "EnergySource.hpp"

using namespace CIMPP;

EnergySchedulingType::EnergySchedulingType() {};
EnergySchedulingType::~EnergySchedulingType() {};




bool assign_EnergySource_EnergySchedulingType(BaseClass*, BaseClass*);
bool assign_EnergySchedulingType_EnergySource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EnergySchedulingType* element = dynamic_cast<EnergySchedulingType*>(BaseClass_ptr1);
	EnergySource* element2 = dynamic_cast<EnergySource*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->EnergySource.begin(), element->EnergySource.end(), element2) == element->EnergySource.end())
		{
			element->EnergySource.push_back(element2);
			return assign_EnergySource_EnergySchedulingType(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char EnergySchedulingType::debugName[] = "EnergySchedulingType";
const char* EnergySchedulingType::debugString() const
{
	return EnergySchedulingType::debugName;
}

void EnergySchedulingType::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:EnergySchedulingType"), &EnergySchedulingType_factory));
}

void EnergySchedulingType::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void EnergySchedulingType::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EnergySchedulingType.EnergySource"), &assign_EnergySchedulingType_EnergySource));
}

const BaseClassDefiner EnergySchedulingType::declare()
{
	return BaseClassDefiner(EnergySchedulingType::addConstructToMap, EnergySchedulingType::addPrimitiveAssignFnsToMap, EnergySchedulingType::addClassAssignFnsToMap, EnergySchedulingType::debugName);
}

namespace CIMPP
{
	BaseClass* EnergySchedulingType_factory()
	{
		return new EnergySchedulingType;
	}
}
