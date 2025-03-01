/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EnergySchedulingType.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "EnergySource.hpp"

using namespace CIMPP;

EnergySchedulingType::EnergySchedulingType() {}
EnergySchedulingType::~EnergySchedulingType() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ_BD,
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:EnergySchedulingType.EnergySource", { CGMESProfile::EQ_BD, CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
EnergySchedulingType::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
EnergySchedulingType::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

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
	factory_map.emplace("cim:EnergySchedulingType", &EnergySchedulingType_factory);
}

void EnergySchedulingType::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void EnergySchedulingType::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:EnergySchedulingType.EnergySource", &assign_EnergySchedulingType_EnergySource);
}

void EnergySchedulingType::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void EnergySchedulingType::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void EnergySchedulingType::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
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
