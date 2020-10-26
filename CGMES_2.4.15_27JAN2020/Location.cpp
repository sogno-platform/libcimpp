#include <sstream>
#include "IdentifiedObject.hpp"
#include "Location.hpp"

#include "CoordinateSystem.hpp"
#include "PowerSystemResource.hpp"
#include "PositionPoint.hpp"

using namespace CIMPP;

Location::Location(): CoordinateSystem(nullptr), PowerSystemResources(nullptr) {};

Location::~Location() {};


bool assign_CoordinateSystem_Location(BaseClass*, BaseClass*);
bool assign_Location_CoordinateSystem(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Location* element = dynamic_cast<Location*>(BaseClass_ptr1)) {
                element->CoordinateSystem = dynamic_cast<CoordinateSystem*>(BaseClass_ptr2);
                if(element->CoordinateSystem != nullptr)
                        return assign_CoordinateSystem_Location(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_PowerSystemResource_Location(BaseClass*, BaseClass*);
bool assign_Location_PowerSystemResources(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Location* element = dynamic_cast<Location*>(BaseClass_ptr1)) {
                element->PowerSystemResources = dynamic_cast<PowerSystemResource*>(BaseClass_ptr2);
                if(element->PowerSystemResources != nullptr)
                        return assign_PowerSystemResource_Location(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_Location_PositionPoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Location* element = dynamic_cast<Location*>(BaseClass_ptr1)) {
		if(dynamic_cast<PositionPoint*>(BaseClass_ptr2) != nullptr) {
                        element->PositionPoints.push_back(dynamic_cast<PositionPoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}





namespace CIMPP {
	BaseClass* Location_factory() {
		return new Location;
	}
}

void Location::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Location"), &Location_factory));
}

void Location::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			}

void Location::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Location.CoordinateSystem"), &assign_Location_CoordinateSystem));
	assign_map.insert(std::make_pair(std::string("cim:Location.PowerSystemResources"), &assign_Location_PowerSystemResources));
	assign_map.insert(std::make_pair(std::string("cim:Location.PositionPoints"), &assign_Location_PositionPoints));
}

const char Location::debugName[] = "Location";
const char* Location::debugString()
{
	return Location::debugName;
}

const BaseClassDefiner Location::declare()
{
	return BaseClassDefiner(Location::addConstructToMap, Location::addPrimitiveAssignFnsToMap, Location::addClassAssignFnsToMap, Location::debugName);
}


