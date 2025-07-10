/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StaticVarCompensator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		StaticVarCompensator(),
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
		{ "StaticVarCompensator.capacitiveRating", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "StaticVarCompensator.inductiveRating", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "StaticVarCompensator.q", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "StaticVarCompensator.sVCControlMode", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "StaticVarCompensator.slope", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "StaticVarCompensator.voltageSetPoint", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

StaticVarCompensator::StaticVarCompensator() {}
StaticVarCompensator::~StaticVarCompensator() {}

const std::list<std::string>& StaticVarCompensator::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& StaticVarCompensator::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& StaticVarCompensator::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& StaticVarCompensator::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& StaticVarCompensator::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& StaticVarCompensator::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& StaticVarCompensator::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_StaticVarCompensator_capacitiveRating(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->capacitiveRating;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StaticVarCompensator_inductiveRating(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inductiveRating;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StaticVarCompensator_q(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1);
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

bool assign_StaticVarCompensator_sVCControlMode(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->sVCControlMode;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StaticVarCompensator_slope(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->slope;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StaticVarCompensator_voltageSetPoint(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->voltageSetPoint;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_StaticVarCompensator_capacitiveRating(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StaticVarCompensator* element = dynamic_cast<const StaticVarCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->capacitiveRating;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StaticVarCompensator_inductiveRating(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StaticVarCompensator* element = dynamic_cast<const StaticVarCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inductiveRating;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StaticVarCompensator_q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StaticVarCompensator* element = dynamic_cast<const StaticVarCompensator*>(BaseClass_ptr1);
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

bool get_StaticVarCompensator_sVCControlMode(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StaticVarCompensator* element = dynamic_cast<const StaticVarCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->sVCControlMode;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StaticVarCompensator_slope(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StaticVarCompensator* element = dynamic_cast<const StaticVarCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->slope;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StaticVarCompensator_voltageSetPoint(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StaticVarCompensator* element = dynamic_cast<const StaticVarCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->voltageSetPoint;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char StaticVarCompensator::debugName[] = "StaticVarCompensator";
const char* StaticVarCompensator::debugString() const
{
	return StaticVarCompensator::debugName;
}

void StaticVarCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("StaticVarCompensator", &StaticVarCompensator_factory);
}

void StaticVarCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("StaticVarCompensator.capacitiveRating", &assign_StaticVarCompensator_capacitiveRating);
	assign_map.emplace("StaticVarCompensator.inductiveRating", &assign_StaticVarCompensator_inductiveRating);
	assign_map.emplace("StaticVarCompensator.q", &assign_StaticVarCompensator_q);
	assign_map.emplace("StaticVarCompensator.sVCControlMode", &assign_StaticVarCompensator_sVCControlMode);
	assign_map.emplace("StaticVarCompensator.slope", &assign_StaticVarCompensator_slope);
	assign_map.emplace("StaticVarCompensator.voltageSetPoint", &assign_StaticVarCompensator_voltageSetPoint);
}

void StaticVarCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void StaticVarCompensator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("StaticVarCompensator.capacitiveRating", &get_StaticVarCompensator_capacitiveRating);
	get_map.emplace("StaticVarCompensator.inductiveRating", &get_StaticVarCompensator_inductiveRating);
	get_map.emplace("StaticVarCompensator.q", &get_StaticVarCompensator_q);
	get_map.emplace("StaticVarCompensator.slope", &get_StaticVarCompensator_slope);
	get_map.emplace("StaticVarCompensator.voltageSetPoint", &get_StaticVarCompensator_voltageSetPoint);
}

void StaticVarCompensator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RegulatingCondEq::addClassGetFnsToMap(get_map);
}

void StaticVarCompensator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addEnumGetFnsToMap(get_map);
	get_map.emplace("StaticVarCompensator.sVCControlMode", &get_StaticVarCompensator_sVCControlMode);
}

bool StaticVarCompensator::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "StaticVarCompensator" &&
		dynamic_cast<StaticVarCompensator*>(otherObject) != nullptr;
}

const BaseClassDefiner StaticVarCompensator::declare()
{
	return BaseClassDefiner(StaticVarCompensator::addConstructToMap, StaticVarCompensator::addPrimitiveAssignFnsToMap, StaticVarCompensator::addClassAssignFnsToMap, StaticVarCompensator::debugName);
}

std::map<std::string, AttrDetails> StaticVarCompensator::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = RegulatingCondEq::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* StaticVarCompensator_factory()
	{
		return new StaticVarCompensator;
	}
}
