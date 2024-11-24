/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineSimplified.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

SynchronousMachineSimplified::SynchronousMachineSimplified() {};
SynchronousMachineSimplified::~SynchronousMachineSimplified() {};



const char SynchronousMachineSimplified::debugName[] = "SynchronousMachineSimplified";
const char* SynchronousMachineSimplified::debugString() const
{
	return SynchronousMachineSimplified::debugName;
}

void SynchronousMachineSimplified::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SynchronousMachineSimplified"), &SynchronousMachineSimplified_factory));
}

void SynchronousMachineSimplified::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SynchronousMachineSimplified::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner SynchronousMachineSimplified::declare()
{
	return BaseClassDefiner(SynchronousMachineSimplified::addConstructToMap, SynchronousMachineSimplified::addPrimitiveAssignFnsToMap, SynchronousMachineSimplified::addClassAssignFnsToMap, SynchronousMachineSimplified::debugName);
}

namespace CIMPP
{
	BaseClass* SynchronousMachineSimplified_factory()
	{
		return new SynchronousMachineSimplified;
	}
}
