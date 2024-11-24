/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiagramObject.hpp"

#include <algorithm>
#include <sstream>

#include "Diagram.hpp"
#include "DiagramObjectPoint.hpp"
#include "DiagramObjectStyle.hpp"
#include "IdentifiedObject.hpp"
#include "VisibilityLayer.hpp"
#include "Integer.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "AngleDegrees.hpp"

using namespace CIMPP;

DiagramObject::DiagramObject() : Diagram(nullptr), DiagramObjectStyle(nullptr), IdentifiedObject(nullptr) {};
DiagramObject::~DiagramObject() {};







bool assign_DiagramObject_drawingOrder(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1))
	{
		buffer >> element->drawingOrder;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiagramObject_isPolygon(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1))
	{
		buffer >> element->isPolygon;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiagramObject_offsetX(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1))
	{
		buffer >> element->offsetX;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiagramObject_offsetY(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1))
	{
		buffer >> element->offsetY;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiagramObject_rotation(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1))
	{
		buffer >> element->rotation;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_Diagram_DiagramElements(BaseClass*, BaseClass*);
bool assign_DiagramObject_Diagram(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1);
	Diagram* element2 = dynamic_cast<Diagram*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Diagram != element2)
		{
			element->Diagram = element2;
			return assign_Diagram_DiagramElements(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DiagramObjectPoint_DiagramObject(BaseClass*, BaseClass*);
bool assign_DiagramObject_DiagramObjectPoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1);
	DiagramObjectPoint* element2 = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DiagramObjectPoints.begin(), element->DiagramObjectPoints.end(), element2) == element->DiagramObjectPoints.end())
		{
			element->DiagramObjectPoints.push_back(element2);
			return assign_DiagramObjectPoint_DiagramObject(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DiagramObjectStyle_StyledObjects(BaseClass*, BaseClass*);
bool assign_DiagramObject_DiagramObjectStyle(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1);
	DiagramObjectStyle* element2 = dynamic_cast<DiagramObjectStyle*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DiagramObjectStyle != element2)
		{
			element->DiagramObjectStyle = element2;
			return assign_DiagramObjectStyle_StyledObjects(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_IdentifiedObject_DiagramObjects(BaseClass*, BaseClass*);
bool assign_DiagramObject_IdentifiedObject(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1);
	IdentifiedObject* element2 = dynamic_cast<IdentifiedObject*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->IdentifiedObject != element2)
		{
			element->IdentifiedObject = element2;
			return assign_IdentifiedObject_DiagramObjects(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VisibilityLayer_VisibleObjects(BaseClass*, BaseClass*);
bool assign_DiagramObject_VisibilityLayers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1);
	VisibilityLayer* element2 = dynamic_cast<VisibilityLayer*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->VisibilityLayers.begin(), element->VisibilityLayers.end(), element2) == element->VisibilityLayers.end())
		{
			element->VisibilityLayers.push_back(element2);
			return assign_VisibilityLayer_VisibleObjects(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}






const char DiagramObject::debugName[] = "DiagramObject";
const char* DiagramObject::debugString() const
{
	return DiagramObject::debugName;
}

void DiagramObject::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DiagramObject"), &DiagramObject_factory));
}

void DiagramObject::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.drawingOrder"), &assign_DiagramObject_drawingOrder));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.isPolygon"), &assign_DiagramObject_isPolygon));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.offsetX"), &assign_DiagramObject_offsetX));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.offsetY"), &assign_DiagramObject_offsetY));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.rotation"), &assign_DiagramObject_rotation));
}

void DiagramObject::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.Diagram"), &assign_DiagramObject_Diagram));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.DiagramObjectPoints"), &assign_DiagramObject_DiagramObjectPoints));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.DiagramObjectStyle"), &assign_DiagramObject_DiagramObjectStyle));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.IdentifiedObject"), &assign_DiagramObject_IdentifiedObject));
	assign_map.insert(std::make_pair(std::string("cim:DiagramObject.VisibilityLayers"), &assign_DiagramObject_VisibilityLayers));
}

const BaseClassDefiner DiagramObject::declare()
{
	return BaseClassDefiner(DiagramObject::addConstructToMap, DiagramObject::addPrimitiveAssignFnsToMap, DiagramObject::addClassAssignFnsToMap, DiagramObject::debugName);
}

namespace CIMPP
{
	BaseClass* DiagramObject_factory()
	{
		return new DiagramObject;
	}
}
