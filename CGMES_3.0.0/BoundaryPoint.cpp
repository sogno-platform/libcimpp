/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BoundaryPoint.hpp"

#include <algorithm>
#include <sstream>

#include "ConnectivityNode.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

BoundaryPoint::BoundaryPoint() : ConnectivityNode(nullptr) {};
BoundaryPoint::~BoundaryPoint() {};



bool assign_BoundaryPoint_fromEndIsoCode(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		element->fromEndIsoCode = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BoundaryPoint_fromEndName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		element->fromEndName = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BoundaryPoint_fromEndNameTso(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		element->fromEndNameTso = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BoundaryPoint_isDirectCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		buffer >> element->isDirectCurrent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BoundaryPoint_isExcludedFromAreaInterchange(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		buffer >> element->isExcludedFromAreaInterchange;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BoundaryPoint_toEndIsoCode(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		element->toEndIsoCode = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BoundaryPoint_toEndName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		element->toEndName = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BoundaryPoint_toEndNameTso(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		element->toEndNameTso = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ConnectivityNode_BoundaryPoint(BaseClass*, BaseClass*);
bool assign_BoundaryPoint_ConnectivityNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1);
	ConnectivityNode* element2 = dynamic_cast<ConnectivityNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ConnectivityNode != element2)
		{
			element->ConnectivityNode = element2;
			return assign_ConnectivityNode_BoundaryPoint(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}









const char BoundaryPoint::debugName[] = "BoundaryPoint";
const char* BoundaryPoint::debugString() const
{
	return BoundaryPoint::debugName;
}

void BoundaryPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:BoundaryPoint"), &BoundaryPoint_factory));
}

void BoundaryPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.fromEndIsoCode"), &assign_BoundaryPoint_fromEndIsoCode));
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.fromEndName"), &assign_BoundaryPoint_fromEndName));
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.fromEndNameTso"), &assign_BoundaryPoint_fromEndNameTso));
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.isDirectCurrent"), &assign_BoundaryPoint_isDirectCurrent));
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.isExcludedFromAreaInterchange"), &assign_BoundaryPoint_isExcludedFromAreaInterchange));
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.toEndIsoCode"), &assign_BoundaryPoint_toEndIsoCode));
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.toEndName"), &assign_BoundaryPoint_toEndName));
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.toEndNameTso"), &assign_BoundaryPoint_toEndNameTso));
}

void BoundaryPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.ConnectivityNode"), &assign_BoundaryPoint_ConnectivityNode));
}

const BaseClassDefiner BoundaryPoint::declare()
{
	return BaseClassDefiner(BoundaryPoint::addConstructToMap, BoundaryPoint::addPrimitiveAssignFnsToMap, BoundaryPoint::addClassAssignFnsToMap, BoundaryPoint::debugName);
}

namespace CIMPP
{
	BaseClass* BoundaryPoint_factory()
	{
		return new BoundaryPoint;
	}
}
