#include <sstream>
#include "IdentifiedObject.hpp"
#include "CoordinateSystem.hpp"

#include "Location.hpp"
#include "String.hpp"

using namespace CIMPP;

CoordinateSystem::CoordinateSystem() {};

CoordinateSystem::~CoordinateSystem() {};



bool assign_CoordinateSystem_crsUrn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(CoordinateSystem* element = dynamic_cast<CoordinateSystem*>(BaseClass_ptr1)) {
		element->crsUrn = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_CoordinateSystem_Location(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(CoordinateSystem* element = dynamic_cast<CoordinateSystem*>(BaseClass_ptr1)) {
		if(dynamic_cast<Location*>(BaseClass_ptr2) != nullptr) {
                        element->Location.push_back(dynamic_cast<Location*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


namespace CIMPP {
	BaseClass* CoordinateSystem_factory() {
		return new CoordinateSystem;
	}
}

void CoordinateSystem::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:CoordinateSystem"), &CoordinateSystem_factory));
}

void CoordinateSystem::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:CoordinateSystem.crsUrn"), &assign_CoordinateSystem_crsUrn));
}

void CoordinateSystem::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:CoordinateSystem.Location"), &assign_CoordinateSystem_Location));
	}

const char CoordinateSystem::debugName[] = "CoordinateSystem";
const char* CoordinateSystem::debugString()
{
	return CoordinateSystem::debugName;
}

const BaseClassDefiner CoordinateSystem::declare()
{
	return BaseClassDefiner(CoordinateSystem::addConstructToMap, CoordinateSystem::addPrimitiveAssignFnsToMap, CoordinateSystem::addClassAssignFnsToMap, CoordinateSystem::debugName);
}
