/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcST2A.hpp"

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
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcST2A::ExcST2A() {};
ExcST2A::~ExcST2A() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcST2A.efdmax", { CGMESProfile::DY, } },
	{ "cim:ExcST2A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcST2A.kc", { CGMESProfile::DY, } },
	{ "cim:ExcST2A.ke", { CGMESProfile::DY, } },
	{ "cim:ExcST2A.kf", { CGMESProfile::DY, } },
	{ "cim:ExcST2A.ki", { CGMESProfile::DY, } },
	{ "cim:ExcST2A.kp", { CGMESProfile::DY, } },
	{ "cim:ExcST2A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcST2A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcST2A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcST2A.te", { CGMESProfile::DY, } },
	{ "cim:ExcST2A.tf", { CGMESProfile::DY, } },
	{ "cim:ExcST2A.uelin", { CGMESProfile::DY, } },
	{ "cim:ExcST2A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcST2A.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcST2A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcST2A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcST2A_efdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->efdmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST2A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST2A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->kc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST2A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST2A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST2A_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST2A_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST2A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST2A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST2A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST2A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST2A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST2A_uelin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->uelin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST2A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST2A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcST2A_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
	{
		buffer << element->efdmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST2A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
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

bool get_ExcST2A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
	{
		buffer << element->kc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST2A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
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

bool get_ExcST2A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
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

bool get_ExcST2A_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
	{
		buffer << element->ki;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST2A_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
	{
		buffer << element->kp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST2A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
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

bool get_ExcST2A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
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

bool get_ExcST2A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
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

bool get_ExcST2A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
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

bool get_ExcST2A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
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

bool get_ExcST2A_uelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
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

bool get_ExcST2A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
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

bool get_ExcST2A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1))
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



const char ExcST2A::debugName[] = "ExcST2A";
const char* ExcST2A::debugString() const
{
	return ExcST2A::debugName;
}

void ExcST2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcST2A"), &ExcST2A_factory));
}

void ExcST2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.efdmax"), &assign_ExcST2A_efdmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.ka"), &assign_ExcST2A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.kc"), &assign_ExcST2A_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.ke"), &assign_ExcST2A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.kf"), &assign_ExcST2A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.ki"), &assign_ExcST2A_ki));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.kp"), &assign_ExcST2A_kp));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.ta"), &assign_ExcST2A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.tb"), &assign_ExcST2A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.tc"), &assign_ExcST2A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.te"), &assign_ExcST2A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.tf"), &assign_ExcST2A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.uelin"), &assign_ExcST2A_uelin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.vrmax"), &assign_ExcST2A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.vrmin"), &assign_ExcST2A_vrmin));
}

void ExcST2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcST2A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcST2A.efdmax", &get_ExcST2A_efdmax);
	get_map.emplace("cim:ExcST2A.ka", &get_ExcST2A_ka);
	get_map.emplace("cim:ExcST2A.kc", &get_ExcST2A_kc);
	get_map.emplace("cim:ExcST2A.ke", &get_ExcST2A_ke);
	get_map.emplace("cim:ExcST2A.kf", &get_ExcST2A_kf);
	get_map.emplace("cim:ExcST2A.ki", &get_ExcST2A_ki);
	get_map.emplace("cim:ExcST2A.kp", &get_ExcST2A_kp);
	get_map.emplace("cim:ExcST2A.ta", &get_ExcST2A_ta);
	get_map.emplace("cim:ExcST2A.tb", &get_ExcST2A_tb);
	get_map.emplace("cim:ExcST2A.tc", &get_ExcST2A_tc);
	get_map.emplace("cim:ExcST2A.te", &get_ExcST2A_te);
	get_map.emplace("cim:ExcST2A.tf", &get_ExcST2A_tf);
	get_map.emplace("cim:ExcST2A.uelin", &get_ExcST2A_uelin);
	get_map.emplace("cim:ExcST2A.vrmax", &get_ExcST2A_vrmax);
	get_map.emplace("cim:ExcST2A.vrmin", &get_ExcST2A_vrmin);
}

void ExcST2A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcST2A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcST2A::declare()
{
	return BaseClassDefiner(ExcST2A::addConstructToMap, ExcST2A::addPrimitiveAssignFnsToMap, ExcST2A::addClassAssignFnsToMap, ExcST2A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcST2A_factory()
	{
		return new ExcST2A;
	}
}
