/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SvSwitch.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Switch.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SvSwitch(),
		"http://iec.ch/TC57/CIM100#",
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
		{ "SvSwitch.Switch", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
		{ "SvSwitch.open", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
	};
    return ClassAttrDetailsMap;
}

SvSwitch::SvSwitch() : Switch(nullptr) {}
SvSwitch::~SvSwitch() {}

const std::list<std::string>& SvSwitch::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SvSwitch::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SvSwitch::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SvSwitch::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SvSwitch::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SvSwitch::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SvSwitch::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_Switch_SvSwitch(BaseClass*, BaseClass*);
bool assign_SvSwitch_Switch(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SvSwitch* element = dynamic_cast<SvSwitch*>(BaseClass_ptr1);
	Switch* element2 = dynamic_cast<Switch*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Switch != element2)
		{
			element->Switch = element2;
			return assign_Switch_SvSwitch(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SvSwitch_open(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SvSwitch* element = dynamic_cast<SvSwitch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->open;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_SvSwitch_Switch(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SvSwitch* element = dynamic_cast<const SvSwitch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Switch != 0)
		{
			BaseClass_list.push_back(element->Switch);
			return true;
		}
	}
	return false;
}

bool get_SvSwitch_open(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SvSwitch* element = dynamic_cast<const SvSwitch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->open;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char SvSwitch::debugName[] = "SvSwitch";
const char* SvSwitch::debugString() const
{
	return SvSwitch::debugName;
}

void SvSwitch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SvSwitch", &SvSwitch_factory);
}

void SvSwitch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("SvSwitch.open", &assign_SvSwitch_open);
}

void SvSwitch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("SvSwitch.Switch", &assign_SvSwitch_Switch);
}

void SvSwitch::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("SvSwitch.open", &get_SvSwitch_open);
}

void SvSwitch::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("SvSwitch.Switch", &get_SvSwitch_Switch);
}

void SvSwitch::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool SvSwitch::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SvSwitch" &&
		dynamic_cast<SvSwitch*>(otherObject) != nullptr;
}

const BaseClassDefiner SvSwitch::declare()
{
	return BaseClassDefiner(SvSwitch::addConstructToMap, SvSwitch::addPrimitiveAssignFnsToMap, SvSwitch::addClassAssignFnsToMap, SvSwitch::debugName);
}

std::map<std::string, AttrDetails> SvSwitch::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SvSwitch_factory()
	{
		return new SvSwitch;
	}
}
