/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCLineSegment.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PerLengthDCLineParameter.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DCLineSegment(),
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
		{ "DCLineSegment.PerLengthParameter", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "DCLineSegment.capacitance", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "DCLineSegment.inductance", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "DCLineSegment.length", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "DCLineSegment.resistance", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

DCLineSegment::DCLineSegment() : PerLengthParameter(nullptr) {}
DCLineSegment::~DCLineSegment() {}

const std::list<std::string>& DCLineSegment::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DCLineSegment::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DCLineSegment::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DCLineSegment::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DCLineSegment::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DCLineSegment::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DCLineSegment::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PerLengthDCLineParameter_DCLineSegments(BaseClass*, BaseClass*);
bool assign_DCLineSegment_PerLengthParameter(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCLineSegment* element = dynamic_cast<DCLineSegment*>(BaseClass_ptr1);
	PerLengthDCLineParameter* element2 = dynamic_cast<PerLengthDCLineParameter*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PerLengthParameter != element2)
		{
			element->PerLengthParameter = element2;
			return assign_PerLengthDCLineParameter_DCLineSegments(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DCLineSegment_capacitance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCLineSegment* element = dynamic_cast<DCLineSegment*>(BaseClass_ptr1);
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

bool assign_DCLineSegment_inductance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCLineSegment* element = dynamic_cast<DCLineSegment*>(BaseClass_ptr1);
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

bool assign_DCLineSegment_length(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCLineSegment* element = dynamic_cast<DCLineSegment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->length;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DCLineSegment_resistance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCLineSegment* element = dynamic_cast<DCLineSegment*>(BaseClass_ptr1);
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

bool get_DCLineSegment_PerLengthParameter(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const DCLineSegment* element = dynamic_cast<const DCLineSegment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->PerLengthParameter != 0)
		{
			BaseClass_list.push_back(element->PerLengthParameter);
			return true;
		}
	}
	return false;
}

bool get_DCLineSegment_capacitance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCLineSegment* element = dynamic_cast<const DCLineSegment*>(BaseClass_ptr1);
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

bool get_DCLineSegment_inductance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCLineSegment* element = dynamic_cast<const DCLineSegment*>(BaseClass_ptr1);
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

bool get_DCLineSegment_length(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCLineSegment* element = dynamic_cast<const DCLineSegment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->length;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DCLineSegment_resistance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCLineSegment* element = dynamic_cast<const DCLineSegment*>(BaseClass_ptr1);
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

const char DCLineSegment::debugName[] = "DCLineSegment";
const char* DCLineSegment::debugString() const
{
	return DCLineSegment::debugName;
}

void DCLineSegment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DCLineSegment", &DCLineSegment_factory);
}

void DCLineSegment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("DCLineSegment.capacitance", &assign_DCLineSegment_capacitance);
	assign_map.emplace("DCLineSegment.inductance", &assign_DCLineSegment_inductance);
	assign_map.emplace("DCLineSegment.length", &assign_DCLineSegment_length);
	assign_map.emplace("DCLineSegment.resistance", &assign_DCLineSegment_resistance);
}

void DCLineSegment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DCLineSegment.PerLengthParameter", &assign_DCLineSegment_PerLengthParameter);
}

void DCLineSegment::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("DCLineSegment.capacitance", &get_DCLineSegment_capacitance);
	get_map.emplace("DCLineSegment.inductance", &get_DCLineSegment_inductance);
	get_map.emplace("DCLineSegment.length", &get_DCLineSegment_length);
	get_map.emplace("DCLineSegment.resistance", &get_DCLineSegment_resistance);
}

void DCLineSegment::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCConductingEquipment::addClassGetFnsToMap(get_map);
	get_map.emplace("DCLineSegment.PerLengthParameter", &get_DCLineSegment_PerLengthParameter);
}

void DCLineSegment::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool DCLineSegment::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DCLineSegment" &&
		dynamic_cast<DCLineSegment*>(otherObject) != nullptr;
}

const BaseClassDefiner DCLineSegment::declare()
{
	return BaseClassDefiner(DCLineSegment::addConstructToMap, DCLineSegment::addPrimitiveAssignFnsToMap, DCLineSegment::addClassAssignFnsToMap, DCLineSegment::debugName);
}

std::map<std::string, AttrDetails> DCLineSegment::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DCConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DCLineSegment_factory()
	{
		return new DCLineSegment;
	}
}
