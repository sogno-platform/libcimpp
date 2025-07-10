/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Line.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SubGeographicalRegion.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Line(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ_BD,
			CGMESProfile::EQ,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "Line.Region", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ_BD, CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

Line::Line() : Region(nullptr) {}
Line::~Line() {}

const std::list<std::string>& Line::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Line::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Line::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Line::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Line::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Line::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Line::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SubGeographicalRegion_Lines(BaseClass*, BaseClass*);
bool assign_Line_Region(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Line* element = dynamic_cast<Line*>(BaseClass_ptr1);
	SubGeographicalRegion* element2 = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Region != element2)
		{
			element->Region = element2;
			return assign_SubGeographicalRegion_Lines(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_Line_Region(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Line* element = dynamic_cast<const Line*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Region != 0)
		{
			BaseClass_list.push_back(element->Region);
			return true;
		}
	}
	return false;
}

const char Line::debugName[] = "Line";
const char* Line::debugString() const
{
	return Line::debugName;
}

void Line::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Line", &Line_factory);
}

void Line::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Line::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("Line.Region", &assign_Line_Region);
}

void Line::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addPrimitiveGetFnsToMap(get_map);
}

void Line::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquipmentContainer::addClassGetFnsToMap(get_map);
	get_map.emplace("Line.Region", &get_Line_Region);
}

void Line::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addEnumGetFnsToMap(get_map);
}

bool Line::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Line" &&
		dynamic_cast<Line*>(otherObject) != nullptr;
}

const BaseClassDefiner Line::declare()
{
	return BaseClassDefiner(Line::addConstructToMap, Line::addPrimitiveAssignFnsToMap, Line::addClassAssignFnsToMap, Line::debugName);
}

std::map<std::string, AttrDetails> Line::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EquipmentContainer::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Line_factory()
	{
		return new Line;
	}
}
