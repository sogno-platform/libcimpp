/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PositionPoint.hpp"

#include <algorithm>
#include <sstream>

#include "Location.hpp"
#include "Integer.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

PositionPoint::PositionPoint() : Location(nullptr) {};
PositionPoint::~PositionPoint() {};



bool assign_PositionPoint_sequenceNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1))
	{
		buffer >> element->sequenceNumber;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PositionPoint_xPosition(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1))
	{
		buffer >> element->xPosition;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PositionPoint_yPosition(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1))
	{
		buffer >> element->yPosition;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PositionPoint_zPosition(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1))
	{
		buffer >> element->zPosition;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_Location_PositionPoints(BaseClass*, BaseClass*);
bool assign_PositionPoint_Location(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1);
	Location* element2 = dynamic_cast<Location*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Location != element2)
		{
			element->Location = element2;
			return assign_Location_PositionPoints(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}





const char PositionPoint::debugName[] = "PositionPoint";
const char* PositionPoint::debugString() const
{
	return PositionPoint::debugName;
}

void PositionPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PositionPoint"), &PositionPoint_factory));
}

void PositionPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PositionPoint.sequenceNumber"), &assign_PositionPoint_sequenceNumber));
	assign_map.insert(std::make_pair(std::string("cim:PositionPoint.xPosition"), &assign_PositionPoint_xPosition));
	assign_map.insert(std::make_pair(std::string("cim:PositionPoint.yPosition"), &assign_PositionPoint_yPosition));
	assign_map.insert(std::make_pair(std::string("cim:PositionPoint.zPosition"), &assign_PositionPoint_zPosition));
}

void PositionPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PositionPoint.Location"), &assign_PositionPoint_Location));
}

const BaseClassDefiner PositionPoint::declare()
{
	return BaseClassDefiner(PositionPoint::addConstructToMap, PositionPoint::addPrimitiveAssignFnsToMap, PositionPoint::addClassAssignFnsToMap, PositionPoint::debugName);
}

namespace CIMPP
{
	BaseClass* PositionPoint_factory()
	{
		return new PositionPoint;
	}
}
