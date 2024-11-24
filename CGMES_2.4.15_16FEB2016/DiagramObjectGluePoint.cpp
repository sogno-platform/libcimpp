/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiagramObjectGluePoint.hpp"

#include <algorithm>
#include <sstream>

#include "DiagramObjectPoint.hpp"

using namespace CIMPP;

DiagramObjectGluePoint::DiagramObjectGluePoint() {};
DiagramObjectGluePoint::~DiagramObjectGluePoint() {};




bool assign_DiagramObjectPoint_DiagramObjectGluePoint(BaseClass*, BaseClass*);
bool assign_DiagramObjectGluePoint_DiagramObjectPoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiagramObjectGluePoint* element = dynamic_cast<DiagramObjectGluePoint*>(BaseClass_ptr1);
	DiagramObjectPoint* element2 = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DiagramObjectPoints.begin(), element->DiagramObjectPoints.end(), element2) == element->DiagramObjectPoints.end())
		{
			element->DiagramObjectPoints.push_back(element2);
			return assign_DiagramObjectPoint_DiagramObjectGluePoint(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char DiagramObjectGluePoint::debugName[] = "DiagramObjectGluePoint";
const char* DiagramObjectGluePoint::debugString() const
{
	return DiagramObjectGluePoint::debugName;
}

void DiagramObjectGluePoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DiagramObjectGluePoint"), &DiagramObjectGluePoint_factory));
}

void DiagramObjectGluePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DiagramObjectGluePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DiagramObjectGluePoint.DiagramObjectPoints"), &assign_DiagramObjectGluePoint_DiagramObjectPoints));
}

const BaseClassDefiner DiagramObjectGluePoint::declare()
{
	return BaseClassDefiner(DiagramObjectGluePoint::addConstructToMap, DiagramObjectGluePoint::addPrimitiveAssignFnsToMap, DiagramObjectGluePoint::addClassAssignFnsToMap, DiagramObjectGluePoint::debugName);
}

namespace CIMPP
{
	BaseClass* DiagramObjectGluePoint_factory()
	{
		return new DiagramObjectGluePoint;
	}
}
