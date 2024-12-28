/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcDC2A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

ExcDC2A::ExcDC2A() {};
ExcDC2A::~ExcDC2A() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcDC2A.efd1", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.efd2", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.exclim", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.ke", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.kf", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.ks", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.seefd1", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.seefd2", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.te", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.tf", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.tf1", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.vrmin", { CGMESProfile::DY, } },
	{ "cim:ExcDC2A.vtlim", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcDC2A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcDC2A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcDC2A_efd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->efd1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_efd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->efd2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_exclim(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->exclim;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->ks;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_seefd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->seefd1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_seefd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->seefd2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_tf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->tf1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC2A_vtlim(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->vtlim;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcDC2A_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
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

bool get_ExcDC2A_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
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

bool get_ExcDC2A_exclim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->exclim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->ka;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->ke;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->kf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->ks;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_seefd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->seefd1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_seefd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->seefd2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->ta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->tb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->tc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->te;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->tf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_tf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->tf1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->vrmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->vrmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_vtlim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1))
	{
		buffer << element->vtlim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char ExcDC2A::debugName[] = "ExcDC2A";
const char* ExcDC2A::debugString() const
{
	return ExcDC2A::debugName;
}

void ExcDC2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcDC2A"), &ExcDC2A_factory));
}

void ExcDC2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.efd1"), &assign_ExcDC2A_efd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.efd2"), &assign_ExcDC2A_efd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.exclim"), &assign_ExcDC2A_exclim));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.ka"), &assign_ExcDC2A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.ke"), &assign_ExcDC2A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.kf"), &assign_ExcDC2A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.ks"), &assign_ExcDC2A_ks));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.seefd1"), &assign_ExcDC2A_seefd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.seefd2"), &assign_ExcDC2A_seefd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.ta"), &assign_ExcDC2A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.tb"), &assign_ExcDC2A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.tc"), &assign_ExcDC2A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.te"), &assign_ExcDC2A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.tf"), &assign_ExcDC2A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.tf1"), &assign_ExcDC2A_tf1));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.vrmax"), &assign_ExcDC2A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.vrmin"), &assign_ExcDC2A_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.vtlim"), &assign_ExcDC2A_vtlim));
}

void ExcDC2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcDC2A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcDC2A.efd1", &get_ExcDC2A_efd1);
	get_map.emplace("cim:ExcDC2A.efd2", &get_ExcDC2A_efd2);
	get_map.emplace("cim:ExcDC2A.exclim", &get_ExcDC2A_exclim);
	get_map.emplace("cim:ExcDC2A.ka", &get_ExcDC2A_ka);
	get_map.emplace("cim:ExcDC2A.ke", &get_ExcDC2A_ke);
	get_map.emplace("cim:ExcDC2A.kf", &get_ExcDC2A_kf);
	get_map.emplace("cim:ExcDC2A.ks", &get_ExcDC2A_ks);
	get_map.emplace("cim:ExcDC2A.seefd1", &get_ExcDC2A_seefd1);
	get_map.emplace("cim:ExcDC2A.seefd2", &get_ExcDC2A_seefd2);
	get_map.emplace("cim:ExcDC2A.ta", &get_ExcDC2A_ta);
	get_map.emplace("cim:ExcDC2A.tb", &get_ExcDC2A_tb);
	get_map.emplace("cim:ExcDC2A.tc", &get_ExcDC2A_tc);
	get_map.emplace("cim:ExcDC2A.te", &get_ExcDC2A_te);
	get_map.emplace("cim:ExcDC2A.tf", &get_ExcDC2A_tf);
	get_map.emplace("cim:ExcDC2A.tf1", &get_ExcDC2A_tf1);
	get_map.emplace("cim:ExcDC2A.vrmax", &get_ExcDC2A_vrmax);
	get_map.emplace("cim:ExcDC2A.vrmin", &get_ExcDC2A_vrmin);
	get_map.emplace("cim:ExcDC2A.vtlim", &get_ExcDC2A_vtlim);
}

void ExcDC2A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcDC2A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcDC2A::declare()
{
	return BaseClassDefiner(ExcDC2A::addConstructToMap, ExcDC2A::addPrimitiveAssignFnsToMap, ExcDC2A::addClassAssignFnsToMap, ExcDC2A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcDC2A_factory()
	{
		return new ExcDC2A;
	}
}
