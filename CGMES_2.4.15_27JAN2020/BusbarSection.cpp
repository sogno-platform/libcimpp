/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BusbarSection.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

BusbarSection::BusbarSection() {}
BusbarSection::~BusbarSection() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:BusbarSection.ipMax", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
BusbarSection::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
BusbarSection::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Connector::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_BusbarSection_ipMax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BusbarSection* element = dynamic_cast<BusbarSection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ipMax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_BusbarSection_ipMax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BusbarSection* element = dynamic_cast<const BusbarSection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ipMax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char BusbarSection::debugName[] = "BusbarSection";
const char* BusbarSection::debugString() const
{
	return BusbarSection::debugName;
}

void BusbarSection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:BusbarSection", &BusbarSection_factory);
}

void BusbarSection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:BusbarSection.ipMax", &assign_BusbarSection_ipMax);
}

void BusbarSection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void BusbarSection::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Connector::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:BusbarSection.ipMax", &get_BusbarSection_ipMax);
}

void BusbarSection::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Connector::addClassGetFnsToMap(get_map);
}

void BusbarSection::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Connector::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner BusbarSection::declare()
{
	return BaseClassDefiner(BusbarSection::addConstructToMap, BusbarSection::addPrimitiveAssignFnsToMap, BusbarSection::addClassAssignFnsToMap, BusbarSection::debugName);
}

namespace CIMPP
{
	BaseClass* BusbarSection_factory()
	{
		return new BusbarSection;
	}
}
