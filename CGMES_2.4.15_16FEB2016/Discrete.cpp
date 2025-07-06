/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Discrete.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DiscreteValue.hpp"
#include "ValueAliasSet.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Discrete(),
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
		{ "Discrete.DiscreteValues", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "Discrete.ValueAliasSet", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

Discrete::Discrete() : ValueAliasSet(nullptr) {}
Discrete::~Discrete() {}

const std::list<std::string>& Discrete::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Discrete::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Discrete::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Discrete::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Discrete::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Discrete::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Discrete::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DiscreteValue_Discrete(BaseClass*, BaseClass*);
bool assign_Discrete_DiscreteValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Discrete* element = dynamic_cast<Discrete*>(BaseClass_ptr1);
	DiscreteValue* element2 = dynamic_cast<DiscreteValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DiscreteValues.begin(), element->DiscreteValues.end(), element2) == element->DiscreteValues.end())
		{
			element->DiscreteValues.push_back(element2);
			return assign_DiscreteValue_Discrete(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ValueAliasSet_Discretes(BaseClass*, BaseClass*);
bool assign_Discrete_ValueAliasSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Discrete* element = dynamic_cast<Discrete*>(BaseClass_ptr1);
	ValueAliasSet* element2 = dynamic_cast<ValueAliasSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ValueAliasSet != element2)
		{
			element->ValueAliasSet = element2;
			return assign_ValueAliasSet_Discretes(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_Discrete_ValueAliasSet(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Discrete* element = dynamic_cast<const Discrete*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ValueAliasSet != 0)
		{
			BaseClass_list.push_back(element->ValueAliasSet);
			return true;
		}
	}
	return false;
}

const char Discrete::debugName[] = "Discrete";
const char* Discrete::debugString() const
{
	return Discrete::debugName;
}

void Discrete::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Discrete", &Discrete_factory);
}

void Discrete::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Discrete::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("Discrete.DiscreteValues", &assign_Discrete_DiscreteValues);
	assign_map.emplace("Discrete.ValueAliasSet", &assign_Discrete_ValueAliasSet);
}

void Discrete::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Measurement::addPrimitiveGetFnsToMap(get_map);
}

void Discrete::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Measurement::addClassGetFnsToMap(get_map);
	get_map.emplace("Discrete.ValueAliasSet", &get_Discrete_ValueAliasSet);
}

void Discrete::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Measurement::addEnumGetFnsToMap(get_map);
}

bool Discrete::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Discrete" &&
		dynamic_cast<Discrete*>(otherObject) != nullptr;
}

const BaseClassDefiner Discrete::declare()
{
	return BaseClassDefiner(Discrete::addConstructToMap, Discrete::addPrimitiveAssignFnsToMap, Discrete::addClassAssignFnsToMap, Discrete::debugName);
}

std::map<std::string, AttrDetails> Discrete::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Measurement::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Discrete_factory()
	{
		return new Discrete;
	}
}
