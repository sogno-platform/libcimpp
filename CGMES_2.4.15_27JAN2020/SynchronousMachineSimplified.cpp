/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineSimplified.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

SynchronousMachineSimplified::SynchronousMachineSimplified() {};
SynchronousMachineSimplified::~SynchronousMachineSimplified() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
SynchronousMachineSimplified::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SynchronousMachineSimplified::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = SynchronousMachineDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}






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

void SynchronousMachineSimplified::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDynamics::addPrimitiveGetFnsToMap(get_map);
}

void SynchronousMachineSimplified::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SynchronousMachineDynamics::addClassGetFnsToMap(get_map);
}

void SynchronousMachineSimplified::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDynamics::addEnumGetFnsToMap(get_map);
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
