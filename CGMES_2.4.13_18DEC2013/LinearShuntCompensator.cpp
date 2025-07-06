/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LinearShuntCompensator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		LinearShuntCompensator(),
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
		{ "LinearShuntCompensator.b0PerSection", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "LinearShuntCompensator.bPerSection", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "LinearShuntCompensator.g0PerSection", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "LinearShuntCompensator.gPerSection", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

LinearShuntCompensator::LinearShuntCompensator() {}
LinearShuntCompensator::~LinearShuntCompensator() {}

const std::list<std::string>& LinearShuntCompensator::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& LinearShuntCompensator::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& LinearShuntCompensator::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& LinearShuntCompensator::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& LinearShuntCompensator::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& LinearShuntCompensator::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& LinearShuntCompensator::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_LinearShuntCompensator_b0PerSection(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LinearShuntCompensator* element = dynamic_cast<LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b0PerSection;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LinearShuntCompensator_bPerSection(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LinearShuntCompensator* element = dynamic_cast<LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bPerSection;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LinearShuntCompensator_g0PerSection(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LinearShuntCompensator* element = dynamic_cast<LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->g0PerSection;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LinearShuntCompensator_gPerSection(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LinearShuntCompensator* element = dynamic_cast<LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gPerSection;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_LinearShuntCompensator_b0PerSection(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LinearShuntCompensator* element = dynamic_cast<const LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b0PerSection;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LinearShuntCompensator_bPerSection(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LinearShuntCompensator* element = dynamic_cast<const LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->bPerSection;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LinearShuntCompensator_g0PerSection(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LinearShuntCompensator* element = dynamic_cast<const LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->g0PerSection;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LinearShuntCompensator_gPerSection(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LinearShuntCompensator* element = dynamic_cast<const LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gPerSection;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char LinearShuntCompensator::debugName[] = "LinearShuntCompensator";
const char* LinearShuntCompensator::debugString() const
{
	return LinearShuntCompensator::debugName;
}

void LinearShuntCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("LinearShuntCompensator", &LinearShuntCompensator_factory);
}

void LinearShuntCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("LinearShuntCompensator.b0PerSection", &assign_LinearShuntCompensator_b0PerSection);
	assign_map.emplace("LinearShuntCompensator.bPerSection", &assign_LinearShuntCompensator_bPerSection);
	assign_map.emplace("LinearShuntCompensator.g0PerSection", &assign_LinearShuntCompensator_g0PerSection);
	assign_map.emplace("LinearShuntCompensator.gPerSection", &assign_LinearShuntCompensator_gPerSection);
}

void LinearShuntCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void LinearShuntCompensator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ShuntCompensator::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("LinearShuntCompensator.b0PerSection", &get_LinearShuntCompensator_b0PerSection);
	get_map.emplace("LinearShuntCompensator.bPerSection", &get_LinearShuntCompensator_bPerSection);
	get_map.emplace("LinearShuntCompensator.g0PerSection", &get_LinearShuntCompensator_g0PerSection);
	get_map.emplace("LinearShuntCompensator.gPerSection", &get_LinearShuntCompensator_gPerSection);
}

void LinearShuntCompensator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ShuntCompensator::addClassGetFnsToMap(get_map);
}

void LinearShuntCompensator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ShuntCompensator::addEnumGetFnsToMap(get_map);
}

bool LinearShuntCompensator::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "LinearShuntCompensator" &&
		dynamic_cast<LinearShuntCompensator*>(otherObject) != nullptr;
}

const BaseClassDefiner LinearShuntCompensator::declare()
{
	return BaseClassDefiner(LinearShuntCompensator::addConstructToMap, LinearShuntCompensator::addPrimitiveAssignFnsToMap, LinearShuntCompensator::addClassAssignFnsToMap, LinearShuntCompensator::debugName);
}

std::map<std::string, AttrDetails> LinearShuntCompensator::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ShuntCompensator::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* LinearShuntCompensator_factory()
	{
		return new LinearShuntCompensator;
	}
}
