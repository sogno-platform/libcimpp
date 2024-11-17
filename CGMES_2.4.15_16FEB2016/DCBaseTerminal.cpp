#include <sstream>
#include "ACDCTerminal.hpp"
#include "DCBaseTerminal.hpp"

#include "DCNode.hpp"
#include "DCTopologicalNode.hpp"

using namespace CIMPP;

DCBaseTerminal::DCBaseTerminal(): DCNode(nullptr), DCTopologicalNode(nullptr) {};

DCBaseTerminal::~DCBaseTerminal() {};





bool assign_DCNode_DCTerminals(BaseClass*, BaseClass*);
bool assign_DCBaseTerminal_DCNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCBaseTerminal* element = dynamic_cast<DCBaseTerminal*>(BaseClass_ptr1)) {
                element->DCNode = dynamic_cast<DCNode*>(BaseClass_ptr2);
                if(element->DCNode != nullptr)
                        return assign_DCNode_DCTerminals(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_DCTopologicalNode_DCTerminals(BaseClass*, BaseClass*);
bool assign_DCBaseTerminal_DCTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCBaseTerminal* element = dynamic_cast<DCBaseTerminal*>(BaseClass_ptr1)) {
                element->DCTopologicalNode = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr2);
                if(element->DCTopologicalNode != nullptr)
                        return assign_DCTopologicalNode_DCTerminals(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* DCBaseTerminal_factory() {
		return new DCBaseTerminal;
	}
}

void DCBaseTerminal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCBaseTerminal"), &DCBaseTerminal_factory));
}

void DCBaseTerminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void DCBaseTerminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DCBaseTerminal.DCNode"), &assign_DCBaseTerminal_DCNode));
	assign_map.insert(std::make_pair(std::string("cim:DCBaseTerminal.DCTopologicalNode"), &assign_DCBaseTerminal_DCTopologicalNode));
}

const char DCBaseTerminal::debugName[] = "DCBaseTerminal";
const char* DCBaseTerminal::debugString()
{
	return DCBaseTerminal::debugName;
}

const BaseClassDefiner DCBaseTerminal::declare()
{
	return BaseClassDefiner(DCBaseTerminal::addConstructToMap, DCBaseTerminal::addPrimitiveAssignFnsToMap, DCBaseTerminal::addClassAssignFnsToMap, DCBaseTerminal::debugName);
}
