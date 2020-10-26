#include <sstream>
#include "IdentifiedObject.hpp"
#include "TopologicalNode.hpp"

#include "BaseVoltage.hpp"
#include "ConnectivityNode.hpp"
#include "ConnectivityNodeContainer.hpp"
#include "ReportingGroup.hpp"
#include "Terminal.hpp"
#include "Boolean.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "SvInjection.hpp"
#include "SvVoltage.hpp"
#include "TopologicalIsland.hpp"
#include "TopologicalIsland.hpp"

using namespace CIMPP;

TopologicalNode::TopologicalNode(): BaseVoltage(nullptr), ConnectivityNodeContainer(nullptr), ReportingGroup(nullptr), SvInjection(nullptr), SvVoltage(nullptr), AngleRefTopologicalIsland(nullptr), TopologicalIsland(nullptr) {};

TopologicalNode::~TopologicalNode() {};


bool assign_BaseVoltage_TopologicalNode(BaseClass*, BaseClass*);
bool assign_TopologicalNode_BaseVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
                element->BaseVoltage = dynamic_cast<BaseVoltage*>(BaseClass_ptr2);
                if(element->BaseVoltage != nullptr)
                        return assign_BaseVoltage_TopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_TopologicalNode_ConnectivityNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
		if(dynamic_cast<ConnectivityNode*>(BaseClass_ptr2) != nullptr) {
                        element->ConnectivityNodes.push_back(dynamic_cast<ConnectivityNode*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ConnectivityNodeContainer_TopologicalNode(BaseClass*, BaseClass*);
bool assign_TopologicalNode_ConnectivityNodeContainer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
                element->ConnectivityNodeContainer = dynamic_cast<ConnectivityNodeContainer*>(BaseClass_ptr2);
                if(element->ConnectivityNodeContainer != nullptr)
                        return assign_ConnectivityNodeContainer_TopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_ReportingGroup_TopologicalNode(BaseClass*, BaseClass*);
bool assign_TopologicalNode_ReportingGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
                element->ReportingGroup = dynamic_cast<ReportingGroup*>(BaseClass_ptr2);
                if(element->ReportingGroup != nullptr)
                        return assign_ReportingGroup_TopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_TopologicalNode_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
		if(dynamic_cast<Terminal*>(BaseClass_ptr2) != nullptr) {
                        element->Terminal.push_back(dynamic_cast<Terminal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}








bool assign_TopologicalNode_SvInjection(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
                element->SvInjection = dynamic_cast<SvInjection*>(BaseClass_ptr2);
                if(element->SvInjection != nullptr)
                        return true;
        }
        return false;
}

bool assign_TopologicalNode_SvVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
                element->SvVoltage = dynamic_cast<SvVoltage*>(BaseClass_ptr2);
                if(element->SvVoltage != nullptr)
                        return true;
        }
        return false;
}

bool assign_TopologicalNode_AngleRefTopologicalIsland(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
                element->AngleRefTopologicalIsland = dynamic_cast<TopologicalIsland*>(BaseClass_ptr2);
                if(element->AngleRefTopologicalIsland != nullptr)
                        return true;
        }
        return false;
}

bool assign_TopologicalNode_TopologicalIsland(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
                element->TopologicalIsland = dynamic_cast<TopologicalIsland*>(BaseClass_ptr2);
                if(element->TopologicalIsland != nullptr)
                        return true;
        }
        return false;
}







bool assign_TopologicalNode_boundaryPoint(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
                buffer >> element->boundaryPoint;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TopologicalNode_fromEndIsoCode(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
		element->fromEndIsoCode = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologicalNode_fromEndName(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
		element->fromEndName = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologicalNode_fromEndNameTso(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
		element->fromEndNameTso = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologicalNode_toEndIsoCode(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
		element->toEndIsoCode = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologicalNode_toEndName(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
		element->toEndName = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologicalNode_toEndNameTso(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1)) {
		element->toEndNameTso = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}





namespace CIMPP {
	BaseClass* TopologicalNode_factory() {
		return new TopologicalNode;
	}
}

void TopologicalNode::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:TopologicalNode"), &TopologicalNode_factory));
}

void TopologicalNode::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
						assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.boundaryPoint"), &assign_TopologicalNode_boundaryPoint));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.fromEndIsoCode"), &assign_TopologicalNode_fromEndIsoCode));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.fromEndName"), &assign_TopologicalNode_fromEndName));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.fromEndNameTso"), &assign_TopologicalNode_fromEndNameTso));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.toEndIsoCode"), &assign_TopologicalNode_toEndIsoCode));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.toEndName"), &assign_TopologicalNode_toEndName));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.toEndNameTso"), &assign_TopologicalNode_toEndNameTso));
				}

void TopologicalNode::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.BaseVoltage"), &assign_TopologicalNode_BaseVoltage));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.ConnectivityNodes"), &assign_TopologicalNode_ConnectivityNodes));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.ConnectivityNodeContainer"), &assign_TopologicalNode_ConnectivityNodeContainer));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.ReportingGroup"), &assign_TopologicalNode_ReportingGroup));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.Terminal"), &assign_TopologicalNode_Terminal));
								assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.SvInjection"), &assign_TopologicalNode_SvInjection));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.SvVoltage"), &assign_TopologicalNode_SvVoltage));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.AngleRefTopologicalIsland"), &assign_TopologicalNode_AngleRefTopologicalIsland));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.TopologicalIsland"), &assign_TopologicalNode_TopologicalIsland));
}

const char TopologicalNode::debugName[] = "TopologicalNode";
const char* TopologicalNode::debugString()
{
	return TopologicalNode::debugName;
}

const BaseClassDefiner TopologicalNode::declare()
{
	return BaseClassDefiner(TopologicalNode::addConstructToMap, TopologicalNode::addPrimitiveAssignFnsToMap, TopologicalNode::addClassAssignFnsToMap, TopologicalNode::debugName);
}


