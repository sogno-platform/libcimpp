#include <sstream>
#include "EquipmentContainer.hpp"
#include "Line.hpp"

#include "SubGeographicalRegion.hpp"

using namespace CIMPP;

Line::Line() {};

Line::~Line() {};


bool assign_SubGeographicalRegion_Lines(BaseClass*, BaseClass*);
bool assign_Line_Region(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Line* element = dynamic_cast<Line*>(BaseClass_ptr1)) {
                element->Region = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr2);
                if(element->Region != nullptr)
                        return assign_SubGeographicalRegion_Lines(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* Line_factory() {
		return new Line;
	}
}

void Line::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Line"), &Line_factory));
}

void Line::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void Line::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Line.Region"), &assign_Line_Region));
}

const char Line::debugName[] = "Line";
const char* Line::debugString()
{
	return Line::debugName;
}

const BaseClassDefiner Line::declare()
{
	return BaseClassDefiner(Line::addConstructToMap, Line::addPrimitiveAssignFnsToMap, Line::addClassAssignFnsToMap, Line::debugName);
}


