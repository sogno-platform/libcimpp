/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiscExcContIEEEDEC2A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

DiscExcContIEEEDEC2A::DiscExcContIEEEDEC2A() {}
DiscExcContIEEEDEC2A::~DiscExcContIEEEDEC2A() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DiscExcContIEEEDEC2A.td1", { CGMESProfile::DY, } },
	{ "cim:DiscExcContIEEEDEC2A.td2", { CGMESProfile::DY, } },
	{ "cim:DiscExcContIEEEDEC2A.vdmax", { CGMESProfile::DY, } },
	{ "cim:DiscExcContIEEEDEC2A.vdmin", { CGMESProfile::DY, } },
	{ "cim:DiscExcContIEEEDEC2A.vk", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
DiscExcContIEEEDEC2A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DiscExcContIEEEDEC2A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DiscontinuousExcitationControlDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_DiscExcContIEEEDEC2A_td1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->td1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC2A_td2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->td2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC2A_vdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vdmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC2A_vdmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vdmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC2A_vk(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vk;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_DiscExcContIEEEDEC2A_td1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC2A* element = dynamic_cast<const DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->td1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC2A_td2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC2A* element = dynamic_cast<const DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->td2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC2A_vdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC2A* element = dynamic_cast<const DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vdmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC2A_vdmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC2A* element = dynamic_cast<const DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vdmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC2A_vk(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC2A* element = dynamic_cast<const DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vk;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char DiscExcContIEEEDEC2A::debugName[] = "DiscExcContIEEEDEC2A";
const char* DiscExcContIEEEDEC2A::debugString() const
{
	return DiscExcContIEEEDEC2A::debugName;
}

void DiscExcContIEEEDEC2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DiscExcContIEEEDEC2A", &DiscExcContIEEEDEC2A_factory);
}

void DiscExcContIEEEDEC2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:DiscExcContIEEEDEC2A.td1", &assign_DiscExcContIEEEDEC2A_td1);
	assign_map.emplace("cim:DiscExcContIEEEDEC2A.td2", &assign_DiscExcContIEEEDEC2A_td2);
	assign_map.emplace("cim:DiscExcContIEEEDEC2A.vdmax", &assign_DiscExcContIEEEDEC2A_vdmax);
	assign_map.emplace("cim:DiscExcContIEEEDEC2A.vdmin", &assign_DiscExcContIEEEDEC2A_vdmin);
	assign_map.emplace("cim:DiscExcContIEEEDEC2A.vk", &assign_DiscExcContIEEEDEC2A_vk);
}

void DiscExcContIEEEDEC2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DiscExcContIEEEDEC2A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:DiscExcContIEEEDEC2A.td1", &get_DiscExcContIEEEDEC2A_td1);
	get_map.emplace("cim:DiscExcContIEEEDEC2A.td2", &get_DiscExcContIEEEDEC2A_td2);
	get_map.emplace("cim:DiscExcContIEEEDEC2A.vdmax", &get_DiscExcContIEEEDEC2A_vdmax);
	get_map.emplace("cim:DiscExcContIEEEDEC2A.vdmin", &get_DiscExcContIEEEDEC2A_vdmin);
	get_map.emplace("cim:DiscExcContIEEEDEC2A.vk", &get_DiscExcContIEEEDEC2A_vk);
}

void DiscExcContIEEEDEC2A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addClassGetFnsToMap(get_map);
}

void DiscExcContIEEEDEC2A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DiscExcContIEEEDEC2A::declare()
{
	return BaseClassDefiner(DiscExcContIEEEDEC2A::addConstructToMap, DiscExcContIEEEDEC2A::addPrimitiveAssignFnsToMap, DiscExcContIEEEDEC2A::addClassAssignFnsToMap, DiscExcContIEEEDEC2A::debugName);
}

namespace CIMPP
{
	BaseClass* DiscExcContIEEEDEC2A_factory()
	{
		return new DiscExcContIEEEDEC2A;
	}
}
