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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DiagramObjectStyle(),
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
		{ "DiagramObjectStyle.StyledObjects", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
	};
    return ClassAttrDetailsMap;
}

DiagramObjectStyle::DiagramObjectStyle() {}
DiagramObjectStyle::~DiagramObjectStyle() {}

const std::list<std::string>& DiagramObjectStyle::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DiagramObjectStyle::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DiagramObjectStyle::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DiagramObjectStyle::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DiagramObjectStyle::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DiagramObjectStyle::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DiagramObjectStyle::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("DiagramObjectStyle", &DiagramObjectStyle_factory);
}

void DiagramObjectStyle::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DiagramObjectStyle::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DiagramObjectStyle.StyledObjects", &assign_DiagramObjectStyle_StyledObjects);
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

bool DiagramObjectStyle::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DiagramObjectStyle" &&
		dynamic_cast<DiagramObjectStyle*>(otherObject) != nullptr;
}

const BaseClassDefiner DiagramObjectStyle::declare()
{
	return BaseClassDefiner(DiagramObjectStyle::addConstructToMap, DiagramObjectStyle::addPrimitiveAssignFnsToMap, DiagramObjectStyle::addClassAssignFnsToMap, DiagramObjectStyle::debugName);
}

std::map<std::string, AttrDetails> DiagramObjectStyle::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DiagramObjectStyle_factory()
	{
		return new DiagramObjectStyle;
	}
}
