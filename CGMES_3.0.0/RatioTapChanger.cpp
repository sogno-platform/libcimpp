/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RatioTapChanger.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "RatioTapChangerTable.hpp"
#include "TransformerEnd.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		RatioTapChanger(),
		"http://iec.ch/TC57/CIM100#",
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
		{ "RatioTapChanger.RatioTapChangerTable", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "RatioTapChanger.TransformerEnd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "RatioTapChanger.stepVoltageIncrement", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

RatioTapChanger::RatioTapChanger() : RatioTapChangerTable(nullptr), TransformerEnd(nullptr) {}
RatioTapChanger::~RatioTapChanger() {}

const std::list<std::string>& RatioTapChanger::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& RatioTapChanger::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& RatioTapChanger::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& RatioTapChanger::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& RatioTapChanger::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& RatioTapChanger::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& RatioTapChanger::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_RatioTapChangerTable_RatioTapChanger(BaseClass*, BaseClass*);
bool assign_RatioTapChanger_RatioTapChangerTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RatioTapChanger* element = dynamic_cast<RatioTapChanger*>(BaseClass_ptr1);
	RatioTapChangerTable* element2 = dynamic_cast<RatioTapChangerTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RatioTapChangerTable != element2)
		{
			element->RatioTapChangerTable = element2;
			return assign_RatioTapChangerTable_RatioTapChanger(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TransformerEnd_RatioTapChanger(BaseClass*, BaseClass*);
bool assign_RatioTapChanger_TransformerEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RatioTapChanger* element = dynamic_cast<RatioTapChanger*>(BaseClass_ptr1);
	TransformerEnd* element2 = dynamic_cast<TransformerEnd*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TransformerEnd != element2)
		{
			element->TransformerEnd = element2;
			return assign_TransformerEnd_RatioTapChanger(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RatioTapChanger_stepVoltageIncrement(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RatioTapChanger* element = dynamic_cast<RatioTapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->stepVoltageIncrement;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_RatioTapChanger_RatioTapChangerTable(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const RatioTapChanger* element = dynamic_cast<const RatioTapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->RatioTapChangerTable != 0)
		{
			BaseClass_list.push_back(element->RatioTapChangerTable);
			return true;
		}
	}
	return false;
}

bool get_RatioTapChanger_TransformerEnd(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const RatioTapChanger* element = dynamic_cast<const RatioTapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->TransformerEnd != 0)
		{
			BaseClass_list.push_back(element->TransformerEnd);
			return true;
		}
	}
	return false;
}

bool get_RatioTapChanger_stepVoltageIncrement(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RatioTapChanger* element = dynamic_cast<const RatioTapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->stepVoltageIncrement;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char RatioTapChanger::debugName[] = "RatioTapChanger";
const char* RatioTapChanger::debugString() const
{
	return RatioTapChanger::debugName;
}

void RatioTapChanger::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("RatioTapChanger", &RatioTapChanger_factory);
}

void RatioTapChanger::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("RatioTapChanger.stepVoltageIncrement", &assign_RatioTapChanger_stepVoltageIncrement);
}

void RatioTapChanger::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("RatioTapChanger.RatioTapChangerTable", &assign_RatioTapChanger_RatioTapChangerTable);
	assign_map.emplace("RatioTapChanger.TransformerEnd", &assign_RatioTapChanger_TransformerEnd);
}

void RatioTapChanger::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TapChanger::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("RatioTapChanger.stepVoltageIncrement", &get_RatioTapChanger_stepVoltageIncrement);
}

void RatioTapChanger::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TapChanger::addClassGetFnsToMap(get_map);
	get_map.emplace("RatioTapChanger.RatioTapChangerTable", &get_RatioTapChanger_RatioTapChangerTable);
	get_map.emplace("RatioTapChanger.TransformerEnd", &get_RatioTapChanger_TransformerEnd);
}

void RatioTapChanger::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TapChanger::addEnumGetFnsToMap(get_map);
}

bool RatioTapChanger::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "RatioTapChanger" &&
		dynamic_cast<RatioTapChanger*>(otherObject) != nullptr;
}

const BaseClassDefiner RatioTapChanger::declare()
{
	return BaseClassDefiner(RatioTapChanger::addConstructToMap, RatioTapChanger::addPrimitiveAssignFnsToMap, RatioTapChanger::addClassAssignFnsToMap, RatioTapChanger::debugName);
}

std::map<std::string, AttrDetails> RatioTapChanger::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TapChanger::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* RatioTapChanger_factory()
	{
		return new RatioTapChanger;
	}
}
