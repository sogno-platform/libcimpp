/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ShuntCompensator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SvShuntCompensatorSections.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ShuntCompensator(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SC,
			CGMESProfile::SSH,
			CGMESProfile::SV,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "ShuntCompensator.SvShuntCompensatorSections", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
		{ "ShuntCompensator.aVRDelay", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "ShuntCompensator.grounded", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "ShuntCompensator.maximumSections", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "ShuntCompensator.nomU", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "ShuntCompensator.normalSections", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "ShuntCompensator.sections", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "ShuntCompensator.voltageSensitivity", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ShuntCompensator::ShuntCompensator() : SvShuntCompensatorSections(nullptr) {}
ShuntCompensator::~ShuntCompensator() {}

const std::list<std::string>& ShuntCompensator::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ShuntCompensator::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ShuntCompensator::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ShuntCompensator::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ShuntCompensator::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ShuntCompensator::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ShuntCompensator::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SvShuntCompensatorSections_ShuntCompensator(BaseClass*, BaseClass*);
bool assign_ShuntCompensator_SvShuntCompensatorSections(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	SvShuntCompensatorSections* element2 = dynamic_cast<SvShuntCompensatorSections*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SvShuntCompensatorSections != element2)
		{
			element->SvShuntCompensatorSections = element2;
			return assign_SvShuntCompensatorSections_ShuntCompensator(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ShuntCompensator_aVRDelay(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->aVRDelay;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ShuntCompensator_grounded(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->grounded;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ShuntCompensator_maximumSections(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maximumSections;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ShuntCompensator_nomU(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->nomU;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ShuntCompensator_normalSections(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->normalSections;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ShuntCompensator_sections(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
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

bool assign_ShuntCompensator_voltageSensitivity(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->voltageSensitivity;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_ShuntCompensator_aVRDelay(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ShuntCompensator* element = dynamic_cast<const ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->aVRDelay;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ShuntCompensator_grounded(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ShuntCompensator* element = dynamic_cast<const ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->grounded;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ShuntCompensator_maximumSections(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ShuntCompensator* element = dynamic_cast<const ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maximumSections;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ShuntCompensator_nomU(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ShuntCompensator* element = dynamic_cast<const ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->nomU;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ShuntCompensator_normalSections(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ShuntCompensator* element = dynamic_cast<const ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->normalSections;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ShuntCompensator_sections(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ShuntCompensator* element = dynamic_cast<const ShuntCompensator*>(BaseClass_ptr1);
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

bool get_ShuntCompensator_voltageSensitivity(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ShuntCompensator* element = dynamic_cast<const ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->voltageSensitivity;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ShuntCompensator::debugName[] = "ShuntCompensator";
const char* ShuntCompensator::debugString() const
{
	return ShuntCompensator::debugName;
}

void ShuntCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ShuntCompensator", &ShuntCompensator_factory);
}

void ShuntCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ShuntCompensator.aVRDelay", &assign_ShuntCompensator_aVRDelay);
	assign_map.emplace("ShuntCompensator.grounded", &assign_ShuntCompensator_grounded);
	assign_map.emplace("ShuntCompensator.maximumSections", &assign_ShuntCompensator_maximumSections);
	assign_map.emplace("ShuntCompensator.nomU", &assign_ShuntCompensator_nomU);
	assign_map.emplace("ShuntCompensator.normalSections", &assign_ShuntCompensator_normalSections);
	assign_map.emplace("ShuntCompensator.sections", &assign_ShuntCompensator_sections);
	assign_map.emplace("ShuntCompensator.voltageSensitivity", &assign_ShuntCompensator_voltageSensitivity);
}

void ShuntCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ShuntCompensator.SvShuntCompensatorSections", &assign_ShuntCompensator_SvShuntCompensatorSections);
}

void ShuntCompensator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ShuntCompensator.aVRDelay", &get_ShuntCompensator_aVRDelay);
	get_map.emplace("ShuntCompensator.grounded", &get_ShuntCompensator_grounded);
	get_map.emplace("ShuntCompensator.maximumSections", &get_ShuntCompensator_maximumSections);
	get_map.emplace("ShuntCompensator.nomU", &get_ShuntCompensator_nomU);
	get_map.emplace("ShuntCompensator.normalSections", &get_ShuntCompensator_normalSections);
	get_map.emplace("ShuntCompensator.sections", &get_ShuntCompensator_sections);
	get_map.emplace("ShuntCompensator.voltageSensitivity", &get_ShuntCompensator_voltageSensitivity);
}

void ShuntCompensator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RegulatingCondEq::addClassGetFnsToMap(get_map);
}

void ShuntCompensator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addEnumGetFnsToMap(get_map);
}

bool ShuntCompensator::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ShuntCompensator" &&
		dynamic_cast<ShuntCompensator*>(otherObject) != nullptr;
}

const BaseClassDefiner ShuntCompensator::declare()
{
	return BaseClassDefiner(ShuntCompensator::addConstructToMap, ShuntCompensator::addPrimitiveAssignFnsToMap, ShuntCompensator::addClassAssignFnsToMap, ShuntCompensator::debugName);
}

std::map<std::string, AttrDetails> ShuntCompensator::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = RegulatingCondEq::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ShuntCompensator_factory()
	{
		return new ShuntCompensator;
	}
}
