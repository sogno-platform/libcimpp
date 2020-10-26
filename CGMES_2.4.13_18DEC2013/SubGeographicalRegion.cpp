#include <sstream>
#include "IdentifiedObject.hpp"
#include "SubGeographicalRegion.hpp"

#include "GeographicalRegion.hpp"
#include "Line.hpp"
#include "DCLine.hpp"
#include "Substation.hpp"

using namespace CIMPP;

SubGeographicalRegion::SubGeographicalRegion(): Region(nullptr) {};

SubGeographicalRegion::~SubGeographicalRegion() {};


bool assign_GeographicalRegion_Regions(BaseClass*, BaseClass*);
bool assign_SubGeographicalRegion_Region(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SubGeographicalRegion* element = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr1)) {
                element->Region = dynamic_cast<GeographicalRegion*>(BaseClass_ptr2);
                if(element->Region != nullptr)
                        return assign_GeographicalRegion_Regions(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_SubGeographicalRegion_Lines(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SubGeographicalRegion* element = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr1)) {
		if(dynamic_cast<Line*>(BaseClass_ptr2) != nullptr) {
                        element->Lines.push_back(dynamic_cast<Line*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SubGeographicalRegion_DCLines(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SubGeographicalRegion* element = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr1)) {
		if(dynamic_cast<DCLine*>(BaseClass_ptr2) != nullptr) {
                        element->DCLines.push_back(dynamic_cast<DCLine*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SubGeographicalRegion_Substations(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SubGeographicalRegion* element = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr1)) {
		if(dynamic_cast<Substation*>(BaseClass_ptr2) != nullptr) {
                        element->Substations.push_back(dynamic_cast<Substation*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}






namespace CIMPP {
	BaseClass* SubGeographicalRegion_factory() {
		return new SubGeographicalRegion;
	}
}

void SubGeographicalRegion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SubGeographicalRegion"), &SubGeographicalRegion_factory));
}

void SubGeographicalRegion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
				}

void SubGeographicalRegion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:SubGeographicalRegion.Region"), &assign_SubGeographicalRegion_Region));
	assign_map.insert(std::make_pair(std::string("cim:SubGeographicalRegion.Lines"), &assign_SubGeographicalRegion_Lines));
	assign_map.insert(std::make_pair(std::string("cim:SubGeographicalRegion.DCLines"), &assign_SubGeographicalRegion_DCLines));
	assign_map.insert(std::make_pair(std::string("cim:SubGeographicalRegion.Substations"), &assign_SubGeographicalRegion_Substations));
}

const char SubGeographicalRegion::debugName[] = "SubGeographicalRegion";
const char* SubGeographicalRegion::debugString()
{
	return SubGeographicalRegion::debugName;
}

const BaseClassDefiner SubGeographicalRegion::declare()
{
	return BaseClassDefiner(SubGeographicalRegion::addConstructToMap, SubGeographicalRegion::addPrimitiveAssignFnsToMap, SubGeographicalRegion::addClassAssignFnsToMap, SubGeographicalRegion::debugName);
}


