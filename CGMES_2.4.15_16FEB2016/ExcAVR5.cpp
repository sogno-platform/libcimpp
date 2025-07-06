/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAVR5.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcAVR5(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "ExcAVR5.ka", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR5.rex", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR5.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcAVR5::ExcAVR5() {}
ExcAVR5::~ExcAVR5() {}

const std::list<std::string>& ExcAVR5::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcAVR5::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcAVR5::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcAVR5::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcAVR5::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcAVR5::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcAVR5::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcAVR5_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR5* element = dynamic_cast<ExcAVR5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ka;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR5_rex(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR5* element = dynamic_cast<ExcAVR5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rex;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR5_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR5* element = dynamic_cast<ExcAVR5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ta;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcAVR5_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR5* element = dynamic_cast<const ExcAVR5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ka;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR5_rex(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR5* element = dynamic_cast<const ExcAVR5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rex;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR5_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR5* element = dynamic_cast<const ExcAVR5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcAVR5::debugName[] = "ExcAVR5";
const char* ExcAVR5::debugString() const
{
	return ExcAVR5::debugName;
}

void ExcAVR5::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcAVR5", &ExcAVR5_factory);
}

void ExcAVR5::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcAVR5.ka", &assign_ExcAVR5_ka);
	assign_map.emplace("ExcAVR5.rex", &assign_ExcAVR5_rex);
	assign_map.emplace("ExcAVR5.ta", &assign_ExcAVR5_ta);
}

void ExcAVR5::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAVR5::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcAVR5.ka", &get_ExcAVR5_ka);
	get_map.emplace("ExcAVR5.rex", &get_ExcAVR5_rex);
	get_map.emplace("ExcAVR5.ta", &get_ExcAVR5_ta);
}

void ExcAVR5::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAVR5::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcAVR5::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcAVR5" &&
		dynamic_cast<ExcAVR5*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcAVR5::declare()
{
	return BaseClassDefiner(ExcAVR5::addConstructToMap, ExcAVR5::addPrimitiveAssignFnsToMap, ExcAVR5::addClassAssignFnsToMap, ExcAVR5::debugName);
}

std::map<std::string, AttrDetails> ExcAVR5::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcAVR5_factory()
	{
		return new ExcAVR5;
	}
}
