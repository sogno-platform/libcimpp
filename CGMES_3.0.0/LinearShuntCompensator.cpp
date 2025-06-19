/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LinearShuntCompensator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

LinearShuntCompensator::LinearShuntCompensator() {}
LinearShuntCompensator::~LinearShuntCompensator() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SC,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:LinearShuntCompensator.b0PerSection", { CGMESProfile::SC, } },
	{ "cim:LinearShuntCompensator.bPerSection", { CGMESProfile::EQ, } },
	{ "cim:LinearShuntCompensator.g0PerSection", { CGMESProfile::SC, } },
	{ "cim:LinearShuntCompensator.gPerSection", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
LinearShuntCompensator::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
LinearShuntCompensator::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ShuntCompensator::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_LinearShuntCompensator_b0PerSection(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LinearShuntCompensator* element = dynamic_cast<LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b0PerSection;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LinearShuntCompensator_bPerSection(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LinearShuntCompensator* element = dynamic_cast<LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bPerSection;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LinearShuntCompensator_g0PerSection(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LinearShuntCompensator* element = dynamic_cast<LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->g0PerSection;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LinearShuntCompensator_gPerSection(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LinearShuntCompensator* element = dynamic_cast<LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gPerSection;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_LinearShuntCompensator_b0PerSection(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LinearShuntCompensator* element = dynamic_cast<const LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b0PerSection;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LinearShuntCompensator_bPerSection(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LinearShuntCompensator* element = dynamic_cast<const LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->bPerSection;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LinearShuntCompensator_g0PerSection(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LinearShuntCompensator* element = dynamic_cast<const LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->g0PerSection;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LinearShuntCompensator_gPerSection(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LinearShuntCompensator* element = dynamic_cast<const LinearShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gPerSection;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char LinearShuntCompensator::debugName[] = "LinearShuntCompensator";
const char* LinearShuntCompensator::debugString() const
{
	return LinearShuntCompensator::debugName;
}

void LinearShuntCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:LinearShuntCompensator", &LinearShuntCompensator_factory);
}

void LinearShuntCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:LinearShuntCompensator.b0PerSection", &assign_LinearShuntCompensator_b0PerSection);
	assign_map.emplace("cim:LinearShuntCompensator.bPerSection", &assign_LinearShuntCompensator_bPerSection);
	assign_map.emplace("cim:LinearShuntCompensator.g0PerSection", &assign_LinearShuntCompensator_g0PerSection);
	assign_map.emplace("cim:LinearShuntCompensator.gPerSection", &assign_LinearShuntCompensator_gPerSection);
}

void LinearShuntCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void LinearShuntCompensator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ShuntCompensator::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:LinearShuntCompensator.b0PerSection", &get_LinearShuntCompensator_b0PerSection);
	get_map.emplace("cim:LinearShuntCompensator.bPerSection", &get_LinearShuntCompensator_bPerSection);
	get_map.emplace("cim:LinearShuntCompensator.g0PerSection", &get_LinearShuntCompensator_g0PerSection);
	get_map.emplace("cim:LinearShuntCompensator.gPerSection", &get_LinearShuntCompensator_gPerSection);
}

void LinearShuntCompensator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ShuntCompensator::addClassGetFnsToMap(get_map);
}

void LinearShuntCompensator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ShuntCompensator::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner LinearShuntCompensator::declare()
{
	return BaseClassDefiner(LinearShuntCompensator::addConstructToMap, LinearShuntCompensator::addPrimitiveAssignFnsToMap, LinearShuntCompensator::addClassAssignFnsToMap, LinearShuntCompensator::debugName);
}

namespace CIMPP
{
	BaseClass* LinearShuntCompensator_factory()
	{
		return new LinearShuntCompensator;
	}
}
