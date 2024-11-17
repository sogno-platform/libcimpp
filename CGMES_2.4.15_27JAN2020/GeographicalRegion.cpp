#include <sstream>
#include "IdentifiedObject.hpp"
#include "GeographicalRegion.hpp"

#include "SubGeographicalRegion.hpp"

using namespace CIMPP;

GeographicalRegion::GeographicalRegion() {};

GeographicalRegion::~GeographicalRegion() {};




bool assign_GeographicalRegion_Regions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(GeographicalRegion* element = dynamic_cast<GeographicalRegion*>(BaseClass_ptr1)) {
		if(dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr2) != nullptr) {
                        element->Regions.push_back(dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* GeographicalRegion_factory() {
		return new GeographicalRegion;
	}
}

void GeographicalRegion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GeographicalRegion"), &GeographicalRegion_factory));
}

void GeographicalRegion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void GeographicalRegion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GeographicalRegion.Regions"), &assign_GeographicalRegion_Regions));
}

const char GeographicalRegion::debugName[] = "GeographicalRegion";
const char* GeographicalRegion::debugString()
{
	return GeographicalRegion::debugName;
}

const BaseClassDefiner GeographicalRegion::declare()
{
	return BaseClassDefiner(GeographicalRegion::addConstructToMap, GeographicalRegion::addPrimitiveAssignFnsToMap, GeographicalRegion::addClassAssignFnsToMap, GeographicalRegion::debugName);
}
