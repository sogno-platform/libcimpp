/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ValueToAlias.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ValueAliasSet.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ValueToAlias(),
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
		{ "ValueToAlias.ValueAliasSet", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ValueToAlias.value", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ValueToAlias::ValueToAlias() : ValueAliasSet(nullptr) {}
ValueToAlias::~ValueToAlias() {}

const std::list<std::string>& ValueToAlias::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ValueToAlias::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ValueToAlias::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ValueToAlias::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ValueToAlias::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ValueToAlias::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ValueToAlias::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ValueAliasSet_Values(BaseClass*, BaseClass*);
bool assign_ValueToAlias_ValueAliasSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ValueToAlias* element = dynamic_cast<ValueToAlias*>(BaseClass_ptr1);
	ValueAliasSet* element2 = dynamic_cast<ValueAliasSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ValueAliasSet != element2)
		{
			element->ValueAliasSet = element2;
			return assign_ValueAliasSet_Values(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ValueToAlias_value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ValueToAlias* element = dynamic_cast<ValueToAlias*>(BaseClass_ptr1);
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

bool get_ValueToAlias_ValueAliasSet(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ValueToAlias* element = dynamic_cast<const ValueToAlias*>(BaseClass_ptr1);
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

bool get_ValueToAlias_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ValueToAlias* element = dynamic_cast<const ValueToAlias*>(BaseClass_ptr1);
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

const char ValueToAlias::debugName[] = "ValueToAlias";
const char* ValueToAlias::debugString() const
{
	return ValueToAlias::debugName;
}

void ValueToAlias::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ValueToAlias", &ValueToAlias_factory);
}

void ValueToAlias::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ValueToAlias.value", &assign_ValueToAlias_value);
}

void ValueToAlias::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ValueToAlias.ValueAliasSet", &assign_ValueToAlias_ValueAliasSet);
}

void ValueToAlias::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ValueToAlias.value", &get_ValueToAlias_value);
}

void ValueToAlias::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("ValueToAlias.ValueAliasSet", &get_ValueToAlias_ValueAliasSet);
}

void ValueToAlias::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool ValueToAlias::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ValueToAlias" &&
		dynamic_cast<ValueToAlias*>(otherObject) != nullptr;
}

const BaseClassDefiner ValueToAlias::declare()
{
	return BaseClassDefiner(ValueToAlias::addConstructToMap, ValueToAlias::addPrimitiveAssignFnsToMap, ValueToAlias::addClassAssignFnsToMap, ValueToAlias::debugName);
}

std::map<std::string, AttrDetails> ValueToAlias::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ValueToAlias_factory()
	{
		return new ValueToAlias;
	}
}
