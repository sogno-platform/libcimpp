/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerAsymmetrical.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PhaseTapChangerAsymmetrical(),
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
		{ "PhaseTapChangerAsymmetrical.windingConnectionAngle", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

PhaseTapChangerAsymmetrical::PhaseTapChangerAsymmetrical() {}
PhaseTapChangerAsymmetrical::~PhaseTapChangerAsymmetrical() {}

const std::list<std::string>& PhaseTapChangerAsymmetrical::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PhaseTapChangerAsymmetrical::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PhaseTapChangerAsymmetrical::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PhaseTapChangerAsymmetrical::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PhaseTapChangerAsymmetrical::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PhaseTapChangerAsymmetrical::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PhaseTapChangerAsymmetrical::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PhaseTapChangerAsymmetrical_windingConnectionAngle(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PhaseTapChangerAsymmetrical* element = dynamic_cast<PhaseTapChangerAsymmetrical*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->windingConnectionAngle;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PhaseTapChangerAsymmetrical_windingConnectionAngle(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PhaseTapChangerAsymmetrical* element = dynamic_cast<const PhaseTapChangerAsymmetrical*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->windingConnectionAngle;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PhaseTapChangerAsymmetrical::debugName[] = "PhaseTapChangerAsymmetrical";
const char* PhaseTapChangerAsymmetrical::debugString() const
{
	return PhaseTapChangerAsymmetrical::debugName;
}

void PhaseTapChangerAsymmetrical::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PhaseTapChangerAsymmetrical", &PhaseTapChangerAsymmetrical_factory);
}

void PhaseTapChangerAsymmetrical::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PhaseTapChangerAsymmetrical.windingConnectionAngle", &assign_PhaseTapChangerAsymmetrical_windingConnectionAngle);
}

void PhaseTapChangerAsymmetrical::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PhaseTapChangerAsymmetrical::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChangerNonLinear::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PhaseTapChangerAsymmetrical.windingConnectionAngle", &get_PhaseTapChangerAsymmetrical_windingConnectionAngle);
}

void PhaseTapChangerAsymmetrical::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PhaseTapChangerNonLinear::addClassGetFnsToMap(get_map);
}

void PhaseTapChangerAsymmetrical::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChangerNonLinear::addEnumGetFnsToMap(get_map);
}

bool PhaseTapChangerAsymmetrical::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PhaseTapChangerAsymmetrical" &&
		dynamic_cast<PhaseTapChangerAsymmetrical*>(otherObject) != nullptr;
}

const BaseClassDefiner PhaseTapChangerAsymmetrical::declare()
{
	return BaseClassDefiner(PhaseTapChangerAsymmetrical::addConstructToMap, PhaseTapChangerAsymmetrical::addPrimitiveAssignFnsToMap, PhaseTapChangerAsymmetrical::addClassAssignFnsToMap, PhaseTapChangerAsymmetrical::debugName);
}

std::map<std::string, AttrDetails> PhaseTapChangerAsymmetrical::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PhaseTapChangerNonLinear::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerAsymmetrical_factory()
	{
		return new PhaseTapChangerAsymmetrical;
	}
}
