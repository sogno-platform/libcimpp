/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnderexcLim2Simplified.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

UnderexcLim2Simplified::UnderexcLim2Simplified() {};
UnderexcLim2Simplified::~UnderexcLim2Simplified() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:UnderexcLim2Simplified.kui", { CGMESProfile::DY, } },
	{ "cim:UnderexcLim2Simplified.p0", { CGMESProfile::DY, } },
	{ "cim:UnderexcLim2Simplified.p1", { CGMESProfile::DY, } },
	{ "cim:UnderexcLim2Simplified.q0", { CGMESProfile::DY, } },
	{ "cim:UnderexcLim2Simplified.q1", { CGMESProfile::DY, } },
	{ "cim:UnderexcLim2Simplified.vuimax", { CGMESProfile::DY, } },
	{ "cim:UnderexcLim2Simplified.vuimin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
UnderexcLim2Simplified::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
UnderexcLim2Simplified::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = UnderexcitationLimiterDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_UnderexcLim2Simplified_kui(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1))
	{
		buffer >> element->kui;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLim2Simplified_p0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1))
	{
		buffer >> element->p0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLim2Simplified_p1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1))
	{
		buffer >> element->p1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLim2Simplified_q0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1))
	{
		buffer >> element->q0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLim2Simplified_q1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1))
	{
		buffer >> element->q1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLim2Simplified_vuimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1))
	{
		buffer >> element->vuimax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLim2Simplified_vuimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1))
	{
		buffer >> element->vuimin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_UnderexcLim2Simplified_kui(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLim2Simplified* element = dynamic_cast<const UnderexcLim2Simplified*>(BaseClass_ptr1))
	{
		buffer << element->kui;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLim2Simplified_p0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLim2Simplified* element = dynamic_cast<const UnderexcLim2Simplified*>(BaseClass_ptr1))
	{
		buffer << element->p0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLim2Simplified_p1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLim2Simplified* element = dynamic_cast<const UnderexcLim2Simplified*>(BaseClass_ptr1))
	{
		buffer << element->p1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLim2Simplified_q0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLim2Simplified* element = dynamic_cast<const UnderexcLim2Simplified*>(BaseClass_ptr1))
	{
		buffer << element->q0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLim2Simplified_q1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLim2Simplified* element = dynamic_cast<const UnderexcLim2Simplified*>(BaseClass_ptr1))
	{
		buffer << element->q1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLim2Simplified_vuimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLim2Simplified* element = dynamic_cast<const UnderexcLim2Simplified*>(BaseClass_ptr1))
	{
		buffer << element->vuimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLim2Simplified_vuimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLim2Simplified* element = dynamic_cast<const UnderexcLim2Simplified*>(BaseClass_ptr1))
	{
		buffer << element->vuimin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char UnderexcLim2Simplified::debugName[] = "UnderexcLim2Simplified";
const char* UnderexcLim2Simplified::debugString() const
{
	return UnderexcLim2Simplified::debugName;
}

void UnderexcLim2Simplified::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified"), &UnderexcLim2Simplified_factory));
}

void UnderexcLim2Simplified::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified.kui"), &assign_UnderexcLim2Simplified_kui));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified.p0"), &assign_UnderexcLim2Simplified_p0));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified.p1"), &assign_UnderexcLim2Simplified_p1));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified.q0"), &assign_UnderexcLim2Simplified_q0));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified.q1"), &assign_UnderexcLim2Simplified_q1));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified.vuimax"), &assign_UnderexcLim2Simplified_vuimax));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLim2Simplified.vuimin"), &assign_UnderexcLim2Simplified_vuimin));
}

void UnderexcLim2Simplified::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void UnderexcLim2Simplified::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:UnderexcLim2Simplified.kui", &get_UnderexcLim2Simplified_kui);
	get_map.emplace("cim:UnderexcLim2Simplified.p0", &get_UnderexcLim2Simplified_p0);
	get_map.emplace("cim:UnderexcLim2Simplified.p1", &get_UnderexcLim2Simplified_p1);
	get_map.emplace("cim:UnderexcLim2Simplified.q0", &get_UnderexcLim2Simplified_q0);
	get_map.emplace("cim:UnderexcLim2Simplified.q1", &get_UnderexcLim2Simplified_q1);
	get_map.emplace("cim:UnderexcLim2Simplified.vuimax", &get_UnderexcLim2Simplified_vuimax);
	get_map.emplace("cim:UnderexcLim2Simplified.vuimin", &get_UnderexcLim2Simplified_vuimin);
}

void UnderexcLim2Simplified::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void UnderexcLim2Simplified::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner UnderexcLim2Simplified::declare()
{
	return BaseClassDefiner(UnderexcLim2Simplified::addConstructToMap, UnderexcLim2Simplified::addPrimitiveAssignFnsToMap, UnderexcLim2Simplified::addClassAssignFnsToMap, UnderexcLim2Simplified::debugName);
}

namespace CIMPP
{
	BaseClass* UnderexcLim2Simplified_factory()
	{
		return new UnderexcLim2Simplified;
	}
}
