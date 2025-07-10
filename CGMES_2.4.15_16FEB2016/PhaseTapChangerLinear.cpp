/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerLinear.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PhaseTapChangerLinear(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "PhaseTapChangerLinear.stepPhaseShiftIncrement", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "PhaseTapChangerLinear.xMax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "PhaseTapChangerLinear.xMin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

PhaseTapChangerLinear::PhaseTapChangerLinear() {}
PhaseTapChangerLinear::~PhaseTapChangerLinear() {}

const std::list<std::string>& PhaseTapChangerLinear::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PhaseTapChangerLinear::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PhaseTapChangerLinear::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PhaseTapChangerLinear::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PhaseTapChangerLinear::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PhaseTapChangerLinear::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PhaseTapChangerLinear::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PhaseTapChangerLinear_stepPhaseShiftIncrement(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PhaseTapChangerLinear* element = dynamic_cast<PhaseTapChangerLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->stepPhaseShiftIncrement;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PhaseTapChangerLinear_xMax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PhaseTapChangerLinear* element = dynamic_cast<PhaseTapChangerLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xMax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PhaseTapChangerLinear_xMin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PhaseTapChangerLinear* element = dynamic_cast<PhaseTapChangerLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xMin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PhaseTapChangerLinear_stepPhaseShiftIncrement(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PhaseTapChangerLinear* element = dynamic_cast<const PhaseTapChangerLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->stepPhaseShiftIncrement;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PhaseTapChangerLinear_xMax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PhaseTapChangerLinear* element = dynamic_cast<const PhaseTapChangerLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xMax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PhaseTapChangerLinear_xMin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PhaseTapChangerLinear* element = dynamic_cast<const PhaseTapChangerLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xMin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PhaseTapChangerLinear::debugName[] = "PhaseTapChangerLinear";
const char* PhaseTapChangerLinear::debugString() const
{
	return PhaseTapChangerLinear::debugName;
}

void PhaseTapChangerLinear::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PhaseTapChangerLinear", &PhaseTapChangerLinear_factory);
}

void PhaseTapChangerLinear::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PhaseTapChangerLinear.stepPhaseShiftIncrement", &assign_PhaseTapChangerLinear_stepPhaseShiftIncrement);
	assign_map.emplace("PhaseTapChangerLinear.xMax", &assign_PhaseTapChangerLinear_xMax);
	assign_map.emplace("PhaseTapChangerLinear.xMin", &assign_PhaseTapChangerLinear_xMin);
}

void PhaseTapChangerLinear::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PhaseTapChangerLinear::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChanger::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PhaseTapChangerLinear.stepPhaseShiftIncrement", &get_PhaseTapChangerLinear_stepPhaseShiftIncrement);
	get_map.emplace("PhaseTapChangerLinear.xMax", &get_PhaseTapChangerLinear_xMax);
	get_map.emplace("PhaseTapChangerLinear.xMin", &get_PhaseTapChangerLinear_xMin);
}

void PhaseTapChangerLinear::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PhaseTapChanger::addClassGetFnsToMap(get_map);
}

void PhaseTapChangerLinear::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChanger::addEnumGetFnsToMap(get_map);
}

bool PhaseTapChangerLinear::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PhaseTapChangerLinear" &&
		dynamic_cast<PhaseTapChangerLinear*>(otherObject) != nullptr;
}

const BaseClassDefiner PhaseTapChangerLinear::declare()
{
	return BaseClassDefiner(PhaseTapChangerLinear::addConstructToMap, PhaseTapChangerLinear::addPrimitiveAssignFnsToMap, PhaseTapChangerLinear::addClassAssignFnsToMap, PhaseTapChangerLinear::debugName);
}

std::map<std::string, AttrDetails> PhaseTapChangerLinear::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PhaseTapChanger::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerLinear_factory()
	{
		return new PhaseTapChangerLinear;
	}
}
