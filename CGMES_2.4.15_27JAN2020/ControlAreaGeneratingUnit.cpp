/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ControlAreaGeneratingUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ControlArea.hpp"
#include "GeneratingUnit.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ControlAreaGeneratingUnit(),
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
		{ "ControlAreaGeneratingUnit.ControlArea", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ControlAreaGeneratingUnit.GeneratingUnit", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ControlAreaGeneratingUnit::ControlAreaGeneratingUnit() : ControlArea(nullptr), GeneratingUnit(nullptr) {}
ControlAreaGeneratingUnit::~ControlAreaGeneratingUnit() {}

const std::list<std::string>& ControlAreaGeneratingUnit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ControlAreaGeneratingUnit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ControlAreaGeneratingUnit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ControlAreaGeneratingUnit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ControlAreaGeneratingUnit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ControlAreaGeneratingUnit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ControlAreaGeneratingUnit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ControlArea_ControlAreaGeneratingUnit(BaseClass*, BaseClass*);
bool assign_ControlAreaGeneratingUnit_ControlArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ControlAreaGeneratingUnit* element = dynamic_cast<ControlAreaGeneratingUnit*>(BaseClass_ptr1);
	ControlArea* element2 = dynamic_cast<ControlArea*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ControlArea != element2)
		{
			element->ControlArea = element2;
			return assign_ControlArea_ControlAreaGeneratingUnit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_GeneratingUnit_ControlAreaGeneratingUnit(BaseClass*, BaseClass*);
bool assign_ControlAreaGeneratingUnit_GeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ControlAreaGeneratingUnit* element = dynamic_cast<ControlAreaGeneratingUnit*>(BaseClass_ptr1);
	GeneratingUnit* element2 = dynamic_cast<GeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->GeneratingUnit != element2)
		{
			element->GeneratingUnit = element2;
			return assign_GeneratingUnit_ControlAreaGeneratingUnit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_ControlAreaGeneratingUnit_ControlArea(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ControlAreaGeneratingUnit* element = dynamic_cast<const ControlAreaGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ControlArea != 0)
		{
			BaseClass_list.push_back(element->ControlArea);
			return true;
		}
	}
	return false;
}

bool get_ControlAreaGeneratingUnit_GeneratingUnit(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ControlAreaGeneratingUnit* element = dynamic_cast<const ControlAreaGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->GeneratingUnit != 0)
		{
			BaseClass_list.push_back(element->GeneratingUnit);
			return true;
		}
	}
	return false;
}

const char ControlAreaGeneratingUnit::debugName[] = "ControlAreaGeneratingUnit";
const char* ControlAreaGeneratingUnit::debugString() const
{
	return ControlAreaGeneratingUnit::debugName;
}

void ControlAreaGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ControlAreaGeneratingUnit", &ControlAreaGeneratingUnit_factory);
}

void ControlAreaGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ControlAreaGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ControlAreaGeneratingUnit.ControlArea", &assign_ControlAreaGeneratingUnit_ControlArea);
	assign_map.emplace("ControlAreaGeneratingUnit.GeneratingUnit", &assign_ControlAreaGeneratingUnit_GeneratingUnit);
}

void ControlAreaGeneratingUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void ControlAreaGeneratingUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("ControlAreaGeneratingUnit.ControlArea", &get_ControlAreaGeneratingUnit_ControlArea);
	get_map.emplace("ControlAreaGeneratingUnit.GeneratingUnit", &get_ControlAreaGeneratingUnit_GeneratingUnit);
}

void ControlAreaGeneratingUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool ControlAreaGeneratingUnit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ControlAreaGeneratingUnit" &&
		dynamic_cast<ControlAreaGeneratingUnit*>(otherObject) != nullptr;
}

const BaseClassDefiner ControlAreaGeneratingUnit::declare()
{
	return BaseClassDefiner(ControlAreaGeneratingUnit::addConstructToMap, ControlAreaGeneratingUnit::addPrimitiveAssignFnsToMap, ControlAreaGeneratingUnit::addClassAssignFnsToMap, ControlAreaGeneratingUnit::debugName);
}

std::map<std::string, AttrDetails> ControlAreaGeneratingUnit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ControlAreaGeneratingUnit_factory()
	{
		return new ControlAreaGeneratingUnit;
	}
}
