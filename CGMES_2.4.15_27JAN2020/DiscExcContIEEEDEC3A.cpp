/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiscExcContIEEEDEC3A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Seconds.hpp"
#include "PU.hpp"

using namespace CIMPP;

DiscExcContIEEEDEC3A::DiscExcContIEEEDEC3A() {};
DiscExcContIEEEDEC3A::~DiscExcContIEEEDEC3A() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DiscExcContIEEEDEC3A.tdr", { CGMESProfile::DY, } },
	{ "cim:DiscExcContIEEEDEC3A.vtmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
DiscExcContIEEEDEC3A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DiscExcContIEEEDEC3A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DiscontinuousExcitationControlDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_DiscExcContIEEEDEC3A_tdr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC3A* element = dynamic_cast<DiscExcContIEEEDEC3A*>(BaseClass_ptr1))
	{
		buffer >> element->tdr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC3A_vtmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC3A* element = dynamic_cast<DiscExcContIEEEDEC3A*>(BaseClass_ptr1))
	{
		buffer >> element->vtmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_DiscExcContIEEEDEC3A_tdr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DiscExcContIEEEDEC3A* element = dynamic_cast<const DiscExcContIEEEDEC3A*>(BaseClass_ptr1))
	{
		buffer << element->tdr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC3A_vtmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DiscExcContIEEEDEC3A* element = dynamic_cast<const DiscExcContIEEEDEC3A*>(BaseClass_ptr1))
	{
		buffer << element->vtmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char DiscExcContIEEEDEC3A::debugName[] = "DiscExcContIEEEDEC3A";
const char* DiscExcContIEEEDEC3A::debugString() const
{
	return DiscExcContIEEEDEC3A::debugName;
}

void DiscExcContIEEEDEC3A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC3A"), &DiscExcContIEEEDEC3A_factory));
}

void DiscExcContIEEEDEC3A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC3A.tdr"), &assign_DiscExcContIEEEDEC3A_tdr));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC3A.vtmin"), &assign_DiscExcContIEEEDEC3A_vtmin));
}

void DiscExcContIEEEDEC3A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DiscExcContIEEEDEC3A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:DiscExcContIEEEDEC3A.tdr", &get_DiscExcContIEEEDEC3A_tdr);
	get_map.emplace("cim:DiscExcContIEEEDEC3A.vtmin", &get_DiscExcContIEEEDEC3A_vtmin);
}

void DiscExcContIEEEDEC3A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addClassGetFnsToMap(get_map);
}

void DiscExcContIEEEDEC3A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DiscExcContIEEEDEC3A::declare()
{
	return BaseClassDefiner(DiscExcContIEEEDEC3A::addConstructToMap, DiscExcContIEEEDEC3A::addPrimitiveAssignFnsToMap, DiscExcContIEEEDEC3A::addClassAssignFnsToMap, DiscExcContIEEEDEC3A::debugName);
}

namespace CIMPP
{
	BaseClass* DiscExcContIEEEDEC3A_factory()
	{
		return new DiscExcContIEEEDEC3A;
	}
}
