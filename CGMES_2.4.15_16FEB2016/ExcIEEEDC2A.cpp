/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEDC2A.hpp"

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
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcIEEEDC2A::ExcIEEEDC2A() {};
ExcIEEEDC2A::~ExcIEEEDC2A() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcIEEEDC2A.efd1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.efd2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.exclim", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.ke", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.kf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.seefd1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.seefd2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.te", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.tf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.uelin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC2A.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcIEEEDC2A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcIEEEDC2A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcIEEEDC2A_efd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->efd1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_efd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->efd2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_exclim(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->exclim;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_seefd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->seefd1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_seefd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->seefd2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_uelin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->uelin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEDC2A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcIEEEDC2A_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEDC2A_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEDC2A_exclim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEDC2A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEDC2A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEDC2A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEDC2A_seefd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEDC2A_seefd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEDC2A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEDC2A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEDC2A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEDC2A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEDC2A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEDC2A_uelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
	{
		buffer << element->uelin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC2A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEDC2A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1))
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



const char ExcIEEEDC2A::debugName[] = "ExcIEEEDC2A";
const char* ExcIEEEDC2A::debugString() const
{
	return ExcIEEEDC2A::debugName;
}

void ExcIEEEDC2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A"), &ExcIEEEDC2A_factory));
}

void ExcIEEEDC2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.efd1"), &assign_ExcIEEEDC2A_efd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.efd2"), &assign_ExcIEEEDC2A_efd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.exclim"), &assign_ExcIEEEDC2A_exclim));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.ka"), &assign_ExcIEEEDC2A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.ke"), &assign_ExcIEEEDC2A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.kf"), &assign_ExcIEEEDC2A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.seefd1"), &assign_ExcIEEEDC2A_seefd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.seefd2"), &assign_ExcIEEEDC2A_seefd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.ta"), &assign_ExcIEEEDC2A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.tb"), &assign_ExcIEEEDC2A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.tc"), &assign_ExcIEEEDC2A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.te"), &assign_ExcIEEEDC2A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.tf"), &assign_ExcIEEEDC2A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.uelin"), &assign_ExcIEEEDC2A_uelin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.vrmax"), &assign_ExcIEEEDC2A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.vrmin"), &assign_ExcIEEEDC2A_vrmin));
}

void ExcIEEEDC2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEDC2A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEDC2A.efd1", &get_ExcIEEEDC2A_efd1);
	get_map.emplace("cim:ExcIEEEDC2A.efd2", &get_ExcIEEEDC2A_efd2);
	get_map.emplace("cim:ExcIEEEDC2A.exclim", &get_ExcIEEEDC2A_exclim);
	get_map.emplace("cim:ExcIEEEDC2A.ka", &get_ExcIEEEDC2A_ka);
	get_map.emplace("cim:ExcIEEEDC2A.ke", &get_ExcIEEEDC2A_ke);
	get_map.emplace("cim:ExcIEEEDC2A.kf", &get_ExcIEEEDC2A_kf);
	get_map.emplace("cim:ExcIEEEDC2A.seefd1", &get_ExcIEEEDC2A_seefd1);
	get_map.emplace("cim:ExcIEEEDC2A.seefd2", &get_ExcIEEEDC2A_seefd2);
	get_map.emplace("cim:ExcIEEEDC2A.ta", &get_ExcIEEEDC2A_ta);
	get_map.emplace("cim:ExcIEEEDC2A.tb", &get_ExcIEEEDC2A_tb);
	get_map.emplace("cim:ExcIEEEDC2A.tc", &get_ExcIEEEDC2A_tc);
	get_map.emplace("cim:ExcIEEEDC2A.te", &get_ExcIEEEDC2A_te);
	get_map.emplace("cim:ExcIEEEDC2A.tf", &get_ExcIEEEDC2A_tf);
	get_map.emplace("cim:ExcIEEEDC2A.uelin", &get_ExcIEEEDC2A_uelin);
	get_map.emplace("cim:ExcIEEEDC2A.vrmax", &get_ExcIEEEDC2A_vrmax);
	get_map.emplace("cim:ExcIEEEDC2A.vrmin", &get_ExcIEEEDC2A_vrmin);
}

void ExcIEEEDC2A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEDC2A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcIEEEDC2A::declare()
{
	return BaseClassDefiner(ExcIEEEDC2A::addConstructToMap, ExcIEEEDC2A::addPrimitiveAssignFnsToMap, ExcIEEEDC2A::addClassAssignFnsToMap, ExcIEEEDC2A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEDC2A_factory()
	{
		return new ExcIEEEDC2A;
	}
}
