/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AccumulatorValue.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Accumulator.hpp"
#include "AccumulatorReset.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		AccumulatorValue(),
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
		{ "AccumulatorValue.Accumulator", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "AccumulatorValue.AccumulatorReset", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "AccumulatorValue.value", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

AccumulatorValue::AccumulatorValue() : Accumulator(nullptr), AccumulatorReset(nullptr) {}
AccumulatorValue::~AccumulatorValue() {}

const std::list<std::string>& AccumulatorValue::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& AccumulatorValue::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& AccumulatorValue::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& AccumulatorValue::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& AccumulatorValue::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& AccumulatorValue::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& AccumulatorValue::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_Accumulator_AccumulatorValues(BaseClass*, BaseClass*);
bool assign_AccumulatorValue_Accumulator(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AccumulatorValue* element = dynamic_cast<AccumulatorValue*>(BaseClass_ptr1);
	Accumulator* element2 = dynamic_cast<Accumulator*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Accumulator != element2)
		{
			element->Accumulator = element2;
			return assign_Accumulator_AccumulatorValues(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AccumulatorReset_AccumulatorValue(BaseClass*, BaseClass*);
bool assign_AccumulatorValue_AccumulatorReset(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AccumulatorValue* element = dynamic_cast<AccumulatorValue*>(BaseClass_ptr1);
	AccumulatorReset* element2 = dynamic_cast<AccumulatorReset*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AccumulatorReset != element2)
		{
			element->AccumulatorReset = element2;
			return assign_AccumulatorReset_AccumulatorValue(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AccumulatorValue_value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AccumulatorValue* element = dynamic_cast<AccumulatorValue*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->value;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_AccumulatorValue_Accumulator(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const AccumulatorValue* element = dynamic_cast<const AccumulatorValue*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Accumulator != 0)
		{
			BaseClass_list.push_back(element->Accumulator);
			return true;
		}
	}
	return false;
}


bool get_AccumulatorValue_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AccumulatorValue* element = dynamic_cast<const AccumulatorValue*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->value;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char AccumulatorValue::debugName[] = "AccumulatorValue";
const char* AccumulatorValue::debugString() const
{
	return AccumulatorValue::debugName;
}

void AccumulatorValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("AccumulatorValue", &AccumulatorValue_factory);
}

void AccumulatorValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("AccumulatorValue.value", &assign_AccumulatorValue_value);
}

void AccumulatorValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("AccumulatorValue.Accumulator", &assign_AccumulatorValue_Accumulator);
	assign_map.emplace("AccumulatorValue.AccumulatorReset", &assign_AccumulatorValue_AccumulatorReset);
}

void AccumulatorValue::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MeasurementValue::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("AccumulatorValue.value", &get_AccumulatorValue_value);
}

void AccumulatorValue::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	MeasurementValue::addClassGetFnsToMap(get_map);
	get_map.emplace("AccumulatorValue.Accumulator", &get_AccumulatorValue_Accumulator);
}

void AccumulatorValue::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MeasurementValue::addEnumGetFnsToMap(get_map);
}

bool AccumulatorValue::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "AccumulatorValue" &&
		dynamic_cast<AccumulatorValue*>(otherObject) != nullptr;
}

const BaseClassDefiner AccumulatorValue::declare()
{
	return BaseClassDefiner(AccumulatorValue::addConstructToMap, AccumulatorValue::addPrimitiveAssignFnsToMap, AccumulatorValue::addClassAssignFnsToMap, AccumulatorValue::debugName);
}

std::map<std::string, AttrDetails> AccumulatorValue::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = MeasurementValue::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* AccumulatorValue_factory()
	{
		return new AccumulatorValue;
	}
}
