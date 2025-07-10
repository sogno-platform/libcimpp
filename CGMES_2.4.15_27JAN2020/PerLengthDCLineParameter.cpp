/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PerLengthDCLineParameter.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DCLineSegment.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PerLengthDCLineParameter(),
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
		{ "PerLengthDCLineParameter.DCLineSegments", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "PerLengthDCLineParameter.capacitance", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "PerLengthDCLineParameter.inductance", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "PerLengthDCLineParameter.resistance", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

PerLengthDCLineParameter::PerLengthDCLineParameter() {}
PerLengthDCLineParameter::~PerLengthDCLineParameter() {}

const std::list<std::string>& PerLengthDCLineParameter::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PerLengthDCLineParameter::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PerLengthDCLineParameter::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PerLengthDCLineParameter::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PerLengthDCLineParameter::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PerLengthDCLineParameter::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PerLengthDCLineParameter::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DCLineSegment_PerLengthParameter(BaseClass*, BaseClass*);
bool assign_PerLengthDCLineParameter_DCLineSegments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PerLengthDCLineParameter* element = dynamic_cast<PerLengthDCLineParameter*>(BaseClass_ptr1);
	DCLineSegment* element2 = dynamic_cast<DCLineSegment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCLineSegments.begin(), element->DCLineSegments.end(), element2) == element->DCLineSegments.end())
		{
			element->DCLineSegments.push_back(element2);
			return assign_DCLineSegment_PerLengthParameter(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PerLengthDCLineParameter_capacitance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PerLengthDCLineParameter* element = dynamic_cast<PerLengthDCLineParameter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->capacitance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PerLengthDCLineParameter_inductance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PerLengthDCLineParameter* element = dynamic_cast<PerLengthDCLineParameter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inductance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PerLengthDCLineParameter_resistance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PerLengthDCLineParameter* element = dynamic_cast<PerLengthDCLineParameter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->resistance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_PerLengthDCLineParameter_capacitance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PerLengthDCLineParameter* element = dynamic_cast<const PerLengthDCLineParameter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->capacitance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PerLengthDCLineParameter_inductance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PerLengthDCLineParameter* element = dynamic_cast<const PerLengthDCLineParameter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inductance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PerLengthDCLineParameter_resistance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PerLengthDCLineParameter* element = dynamic_cast<const PerLengthDCLineParameter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->resistance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PerLengthDCLineParameter::debugName[] = "PerLengthDCLineParameter";
const char* PerLengthDCLineParameter::debugString() const
{
	return PerLengthDCLineParameter::debugName;
}

void PerLengthDCLineParameter::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PerLengthDCLineParameter", &PerLengthDCLineParameter_factory);
}

void PerLengthDCLineParameter::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PerLengthDCLineParameter.capacitance", &assign_PerLengthDCLineParameter_capacitance);
	assign_map.emplace("PerLengthDCLineParameter.inductance", &assign_PerLengthDCLineParameter_inductance);
	assign_map.emplace("PerLengthDCLineParameter.resistance", &assign_PerLengthDCLineParameter_resistance);
}

void PerLengthDCLineParameter::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PerLengthDCLineParameter.DCLineSegments", &assign_PerLengthDCLineParameter_DCLineSegments);
}

void PerLengthDCLineParameter::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PerLengthDCLineParameter.capacitance", &get_PerLengthDCLineParameter_capacitance);
	get_map.emplace("PerLengthDCLineParameter.inductance", &get_PerLengthDCLineParameter_inductance);
	get_map.emplace("PerLengthDCLineParameter.resistance", &get_PerLengthDCLineParameter_resistance);
}

void PerLengthDCLineParameter::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void PerLengthDCLineParameter::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool PerLengthDCLineParameter::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PerLengthDCLineParameter" &&
		dynamic_cast<PerLengthDCLineParameter*>(otherObject) != nullptr;
}

const BaseClassDefiner PerLengthDCLineParameter::declare()
{
	return BaseClassDefiner(PerLengthDCLineParameter::addConstructToMap, PerLengthDCLineParameter::addPrimitiveAssignFnsToMap, PerLengthDCLineParameter::addClassAssignFnsToMap, PerLengthDCLineParameter::debugName);
}

std::map<std::string, AttrDetails> PerLengthDCLineParameter::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PerLengthDCLineParameter_factory()
	{
		return new PerLengthDCLineParameter;
	}
}
