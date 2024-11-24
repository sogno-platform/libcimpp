/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiagramObjectPoint.hpp"

#include <algorithm>
#include <sstream>

#include "DiagramObject.hpp"
#include "DiagramObjectGluePoint.hpp"
#include "Integer.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"

using namespace CIMPP;

DiagramObjectPoint::DiagramObjectPoint() : DiagramObject(nullptr), DiagramObjectGluePoint(nullptr) {};
DiagramObjectPoint::~DiagramObjectPoint() {};




bool assign_DiagramObjectPoint_sequenceNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiagramObjectPoint* element = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr1))
	{
		buffer >> element->sequenceNumber;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiagramObjectPoint_xPosition(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiagramObjectPoint* element = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr1))
	{
		buffer >> element->xPosition;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiagramObjectPoint_yPosition(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiagramObjectPoint* element = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr1))
	{
		buffer >> element->yPosition;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiagramObjectPoint_zPosition(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiagramObjectPoint* element = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr1))
	{
		buffer >> element->zPosition;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_DiagramObject_DiagramObjectPoints(BaseClass*, BaseClass*);
bool assign_DiagramObjectPoint_DiagramObject(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiagramObjectPoint* element = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr1);
	DiagramObject* element2 = dynamic_cast<DiagramObject*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DiagramObject != element2)
		{
			element->DiagramObject = element2;
			return assign_DiagramObject_DiagramObjectPoints(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DiagramObjectGluePoint_DiagramObjectPoints(BaseClass*, BaseClass*);
bool assign_DiagramObjectPoint_DiagramObjectGluePoint(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiagramObjectPoint* element = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr1);
	DiagramObjectGluePoint* element2 = dynamic_cast<DiagramObjectGluePoint*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DiagramObjectGluePoint != element2)
		{
			element->DiagramObjectGluePoint = element2;
			return assign_DiagramObjectGluePoint_DiagramObjectPoints(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}





const char DiagramObjectPoint::debugName[] = "DiagramObjectPoint";
const char* DiagramObjectPoint::debugString() const
{
	return DiagramObjectPoint::debugName;
}

void DiagramObjectPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DiagramObjectPoint"), &DiagramObjectPoint_factory));
}

void DiagramObjectPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DiagramObjectPoint.sequenceNumber"), &assign_DiagramObjectPoint_sequenceNumber));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObjectPoint.xPosition"), &assign_DiagramObjectPoint_xPosition));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObjectPoint.yPosition"), &assign_DiagramObjectPoint_yPosition));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObjectPoint.zPosition"), &assign_DiagramObjectPoint_zPosition));
}

void DiagramObjectPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DiagramObjectPoint.DiagramObject"), &assign_DiagramObjectPoint_DiagramObject));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObjectPoint.DiagramObjectGluePoint"), &assign_DiagramObjectPoint_DiagramObjectGluePoint));
}

const BaseClassDefiner DiagramObjectPoint::declare()
{
	return BaseClassDefiner(DiagramObjectPoint::addConstructToMap, DiagramObjectPoint::addPrimitiveAssignFnsToMap, DiagramObjectPoint::addClassAssignFnsToMap, DiagramObjectPoint::debugName);
}

namespace CIMPP
{
	BaseClass* DiagramObjectPoint_factory()
	{
		return new DiagramObjectPoint;
	}
}
