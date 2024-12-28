/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteam2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

GovSteam2::GovSteam2() {};
GovSteam2::~GovSteam2() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovSteam2.dbf", { CGMESProfile::DY, } },
	{ "cim:GovSteam2.k", { CGMESProfile::DY, } },
	{ "cim:GovSteam2.mnef", { CGMESProfile::DY, } },
	{ "cim:GovSteam2.mxef", { CGMESProfile::DY, } },
	{ "cim:GovSteam2.pmax", { CGMESProfile::DY, } },
	{ "cim:GovSteam2.pmin", { CGMESProfile::DY, } },
	{ "cim:GovSteam2.t1", { CGMESProfile::DY, } },
	{ "cim:GovSteam2.t2", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovSteam2::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovSteam2::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_GovSteam2_dbf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1))
	{
		buffer >> element->dbf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteam2_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1))
	{
		buffer >> element->k;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteam2_mnef(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1))
	{
		buffer >> element->mnef;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteam2_mxef(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1))
	{
		buffer >> element->mxef;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteam2_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1))
	{
		buffer >> element->pmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteam2_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1))
	{
		buffer >> element->pmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteam2_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteam2_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_GovSteam2_dbf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1))
	{
		buffer << element->dbf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam2_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1))
	{
		buffer << element->k;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam2_mnef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1))
	{
		buffer << element->mnef;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam2_mxef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1))
	{
		buffer << element->mxef;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam2_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1))
	{
		buffer << element->pmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam2_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1))
	{
		buffer << element->pmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam2_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1))
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

bool get_GovSteam2_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1))
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



const char GovSteam2::debugName[] = "GovSteam2";
const char* GovSteam2::debugString() const
{
	return GovSteam2::debugName;
}

void GovSteam2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovSteam2"), &GovSteam2_factory));
}

void GovSteam2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.dbf"), &assign_GovSteam2_dbf));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.k"), &assign_GovSteam2_k));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.mnef"), &assign_GovSteam2_mnef));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.mxef"), &assign_GovSteam2_mxef));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.pmax"), &assign_GovSteam2_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.pmin"), &assign_GovSteam2_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.t1"), &assign_GovSteam2_t1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.t2"), &assign_GovSteam2_t2));
}

void GovSteam2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteam2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovSteam2.dbf", &get_GovSteam2_dbf);
	get_map.emplace("cim:GovSteam2.k", &get_GovSteam2_k);
	get_map.emplace("cim:GovSteam2.mnef", &get_GovSteam2_mnef);
	get_map.emplace("cim:GovSteam2.mxef", &get_GovSteam2_mxef);
	get_map.emplace("cim:GovSteam2.pmax", &get_GovSteam2_pmax);
	get_map.emplace("cim:GovSteam2.pmin", &get_GovSteam2_pmin);
	get_map.emplace("cim:GovSteam2.t1", &get_GovSteam2_t1);
	get_map.emplace("cim:GovSteam2.t2", &get_GovSteam2_t2);
}

void GovSteam2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteam2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovSteam2::declare()
{
	return BaseClassDefiner(GovSteam2::addConstructToMap, GovSteam2::addPrimitiveAssignFnsToMap, GovSteam2::addClassAssignFnsToMap, GovSteam2::debugName);
}

namespace CIMPP
{
	BaseClass* GovSteam2_factory()
	{
		return new GovSteam2;
	}
}
