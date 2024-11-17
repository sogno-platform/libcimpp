#include <sstream>
#include "IdentifiedObject.hpp"
#include "TopologicalIsland.hpp"

#include "TopologicalNode.hpp"
#include "TopologicalNode.hpp"

using namespace CIMPP;

TopologicalIsland::TopologicalIsland(): AngleRefTopologicalNode(nullptr) {};

TopologicalIsland::~TopologicalIsland() {};





bool assign_TopologicalNode_AngleRefTopologicalIsland(BaseClass*, BaseClass*);
bool assign_TopologicalIsland_AngleRefTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TopologicalIsland* element = dynamic_cast<TopologicalIsland*>(BaseClass_ptr1)) {
                element->AngleRefTopologicalNode = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
                if(element->AngleRefTopologicalNode != nullptr)
                        return assign_TopologicalNode_AngleRefTopologicalIsland(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_TopologicalIsland_TopologicalNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TopologicalIsland* element = dynamic_cast<TopologicalIsland*>(BaseClass_ptr1)) {
		if(dynamic_cast<TopologicalNode*>(BaseClass_ptr2) != nullptr) {
                        element->TopologicalNodes.push_back(dynamic_cast<TopologicalNode*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* TopologicalIsland_factory() {
		return new TopologicalIsland;
	}
}

void TopologicalIsland::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:TopologicalIsland"), &TopologicalIsland_factory));
}

void TopologicalIsland::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void TopologicalIsland::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:TopologicalIsland.AngleRefTopologicalNode"), &assign_TopologicalIsland_AngleRefTopologicalNode));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalIsland.TopologicalNodes"), &assign_TopologicalIsland_TopologicalNodes));
}

const char TopologicalIsland::debugName[] = "TopologicalIsland";
const char* TopologicalIsland::debugString()
{
	return TopologicalIsland::debugName;
}

const BaseClassDefiner TopologicalIsland::declare()
{
	return BaseClassDefiner(TopologicalIsland::addConstructToMap, TopologicalIsland::addPrimitiveAssignFnsToMap, TopologicalIsland::addClassAssignFnsToMap, TopologicalIsland::debugName);
}
