/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiagramObjectGluePoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DiagramObjectPoint.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DiagramObjectGluePoint(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "DiagramObjectGluePoint.DiagramObjectPoints", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DL, } } },
	};
    return ClassAttrDetailsMap;
}

DiagramObjectGluePoint::DiagramObjectGluePoint() {}
DiagramObjectGluePoint::~DiagramObjectGluePoint() {}

const std::list<std::string>& DiagramObjectGluePoint::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DiagramObjectGluePoint::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DiagramObjectGluePoint::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DiagramObjectGluePoint::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DiagramObjectGluePoint::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DiagramObjectGluePoint::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DiagramObjectGluePoint::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

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
	factory_map.emplace("DiagramObjectGluePoint", &DiagramObjectGluePoint_factory);
}

void DiagramObjectGluePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DiagramObjectGluePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DiagramObjectGluePoint.DiagramObjectPoints", &assign_DiagramObjectGluePoint_DiagramObjectPoints);
}

void DiagramObjectGluePoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
}

void DiagramObjectGluePoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void DiagramObjectGluePoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool DiagramObjectGluePoint::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DiagramObjectGluePoint" &&
		dynamic_cast<DiagramObjectGluePoint*>(otherObject) != nullptr;
}

const BaseClassDefiner DiagramObjectGluePoint::declare()
{
	return BaseClassDefiner(DiagramObjectGluePoint::addConstructToMap, DiagramObjectGluePoint::addPrimitiveAssignFnsToMap, DiagramObjectGluePoint::addClassAssignFnsToMap, DiagramObjectGluePoint::debugName);
}

std::map<std::string, AttrDetails> DiagramObjectGluePoint::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DiagramObjectGluePoint_factory()
	{
		return new DiagramObjectGluePoint;
	}
}
