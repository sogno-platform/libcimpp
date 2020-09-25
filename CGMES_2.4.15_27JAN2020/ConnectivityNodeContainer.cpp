#include <sstream>
#include "PowerSystemResource.hpp"
#include "ConnectivityNodeContainer.hpp"

#include "ConnectivityNode.hpp"
#include "TopologicalNode.hpp"

using namespace CIMPP;

ConnectivityNodeContainer::ConnectivityNodeContainer() {};

ConnectivityNodeContainer::~ConnectivityNodeContainer() {};


bool assign_ConnectivityNodeContainer_ConnectivityNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ConnectivityNodeContainer* element = dynamic_cast<ConnectivityNodeContainer*>(BaseClass_ptr1)) {
		if(dynamic_cast<ConnectivityNode*>(BaseClass_ptr2) != nullptr) {
                        element->ConnectivityNodes.push_back(dynamic_cast<ConnectivityNode*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ConnectivityNodeContainer_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ConnectivityNodeContainer* element = dynamic_cast<ConnectivityNodeContainer*>(BaseClass_ptr1)) {
		if(dynamic_cast<TopologicalNode*>(BaseClass_ptr2) != nullptr) {
                        element->TopologicalNode.push_back(dynamic_cast<TopologicalNode*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}




namespace CIMPP {
	BaseClass* ConnectivityNodeContainer_factory() {
		return new ConnectivityNodeContainer;
	}
}

void ConnectivityNodeContainer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ConnectivityNodeContainer"), &ConnectivityNodeContainer_factory));
}

void ConnectivityNodeContainer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void ConnectivityNodeContainer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNodeContainer.ConnectivityNodes"), &assign_ConnectivityNodeContainer_ConnectivityNodes));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNodeContainer.TopologicalNode"), &assign_ConnectivityNodeContainer_TopologicalNode));
}

const char ConnectivityNodeContainer::debugName[] = "ConnectivityNodeContainer";
const char* ConnectivityNodeContainer::debugString()
{
	return ConnectivityNodeContainer::debugName;
}

const BaseClassDefiner ConnectivityNodeContainer::declare()
{
	return BaseClassDefiner(ConnectivityNodeContainer::addConstructToMap, ConnectivityNodeContainer::addPrimitiveAssignFnsToMap, ConnectivityNodeContainer::addClassAssignFnsToMap, ConnectivityNodeContainer::debugName);
}


