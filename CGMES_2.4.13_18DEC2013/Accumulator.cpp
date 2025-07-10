/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Accumulator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AccumulatorLimitSet.hpp"
#include "AccumulatorValue.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Accumulator(),
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
		{ "Accumulator.AccumulatorValues", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "Accumulator.LimitSets", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

Accumulator::Accumulator() {}
Accumulator::~Accumulator() {}

const std::list<std::string>& Accumulator::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Accumulator::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Accumulator::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Accumulator::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Accumulator::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Accumulator::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Accumulator::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_AccumulatorValue_Accumulator(BaseClass*, BaseClass*);
bool assign_Accumulator_AccumulatorValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Accumulator* element = dynamic_cast<Accumulator*>(BaseClass_ptr1);
	AccumulatorValue* element2 = dynamic_cast<AccumulatorValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->AccumulatorValues.begin(), element->AccumulatorValues.end(), element2) == element->AccumulatorValues.end())
		{
			element->AccumulatorValues.push_back(element2);
			return assign_AccumulatorValue_Accumulator(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AccumulatorLimitSet_Measurements(BaseClass*, BaseClass*);
bool assign_Accumulator_LimitSets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Accumulator* element = dynamic_cast<Accumulator*>(BaseClass_ptr1);
	AccumulatorLimitSet* element2 = dynamic_cast<AccumulatorLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->LimitSets.begin(), element->LimitSets.end(), element2) == element->LimitSets.end())
		{
			element->LimitSets.push_back(element2);
			return assign_AccumulatorLimitSet_Measurements(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char Accumulator::debugName[] = "Accumulator";
const char* Accumulator::debugString() const
{
	return Accumulator::debugName;
}

void Accumulator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Accumulator", &Accumulator_factory);
}

void Accumulator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Accumulator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("Accumulator.AccumulatorValues", &assign_Accumulator_AccumulatorValues);
	assign_map.emplace("Accumulator.LimitSets", &assign_Accumulator_LimitSets);
}

void Accumulator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Measurement::addPrimitiveGetFnsToMap(get_map);
}

void Accumulator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Measurement::addClassGetFnsToMap(get_map);
}

void Accumulator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Measurement::addEnumGetFnsToMap(get_map);
}

bool Accumulator::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Accumulator" &&
		dynamic_cast<Accumulator*>(otherObject) != nullptr;
}

const BaseClassDefiner Accumulator::declare()
{
	return BaseClassDefiner(Accumulator::addConstructToMap, Accumulator::addPrimitiveAssignFnsToMap, Accumulator::addClassAssignFnsToMap, Accumulator::debugName);
}

std::map<std::string, AttrDetails> Accumulator::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Measurement::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Accumulator_factory()
	{
		return new Accumulator;
	}
}
