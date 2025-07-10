/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ControlArea.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ControlAreaGeneratingUnit.hpp"
#include "EnergyArea.hpp"
#include "TieFlow.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ControlArea(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SSH,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "ControlArea.ControlAreaGeneratingUnit", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ControlArea.EnergyArea", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ControlArea.TieFlow", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ControlArea.netInterchange", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "ControlArea.pTolerance", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "ControlArea.type", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ControlArea::ControlArea() : EnergyArea(nullptr) {}
ControlArea::~ControlArea() {}

const std::list<std::string>& ControlArea::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ControlArea::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ControlArea::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ControlArea::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ControlArea::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ControlArea::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ControlArea::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ControlAreaGeneratingUnit_ControlArea(BaseClass*, BaseClass*);
bool assign_ControlArea_ControlAreaGeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1);
	ControlAreaGeneratingUnit* element2 = dynamic_cast<ControlAreaGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ControlAreaGeneratingUnit.begin(), element->ControlAreaGeneratingUnit.end(), element2) == element->ControlAreaGeneratingUnit.end())
		{
			element->ControlAreaGeneratingUnit.push_back(element2);
			return assign_ControlAreaGeneratingUnit_ControlArea(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_EnergyArea_ControlArea(BaseClass*, BaseClass*);
bool assign_ControlArea_EnergyArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1);
	EnergyArea* element2 = dynamic_cast<EnergyArea*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->EnergyArea != element2)
		{
			element->EnergyArea = element2;
			return assign_EnergyArea_ControlArea(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TieFlow_ControlArea(BaseClass*, BaseClass*);
bool assign_ControlArea_TieFlow(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1);
	TieFlow* element2 = dynamic_cast<TieFlow*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TieFlow.begin(), element->TieFlow.end(), element2) == element->TieFlow.end())
		{
			element->TieFlow.push_back(element2);
			return assign_TieFlow_ControlArea(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ControlArea_netInterchange(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->netInterchange;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ControlArea_pTolerance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pTolerance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ControlArea_type(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->type;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_ControlArea_EnergyArea(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ControlArea* element = dynamic_cast<const ControlArea*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->EnergyArea != 0)
		{
			BaseClass_list.push_back(element->EnergyArea);
			return true;
		}
	}
	return false;
}


bool get_ControlArea_netInterchange(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ControlArea* element = dynamic_cast<const ControlArea*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->netInterchange;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ControlArea_pTolerance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ControlArea* element = dynamic_cast<const ControlArea*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pTolerance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ControlArea_type(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ControlArea* element = dynamic_cast<const ControlArea*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->type;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ControlArea::debugName[] = "ControlArea";
const char* ControlArea::debugString() const
{
	return ControlArea::debugName;
}

void ControlArea::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ControlArea", &ControlArea_factory);
}

void ControlArea::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ControlArea.netInterchange", &assign_ControlArea_netInterchange);
	assign_map.emplace("ControlArea.pTolerance", &assign_ControlArea_pTolerance);
	assign_map.emplace("ControlArea.type", &assign_ControlArea_type);
}

void ControlArea::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ControlArea.ControlAreaGeneratingUnit", &assign_ControlArea_ControlAreaGeneratingUnit);
	assign_map.emplace("ControlArea.EnergyArea", &assign_ControlArea_EnergyArea);
	assign_map.emplace("ControlArea.TieFlow", &assign_ControlArea_TieFlow);
}

void ControlArea::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ControlArea.netInterchange", &get_ControlArea_netInterchange);
	get_map.emplace("ControlArea.pTolerance", &get_ControlArea_pTolerance);
}

void ControlArea::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
	get_map.emplace("ControlArea.EnergyArea", &get_ControlArea_EnergyArea);
}

void ControlArea::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
	get_map.emplace("ControlArea.type", &get_ControlArea_type);
}

bool ControlArea::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ControlArea" &&
		dynamic_cast<ControlArea*>(otherObject) != nullptr;
}

const BaseClassDefiner ControlArea::declare()
{
	return BaseClassDefiner(ControlArea::addConstructToMap, ControlArea::addPrimitiveAssignFnsToMap, ControlArea::addClassAssignFnsToMap, ControlArea::debugName);
}

std::map<std::string, AttrDetails> ControlArea::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemResource::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ControlArea_factory()
	{
		return new ControlArea;
	}
}
