#include <sstream>
#include "IdentifiedObject.hpp"
#include "VisibilityLayer.hpp"

#include "DiagramObject.hpp"
#include "Integer.hpp"

using namespace CIMPP;

VisibilityLayer::VisibilityLayer() {};

VisibilityLayer::~VisibilityLayer() {};



bool assign_VisibilityLayer_drawingOrder(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VisibilityLayer* element = dynamic_cast<VisibilityLayer*>(BaseClass_ptr1)) {
                buffer >> element->drawingOrder;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_VisibilityLayer_VisibleObjects(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(VisibilityLayer* element = dynamic_cast<VisibilityLayer*>(BaseClass_ptr1)) {
		if(dynamic_cast<DiagramObject*>(BaseClass_ptr2) != nullptr) {
                        element->VisibleObjects.push_back(dynamic_cast<DiagramObject*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


namespace CIMPP {
	BaseClass* VisibilityLayer_factory() {
		return new VisibilityLayer;
	}
}

void VisibilityLayer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:VisibilityLayer"), &VisibilityLayer_factory));
}

void VisibilityLayer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:VisibilityLayer.drawingOrder"), &assign_VisibilityLayer_drawingOrder));
}

void VisibilityLayer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:VisibilityLayer.VisibleObjects"), &assign_VisibilityLayer_VisibleObjects));
	}

const char VisibilityLayer::debugName[] = "VisibilityLayer";
const char* VisibilityLayer::debugString()
{
	return VisibilityLayer::debugName;
}

const BaseClassDefiner VisibilityLayer::declare()
{
	return BaseClassDefiner(VisibilityLayer::addConstructToMap, VisibilityLayer::addPrimitiveAssignFnsToMap, VisibilityLayer::addClassAssignFnsToMap, VisibilityLayer::debugName);
}
