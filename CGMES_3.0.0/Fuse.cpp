/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Fuse.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Fuse(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SSH,
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

Fuse::Fuse() {}
Fuse::~Fuse() {}

const std::list<std::string>& Fuse::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Fuse::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Fuse::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Fuse::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Fuse::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Fuse::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Fuse::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char Fuse::debugName[] = "Fuse";
const char* Fuse::debugString() const
{
	return Fuse::debugName;
}

void Fuse::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Fuse", &Fuse_factory);
}

void Fuse::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Fuse::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Fuse::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addPrimitiveGetFnsToMap(get_map);
}

void Fuse::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Switch::addClassGetFnsToMap(get_map);
}

void Fuse::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addEnumGetFnsToMap(get_map);
}

bool Fuse::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Fuse" &&
		dynamic_cast<Fuse*>(otherObject) != nullptr;
}

const BaseClassDefiner Fuse::declare()
{
	return BaseClassDefiner(Fuse::addConstructToMap, Fuse::addPrimitiveAssignFnsToMap, Fuse::addClassAssignFnsToMap, Fuse::debugName);
}

std::map<std::string, AttrDetails> Fuse::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Switch::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Fuse_factory()
	{
		return new Fuse;
	}
}
