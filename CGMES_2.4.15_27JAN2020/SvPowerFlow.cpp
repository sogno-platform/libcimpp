/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SvPowerFlow.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Terminal.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SvPowerFlow(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::SV,
		},
		CGMESProfile::SV
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "SvPowerFlow.Terminal", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
		{ "SvPowerFlow.p", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
		{ "SvPowerFlow.q", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
	};
    return ClassAttrDetailsMap;
}

SvPowerFlow::SvPowerFlow() : Terminal(nullptr) {}
SvPowerFlow::~SvPowerFlow() {}

const std::list<std::string>& SvPowerFlow::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SvPowerFlow::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SvPowerFlow::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SvPowerFlow::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SvPowerFlow::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SvPowerFlow::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SvPowerFlow::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_Terminal_SvPowerFlow(BaseClass*, BaseClass*);
bool assign_SvPowerFlow_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SvPowerFlow* element = dynamic_cast<SvPowerFlow*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Terminal != element2)
		{
			element->Terminal = element2;
			return assign_Terminal_SvPowerFlow(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SvPowerFlow_p(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SvPowerFlow* element = dynamic_cast<SvPowerFlow*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SvPowerFlow_q(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SvPowerFlow* element = dynamic_cast<SvPowerFlow*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_SvPowerFlow_Terminal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SvPowerFlow* element = dynamic_cast<const SvPowerFlow*>(BaseClass_ptr1);
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

bool get_SvPowerFlow_p(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SvPowerFlow* element = dynamic_cast<const SvPowerFlow*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SvPowerFlow_q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SvPowerFlow* element = dynamic_cast<const SvPowerFlow*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char SvPowerFlow::debugName[] = "SvPowerFlow";
const char* SvPowerFlow::debugString() const
{
	return SvPowerFlow::debugName;
}

void SvPowerFlow::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SvPowerFlow", &SvPowerFlow_factory);
}

void SvPowerFlow::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("SvPowerFlow.p", &assign_SvPowerFlow_p);
	assign_map.emplace("SvPowerFlow.q", &assign_SvPowerFlow_q);
}

void SvPowerFlow::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("SvPowerFlow.Terminal", &assign_SvPowerFlow_Terminal);
}

void SvPowerFlow::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("SvPowerFlow.p", &get_SvPowerFlow_p);
	get_map.emplace("SvPowerFlow.q", &get_SvPowerFlow_q);
}

void SvPowerFlow::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("SvPowerFlow.Terminal", &get_SvPowerFlow_Terminal);
}

void SvPowerFlow::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool SvPowerFlow::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SvPowerFlow" &&
		dynamic_cast<SvPowerFlow*>(otherObject) != nullptr;
}

const BaseClassDefiner SvPowerFlow::declare()
{
	return BaseClassDefiner(SvPowerFlow::addConstructToMap, SvPowerFlow::addPrimitiveAssignFnsToMap, SvPowerFlow::addClassAssignFnsToMap, SvPowerFlow::debugName);
}

std::map<std::string, AttrDetails> SvPowerFlow::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SvPowerFlow_factory()
	{
		return new SvPowerFlow;
	}
}
