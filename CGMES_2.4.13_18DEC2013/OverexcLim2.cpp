/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OverexcLim2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

OverexcLim2::OverexcLim2() {}
OverexcLim2::~OverexcLim2() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:OverexcLim2.ifdlim", { CGMESProfile::DY, } },
	{ "cim:OverexcLim2.koi", { CGMESProfile::DY, } },
	{ "cim:OverexcLim2.voimax", { CGMESProfile::DY, } },
	{ "cim:OverexcLim2.voimin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
OverexcLim2::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
OverexcLim2::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = OverexcitationLimiterDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_OverexcLim2_ifdlim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLim2* element = dynamic_cast<OverexcLim2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ifdlim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLim2_koi(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLim2* element = dynamic_cast<OverexcLim2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->koi;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLim2_voimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLim2* element = dynamic_cast<OverexcLim2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->voimax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLim2_voimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLim2* element = dynamic_cast<OverexcLim2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->voimin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_OverexcLim2_ifdlim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLim2* element = dynamic_cast<const OverexcLim2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ifdlim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLim2_koi(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLim2* element = dynamic_cast<const OverexcLim2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->koi;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLim2_voimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLim2* element = dynamic_cast<const OverexcLim2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->voimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLim2_voimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLim2* element = dynamic_cast<const OverexcLim2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->voimin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char OverexcLim2::debugName[] = "OverexcLim2";
const char* OverexcLim2::debugString() const
{
	return OverexcLim2::debugName;
}

void OverexcLim2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:OverexcLim2", &OverexcLim2_factory);
}

void OverexcLim2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:OverexcLim2.ifdlim", &assign_OverexcLim2_ifdlim);
	assign_map.emplace("cim:OverexcLim2.koi", &assign_OverexcLim2_koi);
	assign_map.emplace("cim:OverexcLim2.voimax", &assign_OverexcLim2_voimax);
	assign_map.emplace("cim:OverexcLim2.voimin", &assign_OverexcLim2_voimin);
}

void OverexcLim2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void OverexcLim2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:OverexcLim2.ifdlim", &get_OverexcLim2_ifdlim);
	get_map.emplace("cim:OverexcLim2.koi", &get_OverexcLim2_koi);
	get_map.emplace("cim:OverexcLim2.voimax", &get_OverexcLim2_voimax);
	get_map.emplace("cim:OverexcLim2.voimin", &get_OverexcLim2_voimin);
}

void OverexcLim2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void OverexcLim2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner OverexcLim2::declare()
{
	return BaseClassDefiner(OverexcLim2::addConstructToMap, OverexcLim2::addPrimitiveAssignFnsToMap, OverexcLim2::addClassAssignFnsToMap, OverexcLim2::debugName);
}

namespace CIMPP
{
	BaseClass* OverexcLim2_factory()
	{
		return new OverexcLim2;
	}
}
