/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Location.hpp"

#include <algorithm>
#include <sstream>

#include "CoordinateSystem.hpp"
#include "PositionPoint.hpp"
#include "PowerSystemResource.hpp"

using namespace CIMPP;

Location::Location() : CoordinateSystem(nullptr), PowerSystemResources(nullptr) {};
Location::~Location() {};






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

const char Location::debugName[] = "Location";
const char* Location::debugString() const
{
	return Location::debugName;
}

void Location::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Location"), &Location_factory));
}

void Location::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Location::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Location.CoordinateSystem"), &assign_Location_CoordinateSystem));
	assign_map.insert(std::make_pair(std::string("cim:Location.PositionPoints"), &assign_Location_PositionPoints));
	assign_map.insert(std::make_pair(std::string("cim:Location.PowerSystemResources"), &assign_Location_PowerSystemResources));
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
