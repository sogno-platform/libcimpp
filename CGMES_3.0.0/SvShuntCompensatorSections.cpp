/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SvShuntCompensatorSections.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ShuntCompensator.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SvShuntCompensatorSections(),
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
		{ "SvShuntCompensatorSections.ShuntCompensator", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
		{ "SvShuntCompensatorSections.sections", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
	};
    return ClassAttrDetailsMap;
}

SvShuntCompensatorSections::SvShuntCompensatorSections() : ShuntCompensator(nullptr) {}
SvShuntCompensatorSections::~SvShuntCompensatorSections() {}

const std::list<std::string>& SvShuntCompensatorSections::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SvShuntCompensatorSections::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SvShuntCompensatorSections::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SvShuntCompensatorSections::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SvShuntCompensatorSections::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SvShuntCompensatorSections::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SvShuntCompensatorSections::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ShuntCompensator_SvShuntCompensatorSections(BaseClass*, BaseClass*);
bool assign_SvShuntCompensatorSections_ShuntCompensator(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SvShuntCompensatorSections* element = dynamic_cast<SvShuntCompensatorSections*>(BaseClass_ptr1);
	ShuntCompensator* element2 = dynamic_cast<ShuntCompensator*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ShuntCompensator != element2)
		{
			element->ShuntCompensator = element2;
			return assign_ShuntCompensator_SvShuntCompensatorSections(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SvShuntCompensatorSections_sections(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SvShuntCompensatorSections* element = dynamic_cast<SvShuntCompensatorSections*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->sections;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_SvShuntCompensatorSections_ShuntCompensator(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SvShuntCompensatorSections* element = dynamic_cast<const SvShuntCompensatorSections*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ShuntCompensator != 0)
		{
			BaseClass_list.push_back(element->ShuntCompensator);
			return true;
		}
	}
	return false;
}

bool get_SvShuntCompensatorSections_sections(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SvShuntCompensatorSections* element = dynamic_cast<const SvShuntCompensatorSections*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->sections;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char SvShuntCompensatorSections::debugName[] = "SvShuntCompensatorSections";
const char* SvShuntCompensatorSections::debugString() const
{
	return SvShuntCompensatorSections::debugName;
}

void SvShuntCompensatorSections::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SvShuntCompensatorSections", &SvShuntCompensatorSections_factory);
}

void SvShuntCompensatorSections::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("SvShuntCompensatorSections.sections", &assign_SvShuntCompensatorSections_sections);
}

void SvShuntCompensatorSections::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("SvShuntCompensatorSections.ShuntCompensator", &assign_SvShuntCompensatorSections_ShuntCompensator);
}

void SvShuntCompensatorSections::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("SvShuntCompensatorSections.sections", &get_SvShuntCompensatorSections_sections);
}

void SvShuntCompensatorSections::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("SvShuntCompensatorSections.ShuntCompensator", &get_SvShuntCompensatorSections_ShuntCompensator);
}

void SvShuntCompensatorSections::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool SvShuntCompensatorSections::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SvShuntCompensatorSections" &&
		dynamic_cast<SvShuntCompensatorSections*>(otherObject) != nullptr;
}

const BaseClassDefiner SvShuntCompensatorSections::declare()
{
	return BaseClassDefiner(SvShuntCompensatorSections::addConstructToMap, SvShuntCompensatorSections::addPrimitiveAssignFnsToMap, SvShuntCompensatorSections::addClassAssignFnsToMap, SvShuntCompensatorSections::debugName);
}

std::map<std::string, AttrDetails> SvShuntCompensatorSections::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SvShuntCompensatorSections_factory()
	{
		return new SvShuntCompensatorSections;
	}
}
