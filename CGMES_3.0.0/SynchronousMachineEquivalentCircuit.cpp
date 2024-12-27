/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineEquivalentCircuit.hpp"

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
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

SynchronousMachineEquivalentCircuit::SynchronousMachineEquivalentCircuit() {};
SynchronousMachineEquivalentCircuit::~SynchronousMachineEquivalentCircuit() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SynchronousMachineEquivalentCircuit.r1d", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineEquivalentCircuit.r1q", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineEquivalentCircuit.r2q", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineEquivalentCircuit.rfd", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineEquivalentCircuit.x1d", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineEquivalentCircuit.x1q", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineEquivalentCircuit.x2q", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineEquivalentCircuit.xad", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineEquivalentCircuit.xaq", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineEquivalentCircuit.xf1d", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineEquivalentCircuit.xfd", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
SynchronousMachineEquivalentCircuit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SynchronousMachineEquivalentCircuit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = SynchronousMachineDetailed::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_SynchronousMachineEquivalentCircuit_r1d(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->r1d;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_r1q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->r1q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_r2q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->r2q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_rfd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->rfd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_x1d(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->x1d;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_x1q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->x1q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_x2q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->x2q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_xad(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->xad;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_xaq(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->xaq;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_xf1d(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->xf1d;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_xfd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer >> element->xfd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_SynchronousMachineEquivalentCircuit_r1d(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->r1d;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_r1q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->r1q;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_r2q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->r2q;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_rfd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->rfd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_x1d(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->x1d;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_x1q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->x1q;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_x2q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->x2q;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_xad(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->xad;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_xaq(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->xaq;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_xf1d(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->xf1d;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_xfd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1))
	{
		buffer << element->xfd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char SynchronousMachineEquivalentCircuit::debugName[] = "SynchronousMachineEquivalentCircuit";
const char* SynchronousMachineEquivalentCircuit::debugString() const
{
	return SynchronousMachineEquivalentCircuit::debugName;
}

void SynchronousMachineEquivalentCircuit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit"), &SynchronousMachineEquivalentCircuit_factory));
}

void SynchronousMachineEquivalentCircuit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.r1d"), &assign_SynchronousMachineEquivalentCircuit_r1d));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.r1q"), &assign_SynchronousMachineEquivalentCircuit_r1q));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.r2q"), &assign_SynchronousMachineEquivalentCircuit_r2q));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.rfd"), &assign_SynchronousMachineEquivalentCircuit_rfd));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.x1d"), &assign_SynchronousMachineEquivalentCircuit_x1d));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.x1q"), &assign_SynchronousMachineEquivalentCircuit_x1q));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.x2q"), &assign_SynchronousMachineEquivalentCircuit_x2q));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.xad"), &assign_SynchronousMachineEquivalentCircuit_xad));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.xaq"), &assign_SynchronousMachineEquivalentCircuit_xaq));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.xf1d"), &assign_SynchronousMachineEquivalentCircuit_xf1d));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineEquivalentCircuit.xfd"), &assign_SynchronousMachineEquivalentCircuit_xfd));
}

void SynchronousMachineEquivalentCircuit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SynchronousMachineEquivalentCircuit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDetailed::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:SynchronousMachineEquivalentCircuit.r1d", &get_SynchronousMachineEquivalentCircuit_r1d);
	get_map.emplace("cim:SynchronousMachineEquivalentCircuit.r1q", &get_SynchronousMachineEquivalentCircuit_r1q);
	get_map.emplace("cim:SynchronousMachineEquivalentCircuit.r2q", &get_SynchronousMachineEquivalentCircuit_r2q);
	get_map.emplace("cim:SynchronousMachineEquivalentCircuit.rfd", &get_SynchronousMachineEquivalentCircuit_rfd);
	get_map.emplace("cim:SynchronousMachineEquivalentCircuit.x1d", &get_SynchronousMachineEquivalentCircuit_x1d);
	get_map.emplace("cim:SynchronousMachineEquivalentCircuit.x1q", &get_SynchronousMachineEquivalentCircuit_x1q);
	get_map.emplace("cim:SynchronousMachineEquivalentCircuit.x2q", &get_SynchronousMachineEquivalentCircuit_x2q);
	get_map.emplace("cim:SynchronousMachineEquivalentCircuit.xad", &get_SynchronousMachineEquivalentCircuit_xad);
	get_map.emplace("cim:SynchronousMachineEquivalentCircuit.xaq", &get_SynchronousMachineEquivalentCircuit_xaq);
	get_map.emplace("cim:SynchronousMachineEquivalentCircuit.xf1d", &get_SynchronousMachineEquivalentCircuit_xf1d);
	get_map.emplace("cim:SynchronousMachineEquivalentCircuit.xfd", &get_SynchronousMachineEquivalentCircuit_xfd);
}

void SynchronousMachineEquivalentCircuit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SynchronousMachineDetailed::addClassGetFnsToMap(get_map);
}

void SynchronousMachineEquivalentCircuit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDetailed::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SynchronousMachineEquivalentCircuit::declare()
{
	return BaseClassDefiner(SynchronousMachineEquivalentCircuit::addConstructToMap, SynchronousMachineEquivalentCircuit::addPrimitiveAssignFnsToMap, SynchronousMachineEquivalentCircuit::addClassAssignFnsToMap, SynchronousMachineEquivalentCircuit::debugName);
}

namespace CIMPP
{
	BaseClass* SynchronousMachineEquivalentCircuit_factory()
	{
		return new SynchronousMachineEquivalentCircuit;
	}
}
