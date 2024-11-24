/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerElectronicsWindUnit.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

PowerElectronicsWindUnit::PowerElectronicsWindUnit() {};
PowerElectronicsWindUnit::~PowerElectronicsWindUnit() {};



const char PowerElectronicsWindUnit::debugName[] = "PowerElectronicsWindUnit";
const char* PowerElectronicsWindUnit::debugString() const
{
	return PowerElectronicsWindUnit::debugName;
}

void PowerElectronicsWindUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PowerElectronicsWindUnit"), &PowerElectronicsWindUnit_factory));
}

void PowerElectronicsWindUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PowerElectronicsWindUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner PowerElectronicsWindUnit::declare()
{
	return BaseClassDefiner(PowerElectronicsWindUnit::addConstructToMap, PowerElectronicsWindUnit::addPrimitiveAssignFnsToMap, PowerElectronicsWindUnit::addClassAssignFnsToMap, PowerElectronicsWindUnit::debugName);
}

namespace CIMPP
{
	BaseClass* PowerElectronicsWindUnit_factory()
	{
		return new PowerElectronicsWindUnit;
	}
}
