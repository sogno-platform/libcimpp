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

ValueToAlias::ValueToAlias() : ValueAliasSet(nullptr) {}
ValueToAlias::~ValueToAlias() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::OP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ValueToAlias.ValueAliasSet", { CGMESProfile::OP, } },
	{ "cim:ValueToAlias.value", { CGMESProfile::OP, } },
};

std::list<CGMESProfile>
ValueToAlias::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ValueToAlias::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:ValueToAlias", &ValueToAlias_factory);
}

void ValueToAlias::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ValueToAlias.value", &assign_ValueToAlias_value);
}

void ValueToAlias::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:ValueToAlias.ValueAliasSet", &assign_ValueToAlias_ValueAliasSet);
}

void ValueToAlias::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ValueToAlias.value", &get_ValueToAlias_value);
}

void ValueToAlias::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:ValueToAlias.ValueAliasSet", &get_ValueToAlias_ValueAliasSet);
}

void ValueToAlias::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ValueToAlias::declare()
{
	return BaseClassDefiner(ValueToAlias::addConstructToMap, ValueToAlias::addPrimitiveAssignFnsToMap, ValueToAlias::addClassAssignFnsToMap, ValueToAlias::debugName);
}

namespace CIMPP
{
	BaseClass* ValueToAlias_factory()
	{
		return new ValueToAlias;
	}
}
