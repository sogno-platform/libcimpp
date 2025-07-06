/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BasicIntervalSchedule.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		BasicIntervalSchedule(),
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
		{ "BasicIntervalSchedule.startTime", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "BasicIntervalSchedule.value1Unit", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "BasicIntervalSchedule.value2Unit", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

BasicIntervalSchedule::BasicIntervalSchedule() {}
BasicIntervalSchedule::~BasicIntervalSchedule() {}

const std::list<std::string>& BasicIntervalSchedule::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& BasicIntervalSchedule::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& BasicIntervalSchedule::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& BasicIntervalSchedule::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& BasicIntervalSchedule::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& BasicIntervalSchedule::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& BasicIntervalSchedule::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_BasicIntervalSchedule_startTime(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BasicIntervalSchedule* element = dynamic_cast<BasicIntervalSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->startTime = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_BasicIntervalSchedule_value1Unit(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BasicIntervalSchedule* element = dynamic_cast<BasicIntervalSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->value1Unit;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_BasicIntervalSchedule_value2Unit(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BasicIntervalSchedule* element = dynamic_cast<BasicIntervalSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->value2Unit;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_BasicIntervalSchedule_startTime(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BasicIntervalSchedule* element = dynamic_cast<const BasicIntervalSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->startTime;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_BasicIntervalSchedule_value1Unit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BasicIntervalSchedule* element = dynamic_cast<const BasicIntervalSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->value1Unit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_BasicIntervalSchedule_value2Unit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BasicIntervalSchedule* element = dynamic_cast<const BasicIntervalSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->value2Unit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char BasicIntervalSchedule::debugName[] = "BasicIntervalSchedule";
const char* BasicIntervalSchedule::debugString() const
{
	return BasicIntervalSchedule::debugName;
}

void BasicIntervalSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("BasicIntervalSchedule", &BasicIntervalSchedule_factory);
}

void BasicIntervalSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("BasicIntervalSchedule.startTime", &assign_BasicIntervalSchedule_startTime);
	assign_map.emplace("BasicIntervalSchedule.value1Unit", &assign_BasicIntervalSchedule_value1Unit);
	assign_map.emplace("BasicIntervalSchedule.value2Unit", &assign_BasicIntervalSchedule_value2Unit);
}

void BasicIntervalSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void BasicIntervalSchedule::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("BasicIntervalSchedule.startTime", &get_BasicIntervalSchedule_startTime);
}

void BasicIntervalSchedule::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void BasicIntervalSchedule::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("BasicIntervalSchedule.value1Unit", &get_BasicIntervalSchedule_value1Unit);
	get_map.emplace("BasicIntervalSchedule.value2Unit", &get_BasicIntervalSchedule_value2Unit);
}

bool BasicIntervalSchedule::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "BasicIntervalSchedule" &&
		dynamic_cast<BasicIntervalSchedule*>(otherObject) != nullptr;
}

const BaseClassDefiner BasicIntervalSchedule::declare()
{
	return BaseClassDefiner(BasicIntervalSchedule::addConstructToMap, BasicIntervalSchedule::addPrimitiveAssignFnsToMap, BasicIntervalSchedule::addClassAssignFnsToMap, BasicIntervalSchedule::debugName);
}

std::map<std::string, AttrDetails> BasicIntervalSchedule::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* BasicIntervalSchedule_factory()
	{
		return new BasicIntervalSchedule;
	}
}
