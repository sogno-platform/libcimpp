/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CoordinateSystem.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Location.hpp"

using namespace CIMPP;

CoordinateSystem::CoordinateSystem() {}
CoordinateSystem::~CoordinateSystem() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::GL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:CoordinateSystem.Locations", { CGMESProfile::GL, } },
	{ "cim:CoordinateSystem.crsUrn", { CGMESProfile::GL, } },
};

std::list<CGMESProfile>
CoordinateSystem::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
CoordinateSystem::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_Location_CoordinateSystem(BaseClass*, BaseClass*);
bool assign_CoordinateSystem_Locations(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CoordinateSystem* element = dynamic_cast<CoordinateSystem*>(BaseClass_ptr1);
	Location* element2 = dynamic_cast<Location*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Locations.begin(), element->Locations.end(), element2) == element->Locations.end())
		{
			element->Locations.push_back(element2);
			return assign_Location_CoordinateSystem(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_CoordinateSystem_crsUrn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CoordinateSystem* element = dynamic_cast<CoordinateSystem*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->crsUrn = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_CoordinateSystem_crsUrn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CoordinateSystem* element = dynamic_cast<const CoordinateSystem*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->crsUrn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char CoordinateSystem::debugName[] = "CoordinateSystem";
const char* CoordinateSystem::debugString() const
{
	return CoordinateSystem::debugName;
}

void CoordinateSystem::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:CoordinateSystem", &CoordinateSystem_factory);
}

void CoordinateSystem::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:CoordinateSystem.crsUrn", &assign_CoordinateSystem_crsUrn);
}

void CoordinateSystem::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:CoordinateSystem.Locations", &assign_CoordinateSystem_Locations);
}

void CoordinateSystem::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:CoordinateSystem.crsUrn", &get_CoordinateSystem_crsUrn);
}

void CoordinateSystem::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void CoordinateSystem::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner CoordinateSystem::declare()
{
	return BaseClassDefiner(CoordinateSystem::addConstructToMap, CoordinateSystem::addPrimitiveAssignFnsToMap, CoordinateSystem::addClassAssignFnsToMap, CoordinateSystem::debugName);
}

namespace CIMPP
{
	BaseClass* CoordinateSystem_factory()
	{
		return new CoordinateSystem;
	}
}
