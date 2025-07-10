/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Junction.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Junction(),
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
	};
    return ClassAttrDetailsMap;
}

Junction::Junction() {}
Junction::~Junction() {}

const std::list<std::string>& Junction::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Junction::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Junction::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Junction::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Junction::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Junction::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Junction::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char Junction::debugName[] = "Junction";
const char* Junction::debugString() const
{
	return Junction::debugName;
}

void Junction::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Junction", &Junction_factory);
}

void Junction::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Junction::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Junction::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Connector::addPrimitiveGetFnsToMap(get_map);
}

void Junction::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Connector::addClassGetFnsToMap(get_map);
}

void Junction::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Connector::addEnumGetFnsToMap(get_map);
}

bool Junction::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Junction" &&
		dynamic_cast<Junction*>(otherObject) != nullptr;
}

const BaseClassDefiner Junction::declare()
{
	return BaseClassDefiner(Junction::addConstructToMap, Junction::addPrimitiveAssignFnsToMap, Junction::addClassAssignFnsToMap, Junction::debugName);
}

std::map<std::string, AttrDetails> Junction::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Connector::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Junction_factory()
	{
		return new Junction;
	}
}
