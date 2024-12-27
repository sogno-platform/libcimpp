/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcST3A.hpp"

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
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "AngleDegrees.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcST3A::ExcST3A() {};
ExcST3A::~ExcST3A() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcST3A.efdmax", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.kc", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.kg", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.ki", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.kj", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.km", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.kp", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.ks", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.ks1", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.tb", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.tc", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.thetap", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.tm", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.vbmax", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.vgmax", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.vimax", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.vimin", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.vrmin", { CGMESProfile::DY, } },
	{ "cim:ExcST3A.xl", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcST3A::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcST3A::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcST3A_efdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->efdmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->kc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->kg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_kj(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->kj;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_km(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->km;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->ks;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_ks1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->ks1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_thetap(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->thetap;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_tm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->tm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_vbmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->vbmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_vgmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->vgmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_vimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->vimax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_vimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->vimin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST3A_xl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1))
	{
		buffer >> element->xl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcST3A_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
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

bool get_ExcST3A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
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

bool get_ExcST3A_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
	{
		buffer << element->kg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST3A_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
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

bool get_ExcST3A_kj(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
	{
		buffer << element->kj;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST3A_km(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
	{
		buffer << element->km;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST3A_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
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

bool get_ExcST3A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
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

bool get_ExcST3A_ks1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
	{
		buffer << element->ks1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST3A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
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

bool get_ExcST3A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
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

bool get_ExcST3A_thetap(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
	{
		buffer << element->thetap;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST3A_tm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
	{
		buffer << element->tm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST3A_vbmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
	{
		buffer << element->vbmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST3A_vgmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
	{
		buffer << element->vgmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST3A_vimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
	{
		buffer << element->vimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST3A_vimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
	{
		buffer << element->vimin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST3A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
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

bool get_ExcST3A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
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

bool get_ExcST3A_xl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1))
	{
		buffer << element->xl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char ExcST3A::debugName[] = "ExcST3A";
const char* ExcST3A::debugString() const
{
	return ExcST3A::debugName;
}

void ExcST3A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcST3A"), &ExcST3A_factory));
}

void ExcST3A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.efdmax"), &assign_ExcST3A_efdmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.kc"), &assign_ExcST3A_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.kg"), &assign_ExcST3A_kg));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.ki"), &assign_ExcST3A_ki));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.kj"), &assign_ExcST3A_kj));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.km"), &assign_ExcST3A_km));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.kp"), &assign_ExcST3A_kp));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.ks"), &assign_ExcST3A_ks));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.ks1"), &assign_ExcST3A_ks1));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.tb"), &assign_ExcST3A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.tc"), &assign_ExcST3A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.thetap"), &assign_ExcST3A_thetap));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.tm"), &assign_ExcST3A_tm));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.vbmax"), &assign_ExcST3A_vbmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.vgmax"), &assign_ExcST3A_vgmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.vimax"), &assign_ExcST3A_vimax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.vimin"), &assign_ExcST3A_vimin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.vrmax"), &assign_ExcST3A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.vrmin"), &assign_ExcST3A_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST3A.xl"), &assign_ExcST3A_xl));
}

void ExcST3A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcST3A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcST3A.efdmax", &get_ExcST3A_efdmax);
	get_map.emplace("cim:ExcST3A.kc", &get_ExcST3A_kc);
	get_map.emplace("cim:ExcST3A.kg", &get_ExcST3A_kg);
	get_map.emplace("cim:ExcST3A.ki", &get_ExcST3A_ki);
	get_map.emplace("cim:ExcST3A.kj", &get_ExcST3A_kj);
	get_map.emplace("cim:ExcST3A.km", &get_ExcST3A_km);
	get_map.emplace("cim:ExcST3A.kp", &get_ExcST3A_kp);
	get_map.emplace("cim:ExcST3A.ks", &get_ExcST3A_ks);
	get_map.emplace("cim:ExcST3A.ks1", &get_ExcST3A_ks1);
	get_map.emplace("cim:ExcST3A.tb", &get_ExcST3A_tb);
	get_map.emplace("cim:ExcST3A.tc", &get_ExcST3A_tc);
	get_map.emplace("cim:ExcST3A.thetap", &get_ExcST3A_thetap);
	get_map.emplace("cim:ExcST3A.tm", &get_ExcST3A_tm);
	get_map.emplace("cim:ExcST3A.vbmax", &get_ExcST3A_vbmax);
	get_map.emplace("cim:ExcST3A.vgmax", &get_ExcST3A_vgmax);
	get_map.emplace("cim:ExcST3A.vimax", &get_ExcST3A_vimax);
	get_map.emplace("cim:ExcST3A.vimin", &get_ExcST3A_vimin);
	get_map.emplace("cim:ExcST3A.vrmax", &get_ExcST3A_vrmax);
	get_map.emplace("cim:ExcST3A.vrmin", &get_ExcST3A_vrmin);
	get_map.emplace("cim:ExcST3A.xl", &get_ExcST3A_xl);
}

void ExcST3A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcST3A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcST3A::declare()
{
	return BaseClassDefiner(ExcST3A::addConstructToMap, ExcST3A::addPrimitiveAssignFnsToMap, ExcST3A::addClassAssignFnsToMap, ExcST3A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcST3A_factory()
	{
		return new ExcST3A;
	}
}
