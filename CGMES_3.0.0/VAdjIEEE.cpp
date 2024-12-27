/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VAdjIEEE.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

VAdjIEEE::VAdjIEEE() {};
VAdjIEEE::~VAdjIEEE() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:VAdjIEEE.adjslew", { CGMESProfile::DY, } },
	{ "cim:VAdjIEEE.taoff", { CGMESProfile::DY, } },
	{ "cim:VAdjIEEE.taon", { CGMESProfile::DY, } },
	{ "cim:VAdjIEEE.vadjf", { CGMESProfile::DY, } },
	{ "cim:VAdjIEEE.vadjmax", { CGMESProfile::DY, } },
	{ "cim:VAdjIEEE.vadjmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
VAdjIEEE::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
VAdjIEEE::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = VoltageAdjusterDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_VAdjIEEE_adjslew(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1))
	{
		buffer >> element->adjslew;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VAdjIEEE_taoff(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1))
	{
		buffer >> element->taoff;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VAdjIEEE_taon(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1))
	{
		buffer >> element->taon;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VAdjIEEE_vadjf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1))
	{
		buffer >> element->vadjf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VAdjIEEE_vadjmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1))
	{
		buffer >> element->vadjmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VAdjIEEE_vadjmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1))
	{
		buffer >> element->vadjmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_VAdjIEEE_adjslew(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VAdjIEEE* element = dynamic_cast<const VAdjIEEE*>(BaseClass_ptr1))
	{
		buffer << element->adjslew;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VAdjIEEE_taoff(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VAdjIEEE* element = dynamic_cast<const VAdjIEEE*>(BaseClass_ptr1))
	{
		buffer << element->taoff;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VAdjIEEE_taon(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VAdjIEEE* element = dynamic_cast<const VAdjIEEE*>(BaseClass_ptr1))
	{
		buffer << element->taon;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VAdjIEEE_vadjf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VAdjIEEE* element = dynamic_cast<const VAdjIEEE*>(BaseClass_ptr1))
	{
		buffer << element->vadjf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VAdjIEEE_vadjmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VAdjIEEE* element = dynamic_cast<const VAdjIEEE*>(BaseClass_ptr1))
	{
		buffer << element->vadjmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VAdjIEEE_vadjmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VAdjIEEE* element = dynamic_cast<const VAdjIEEE*>(BaseClass_ptr1))
	{
		buffer << element->vadjmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char VAdjIEEE::debugName[] = "VAdjIEEE";
const char* VAdjIEEE::debugString() const
{
	return VAdjIEEE::debugName;
}

void VAdjIEEE::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VAdjIEEE"), &VAdjIEEE_factory));
}

void VAdjIEEE::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VAdjIEEE.adjslew"), &assign_VAdjIEEE_adjslew));
	assign_map.insert(std::make_pair(std::string("cim:VAdjIEEE.taoff"), &assign_VAdjIEEE_taoff));
	assign_map.insert(std::make_pair(std::string("cim:VAdjIEEE.taon"), &assign_VAdjIEEE_taon));
	assign_map.insert(std::make_pair(std::string("cim:VAdjIEEE.vadjf"), &assign_VAdjIEEE_vadjf));
	assign_map.insert(std::make_pair(std::string("cim:VAdjIEEE.vadjmax"), &assign_VAdjIEEE_vadjmax));
	assign_map.insert(std::make_pair(std::string("cim:VAdjIEEE.vadjmin"), &assign_VAdjIEEE_vadjmin));
}

void VAdjIEEE::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void VAdjIEEE::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageAdjusterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:VAdjIEEE.adjslew", &get_VAdjIEEE_adjslew);
	get_map.emplace("cim:VAdjIEEE.taoff", &get_VAdjIEEE_taoff);
	get_map.emplace("cim:VAdjIEEE.taon", &get_VAdjIEEE_taon);
	get_map.emplace("cim:VAdjIEEE.vadjf", &get_VAdjIEEE_vadjf);
	get_map.emplace("cim:VAdjIEEE.vadjmax", &get_VAdjIEEE_vadjmax);
	get_map.emplace("cim:VAdjIEEE.vadjmin", &get_VAdjIEEE_vadjmin);
}

void VAdjIEEE::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	VoltageAdjusterDynamics::addClassGetFnsToMap(get_map);
}

void VAdjIEEE::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageAdjusterDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner VAdjIEEE::declare()
{
	return BaseClassDefiner(VAdjIEEE::addConstructToMap, VAdjIEEE::addPrimitiveAssignFnsToMap, VAdjIEEE::addClassAssignFnsToMap, VAdjIEEE::debugName);
}

namespace CIMPP
{
	BaseClass* VAdjIEEE_factory()
	{
		return new VAdjIEEE;
	}
}
