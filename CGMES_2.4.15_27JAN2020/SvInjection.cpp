/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SvInjection.hpp"

#include <algorithm>
#include <sstream>

#include "TopologicalNode.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"

using namespace CIMPP;

SvInjection::SvInjection() : TopologicalNode(nullptr) {};
SvInjection::~SvInjection() {};



bool assign_SvInjection_pInjection(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SvInjection* element = dynamic_cast<SvInjection*>(BaseClass_ptr1))
	{
		buffer >> element->pInjection;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SvInjection_qInjection(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SvInjection* element = dynamic_cast<SvInjection*>(BaseClass_ptr1))
	{
		buffer >> element->qInjection;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_TopologicalNode_SvInjection(BaseClass*, BaseClass*);
bool assign_SvInjection_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SvInjection* element = dynamic_cast<SvInjection*>(BaseClass_ptr1);
	TopologicalNode* element2 = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TopologicalNode != element2)
		{
			element->TopologicalNode = element2;
			return assign_TopologicalNode_SvInjection(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char SvInjection::debugName[] = "SvInjection";
const char* SvInjection::debugString() const
{
	return SvInjection::debugName;
}

void SvInjection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SvInjection"), &SvInjection_factory));
}

void SvInjection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SvInjection.pInjection"), &assign_SvInjection_pInjection));
	assign_map.insert(std::make_pair(std::string("cim:SvInjection.qInjection"), &assign_SvInjection_qInjection));
}

void SvInjection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SvInjection.TopologicalNode"), &assign_SvInjection_TopologicalNode));
}

const BaseClassDefiner SvInjection::declare()
{
	return BaseClassDefiner(SvInjection::addConstructToMap, SvInjection::addPrimitiveAssignFnsToMap, SvInjection::addClassAssignFnsToMap, SvInjection::debugName);
}

namespace CIMPP
{
	BaseClass* SvInjection_factory()
	{
		return new SvInjection;
	}
}
