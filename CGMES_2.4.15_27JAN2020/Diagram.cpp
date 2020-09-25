#include <sstream>
#include "IdentifiedObject.hpp"
#include "Diagram.hpp"

#include "DiagramStyle.hpp"
#include "OrientationKind.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "DiagramObject.hpp"

using namespace CIMPP;

Diagram::Diagram() {};

Diagram::~Diagram() {};


bool assign_DiagramStyle_Diagram(BaseClass*, BaseClass*);
bool assign_Diagram_DiagramStyle(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1)) {
                element->DiagramStyle = dynamic_cast<DiagramStyle*>(BaseClass_ptr2);
                if(element->DiagramStyle != nullptr)
                        return assign_DiagramStyle_Diagram(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}






bool assign_Diagram_DiagramElements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1)) {
		if(dynamic_cast<DiagramObject*>(BaseClass_ptr2) != nullptr) {
                        element->DiagramElements.push_back(dynamic_cast<DiagramObject*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}



bool assign_Diagram_orientation(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1)) {
                buffer >> element->orientation;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Diagram_x1InitialView(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1)) {
                buffer >> element->x1InitialView;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Diagram_x2InitialView(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1)) {
                buffer >> element->x2InitialView;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Diagram_y1InitialView(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1)) {
                buffer >> element->y1InitialView;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Diagram_y2InitialView(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1)) {
                buffer >> element->y2InitialView;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* Diagram_factory() {
		return new Diagram;
	}
}

void Diagram::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Diagram"), &Diagram_factory));
}

void Diagram::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:Diagram.orientation"), &assign_Diagram_orientation));
	assign_map.insert(std::make_pair(std::string("cim:Diagram.x1InitialView"), &assign_Diagram_x1InitialView));
	assign_map.insert(std::make_pair(std::string("cim:Diagram.x2InitialView"), &assign_Diagram_x2InitialView));
	assign_map.insert(std::make_pair(std::string("cim:Diagram.y1InitialView"), &assign_Diagram_y1InitialView));
	assign_map.insert(std::make_pair(std::string("cim:Diagram.y2InitialView"), &assign_Diagram_y2InitialView));
	}

void Diagram::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Diagram.DiagramStyle"), &assign_Diagram_DiagramStyle));
						assign_map.insert(std::make_pair(std::string("cim:Diagram.DiagramElements"), &assign_Diagram_DiagramElements));
}

const char Diagram::debugName[] = "Diagram";
const char* Diagram::debugString()
{
	return Diagram::debugName;
}

const BaseClassDefiner Diagram::declare()
{
	return BaseClassDefiner(Diagram::addConstructToMap, Diagram::addPrimitiveAssignFnsToMap, Diagram::addClassAssignFnsToMap, Diagram::debugName);
}


