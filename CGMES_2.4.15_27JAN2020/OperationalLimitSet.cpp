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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		OperationalLimitSet(),
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
		{ "OperationalLimitSet.Equipment", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "OperationalLimitSet.OperationalLimitValue", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "OperationalLimitSet.Terminal", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

OperationalLimitSet::OperationalLimitSet() : Equipment(nullptr), Terminal(nullptr) {}
OperationalLimitSet::~OperationalLimitSet() {}

const std::list<std::string>& OperationalLimitSet::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& OperationalLimitSet::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& OperationalLimitSet::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& OperationalLimitSet::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& OperationalLimitSet::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& OperationalLimitSet::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& OperationalLimitSet::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("OperationalLimitSet", &OperationalLimitSet_factory);
}

void OperationalLimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void OperationalLimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("OperationalLimitSet.Equipment", &assign_OperationalLimitSet_Equipment);
	assign_map.emplace("OperationalLimitSet.OperationalLimitValue", &assign_OperationalLimitSet_OperationalLimitValue);
	assign_map.emplace("OperationalLimitSet.Terminal", &assign_OperationalLimitSet_Terminal);
}

void OperationalLimitSet::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void OperationalLimitSet::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("OperationalLimitSet.Equipment", &get_OperationalLimitSet_Equipment);
	get_map.emplace("OperationalLimitSet.Terminal", &get_OperationalLimitSet_Terminal);
}

void OperationalLimitSet::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool OperationalLimitSet::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "OperationalLimitSet" &&
		dynamic_cast<OperationalLimitSet*>(otherObject) != nullptr;
}

const BaseClassDefiner OperationalLimitSet::declare()
{
	return BaseClassDefiner(OperationalLimitSet::addConstructToMap, OperationalLimitSet::addPrimitiveAssignFnsToMap, OperationalLimitSet::addClassAssignFnsToMap, OperationalLimitSet::debugName);
}

std::map<std::string, AttrDetails> OperationalLimitSet::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* OperationalLimitSet_factory()
	{
		return new OperationalLimitSet;
	}
}
