/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCBaseTerminal.hpp"

#include <algorithm>
#include <sstream>

#include "DCNode.hpp"
#include "DCTopologicalNode.hpp"

using namespace CIMPP;

DCBaseTerminal::DCBaseTerminal() : DCNode(nullptr), DCTopologicalNode(nullptr) {};
DCBaseTerminal::~DCBaseTerminal() {};





bool assign_DCNode_DCTerminals(BaseClass*, BaseClass*);
bool assign_DCBaseTerminal_DCNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCBaseTerminal* element = dynamic_cast<DCBaseTerminal*>(BaseClass_ptr1);
	DCNode* element2 = dynamic_cast<DCNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DCNode != element2)
		{
			element->DCNode = element2;
			return assign_DCNode_DCTerminals(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DCTopologicalNode_DCTerminals(BaseClass*, BaseClass*);
bool assign_DCBaseTerminal_DCTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCBaseTerminal* element = dynamic_cast<DCBaseTerminal*>(BaseClass_ptr1);
	DCTopologicalNode* element2 = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DCTopologicalNode != element2)
		{
			element->DCTopologicalNode = element2;
			return assign_DCTopologicalNode_DCTerminals(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char DCBaseTerminal::debugName[] = "DCBaseTerminal";
const char* DCBaseTerminal::debugString() const
{
	return DCBaseTerminal::debugName;
}

void DCBaseTerminal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCBaseTerminal"), &DCBaseTerminal_factory));
}

void DCBaseTerminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCBaseTerminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DCBaseTerminal.DCNode"), &assign_DCBaseTerminal_DCNode));
	assign_map.insert(std::make_pair(std::string("cim:DCBaseTerminal.DCTopologicalNode"), &assign_DCBaseTerminal_DCTopologicalNode));
}

const BaseClassDefiner DCBaseTerminal::declare()
{
	return BaseClassDefiner(DCBaseTerminal::addConstructToMap, DCBaseTerminal::addPrimitiveAssignFnsToMap, DCBaseTerminal::addClassAssignFnsToMap, DCBaseTerminal::debugName);
}

namespace CIMPP
{
	BaseClass* DCBaseTerminal_factory()
	{
		return new DCBaseTerminal;
	}
}
