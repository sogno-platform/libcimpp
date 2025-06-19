/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OperationalLimitSet.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ACDCTerminal.hpp"
#include "Equipment.hpp"
#include "OperationalLimit.hpp"

using namespace CIMPP;

OperationalLimitSet::OperationalLimitSet() : Equipment(nullptr), Terminal(nullptr) {}
OperationalLimitSet::~OperationalLimitSet() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:OperationalLimitSet.Equipment", { CGMESProfile::EQ, } },
	{ "cim:OperationalLimitSet.OperationalLimitValue", { CGMESProfile::EQ, } },
	{ "cim:OperationalLimitSet.Terminal", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
OperationalLimitSet::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
OperationalLimitSet::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_Equipment_OperationalLimitSet(BaseClass*, BaseClass*);
bool assign_OperationalLimitSet_Equipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OperationalLimitSet* element = dynamic_cast<OperationalLimitSet*>(BaseClass_ptr1);
	Equipment* element2 = dynamic_cast<Equipment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Equipment != element2)
		{
			element->Equipment = element2;
			return assign_Equipment_OperationalLimitSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_OperationalLimit_OperationalLimitSet(BaseClass*, BaseClass*);
bool assign_OperationalLimitSet_OperationalLimitValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OperationalLimitSet* element = dynamic_cast<OperationalLimitSet*>(BaseClass_ptr1);
	OperationalLimit* element2 = dynamic_cast<OperationalLimit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->OperationalLimitValue.begin(), element->OperationalLimitValue.end(), element2) == element->OperationalLimitValue.end())
		{
			element->OperationalLimitValue.push_back(element2);
			return assign_OperationalLimit_OperationalLimitSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ACDCTerminal_OperationalLimitSet(BaseClass*, BaseClass*);
bool assign_OperationalLimitSet_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OperationalLimitSet* element = dynamic_cast<OperationalLimitSet*>(BaseClass_ptr1);
	ACDCTerminal* element2 = dynamic_cast<ACDCTerminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Terminal != element2)
		{
			element->Terminal = element2;
			return assign_ACDCTerminal_OperationalLimitSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_OperationalLimitSet_Equipment(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const OperationalLimitSet* element = dynamic_cast<const OperationalLimitSet*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Equipment != 0)
		{
			BaseClass_list.push_back(element->Equipment);
			return true;
		}
	}
	return false;
}


bool get_OperationalLimitSet_Terminal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const OperationalLimitSet* element = dynamic_cast<const OperationalLimitSet*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Terminal != 0)
		{
			BaseClass_list.push_back(element->Terminal);
			return true;
		}
	}
	return false;
}

const char OperationalLimitSet::debugName[] = "OperationalLimitSet";
const char* OperationalLimitSet::debugString() const
{
	return OperationalLimitSet::debugName;
}

void OperationalLimitSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:OperationalLimitSet", &OperationalLimitSet_factory);
}

void OperationalLimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void OperationalLimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:OperationalLimitSet.Equipment", &assign_OperationalLimitSet_Equipment);
	assign_map.emplace("cim:OperationalLimitSet.OperationalLimitValue", &assign_OperationalLimitSet_OperationalLimitValue);
	assign_map.emplace("cim:OperationalLimitSet.Terminal", &assign_OperationalLimitSet_Terminal);
}

void OperationalLimitSet::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void OperationalLimitSet::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:OperationalLimitSet.Equipment", &get_OperationalLimitSet_Equipment);
	get_map.emplace("cim:OperationalLimitSet.Terminal", &get_OperationalLimitSet_Terminal);
}

void OperationalLimitSet::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner OperationalLimitSet::declare()
{
	return BaseClassDefiner(OperationalLimitSet::addConstructToMap, OperationalLimitSet::addPrimitiveAssignFnsToMap, OperationalLimitSet::addClassAssignFnsToMap, OperationalLimitSet::debugName);
}

namespace CIMPP
{
	BaseClass* OperationalLimitSet_factory()
	{
		return new OperationalLimitSet;
	}
}
