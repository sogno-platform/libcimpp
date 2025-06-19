/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiagramObject.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Diagram.hpp"
#include "DiagramObjectPoint.hpp"
#include "DiagramObjectStyle.hpp"
#include "IdentifiedObject.hpp"
#include "VisibilityLayer.hpp"

using namespace CIMPP;

DiagramObject::DiagramObject() : Diagram(nullptr), DiagramObjectStyle(nullptr), IdentifiedObject(nullptr) {}
DiagramObject::~DiagramObject() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DiagramObject.Diagram", { CGMESProfile::DL, } },
	{ "cim:DiagramObject.DiagramObjectPoints", { CGMESProfile::DL, } },
	{ "cim:DiagramObject.DiagramObjectStyle", { CGMESProfile::DL, } },
	{ "cim:DiagramObject.IdentifiedObject", { CGMESProfile::DL, } },
	{ "cim:DiagramObject.VisibilityLayers", { CGMESProfile::DL, } },
	{ "cim:DiagramObject.drawingOrder", { CGMESProfile::DL, } },
	{ "cim:DiagramObject.isPolygon", { CGMESProfile::DL, } },
	{ "cim:DiagramObject.offsetX", { CGMESProfile::DL, } },
	{ "cim:DiagramObject.offsetY", { CGMESProfile::DL, } },
	{ "cim:DiagramObject.rotation", { CGMESProfile::DL, } },
};

std::list<CGMESProfile>
DiagramObject::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DiagramObject::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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

bool assign_DiagramObject_drawingOrder(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->drawingOrder;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramObject_isPolygon(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->isPolygon;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramObject_offsetX(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->offsetX;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramObject_offsetY(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->offsetY;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramObject_rotation(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramObject* element = dynamic_cast<DiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rotation;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_DiagramObject_Diagram(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const DiagramObject* element = dynamic_cast<const DiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Diagram != 0)
		{
			BaseClass_list.push_back(element->Diagram);
			return true;
		}
	}
	return false;
}


bool get_DiagramObject_DiagramObjectStyle(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const DiagramObject* element = dynamic_cast<const DiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->DiagramObjectStyle != 0)
		{
			BaseClass_list.push_back(element->DiagramObjectStyle);
			return true;
		}
	}
	return false;
}

bool get_DiagramObject_IdentifiedObject(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const DiagramObject* element = dynamic_cast<const DiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->IdentifiedObject != 0)
		{
			BaseClass_list.push_back(element->IdentifiedObject);
			return true;
		}
	}
	return false;
}


bool get_DiagramObject_drawingOrder(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramObject* element = dynamic_cast<const DiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->drawingOrder;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiagramObject_isPolygon(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramObject* element = dynamic_cast<const DiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->isPolygon;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiagramObject_offsetX(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramObject* element = dynamic_cast<const DiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->offsetX;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiagramObject_offsetY(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramObject* element = dynamic_cast<const DiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->offsetY;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiagramObject_rotation(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramObject* element = dynamic_cast<const DiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rotation;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char DiagramObject::debugName[] = "DiagramObject";
const char* DiagramObject::debugString() const
{
	return DiagramObject::debugName;
}

void DiagramObject::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DiagramObject", &DiagramObject_factory);
}

void DiagramObject::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:DiagramObject.drawingOrder", &assign_DiagramObject_drawingOrder);
	assign_map.emplace("cim:DiagramObject.isPolygon", &assign_DiagramObject_isPolygon);
	assign_map.emplace("cim:DiagramObject.offsetX", &assign_DiagramObject_offsetX);
	assign_map.emplace("cim:DiagramObject.offsetY", &assign_DiagramObject_offsetY);
	assign_map.emplace("cim:DiagramObject.rotation", &assign_DiagramObject_rotation);
}

void DiagramObject::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:DiagramObject.Diagram", &assign_DiagramObject_Diagram);
	assign_map.emplace("cim:DiagramObject.DiagramObjectPoints", &assign_DiagramObject_DiagramObjectPoints);
	assign_map.emplace("cim:DiagramObject.DiagramObjectStyle", &assign_DiagramObject_DiagramObjectStyle);
	assign_map.emplace("cim:DiagramObject.IdentifiedObject", &assign_DiagramObject_IdentifiedObject);
	assign_map.emplace("cim:DiagramObject.VisibilityLayers", &assign_DiagramObject_VisibilityLayers);
}

void DiagramObject::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:DiagramObject.drawingOrder", &get_DiagramObject_drawingOrder);
	get_map.emplace("cim:DiagramObject.isPolygon", &get_DiagramObject_isPolygon);
	get_map.emplace("cim:DiagramObject.offsetX", &get_DiagramObject_offsetX);
	get_map.emplace("cim:DiagramObject.offsetY", &get_DiagramObject_offsetY);
	get_map.emplace("cim:DiagramObject.rotation", &get_DiagramObject_rotation);
}

void DiagramObject::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:DiagramObject.Diagram", &get_DiagramObject_Diagram);
	get_map.emplace("cim:DiagramObject.DiagramObjectStyle", &get_DiagramObject_DiagramObjectStyle);
	get_map.emplace("cim:DiagramObject.IdentifiedObject", &get_DiagramObject_IdentifiedObject);
}

void DiagramObject::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
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
