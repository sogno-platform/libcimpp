#include <sstream>
#include "IdentifiedObject.hpp"
#include "DiagramObjectStyle.hpp"

#include "DiagramObject.hpp"

using namespace CIMPP;

DiagramObjectStyle::DiagramObjectStyle() {};

DiagramObjectStyle::~DiagramObjectStyle() {};


bool assign_DiagramObjectStyle_StyledObjects(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DiagramObjectStyle* element = dynamic_cast<DiagramObjectStyle*>(BaseClass_ptr1)) {
		if(dynamic_cast<DiagramObject*>(BaseClass_ptr2) != nullptr) {
                        element->StyledObjects.push_back(dynamic_cast<DiagramObject*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}



namespace CIMPP {
	BaseClass* DiagramObjectStyle_factory() {
		return new DiagramObjectStyle;
	}
}

void DiagramObjectStyle::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DiagramObjectStyle"), &DiagramObjectStyle_factory));
}

void DiagramObjectStyle::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void DiagramObjectStyle::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DiagramObjectStyle.StyledObjects"), &assign_DiagramObjectStyle_StyledObjects));
}

const char DiagramObjectStyle::debugName[] = "DiagramObjectStyle";
const char* DiagramObjectStyle::debugString()
{
	return DiagramObjectStyle::debugName;
}

const BaseClassDefiner DiagramObjectStyle::declare()
{
	return BaseClassDefiner(DiagramObjectStyle::addConstructToMap, DiagramObjectStyle::addPrimitiveAssignFnsToMap, DiagramObjectStyle::addClassAssignFnsToMap, DiagramObjectStyle::debugName);
}


