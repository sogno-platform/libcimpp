/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GeographicalRegion.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SubGeographicalRegion.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GeographicalRegion(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::EQBD,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "GeographicalRegion.Regions", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
	};
    return ClassAttrDetailsMap;
}

GeographicalRegion::GeographicalRegion() {}
GeographicalRegion::~GeographicalRegion() {}

const std::list<std::string>& GeographicalRegion::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GeographicalRegion::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GeographicalRegion::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GeographicalRegion::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GeographicalRegion::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GeographicalRegion::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GeographicalRegion::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SubGeographicalRegion_Region(BaseClass*, BaseClass*);
bool assign_GeographicalRegion_Regions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	GeographicalRegion* element = dynamic_cast<GeographicalRegion*>(BaseClass_ptr1);
	SubGeographicalRegion* element2 = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Regions.begin(), element->Regions.end(), element2) == element->Regions.end())
		{
			element->Regions.push_back(element2);
			return assign_SubGeographicalRegion_Region(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char GeographicalRegion::debugName[] = "GeographicalRegion";
const char* GeographicalRegion::debugString() const
{
	return GeographicalRegion::debugName;
}

void GeographicalRegion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GeographicalRegion", &GeographicalRegion_factory);
}

void GeographicalRegion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void GeographicalRegion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("GeographicalRegion.Regions", &assign_GeographicalRegion_Regions);
}

void GeographicalRegion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void GeographicalRegion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void GeographicalRegion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool GeographicalRegion::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GeographicalRegion" &&
		dynamic_cast<GeographicalRegion*>(otherObject) != nullptr;
}

const BaseClassDefiner GeographicalRegion::declare()
{
	return BaseClassDefiner(GeographicalRegion::addConstructToMap, GeographicalRegion::addPrimitiveAssignFnsToMap, GeographicalRegion::addClassAssignFnsToMap, GeographicalRegion::debugName);
}

std::map<std::string, AttrDetails> GeographicalRegion::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GeographicalRegion_factory()
	{
		return new GeographicalRegion;
	}
}
