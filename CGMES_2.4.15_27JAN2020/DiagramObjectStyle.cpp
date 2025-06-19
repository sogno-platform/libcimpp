/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiagramObjectStyle.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DiagramObject.hpp"

using namespace CIMPP;

DiagramObjectStyle::DiagramObjectStyle() {}
DiagramObjectStyle::~DiagramObjectStyle() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DiagramObjectStyle.StyledObjects", { CGMESProfile::DL, } },
};

std::list<CGMESProfile>
DiagramObjectStyle::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DiagramObjectStyle::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_DiagramObject_DiagramObjectStyle(BaseClass*, BaseClass*);
bool assign_DiagramObjectStyle_StyledObjects(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiagramObjectStyle* element = dynamic_cast<DiagramObjectStyle*>(BaseClass_ptr1);
	DiagramObject* element2 = dynamic_cast<DiagramObject*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->StyledObjects.begin(), element->StyledObjects.end(), element2) == element->StyledObjects.end())
		{
			element->StyledObjects.push_back(element2);
			return assign_DiagramObject_DiagramObjectStyle(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char DiagramObjectStyle::debugName[] = "DiagramObjectStyle";
const char* DiagramObjectStyle::debugString() const
{
	return DiagramObjectStyle::debugName;
}

void DiagramObjectStyle::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DiagramObjectStyle", &DiagramObjectStyle_factory);
}

void DiagramObjectStyle::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DiagramObjectStyle::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:DiagramObjectStyle.StyledObjects", &assign_DiagramObjectStyle_StyledObjects);
}

void DiagramObjectStyle::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void DiagramObjectStyle::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void DiagramObjectStyle::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DiagramObjectStyle::declare()
{
	return BaseClassDefiner(DiagramObjectStyle::addConstructToMap, DiagramObjectStyle::addPrimitiveAssignFnsToMap, DiagramObjectStyle::addClassAssignFnsToMap, DiagramObjectStyle::debugName);
}

namespace CIMPP
{
	BaseClass* DiagramObjectStyle_factory()
	{
		return new DiagramObjectStyle;
	}
}
