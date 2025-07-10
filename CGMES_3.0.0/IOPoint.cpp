/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "IOPoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		IOPoint(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::OP,
		},
		CGMESProfile::OP
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
	};
    return ClassAttrDetailsMap;
}

IOPoint::IOPoint() {}
IOPoint::~IOPoint() {}

const std::list<std::string>& IOPoint::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& IOPoint::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& IOPoint::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& IOPoint::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& IOPoint::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& IOPoint::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& IOPoint::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char IOPoint::debugName[] = "IOPoint";
const char* IOPoint::debugString() const
{
	return IOPoint::debugName;
}

void IOPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("IOPoint", &IOPoint_factory);
}

void IOPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void IOPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void IOPoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void IOPoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void IOPoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool IOPoint::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "IOPoint" &&
		dynamic_cast<IOPoint*>(otherObject) != nullptr;
}

const BaseClassDefiner IOPoint::declare()
{
	return BaseClassDefiner(IOPoint::addConstructToMap, IOPoint::addPrimitiveAssignFnsToMap, IOPoint::addClassAssignFnsToMap, IOPoint::debugName);
}

std::map<std::string, AttrDetails> IOPoint::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* IOPoint_factory()
	{
		return new IOPoint;
	}
}
