/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "HVDCDynamics.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

HVDCDynamics::HVDCDynamics() {};
HVDCDynamics::~HVDCDynamics() {};



const char HVDCDynamics::debugName[] = "HVDCDynamics";
const char* HVDCDynamics::debugString() const
{
	return HVDCDynamics::debugName;
}

void HVDCDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:HVDCDynamics"), &HVDCDynamics_factory));
}

void HVDCDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void HVDCDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner HVDCDynamics::declare()
{
	return BaseClassDefiner(HVDCDynamics::addConstructToMap, HVDCDynamics::addPrimitiveAssignFnsToMap, HVDCDynamics::addClassAssignFnsToMap, HVDCDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* HVDCDynamics_factory()
	{
		return new HVDCDynamics;
	}
}
