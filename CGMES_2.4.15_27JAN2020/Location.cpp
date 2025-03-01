/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Location.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "CoordinateSystem.hpp"
#include "PositionPoint.hpp"
#include "PowerSystemResource.hpp"

using namespace CIMPP;

Location::Location() : CoordinateSystem(nullptr), PowerSystemResources(nullptr) {}
Location::~Location() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::GL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Location.CoordinateSystem", { CGMESProfile::GL, } },
	{ "cim:Location.PositionPoints", { CGMESProfile::GL, } },
	{ "cim:Location.PowerSystemResources", { CGMESProfile::GL, } },
};

std::list<CGMESProfile>
Location::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Location::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_CoordinateSystem_Location(BaseClass*, BaseClass*);
bool assign_Location_CoordinateSystem(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Location* element = dynamic_cast<Location*>(BaseClass_ptr1);
	CoordinateSystem* element2 = dynamic_cast<CoordinateSystem*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CoordinateSystem != element2)
		{
			element->CoordinateSystem = element2;
			return assign_CoordinateSystem_Location(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PositionPoint_Location(BaseClass*, BaseClass*);
bool assign_Location_PositionPoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Location* element = dynamic_cast<Location*>(BaseClass_ptr1);
	PositionPoint* element2 = dynamic_cast<PositionPoint*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->PositionPoints.begin(), element->PositionPoints.end(), element2) == element->PositionPoints.end())
		{
			element->PositionPoints.push_back(element2);
			return assign_PositionPoint_Location(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PowerSystemResource_Location(BaseClass*, BaseClass*);
bool assign_Location_PowerSystemResources(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Location* element = dynamic_cast<Location*>(BaseClass_ptr1);
	PowerSystemResource* element2 = dynamic_cast<PowerSystemResource*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PowerSystemResources != element2)
		{
			element->PowerSystemResources = element2;
			return assign_PowerSystemResource_Location(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_Location_CoordinateSystem(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Location* element = dynamic_cast<const Location*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->CoordinateSystem != 0)
		{
			BaseClass_list.push_back(element->CoordinateSystem);
			return true;
		}
	}
	return false;
}


bool get_Location_PowerSystemResources(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Location* element = dynamic_cast<const Location*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->PowerSystemResources != 0)
		{
			BaseClass_list.push_back(element->PowerSystemResources);
			return true;
		}
	}
	return false;
}

const char Location::debugName[] = "Location";
const char* Location::debugString() const
{
	return Location::debugName;
}

void Location::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Location", &Location_factory);
}

void Location::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Location::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:Location.CoordinateSystem", &assign_Location_CoordinateSystem);
	assign_map.emplace("cim:Location.PositionPoints", &assign_Location_PositionPoints);
	assign_map.emplace("cim:Location.PowerSystemResources", &assign_Location_PowerSystemResources);
}

void Location::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void Location::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:Location.CoordinateSystem", &get_Location_CoordinateSystem);
	get_map.emplace("cim:Location.PowerSystemResources", &get_Location_PowerSystemResources);
}

void Location::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Location::declare()
{
	return BaseClassDefiner(Location::addConstructToMap, Location::addPrimitiveAssignFnsToMap, Location::addClassAssignFnsToMap, Location::debugName);
}

namespace CIMPP
{
	BaseClass* Location_factory()
	{
		return new Location;
	}
}
