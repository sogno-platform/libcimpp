/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Diagram.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DiagramObject.hpp"
#include "DiagramStyle.hpp"
#include "OrientationKind.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"

using namespace CIMPP;

Diagram::Diagram() : DiagramStyle(nullptr) {};
Diagram::~Diagram() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Diagram.DiagramElements", { CGMESProfile::DL, } },
	{ "cim:Diagram.DiagramStyle", { CGMESProfile::DL, } },
	{ "cim:Diagram.orientation", { CGMESProfile::DL, } },
	{ "cim:Diagram.x1InitialView", { CGMESProfile::DL, } },
	{ "cim:Diagram.x2InitialView", { CGMESProfile::DL, } },
	{ "cim:Diagram.y1InitialView", { CGMESProfile::DL, } },
	{ "cim:Diagram.y2InitialView", { CGMESProfile::DL, } },
};

std::list<CGMESProfile>
Diagram::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Diagram::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_Diagram_orientation(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1))
	{
		buffer >> element->orientation;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Diagram_x1InitialView(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1))
	{
		buffer >> element->x1InitialView;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Diagram_x2InitialView(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1))
	{
		buffer >> element->x2InitialView;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Diagram_y1InitialView(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1))
	{
		buffer >> element->y1InitialView;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Diagram_y2InitialView(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1))
	{
		buffer >> element->y2InitialView;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_DiagramObject_Diagram(BaseClass*, BaseClass*);
bool assign_Diagram_DiagramElements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1);
	DiagramObject* element2 = dynamic_cast<DiagramObject*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DiagramElements.begin(), element->DiagramElements.end(), element2) == element->DiagramElements.end())
		{
			element->DiagramElements.push_back(element2);
			return assign_DiagramObject_Diagram(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_DiagramStyle_Diagram(BaseClass*, BaseClass*);
bool assign_Diagram_DiagramStyle(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1);
	DiagramStyle* element2 = dynamic_cast<DiagramStyle*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DiagramStyle != element2)
		{
			element->DiagramStyle = element2;
			return assign_DiagramStyle_Diagram(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_Diagram_x1InitialView(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const Diagram* element = dynamic_cast<const Diagram*>(BaseClass_ptr1))
	{
		buffer << element->x1InitialView;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Diagram_x2InitialView(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const Diagram* element = dynamic_cast<const Diagram*>(BaseClass_ptr1))
	{
		buffer << element->x2InitialView;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Diagram_y1InitialView(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const Diagram* element = dynamic_cast<const Diagram*>(BaseClass_ptr1))
	{
		buffer << element->y1InitialView;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Diagram_y2InitialView(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const Diagram* element = dynamic_cast<const Diagram*>(BaseClass_ptr1))
	{
		buffer << element->y2InitialView;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_Diagram_DiagramStyle(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const Diagram* element = dynamic_cast<const Diagram*>(BaseClass_ptr1))
	{
		if (element->DiagramStyle != 0)
		{
			BaseClass_list.push_back(element->DiagramStyle);
			return true;
		}
	}
	return false;
}


bool get_Diagram_orientation(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const Diagram* element = dynamic_cast<const Diagram*>(BaseClass_ptr1))
	{
		buffer << element->orientation;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Diagram::debugName[] = "Diagram";
const char* Diagram::debugString() const
{
	return Diagram::debugName;
}

void Diagram::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Diagram"), &Diagram_factory));
}

void Diagram::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Diagram.orientation"), &assign_Diagram_orientation));
	assign_map.insert(std::make_pair(std::string("cim:Diagram.x1InitialView"), &assign_Diagram_x1InitialView));
	assign_map.insert(std::make_pair(std::string("cim:Diagram.x2InitialView"), &assign_Diagram_x2InitialView));
	assign_map.insert(std::make_pair(std::string("cim:Diagram.y1InitialView"), &assign_Diagram_y1InitialView));
	assign_map.insert(std::make_pair(std::string("cim:Diagram.y2InitialView"), &assign_Diagram_y2InitialView));
}

void Diagram::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Diagram.DiagramElements"), &assign_Diagram_DiagramElements));
	assign_map.insert(std::make_pair(std::string("cim:Diagram.DiagramStyle"), &assign_Diagram_DiagramStyle));
}

void Diagram::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:Diagram.x1InitialView", &get_Diagram_x1InitialView);
	get_map.emplace("cim:Diagram.x2InitialView", &get_Diagram_x2InitialView);
	get_map.emplace("cim:Diagram.y1InitialView", &get_Diagram_y1InitialView);
	get_map.emplace("cim:Diagram.y2InitialView", &get_Diagram_y2InitialView);
}

void Diagram::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:Diagram.DiagramStyle", &get_Diagram_DiagramStyle);
}

void Diagram::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:Diagram.orientation", &get_Diagram_orientation);
}

const BaseClassDefiner Diagram::declare()
{
	return BaseClassDefiner(Diagram::addConstructToMap, Diagram::addPrimitiveAssignFnsToMap, Diagram::addClassAssignFnsToMap, Diagram::debugName);
}

namespace CIMPP
{
	BaseClass* Diagram_factory()
	{
		return new Diagram;
	}
}
