/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAVR5.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

ExcAVR5::ExcAVR5() {};
ExcAVR5::~ExcAVR5() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcAVR5.ka", { CGMESProfile::DY, } },
	{ "cim:ExcAVR5.rex", { CGMESProfile::DY, } },
	{ "cim:ExcAVR5.ta", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcAVR5::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcAVR5::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcAVR5_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR5* element = dynamic_cast<ExcAVR5*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR5_rex(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR5* element = dynamic_cast<ExcAVR5*>(BaseClass_ptr1))
	{
		buffer >> element->rex;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR5_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR5* element = dynamic_cast<ExcAVR5*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcAVR5_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAVR5* element = dynamic_cast<const ExcAVR5*>(BaseClass_ptr1))
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
	if (const ExcAVR5* element = dynamic_cast<const ExcAVR5*>(BaseClass_ptr1))
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
	if (const ExcAVR5* element = dynamic_cast<const ExcAVR5*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:ExcAVR5"), &ExcAVR5_factory));
}

void ExcAVR5::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR5.ka"), &assign_ExcAVR5_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR5.rex"), &assign_ExcAVR5_rex));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR5.ta"), &assign_ExcAVR5_ta));
}

void ExcAVR5::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAVR5::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcAVR5.ka", &get_ExcAVR5_ka);
	get_map.emplace("cim:ExcAVR5.rex", &get_ExcAVR5_rex);
	get_map.emplace("cim:ExcAVR5.ta", &get_ExcAVR5_ta);
}

void ExcAVR5::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAVR5::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcAVR5::declare()
{
	return BaseClassDefiner(ExcAVR5::addConstructToMap, ExcAVR5::addPrimitiveAssignFnsToMap, ExcAVR5::addClassAssignFnsToMap, ExcAVR5::debugName);
}

namespace CIMPP
{
	BaseClass* ExcAVR5_factory()
	{
		return new ExcAVR5;
	}
}
