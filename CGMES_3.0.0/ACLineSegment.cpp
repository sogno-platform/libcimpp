/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ACLineSegment.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Clamp.hpp"
#include "Cut.hpp"
#include "Susceptance.hpp"
#include "Susceptance.hpp"
#include "Conductance.hpp"
#include "Conductance.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Temperature.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

ACLineSegment::ACLineSegment() {};
ACLineSegment::~ACLineSegment() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SC,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ACLineSegment.Clamp", { CGMESProfile::EQ, } },
	{ "cim:ACLineSegment.Cut", { CGMESProfile::EQ, } },
	{ "cim:ACLineSegment.b0ch", { CGMESProfile::SC, } },
	{ "cim:ACLineSegment.bch", { CGMESProfile::EQ, } },
	{ "cim:ACLineSegment.g0ch", { CGMESProfile::SC, } },
	{ "cim:ACLineSegment.gch", { CGMESProfile::EQ, } },
	{ "cim:ACLineSegment.r", { CGMESProfile::EQ, } },
	{ "cim:ACLineSegment.r0", { CGMESProfile::SC, } },
	{ "cim:ACLineSegment.shortCircuitEndTemperature", { CGMESProfile::SC, } },
	{ "cim:ACLineSegment.x", { CGMESProfile::EQ, } },
	{ "cim:ACLineSegment.x0", { CGMESProfile::SC, } },
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


bool assign_ACLineSegment_b0ch(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1))
	{
		buffer >> element->b0ch;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACLineSegment_bch(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1))
	{
		buffer >> element->bch;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACLineSegment_g0ch(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1))
	{
		buffer >> element->g0ch;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACLineSegment_gch(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1))
	{
		buffer >> element->gch;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACLineSegment_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACLineSegment_r0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1))
	{
		buffer >> element->r0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACLineSegment_shortCircuitEndTemperature(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1))
	{
		buffer >> element->shortCircuitEndTemperature;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACLineSegment_x(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1))
	{
		buffer >> element->x;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACLineSegment_x0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1))
	{
		buffer >> element->x0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_Clamp_ACLineSegment(BaseClass*, BaseClass*);
bool assign_ACLineSegment_Clamp(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1);
	Clamp* element2 = dynamic_cast<Clamp*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Clamp.begin(), element->Clamp.end(), element2) == element->Clamp.end())
		{
			element->Clamp.push_back(element2);
			return assign_Clamp_ACLineSegment(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_Cut_ACLineSegment(BaseClass*, BaseClass*);
bool assign_ACLineSegment_Cut(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1);
	Cut* element2 = dynamic_cast<Cut*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Cut.begin(), element->Cut.end(), element2) == element->Cut.end())
		{
			element->Cut.push_back(element2);
			return assign_Cut_ACLineSegment(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_ACLineSegment_b0ch(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1))
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
	if (const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1))
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
	if (const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1))
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
	if (const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1))
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
	if (const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1))
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
	if (const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1))
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
	if (const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1))
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
	if (const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1))
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
	if (const ACLineSegment* element = dynamic_cast<const ACLineSegment*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:ACLineSegment"), &ACLineSegment_factory));
}

void ACLineSegment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.b0ch"), &assign_ACLineSegment_b0ch));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.bch"), &assign_ACLineSegment_bch));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.g0ch"), &assign_ACLineSegment_g0ch));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.gch"), &assign_ACLineSegment_gch));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.r"), &assign_ACLineSegment_r));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.r0"), &assign_ACLineSegment_r0));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.shortCircuitEndTemperature"), &assign_ACLineSegment_shortCircuitEndTemperature));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.x"), &assign_ACLineSegment_x));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.x0"), &assign_ACLineSegment_x0));
}

void ACLineSegment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.Clamp"), &assign_ACLineSegment_Clamp));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.Cut"), &assign_ACLineSegment_Cut));
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
