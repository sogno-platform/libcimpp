#include <sstream>
#include "BaseClass.hpp"
#include "DiagramObjectGluePoint.hpp"

#include "DiagramObjectPoint.hpp"

using namespace CIMPP;

DiagramObjectGluePoint::DiagramObjectGluePoint() {};

DiagramObjectGluePoint::~DiagramObjectGluePoint() {};


bool assign_DiagramObjectGluePoint_DiagramObjectPoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DiagramObjectGluePoint* element = dynamic_cast<DiagramObjectGluePoint*>(BaseClass_ptr1)) {
                element->DiagramObjectPoints = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr2);
                if(element->DiagramObjectPoints != nullptr)
                        return true;
        }
        return false;
}



namespace CIMPP {
	BaseClass* DiagramObjectGluePoint_factory() {
		return new DiagramObjectGluePoint;
	}
}

void DiagramObjectGluePoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DiagramObjectGluePoint"), &DiagramObjectGluePoint_factory));
}

void DiagramObjectGluePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void DiagramObjectGluePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DiagramObjectGluePoint.DiagramObjectPoints"), &assign_DiagramObjectGluePoint_DiagramObjectPoints));
}

const char DiagramObjectGluePoint::debugName[] = "DiagramObjectGluePoint";
const char* DiagramObjectGluePoint::debugString()
{
	return DiagramObjectGluePoint::debugName;
}

const BaseClassDefiner DiagramObjectGluePoint::declare()
{
	return BaseClassDefiner(DiagramObjectGluePoint::addConstructToMap, DiagramObjectGluePoint::addPrimitiveAssignFnsToMap, DiagramObjectGluePoint::addClassAssignFnsToMap, DiagramObjectGluePoint::debugName);
}


