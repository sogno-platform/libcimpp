/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssSH.hpp"

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
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

PssSH::PssSH() {};
PssSH::~PssSH() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PssSH.k", { CGMESProfile::DY, } },
	{ "cim:PssSH.k0", { CGMESProfile::DY, } },
	{ "cim:PssSH.k1", { CGMESProfile::DY, } },
	{ "cim:PssSH.k2", { CGMESProfile::DY, } },
	{ "cim:PssSH.k3", { CGMESProfile::DY, } },
	{ "cim:PssSH.k4", { CGMESProfile::DY, } },
	{ "cim:PssSH.t1", { CGMESProfile::DY, } },
	{ "cim:PssSH.t2", { CGMESProfile::DY, } },
	{ "cim:PssSH.t3", { CGMESProfile::DY, } },
	{ "cim:PssSH.t4", { CGMESProfile::DY, } },
	{ "cim:PssSH.td", { CGMESProfile::DY, } },
	{ "cim:PssSH.vsmax", { CGMESProfile::DY, } },
	{ "cim:PssSH.vsmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PssSH::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PssSH::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemStabilizerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_PssSH_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1))
	{
		buffer >> element->k;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSH_k0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1))
	{
		buffer >> element->k0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSH_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1))
	{
		buffer >> element->k1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSH_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1))
	{
		buffer >> element->k2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSH_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1))
	{
		buffer >> element->k3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSH_k4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1))
	{
		buffer >> element->k4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSH_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSH_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSH_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSH_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1))
	{
		buffer >> element->t4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSH_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1))
	{
		buffer >> element->td;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSH_vsmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1))
	{
		buffer >> element->vsmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSH_vsmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1))
	{
		buffer >> element->vsmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_PssSH_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1))
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

bool get_PssSH_k0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1))
	{
		buffer << element->k0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSH_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1))
	{
		buffer << element->k1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSH_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1))
	{
		buffer << element->k2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSH_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1))
	{
		buffer << element->k3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSH_k4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1))
	{
		buffer << element->k4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSH_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1))
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

bool get_PssSH_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1))
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

bool get_PssSH_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1))
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

bool get_PssSH_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1))
	{
		buffer << element->t4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSH_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1))
	{
		buffer << element->td;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSH_vsmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1))
	{
		buffer << element->vsmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSH_vsmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1))
	{
		buffer << element->vsmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char PssSH::debugName[] = "PssSH";
const char* PssSH::debugString() const
{
	return PssSH::debugName;
}

void PssSH::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PssSH"), &PssSH_factory));
}

void PssSH::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PssSH.k"), &assign_PssSH_k));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.k0"), &assign_PssSH_k0));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.k1"), &assign_PssSH_k1));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.k2"), &assign_PssSH_k2));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.k3"), &assign_PssSH_k3));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.k4"), &assign_PssSH_k4));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.t1"), &assign_PssSH_t1));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.t2"), &assign_PssSH_t2));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.t3"), &assign_PssSH_t3));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.t4"), &assign_PssSH_t4));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.td"), &assign_PssSH_td));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.vsmax"), &assign_PssSH_vsmax));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.vsmin"), &assign_PssSH_vsmin));
}

void PssSH::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssSH::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PssSH.k", &get_PssSH_k);
	get_map.emplace("cim:PssSH.k0", &get_PssSH_k0);
	get_map.emplace("cim:PssSH.k1", &get_PssSH_k1);
	get_map.emplace("cim:PssSH.k2", &get_PssSH_k2);
	get_map.emplace("cim:PssSH.k3", &get_PssSH_k3);
	get_map.emplace("cim:PssSH.k4", &get_PssSH_k4);
	get_map.emplace("cim:PssSH.t1", &get_PssSH_t1);
	get_map.emplace("cim:PssSH.t2", &get_PssSH_t2);
	get_map.emplace("cim:PssSH.t3", &get_PssSH_t3);
	get_map.emplace("cim:PssSH.t4", &get_PssSH_t4);
	get_map.emplace("cim:PssSH.td", &get_PssSH_td);
	get_map.emplace("cim:PssSH.vsmax", &get_PssSH_vsmax);
	get_map.emplace("cim:PssSH.vsmin", &get_PssSH_vsmin);
}

void PssSH::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssSH::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PssSH::declare()
{
	return BaseClassDefiner(PssSH::addConstructToMap, PssSH::addPrimitiveAssignFnsToMap, PssSH::addClassAssignFnsToMap, PssSH::debugName);
}

namespace CIMPP
{
	BaseClass* PssSH_factory()
	{
		return new PssSH;
	}
}
