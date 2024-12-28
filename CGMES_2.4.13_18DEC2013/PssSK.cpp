/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssSK.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

PssSK::PssSK() {};
PssSK::~PssSK() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PssSK.k1", { CGMESProfile::DY, } },
	{ "cim:PssSK.k2", { CGMESProfile::DY, } },
	{ "cim:PssSK.k3", { CGMESProfile::DY, } },
	{ "cim:PssSK.t1", { CGMESProfile::DY, } },
	{ "cim:PssSK.t2", { CGMESProfile::DY, } },
	{ "cim:PssSK.t3", { CGMESProfile::DY, } },
	{ "cim:PssSK.t4", { CGMESProfile::DY, } },
	{ "cim:PssSK.t5", { CGMESProfile::DY, } },
	{ "cim:PssSK.t6", { CGMESProfile::DY, } },
	{ "cim:PssSK.vsmax", { CGMESProfile::DY, } },
	{ "cim:PssSK.vsmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PssSK::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PssSK::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemStabilizerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_PssSK_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->k1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->k2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->k3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->t4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->t5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->t6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_vsmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->vsmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_vsmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->vsmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_PssSK_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1))
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

bool get_PssSK_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1))
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

bool get_PssSK_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1))
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

bool get_PssSK_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1))
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

bool get_PssSK_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1))
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

bool get_PssSK_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1))
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

bool get_PssSK_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1))
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

bool get_PssSK_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1))
	{
		buffer << element->t5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSK_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1))
	{
		buffer << element->t6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSK_vsmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1))
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

bool get_PssSK_vsmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1))
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



const char PssSK::debugName[] = "PssSK";
const char* PssSK::debugString() const
{
	return PssSK::debugName;
}

void PssSK::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PssSK"), &PssSK_factory));
}

void PssSK::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PssSK.k1"), &assign_PssSK_k1));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.k2"), &assign_PssSK_k2));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.k3"), &assign_PssSK_k3));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.t1"), &assign_PssSK_t1));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.t2"), &assign_PssSK_t2));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.t3"), &assign_PssSK_t3));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.t4"), &assign_PssSK_t4));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.t5"), &assign_PssSK_t5));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.t6"), &assign_PssSK_t6));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.vsmax"), &assign_PssSK_vsmax));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.vsmin"), &assign_PssSK_vsmin));
}

void PssSK::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssSK::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PssSK.k1", &get_PssSK_k1);
	get_map.emplace("cim:PssSK.k2", &get_PssSK_k2);
	get_map.emplace("cim:PssSK.k3", &get_PssSK_k3);
	get_map.emplace("cim:PssSK.t1", &get_PssSK_t1);
	get_map.emplace("cim:PssSK.t2", &get_PssSK_t2);
	get_map.emplace("cim:PssSK.t3", &get_PssSK_t3);
	get_map.emplace("cim:PssSK.t4", &get_PssSK_t4);
	get_map.emplace("cim:PssSK.t5", &get_PssSK_t5);
	get_map.emplace("cim:PssSK.t6", &get_PssSK_t6);
	get_map.emplace("cim:PssSK.vsmax", &get_PssSK_vsmax);
	get_map.emplace("cim:PssSK.vsmin", &get_PssSK_vsmin);
}

void PssSK::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssSK::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PssSK::declare()
{
	return BaseClassDefiner(PssSK::addConstructToMap, PssSK::addPrimitiveAssignFnsToMap, PssSK::addClassAssignFnsToMap, PssSK::debugName);
}

namespace CIMPP
{
	BaseClass* PssSK_factory()
	{
		return new PssSK;
	}
}
