/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineSimplified.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SynchronousMachineSimplified(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
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

SynchronousMachineSimplified::SynchronousMachineSimplified() {}
SynchronousMachineSimplified::~SynchronousMachineSimplified() {}

const std::list<std::string>& SynchronousMachineSimplified::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SynchronousMachineSimplified::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SynchronousMachineSimplified::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SynchronousMachineSimplified::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SynchronousMachineSimplified::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SynchronousMachineSimplified::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SynchronousMachineSimplified::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char SynchronousMachineSimplified::debugName[] = "SynchronousMachineSimplified";
const char* SynchronousMachineSimplified::debugString() const
{
	return SynchronousMachineSimplified::debugName;
}

void SynchronousMachineSimplified::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SynchronousMachineSimplified", &SynchronousMachineSimplified_factory);
}

void SynchronousMachineSimplified::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SynchronousMachineSimplified::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SynchronousMachineSimplified::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDynamics::addPrimitiveGetFnsToMap(get_map);
}

void SynchronousMachineSimplified::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SynchronousMachineDynamics::addClassGetFnsToMap(get_map);
}

void SynchronousMachineSimplified::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDynamics::addEnumGetFnsToMap(get_map);
}

bool SynchronousMachineSimplified::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SynchronousMachineSimplified" &&
		dynamic_cast<SynchronousMachineSimplified*>(otherObject) != nullptr;
}

const BaseClassDefiner SynchronousMachineSimplified::declare()
{
	return BaseClassDefiner(SynchronousMachineSimplified::addConstructToMap, SynchronousMachineSimplified::addPrimitiveAssignFnsToMap, SynchronousMachineSimplified::addClassAssignFnsToMap, SynchronousMachineSimplified::debugName);
}

std::map<std::string, AttrDetails> SynchronousMachineSimplified::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = SynchronousMachineDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SynchronousMachineSimplified_factory()
	{
		return new SynchronousMachineSimplified;
	}
}
