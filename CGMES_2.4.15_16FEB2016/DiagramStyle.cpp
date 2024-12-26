#include <sstream>
#include "IdentifiedObject.hpp"
#include "DiagramStyle.hpp"

#include "Diagram.hpp"

using namespace CIMPP;

DiagramStyle::DiagramStyle() {};

DiagramStyle::~DiagramStyle() {};




bool assign_DiagramStyle_Diagram(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DiagramStyle* element = dynamic_cast<DiagramStyle*>(BaseClass_ptr1)) {
		if(dynamic_cast<Diagram*>(BaseClass_ptr2) != nullptr) {
                        element->Diagram.push_back(dynamic_cast<Diagram*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* DiagramStyle_factory() {
		return new DiagramStyle;
	}
}

void DiagramStyle::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DiagramStyle"), &DiagramStyle_factory));
}

void DiagramStyle::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void DiagramStyle::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DiagramStyle.Diagram"), &assign_DiagramStyle_Diagram));
}

const char DiagramStyle::debugName[] = "DiagramStyle";
const char* DiagramStyle::debugString()
{
	return DiagramStyle::debugName;
}

const BaseClassDefiner DiagramStyle::declare()
{
	return BaseClassDefiner(DiagramStyle::addConstructToMap, DiagramStyle::addPrimitiveAssignFnsToMap, DiagramStyle::addClassAssignFnsToMap, DiagramStyle::debugName);
}
