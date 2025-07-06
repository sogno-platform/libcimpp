/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerSymmetrical.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PhaseTapChangerSymmetrical(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
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

PhaseTapChangerSymmetrical::PhaseTapChangerSymmetrical() {}
PhaseTapChangerSymmetrical::~PhaseTapChangerSymmetrical() {}

const std::list<std::string>& PhaseTapChangerSymmetrical::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PhaseTapChangerSymmetrical::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PhaseTapChangerSymmetrical::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PhaseTapChangerSymmetrical::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PhaseTapChangerSymmetrical::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PhaseTapChangerSymmetrical::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PhaseTapChangerSymmetrical::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char PhaseTapChangerSymmetrical::debugName[] = "PhaseTapChangerSymmetrical";
const char* PhaseTapChangerSymmetrical::debugString() const
{
	return PhaseTapChangerSymmetrical::debugName;
}

void PhaseTapChangerSymmetrical::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PhaseTapChangerSymmetrical", &PhaseTapChangerSymmetrical_factory);
}

void PhaseTapChangerSymmetrical::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PhaseTapChangerSymmetrical::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PhaseTapChangerSymmetrical::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChangerNonLinear::addPrimitiveGetFnsToMap(get_map);
}

void PhaseTapChangerSymmetrical::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PhaseTapChangerNonLinear::addClassGetFnsToMap(get_map);
}

void PhaseTapChangerSymmetrical::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChangerNonLinear::addEnumGetFnsToMap(get_map);
}

bool PhaseTapChangerSymmetrical::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PhaseTapChangerSymmetrical" &&
		dynamic_cast<PhaseTapChangerSymmetrical*>(otherObject) != nullptr;
}

const BaseClassDefiner PhaseTapChangerSymmetrical::declare()
{
	return BaseClassDefiner(PhaseTapChangerSymmetrical::addConstructToMap, PhaseTapChangerSymmetrical::addPrimitiveAssignFnsToMap, PhaseTapChangerSymmetrical::addClassAssignFnsToMap, PhaseTapChangerSymmetrical::debugName);
}

std::map<std::string, AttrDetails> PhaseTapChangerSymmetrical::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PhaseTapChangerNonLinear::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerSymmetrical_factory()
	{
		return new PhaseTapChangerSymmetrical;
	}
}
