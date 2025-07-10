/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SeriesCompensator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SeriesCompensator(),
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
		{ "SeriesCompensator.r", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "SeriesCompensator.r0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "SeriesCompensator.varistorPresent", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "SeriesCompensator.varistorRatedCurrent", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "SeriesCompensator.varistorVoltageThreshold", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "SeriesCompensator.x", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "SeriesCompensator.x0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

SeriesCompensator::SeriesCompensator() {}
SeriesCompensator::~SeriesCompensator() {}

const std::list<std::string>& SeriesCompensator::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SeriesCompensator::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SeriesCompensator::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SeriesCompensator::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SeriesCompensator::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SeriesCompensator::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SeriesCompensator::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SeriesCompensator_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SeriesCompensator_r0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SeriesCompensator_varistorPresent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->varistorPresent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SeriesCompensator_varistorRatedCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->varistorRatedCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SeriesCompensator_varistorVoltageThreshold(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->varistorVoltageThreshold;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SeriesCompensator_x(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SeriesCompensator_x0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SeriesCompensator* element = dynamic_cast<SeriesCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_SeriesCompensator_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SeriesCompensator* element = dynamic_cast<const SeriesCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SeriesCompensator_r0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SeriesCompensator* element = dynamic_cast<const SeriesCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SeriesCompensator_varistorPresent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SeriesCompensator* element = dynamic_cast<const SeriesCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->varistorPresent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SeriesCompensator_varistorRatedCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SeriesCompensator* element = dynamic_cast<const SeriesCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->varistorRatedCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SeriesCompensator_varistorVoltageThreshold(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SeriesCompensator* element = dynamic_cast<const SeriesCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->varistorVoltageThreshold;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SeriesCompensator_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SeriesCompensator* element = dynamic_cast<const SeriesCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SeriesCompensator_x0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SeriesCompensator* element = dynamic_cast<const SeriesCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char SeriesCompensator::debugName[] = "SeriesCompensator";
const char* SeriesCompensator::debugString() const
{
	return SeriesCompensator::debugName;
}

void SeriesCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SeriesCompensator", &SeriesCompensator_factory);
}

void SeriesCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("SeriesCompensator.r", &assign_SeriesCompensator_r);
	assign_map.emplace("SeriesCompensator.r0", &assign_SeriesCompensator_r0);
	assign_map.emplace("SeriesCompensator.varistorPresent", &assign_SeriesCompensator_varistorPresent);
	assign_map.emplace("SeriesCompensator.varistorRatedCurrent", &assign_SeriesCompensator_varistorRatedCurrent);
	assign_map.emplace("SeriesCompensator.varistorVoltageThreshold", &assign_SeriesCompensator_varistorVoltageThreshold);
	assign_map.emplace("SeriesCompensator.x", &assign_SeriesCompensator_x);
	assign_map.emplace("SeriesCompensator.x0", &assign_SeriesCompensator_x0);
}

void SeriesCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SeriesCompensator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("SeriesCompensator.r", &get_SeriesCompensator_r);
	get_map.emplace("SeriesCompensator.r0", &get_SeriesCompensator_r0);
	get_map.emplace("SeriesCompensator.varistorPresent", &get_SeriesCompensator_varistorPresent);
	get_map.emplace("SeriesCompensator.varistorRatedCurrent", &get_SeriesCompensator_varistorRatedCurrent);
	get_map.emplace("SeriesCompensator.varistorVoltageThreshold", &get_SeriesCompensator_varistorVoltageThreshold);
	get_map.emplace("SeriesCompensator.x", &get_SeriesCompensator_x);
	get_map.emplace("SeriesCompensator.x0", &get_SeriesCompensator_x0);
}

void SeriesCompensator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
}

void SeriesCompensator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool SeriesCompensator::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SeriesCompensator" &&
		dynamic_cast<SeriesCompensator*>(otherObject) != nullptr;
}

const BaseClassDefiner SeriesCompensator::declare()
{
	return BaseClassDefiner(SeriesCompensator::addConstructToMap, SeriesCompensator::addPrimitiveAssignFnsToMap, SeriesCompensator::addClassAssignFnsToMap, SeriesCompensator::debugName);
}

std::map<std::string, AttrDetails> SeriesCompensator::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SeriesCompensator_factory()
	{
		return new SeriesCompensator;
	}
}
