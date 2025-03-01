/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ACLineSegment.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ACLineSegment::ACLineSegment() {}
ACLineSegment::~ACLineSegment() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ACLineSegment.b0ch", { CGMESProfile::EQ, } },
	{ "cim:ACLineSegment.bch", { CGMESProfile::EQ, } },
	{ "cim:ACLineSegment.g0ch", { CGMESProfile::EQ, } },
	{ "cim:ACLineSegment.gch", { CGMESProfile::EQ, } },
	{ "cim:ACLineSegment.r", { CGMESProfile::EQ, } },
	{ "cim:ACLineSegment.r0", { CGMESProfile::EQ, } },
	{ "cim:ACLineSegment.shortCircuitEndTemperature", { CGMESProfile::EQ, } },
	{ "cim:ACLineSegment.x", { CGMESProfile::EQ, } },
	{ "cim:ACLineSegment.x0", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
ACLineSegment::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ACLineSegment::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Conductor::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:ACLineSegment", &ACLineSegment_factory);
}

void ACLineSegment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ACLineSegment.b0ch", &assign_ACLineSegment_b0ch);
	assign_map.emplace("cim:ACLineSegment.bch", &assign_ACLineSegment_bch);
	assign_map.emplace("cim:ACLineSegment.g0ch", &assign_ACLineSegment_g0ch);
	assign_map.emplace("cim:ACLineSegment.gch", &assign_ACLineSegment_gch);
	assign_map.emplace("cim:ACLineSegment.r", &assign_ACLineSegment_r);
	assign_map.emplace("cim:ACLineSegment.r0", &assign_ACLineSegment_r0);
	assign_map.emplace("cim:ACLineSegment.shortCircuitEndTemperature", &assign_ACLineSegment_shortCircuitEndTemperature);
	assign_map.emplace("cim:ACLineSegment.x", &assign_ACLineSegment_x);
	assign_map.emplace("cim:ACLineSegment.x0", &assign_ACLineSegment_x0);
}

void ACLineSegment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ACLineSegment::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Conductor::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ACLineSegment.b0ch", &get_ACLineSegment_b0ch);
	get_map.emplace("cim:ACLineSegment.bch", &get_ACLineSegment_bch);
	get_map.emplace("cim:ACLineSegment.g0ch", &get_ACLineSegment_g0ch);
	get_map.emplace("cim:ACLineSegment.gch", &get_ACLineSegment_gch);
	get_map.emplace("cim:ACLineSegment.r", &get_ACLineSegment_r);
	get_map.emplace("cim:ACLineSegment.r0", &get_ACLineSegment_r0);
	get_map.emplace("cim:ACLineSegment.shortCircuitEndTemperature", &get_ACLineSegment_shortCircuitEndTemperature);
	get_map.emplace("cim:ACLineSegment.x", &get_ACLineSegment_x);
	get_map.emplace("cim:ACLineSegment.x0", &get_ACLineSegment_x0);
}

void ACLineSegment::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Conductor::addClassGetFnsToMap(get_map);
}

void ACLineSegment::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Conductor::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ACLineSegment::declare()
{
	return BaseClassDefiner(ACLineSegment::addConstructToMap, ACLineSegment::addPrimitiveAssignFnsToMap, ACLineSegment::addClassAssignFnsToMap, ACLineSegment::debugName);
}

namespace CIMPP
{
	BaseClass* ACLineSegment_factory()
	{
		return new ACLineSegment;
	}
}
