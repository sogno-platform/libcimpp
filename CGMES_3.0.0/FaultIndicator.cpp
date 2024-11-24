/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "FaultIndicator.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

FaultIndicator::FaultIndicator() {};
FaultIndicator::~FaultIndicator() {};



const char FaultIndicator::debugName[] = "FaultIndicator";
const char* FaultIndicator::debugString() const
{
	return FaultIndicator::debugName;
}

void FaultIndicator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:FaultIndicator"), &FaultIndicator_factory));
}

void FaultIndicator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void FaultIndicator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner FaultIndicator::declare()
{
	return BaseClassDefiner(FaultIndicator::addConstructToMap, FaultIndicator::addPrimitiveAssignFnsToMap, FaultIndicator::addClassAssignFnsToMap, FaultIndicator::debugName);
}

namespace CIMPP
{
	BaseClass* FaultIndicator_factory()
	{
		return new FaultIndicator;
	}
}
