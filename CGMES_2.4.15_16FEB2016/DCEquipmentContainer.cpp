/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCEquipmentContainer.hpp"

#include <algorithm>
#include <sstream>

#include "DCNode.hpp"
#include "DCTopologicalNode.hpp"

using namespace CIMPP;

DCEquipmentContainer::DCEquipmentContainer() {};
DCEquipmentContainer::~DCEquipmentContainer() {};





bool assign_DCNode_DCEquipmentContainer(BaseClass*, BaseClass*);
bool assign_DCEquipmentContainer_DCNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCEquipmentContainer* element = dynamic_cast<DCEquipmentContainer*>(BaseClass_ptr1);
	DCNode* element2 = dynamic_cast<DCNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCNodes.begin(), element->DCNodes.end(), element2) == element->DCNodes.end())
		{
			element->DCNodes.push_back(element2);
			return assign_DCNode_DCEquipmentContainer(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DCTopologicalNode_DCEquipmentContainer(BaseClass*, BaseClass*);
bool assign_DCEquipmentContainer_DCTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCEquipmentContainer* element = dynamic_cast<DCEquipmentContainer*>(BaseClass_ptr1);
	DCTopologicalNode* element2 = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCTopologicalNode.begin(), element->DCTopologicalNode.end(), element2) == element->DCTopologicalNode.end())
		{
			element->DCTopologicalNode.push_back(element2);
			return assign_DCTopologicalNode_DCEquipmentContainer(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char DCEquipmentContainer::debugName[] = "DCEquipmentContainer";
const char* DCEquipmentContainer::debugString() const
{
	return DCEquipmentContainer::debugName;
}

void DCEquipmentContainer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCEquipmentContainer"), &DCEquipmentContainer_factory));
}

void DCEquipmentContainer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCEquipmentContainer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DCEquipmentContainer.DCNodes"), &assign_DCEquipmentContainer_DCNodes));
	assign_map.insert(std::make_pair(std::string("cim:DCEquipmentContainer.DCTopologicalNode"), &assign_DCEquipmentContainer_DCTopologicalNode));
}

const BaseClassDefiner DCEquipmentContainer::declare()
{
	return BaseClassDefiner(DCEquipmentContainer::addConstructToMap, DCEquipmentContainer::addPrimitiveAssignFnsToMap, DCEquipmentContainer::addClassAssignFnsToMap, DCEquipmentContainer::debugName);
}

namespace CIMPP
{
	BaseClass* DCEquipmentContainer_factory()
	{
		return new DCEquipmentContainer;
	}
}
