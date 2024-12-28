/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEST2A.hpp"

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
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcIEEEST2A::ExcIEEEST2A() {};
ExcIEEEST2A::~ExcIEEEST2A() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcIEEEST2A.efdmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST2A.ka", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST2A.kc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST2A.ke", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST2A.kf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST2A.ki", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST2A.kp", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST2A.ta", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST2A.te", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST2A.tf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST2A.uelin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST2A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST2A.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcIEEEST2A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcIEEEST2A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcIEEEST2A_efdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1))
	{
		buffer >> element->efdmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST2A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST2A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1))
	{
		buffer >> element->kc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST2A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST2A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST2A_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST2A_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST2A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST2A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST2A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST2A_uelin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1))
	{
		buffer >> element->uelin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST2A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST2A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcIEEEST2A_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEST2A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEST2A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEST2A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEST2A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEST2A_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEST2A_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEST2A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEST2A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEST2A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEST2A_uelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEST2A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1))
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

bool get_ExcIEEEST2A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1))
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



const char ExcIEEEST2A::debugName[] = "ExcIEEEST2A";
const char* ExcIEEEST2A::debugString() const
{
	return ExcIEEEST2A::debugName;
}

void ExcIEEEST2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A"), &ExcIEEEST2A_factory));
}

void ExcIEEEST2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.efdmax"), &assign_ExcIEEEST2A_efdmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.ka"), &assign_ExcIEEEST2A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.kc"), &assign_ExcIEEEST2A_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.ke"), &assign_ExcIEEEST2A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.kf"), &assign_ExcIEEEST2A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.ki"), &assign_ExcIEEEST2A_ki));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.kp"), &assign_ExcIEEEST2A_kp));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.ta"), &assign_ExcIEEEST2A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.te"), &assign_ExcIEEEST2A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.tf"), &assign_ExcIEEEST2A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.uelin"), &assign_ExcIEEEST2A_uelin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.vrmax"), &assign_ExcIEEEST2A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.vrmin"), &assign_ExcIEEEST2A_vrmin));
}

void ExcIEEEST2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEST2A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEST2A.efdmax", &get_ExcIEEEST2A_efdmax);
	get_map.emplace("cim:ExcIEEEST2A.ka", &get_ExcIEEEST2A_ka);
	get_map.emplace("cim:ExcIEEEST2A.kc", &get_ExcIEEEST2A_kc);
	get_map.emplace("cim:ExcIEEEST2A.ke", &get_ExcIEEEST2A_ke);
	get_map.emplace("cim:ExcIEEEST2A.kf", &get_ExcIEEEST2A_kf);
	get_map.emplace("cim:ExcIEEEST2A.ki", &get_ExcIEEEST2A_ki);
	get_map.emplace("cim:ExcIEEEST2A.kp", &get_ExcIEEEST2A_kp);
	get_map.emplace("cim:ExcIEEEST2A.ta", &get_ExcIEEEST2A_ta);
	get_map.emplace("cim:ExcIEEEST2A.te", &get_ExcIEEEST2A_te);
	get_map.emplace("cim:ExcIEEEST2A.tf", &get_ExcIEEEST2A_tf);
	get_map.emplace("cim:ExcIEEEST2A.uelin", &get_ExcIEEEST2A_uelin);
	get_map.emplace("cim:ExcIEEEST2A.vrmax", &get_ExcIEEEST2A_vrmax);
	get_map.emplace("cim:ExcIEEEST2A.vrmin", &get_ExcIEEEST2A_vrmin);
}

void ExcIEEEST2A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEST2A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcIEEEST2A::declare()
{
	return BaseClassDefiner(ExcIEEEST2A::addConstructToMap, ExcIEEEST2A::addPrimitiveAssignFnsToMap, ExcIEEEST2A::addClassAssignFnsToMap, ExcIEEEST2A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEST2A_factory()
	{
		return new ExcIEEEST2A;
	}
}
