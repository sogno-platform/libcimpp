/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SvVoltage.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "TopologicalNode.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SvVoltage(),
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
		{ "SvVoltage.TopologicalNode", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
		{ "SvVoltage.angle", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
		{ "SvVoltage.v", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
	};
    return ClassAttrDetailsMap;
}

SvVoltage::SvVoltage() : TopologicalNode(nullptr) {}
SvVoltage::~SvVoltage() {}

const std::list<std::string>& SvVoltage::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SvVoltage::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SvVoltage::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SvVoltage::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SvVoltage::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SvVoltage::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SvVoltage::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_TopologicalNode_SvVoltage(BaseClass*, BaseClass*);
bool assign_SvVoltage_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SvVoltage* element = dynamic_cast<SvVoltage*>(BaseClass_ptr1);
	TopologicalNode* element2 = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TopologicalNode != element2)
		{
			element->TopologicalNode = element2;
			return assign_TopologicalNode_SvVoltage(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SvVoltage_angle(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SvVoltage* element = dynamic_cast<SvVoltage*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->angle;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SvVoltage_v(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SvVoltage* element = dynamic_cast<SvVoltage*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->v;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_SvVoltage_TopologicalNode(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SvVoltage* element = dynamic_cast<const SvVoltage*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->TopologicalNode != 0)
		{
			BaseClass_list.push_back(element->TopologicalNode);
			return true;
		}
	}
	return false;
}

bool get_SvVoltage_angle(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SvVoltage* element = dynamic_cast<const SvVoltage*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->angle;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SvVoltage_v(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SvVoltage* element = dynamic_cast<const SvVoltage*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->v;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char SvVoltage::debugName[] = "SvVoltage";
const char* SvVoltage::debugString() const
{
	return SvVoltage::debugName;
}

void SvVoltage::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SvVoltage", &SvVoltage_factory);
}

void SvVoltage::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("SvVoltage.angle", &assign_SvVoltage_angle);
	assign_map.emplace("SvVoltage.v", &assign_SvVoltage_v);
}

void SvVoltage::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("SvVoltage.TopologicalNode", &assign_SvVoltage_TopologicalNode);
}

void SvVoltage::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("SvVoltage.angle", &get_SvVoltage_angle);
	get_map.emplace("SvVoltage.v", &get_SvVoltage_v);
}

void SvVoltage::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("SvVoltage.TopologicalNode", &get_SvVoltage_TopologicalNode);
}

void SvVoltage::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool SvVoltage::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SvVoltage" &&
		dynamic_cast<SvVoltage*>(otherObject) != nullptr;
}

const BaseClassDefiner SvVoltage::declare()
{
	return BaseClassDefiner(SvVoltage::addConstructToMap, SvVoltage::addPrimitiveAssignFnsToMap, SvVoltage::addClassAssignFnsToMap, SvVoltage::debugName);
}

std::map<std::string, AttrDetails> SvVoltage::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SvVoltage_factory()
	{
		return new SvVoltage;
	}
}
