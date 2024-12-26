#include <sstream>
#include "IdentifiedObject.hpp"
#include "DiagramObject.hpp"

#include "Diagram.hpp"
#include "DiagramObjectPoint.hpp"
#include "DiagramObjectStyle.hpp"
#include "IdentifiedObject.hpp"
#include "VisibilityLayer.hpp"
#include "Integer.hpp"
#include "Boolean.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "AngleDegrees.hpp"

using namespace CIMPP;

DiagramObject::DiagramObject(): Diagram(nullptr), DiagramObjectStyle(nullptr), IdentifiedObject(nullptr) {};

DiagramObject::~DiagramObject() {};







bool assign_DiagramObject_drawingOrder(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1)) {
                buffer >> element->drawingOrder;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DiagramObject_isPolygon(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1)) {
                buffer >> element->isPolygon;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DiagramObject_offsetX(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1)) {
                buffer >> element->offsetX;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DiagramObject_offsetY(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1)) {
                buffer >> element->offsetY;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DiagramObject_rotation(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1)) {
                buffer >> element->rotation;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_Diagram_DiagramElements(BaseClass*, BaseClass*);
bool assign_DiagramObject_Diagram(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1)) {
                element->Diagram = dynamic_cast<Diagram*>(BaseClass_ptr2);
                if(element->Diagram != nullptr)
                        return assign_Diagram_DiagramElements(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_DiagramObject_DiagramObjectPoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1)) {
		if(dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr2) != nullptr) {
                        element->DiagramObjectPoints.push_back(dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DiagramObjectStyle_StyledObjects(BaseClass*, BaseClass*);
bool assign_DiagramObject_DiagramObjectStyle(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1)) {
                element->DiagramObjectStyle = dynamic_cast<DiagramObjectStyle*>(BaseClass_ptr2);
                if(element->DiagramObjectStyle != nullptr)
                        return assign_DiagramObjectStyle_StyledObjects(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_IdentifiedObject_DiagramObjects(BaseClass*, BaseClass*);
bool assign_DiagramObject_IdentifiedObject(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1)) {
                element->IdentifiedObject = dynamic_cast<IdentifiedObject*>(BaseClass_ptr2);
                if(element->IdentifiedObject != nullptr)
                        return assign_IdentifiedObject_DiagramObjects(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_DiagramObject_VisibilityLayers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1)) {
		if(dynamic_cast<VisibilityLayer*>(BaseClass_ptr2) != nullptr) {
                        element->VisibilityLayers.push_back(dynamic_cast<VisibilityLayer*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}






namespace CIMPP {
	BaseClass* DiagramObject_factory() {
		return new DiagramObject;
	}
}

void DiagramObject::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DiagramObject"), &DiagramObject_factory));
}

void DiagramObject::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
						assign_map.insert(std::make_pair(std::string("cim:DiagramObject.drawingOrder"), &assign_DiagramObject_drawingOrder));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.isPolygon"), &assign_DiagramObject_isPolygon));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.offsetX"), &assign_DiagramObject_offsetX));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.offsetY"), &assign_DiagramObject_offsetY));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.rotation"), &assign_DiagramObject_rotation));
}

void DiagramObject::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.Diagram"), &assign_DiagramObject_Diagram));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.DiagramObjectPoints"), &assign_DiagramObject_DiagramObjectPoints));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.DiagramObjectStyle"), &assign_DiagramObject_DiagramObjectStyle));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.IdentifiedObject"), &assign_DiagramObject_IdentifiedObject));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.VisibilityLayers"), &assign_DiagramObject_VisibilityLayers));
					}

const char DiagramObject::debugName[] = "DiagramObject";
const char* DiagramObject::debugString()
{
	return DiagramObject::debugName;
}

const BaseClassDefiner DiagramObject::declare()
{
	return BaseClassDefiner(DiagramObject::addConstructToMap, DiagramObject::addPrimitiveAssignFnsToMap, DiagramObject::addClassAssignFnsToMap, DiagramObject::debugName);
}
