/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ACLineSegment.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ACLineSegment(),
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
		{ "ACLineSegment.b0ch", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACLineSegment.bch", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACLineSegment.g0ch", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACLineSegment.gch", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACLineSegment.r", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACLineSegment.r0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACLineSegment.shortCircuitEndTemperature", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACLineSegment.x", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACLineSegment.x0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ACLineSegment::ACLineSegment() {}
ACLineSegment::~ACLineSegment() {}

const std::list<std::string>& ACLineSegment::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ACLineSegment::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ACLineSegment::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ACLineSegment::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ACLineSegment::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ACLineSegment::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ACLineSegment::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ACLineSegment_b0ch(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b0ch;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACLineSegment_bch(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bch;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACLineSegment_g0ch(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->g0ch;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACLineSegment_gch(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gch;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACLineSegment_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1);
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

bool assign_ACLineSegment_r0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1);
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

bool assign_ACLineSegment_shortCircuitEndTemperature(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->shortCircuitEndTemperature;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACLineSegment_x(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1);
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

bool assign_ACLineSegment_x0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1);
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

bool get_ACLineSegment_b0ch(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b0ch;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACLineSegment_bch(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->bch;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACLineSegment_g0ch(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->g0ch;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACLineSegment_gch(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gch;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACLineSegment_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1);
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

bool get_ACLineSegment_r0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1);
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

bool get_ACLineSegment_shortCircuitEndTemperature(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->shortCircuitEndTemperature;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACLineSegment_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1);
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

bool get_ACLineSegment_x0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1);
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

const char ACLineSegment::debugName[] = "ACLineSegment";
const char* ACLineSegment::debugString() const
{
	return ACLineSegment::debugName;
}

void ACLineSegment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ACLineSegment", &ACLineSegment_factory);
}

void ACLineSegment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ACLineSegment.b0ch", &assign_ACLineSegment_b0ch);
	assign_map.emplace("ACLineSegment.bch", &assign_ACLineSegment_bch);
	assign_map.emplace("ACLineSegment.g0ch", &assign_ACLineSegment_g0ch);
	assign_map.emplace("ACLineSegment.gch", &assign_ACLineSegment_gch);
	assign_map.emplace("ACLineSegment.r", &assign_ACLineSegment_r);
	assign_map.emplace("ACLineSegment.r0", &assign_ACLineSegment_r0);
	assign_map.emplace("ACLineSegment.shortCircuitEndTemperature", &assign_ACLineSegment_shortCircuitEndTemperature);
	assign_map.emplace("ACLineSegment.x", &assign_ACLineSegment_x);
	assign_map.emplace("ACLineSegment.x0", &assign_ACLineSegment_x0);
}

void ACLineSegment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ACLineSegment::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Conductor::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ACLineSegment.b0ch", &get_ACLineSegment_b0ch);
	get_map.emplace("ACLineSegment.bch", &get_ACLineSegment_bch);
	get_map.emplace("ACLineSegment.g0ch", &get_ACLineSegment_g0ch);
	get_map.emplace("ACLineSegment.gch", &get_ACLineSegment_gch);
	get_map.emplace("ACLineSegment.r", &get_ACLineSegment_r);
	get_map.emplace("ACLineSegment.r0", &get_ACLineSegment_r0);
	get_map.emplace("ACLineSegment.shortCircuitEndTemperature", &get_ACLineSegment_shortCircuitEndTemperature);
	get_map.emplace("ACLineSegment.x", &get_ACLineSegment_x);
	get_map.emplace("ACLineSegment.x0", &get_ACLineSegment_x0);
}

void ACLineSegment::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Conductor::addClassGetFnsToMap(get_map);
}

void ACLineSegment::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Conductor::addEnumGetFnsToMap(get_map);
}

bool ACLineSegment::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ACLineSegment" &&
		dynamic_cast<ACLineSegment*>(otherObject) != nullptr;
}

const BaseClassDefiner ACLineSegment::declare()
{
	return BaseClassDefiner(ACLineSegment::addConstructToMap, ACLineSegment::addPrimitiveAssignFnsToMap, ACLineSegment::addClassAssignFnsToMap, ACLineSegment::debugName);
}

std::map<std::string, AttrDetails> ACLineSegment::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Conductor::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ACLineSegment_factory()
	{
		return new ACLineSegment;
	}
}
