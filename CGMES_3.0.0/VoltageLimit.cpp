/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageLimit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		VoltageLimit(),
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
		{ "VoltageLimit.normalValue", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "VoltageLimit.value", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
	};
    return ClassAttrDetailsMap;
}

VoltageLimit::VoltageLimit() {}
VoltageLimit::~VoltageLimit() {}

const std::list<std::string>& VoltageLimit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& VoltageLimit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& VoltageLimit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& VoltageLimit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& VoltageLimit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& VoltageLimit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& VoltageLimit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_VoltageLimit_normalValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VoltageLimit* element = dynamic_cast<VoltageLimit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->normalValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VoltageLimit_value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VoltageLimit* element = dynamic_cast<VoltageLimit*>(BaseClass_ptr1);
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

bool get_VoltageLimit_normalValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VoltageLimit* element = dynamic_cast<const VoltageLimit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->normalValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VoltageLimit_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VoltageLimit* element = dynamic_cast<const VoltageLimit*>(BaseClass_ptr1);
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

const char VoltageLimit::debugName[] = "VoltageLimit";
const char* VoltageLimit::debugString() const
{
	return VoltageLimit::debugName;
}

void VoltageLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("VoltageLimit", &VoltageLimit_factory);
}

void VoltageLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("VoltageLimit.normalValue", &assign_VoltageLimit_normalValue);
	assign_map.emplace("VoltageLimit.value", &assign_VoltageLimit_value);
}

void VoltageLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void VoltageLimit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("VoltageLimit.normalValue", &get_VoltageLimit_normalValue);
	get_map.emplace("VoltageLimit.value", &get_VoltageLimit_value);
}

void VoltageLimit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OperationalLimit::addClassGetFnsToMap(get_map);
}

void VoltageLimit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addEnumGetFnsToMap(get_map);
}

bool VoltageLimit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "VoltageLimit" &&
		dynamic_cast<VoltageLimit*>(otherObject) != nullptr;
}

const BaseClassDefiner VoltageLimit::declare()
{
	return BaseClassDefiner(VoltageLimit::addConstructToMap, VoltageLimit::addPrimitiveAssignFnsToMap, VoltageLimit::addClassAssignFnsToMap, VoltageLimit::debugName);
}

std::map<std::string, AttrDetails> VoltageLimit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = OperationalLimit::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* VoltageLimit_factory()
	{
		return new VoltageLimit;
	}
}
