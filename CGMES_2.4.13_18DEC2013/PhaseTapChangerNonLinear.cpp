/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerNonLinear.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PhaseTapChangerNonLinear(),
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
		{ "PhaseTapChangerNonLinear.voltageStepIncrement", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "PhaseTapChangerNonLinear.xMax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "PhaseTapChangerNonLinear.xMin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

PhaseTapChangerNonLinear::PhaseTapChangerNonLinear() {}
PhaseTapChangerNonLinear::~PhaseTapChangerNonLinear() {}

const std::list<std::string>& PhaseTapChangerNonLinear::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PhaseTapChangerNonLinear::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PhaseTapChangerNonLinear::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PhaseTapChangerNonLinear::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PhaseTapChangerNonLinear::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PhaseTapChangerNonLinear::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PhaseTapChangerNonLinear::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PhaseTapChangerNonLinear_voltageStepIncrement(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PhaseTapChangerNonLinear* element = dynamic_cast<PhaseTapChangerNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->voltageStepIncrement;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PhaseTapChangerNonLinear_xMax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PhaseTapChangerNonLinear* element = dynamic_cast<PhaseTapChangerNonLinear*>(BaseClass_ptr1);
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

bool assign_PhaseTapChangerNonLinear_xMin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PhaseTapChangerNonLinear* element = dynamic_cast<PhaseTapChangerNonLinear*>(BaseClass_ptr1);
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

bool get_PhaseTapChangerNonLinear_voltageStepIncrement(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PhaseTapChangerNonLinear* element = dynamic_cast<const PhaseTapChangerNonLinear*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->voltageStepIncrement;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PhaseTapChangerNonLinear_xMax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PhaseTapChangerNonLinear* element = dynamic_cast<const PhaseTapChangerNonLinear*>(BaseClass_ptr1);
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

bool get_PhaseTapChangerNonLinear_xMin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PhaseTapChangerNonLinear* element = dynamic_cast<const PhaseTapChangerNonLinear*>(BaseClass_ptr1);
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

const char PhaseTapChangerNonLinear::debugName[] = "PhaseTapChangerNonLinear";
const char* PhaseTapChangerNonLinear::debugString() const
{
	return PhaseTapChangerNonLinear::debugName;
}

void PhaseTapChangerNonLinear::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PhaseTapChangerNonLinear", &PhaseTapChangerNonLinear_factory);
}

void PhaseTapChangerNonLinear::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PhaseTapChangerNonLinear.voltageStepIncrement", &assign_PhaseTapChangerNonLinear_voltageStepIncrement);
	assign_map.emplace("PhaseTapChangerNonLinear.xMax", &assign_PhaseTapChangerNonLinear_xMax);
	assign_map.emplace("PhaseTapChangerNonLinear.xMin", &assign_PhaseTapChangerNonLinear_xMin);
}

void PhaseTapChangerNonLinear::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PhaseTapChangerNonLinear::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChanger::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PhaseTapChangerNonLinear.voltageStepIncrement", &get_PhaseTapChangerNonLinear_voltageStepIncrement);
	get_map.emplace("PhaseTapChangerNonLinear.xMax", &get_PhaseTapChangerNonLinear_xMax);
	get_map.emplace("PhaseTapChangerNonLinear.xMin", &get_PhaseTapChangerNonLinear_xMin);
}

void PhaseTapChangerNonLinear::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PhaseTapChanger::addClassGetFnsToMap(get_map);
}

void PhaseTapChangerNonLinear::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChanger::addEnumGetFnsToMap(get_map);
}

bool PhaseTapChangerNonLinear::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PhaseTapChangerNonLinear" &&
		dynamic_cast<PhaseTapChangerNonLinear*>(otherObject) != nullptr;
}

const BaseClassDefiner PhaseTapChangerNonLinear::declare()
{
	return BaseClassDefiner(PhaseTapChangerNonLinear::addConstructToMap, PhaseTapChangerNonLinear::addPrimitiveAssignFnsToMap, PhaseTapChangerNonLinear::addClassAssignFnsToMap, PhaseTapChangerNonLinear::debugName);
}

std::map<std::string, AttrDetails> PhaseTapChangerNonLinear::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PhaseTapChanger::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerNonLinear_factory()
	{
		return new PhaseTapChangerNonLinear;
	}
}
