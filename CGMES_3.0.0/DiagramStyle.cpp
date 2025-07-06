/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiagramStyle.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Diagram.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DiagramStyle(),
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
		{ "DiagramStyle.Diagram", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
	};
    return ClassAttrDetailsMap;
}

DiagramStyle::DiagramStyle() {}
DiagramStyle::~DiagramStyle() {}

const std::list<std::string>& DiagramStyle::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DiagramStyle::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DiagramStyle::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DiagramStyle::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DiagramStyle::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DiagramStyle::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DiagramStyle::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_Diagram_DiagramStyle(BaseClass*, BaseClass*);
bool assign_DiagramStyle_Diagram(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiagramStyle* element = dynamic_cast<DiagramStyle*>(BaseClass_ptr1);
	Diagram* element2 = dynamic_cast<Diagram*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Diagram.begin(), element->Diagram.end(), element2) == element->Diagram.end())
		{
			element->Diagram.push_back(element2);
			return assign_Diagram_DiagramStyle(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char DiagramStyle::debugName[] = "DiagramStyle";
const char* DiagramStyle::debugString() const
{
	return DiagramStyle::debugName;
}

void DiagramStyle::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DiagramStyle", &DiagramStyle_factory);
}

void DiagramStyle::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DiagramStyle::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DiagramStyle.Diagram", &assign_DiagramStyle_Diagram);
}

void DiagramStyle::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void DiagramStyle::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void DiagramStyle::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool DiagramStyle::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DiagramStyle" &&
		dynamic_cast<DiagramStyle*>(otherObject) != nullptr;
}

const BaseClassDefiner DiagramStyle::declare()
{
	return BaseClassDefiner(DiagramStyle::addConstructToMap, DiagramStyle::addPrimitiveAssignFnsToMap, DiagramStyle::addClassAssignFnsToMap, DiagramStyle::debugName);
}

std::map<std::string, AttrDetails> DiagramStyle::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DiagramStyle_factory()
	{
		return new DiagramStyle;
	}
}
