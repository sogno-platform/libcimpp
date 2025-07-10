/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TieFlow.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ControlArea.hpp"
#include "Terminal.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TieFlow(),
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
		{ "TieFlow.ControlArea", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TieFlow.Terminal", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TieFlow.positiveFlowIn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

TieFlow::TieFlow() : ControlArea(nullptr), Terminal(nullptr) {}
TieFlow::~TieFlow() {}

const std::list<std::string>& TieFlow::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TieFlow::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TieFlow::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TieFlow::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TieFlow::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TieFlow::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TieFlow::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ControlArea_TieFlow(BaseClass*, BaseClass*);
bool assign_TieFlow_ControlArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TieFlow* element = dynamic_cast<TieFlow*>(BaseClass_ptr1);
	ControlArea* element2 = dynamic_cast<ControlArea*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ControlArea != element2)
		{
			element->ControlArea = element2;
			return assign_ControlArea_TieFlow(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Terminal_TieFlow(BaseClass*, BaseClass*);
bool assign_TieFlow_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TieFlow* element = dynamic_cast<TieFlow*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Terminal != element2)
		{
			element->Terminal = element2;
			return assign_Terminal_TieFlow(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TieFlow_positiveFlowIn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TieFlow* element = dynamic_cast<TieFlow*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->positiveFlowIn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_TieFlow_ControlArea(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const TieFlow* element = dynamic_cast<const TieFlow*>(BaseClass_ptr1);
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

bool get_TieFlow_Terminal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const TieFlow* element = dynamic_cast<const TieFlow*>(BaseClass_ptr1);
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

bool get_TieFlow_positiveFlowIn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TieFlow* element = dynamic_cast<const TieFlow*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->positiveFlowIn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char TieFlow::debugName[] = "TieFlow";
const char* TieFlow::debugString() const
{
	return TieFlow::debugName;
}

void TieFlow::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TieFlow", &TieFlow_factory);
}

void TieFlow::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("TieFlow.positiveFlowIn", &assign_TieFlow_positiveFlowIn);
}

void TieFlow::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("TieFlow.ControlArea", &assign_TieFlow_ControlArea);
	assign_map.emplace("TieFlow.Terminal", &assign_TieFlow_Terminal);
}

void TieFlow::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("TieFlow.positiveFlowIn", &get_TieFlow_positiveFlowIn);
}

void TieFlow::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("TieFlow.ControlArea", &get_TieFlow_ControlArea);
	get_map.emplace("TieFlow.Terminal", &get_TieFlow_Terminal);
}

void TieFlow::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool TieFlow::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TieFlow" &&
		dynamic_cast<TieFlow*>(otherObject) != nullptr;
}

const BaseClassDefiner TieFlow::declare()
{
	return BaseClassDefiner(TieFlow::addConstructToMap, TieFlow::addPrimitiveAssignFnsToMap, TieFlow::addClassAssignFnsToMap, TieFlow::debugName);
}

std::map<std::string, AttrDetails> TieFlow::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TieFlow_factory()
	{
		return new TieFlow;
	}
}
