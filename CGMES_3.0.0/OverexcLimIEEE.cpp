/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OverexcLimIEEE.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"

using namespace CIMPP;

OverexcLimIEEE::OverexcLimIEEE() {};
OverexcLimIEEE::~OverexcLimIEEE() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:OverexcLimIEEE.hyst", { CGMESProfile::DY, } },
	{ "cim:OverexcLimIEEE.ifdlim", { CGMESProfile::DY, } },
	{ "cim:OverexcLimIEEE.ifdmax", { CGMESProfile::DY, } },
	{ "cim:OverexcLimIEEE.itfpu", { CGMESProfile::DY, } },
	{ "cim:OverexcLimIEEE.kcd", { CGMESProfile::DY, } },
	{ "cim:OverexcLimIEEE.kramp", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
OverexcLimIEEE::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
OverexcLimIEEE::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = OverexcitationLimiterDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_OverexcLimIEEE_hyst(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1))
	{
		buffer >> element->hyst;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimIEEE_ifdlim(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1))
	{
		buffer >> element->ifdlim;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimIEEE_ifdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1))
	{
		buffer >> element->ifdmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimIEEE_itfpu(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1))
	{
		buffer >> element->itfpu;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimIEEE_kcd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1))
	{
		buffer >> element->kcd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimIEEE_kramp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1))
	{
		buffer >> element->kramp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_OverexcLimIEEE_hyst(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimIEEE* element = dynamic_cast<const OverexcLimIEEE*>(BaseClass_ptr1))
	{
		buffer << element->hyst;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimIEEE_ifdlim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimIEEE* element = dynamic_cast<const OverexcLimIEEE*>(BaseClass_ptr1))
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

bool get_OverexcLimIEEE_ifdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimIEEE* element = dynamic_cast<const OverexcLimIEEE*>(BaseClass_ptr1))
	{
		buffer << element->ifdmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimIEEE_itfpu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimIEEE* element = dynamic_cast<const OverexcLimIEEE*>(BaseClass_ptr1))
	{
		buffer << element->itfpu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimIEEE_kcd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimIEEE* element = dynamic_cast<const OverexcLimIEEE*>(BaseClass_ptr1))
	{
		buffer << element->kcd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimIEEE_kramp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimIEEE* element = dynamic_cast<const OverexcLimIEEE*>(BaseClass_ptr1))
	{
		buffer << element->kramp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char OverexcLimIEEE::debugName[] = "OverexcLimIEEE";
const char* OverexcLimIEEE::debugString() const
{
	return OverexcLimIEEE::debugName;
}

void OverexcLimIEEE::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:OverexcLimIEEE"), &OverexcLimIEEE_factory));
}

void OverexcLimIEEE::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimIEEE.hyst"), &assign_OverexcLimIEEE_hyst));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimIEEE.ifdlim"), &assign_OverexcLimIEEE_ifdlim));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimIEEE.ifdmax"), &assign_OverexcLimIEEE_ifdmax));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimIEEE.itfpu"), &assign_OverexcLimIEEE_itfpu));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimIEEE.kcd"), &assign_OverexcLimIEEE_kcd));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimIEEE.kramp"), &assign_OverexcLimIEEE_kramp));
}

void OverexcLimIEEE::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void OverexcLimIEEE::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:OverexcLimIEEE.hyst", &get_OverexcLimIEEE_hyst);
	get_map.emplace("cim:OverexcLimIEEE.ifdlim", &get_OverexcLimIEEE_ifdlim);
	get_map.emplace("cim:OverexcLimIEEE.ifdmax", &get_OverexcLimIEEE_ifdmax);
	get_map.emplace("cim:OverexcLimIEEE.itfpu", &get_OverexcLimIEEE_itfpu);
	get_map.emplace("cim:OverexcLimIEEE.kcd", &get_OverexcLimIEEE_kcd);
	get_map.emplace("cim:OverexcLimIEEE.kramp", &get_OverexcLimIEEE_kramp);
}

void OverexcLimIEEE::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void OverexcLimIEEE::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner OverexcLimIEEE::declare()
{
	return BaseClassDefiner(OverexcLimIEEE::addConstructToMap, OverexcLimIEEE::addPrimitiveAssignFnsToMap, OverexcLimIEEE::addClassAssignFnsToMap, OverexcLimIEEE::debugName);
}

namespace CIMPP
{
	BaseClass* OverexcLimIEEE_factory()
	{
		return new OverexcLimIEEE;
	}
}
