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

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Diagram(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DL,
		},
		CGMESProfile::DL
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "Diagram.DiagramElements", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
		{ "Diagram.DiagramStyle", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
		{ "Diagram.orientation", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
		{ "Diagram.x1InitialView", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
		{ "Diagram.x2InitialView", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
		{ "Diagram.y1InitialView", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
		{ "Diagram.y2InitialView", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
	};
    return ClassAttrDetailsMap;
}

Diagram::Diagram() : DiagramStyle(nullptr) {}
Diagram::~Diagram() {}

const std::list<std::string>& Diagram::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Diagram::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Diagram::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Diagram::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Diagram::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Diagram::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Diagram::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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

bool assign_Diagram_orientation(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->orientation;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Diagram_x1InitialView(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x1InitialView;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Diagram_x2InitialView(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x2InitialView;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Diagram_y1InitialView(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->y1InitialView;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Diagram_y2InitialView(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Diagram* element = dynamic_cast<Diagram*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->y2InitialView;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_Diagram_DiagramStyle(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Diagram* element = dynamic_cast<const Diagram*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const Diagram* element = dynamic_cast<const Diagram*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_Diagram_x1InitialView(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Diagram* element = dynamic_cast<const Diagram*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const Diagram* element = dynamic_cast<const Diagram*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const Diagram* element = dynamic_cast<const Diagram*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const Diagram* element = dynamic_cast<const Diagram*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char Diagram::debugName[] = "Diagram";
const char* Diagram::debugString() const
{
	return Diagram::debugName;
}

void Diagram::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Diagram", &Diagram_factory);
}

void Diagram::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("Diagram.orientation", &assign_Diagram_orientation);
	assign_map.emplace("Diagram.x1InitialView", &assign_Diagram_x1InitialView);
	assign_map.emplace("Diagram.x2InitialView", &assign_Diagram_x2InitialView);
	assign_map.emplace("Diagram.y1InitialView", &assign_Diagram_y1InitialView);
	assign_map.emplace("Diagram.y2InitialView", &assign_Diagram_y2InitialView);
}

void Diagram::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("Diagram.DiagramElements", &assign_Diagram_DiagramElements);
	assign_map.emplace("Diagram.DiagramStyle", &assign_Diagram_DiagramStyle);
}

void Diagram::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("Diagram.x1InitialView", &get_Diagram_x1InitialView);
	get_map.emplace("Diagram.x2InitialView", &get_Diagram_x2InitialView);
	get_map.emplace("Diagram.y1InitialView", &get_Diagram_y1InitialView);
	get_map.emplace("Diagram.y2InitialView", &get_Diagram_y2InitialView);
}

void Diagram::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("Diagram.DiagramStyle", &get_Diagram_DiagramStyle);
}

void Diagram::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("Diagram.orientation", &get_Diagram_orientation);
}

bool Diagram::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Diagram" &&
		dynamic_cast<Diagram*>(otherObject) != nullptr;
}

const BaseClassDefiner Diagram::declare()
{
	return BaseClassDefiner(Diagram::addConstructToMap, Diagram::addPrimitiveAssignFnsToMap, Diagram::addClassAssignFnsToMap, Diagram::debugName);
}

std::map<std::string, AttrDetails> Diagram::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Diagram_factory()
	{
		return new Diagram;
	}
}
