/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OverexcLimX2.hpp"

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
#include "Boolean.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

using namespace CIMPP;

OverexcLimX2::OverexcLimX2() {};
OverexcLimX2::~OverexcLimX2() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:OverexcLimX2.efd1", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX2.efd2", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX2.efd3", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX2.efddes", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX2.efdrated", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX2.kmx", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX2.m", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX2.t1", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX2.t2", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX2.t3", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX2.vlow", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
OverexcLimX2::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
OverexcLimX2::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = OverexcitationLimiterDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_OverexcLimX2_efd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->efd1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_efd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->efd2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_efd3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->efd3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_efddes(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->efddes;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_efdrated(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->efdrated;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_kmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->kmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_m(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->m;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_vlow(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->vlow;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_OverexcLimX2_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer << element->efd1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer << element->efd2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_efd3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer << element->efd3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_efddes(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer << element->efddes;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_efdrated(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer << element->efdrated;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_kmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer << element->kmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_m(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer << element->m;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer << element->t2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_vlow(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer << element->vlow;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char OverexcLimX2::debugName[] = "OverexcLimX2";
const char* OverexcLimX2::debugString() const
{
	return OverexcLimX2::debugName;
}

void OverexcLimX2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:OverexcLimX2"), &OverexcLimX2_factory));
}

void OverexcLimX2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.efd1"), &assign_OverexcLimX2_efd1));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.efd2"), &assign_OverexcLimX2_efd2));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.efd3"), &assign_OverexcLimX2_efd3));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.efddes"), &assign_OverexcLimX2_efddes));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.efdrated"), &assign_OverexcLimX2_efdrated));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.kmx"), &assign_OverexcLimX2_kmx));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.m"), &assign_OverexcLimX2_m));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.t1"), &assign_OverexcLimX2_t1));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.t2"), &assign_OverexcLimX2_t2));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.t3"), &assign_OverexcLimX2_t3));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.vlow"), &assign_OverexcLimX2_vlow));
}

void OverexcLimX2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void OverexcLimX2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:OverexcLimX2.efd1", &get_OverexcLimX2_efd1);
	get_map.emplace("cim:OverexcLimX2.efd2", &get_OverexcLimX2_efd2);
	get_map.emplace("cim:OverexcLimX2.efd3", &get_OverexcLimX2_efd3);
	get_map.emplace("cim:OverexcLimX2.efddes", &get_OverexcLimX2_efddes);
	get_map.emplace("cim:OverexcLimX2.efdrated", &get_OverexcLimX2_efdrated);
	get_map.emplace("cim:OverexcLimX2.kmx", &get_OverexcLimX2_kmx);
	get_map.emplace("cim:OverexcLimX2.m", &get_OverexcLimX2_m);
	get_map.emplace("cim:OverexcLimX2.t1", &get_OverexcLimX2_t1);
	get_map.emplace("cim:OverexcLimX2.t2", &get_OverexcLimX2_t2);
	get_map.emplace("cim:OverexcLimX2.t3", &get_OverexcLimX2_t3);
	get_map.emplace("cim:OverexcLimX2.vlow", &get_OverexcLimX2_vlow);
}

void OverexcLimX2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void OverexcLimX2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner OverexcLimX2::declare()
{
	return BaseClassDefiner(OverexcLimX2::addConstructToMap, OverexcLimX2::addPrimitiveAssignFnsToMap, OverexcLimX2::addClassAssignFnsToMap, OverexcLimX2::debugName);
}

namespace CIMPP
{
	BaseClass* OverexcLimX2_factory()
	{
		return new OverexcLimX2;
	}
}
