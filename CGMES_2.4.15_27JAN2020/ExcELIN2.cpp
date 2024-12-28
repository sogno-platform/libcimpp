/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcELIN2.hpp"

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
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcELIN2::ExcELIN2() {};
ExcELIN2::~ExcELIN2() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcELIN2.efdbas", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.iefmax", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.iefmax2", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.iefmin", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.k1", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.k1ec", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.k2", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.k3", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.k4", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.kd1", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.ke2", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.ketb", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.pid1max", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.seve1", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.seve2", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.tb1", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.te", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.te2", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.ti1", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.ti3", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.ti4", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.tr4", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.upmax", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.upmin", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.ve1", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.ve2", { CGMESProfile::DY, } },
	{ "cim:ExcELIN2.xp", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcELIN2::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcELIN2::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcELIN2_efdbas(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->efdbas;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_iefmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->iefmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_iefmax2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->iefmax2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_iefmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->iefmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->k1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_k1ec(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->k1ec;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->k2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->k3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_k4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->k4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_kd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->kd1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_ke2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->ke2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_ketb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->ketb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_pid1max(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->pid1max;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_seve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->seve1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_seve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->seve2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_tb1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->tb1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_te2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->te2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_ti1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->ti1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_ti3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->ti3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_ti4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->ti4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_tr4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->tr4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_upmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->upmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_upmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->upmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_ve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->ve1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_ve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->ve2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN2_xp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1))
	{
		buffer >> element->xp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcELIN2_efdbas(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->efdbas;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_iefmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->iefmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_iefmax2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->iefmax2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_iefmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->iefmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
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

bool get_ExcELIN2_k1ec(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->k1ec;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
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

bool get_ExcELIN2_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
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

bool get_ExcELIN2_k4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
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

bool get_ExcELIN2_kd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->kd1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_ke2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->ke2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_ketb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->ketb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_pid1max(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->pid1max;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->seve1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->seve2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_tb1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->tb1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
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

bool get_ExcELIN2_te2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->te2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_ti1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->ti1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_ti3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->ti3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_ti4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->ti4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_tr4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->tr4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_upmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->upmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_upmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->upmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->ve1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->ve2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_xp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1))
	{
		buffer << element->xp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char ExcELIN2::debugName[] = "ExcELIN2";
const char* ExcELIN2::debugString() const
{
	return ExcELIN2::debugName;
}

void ExcELIN2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcELIN2"), &ExcELIN2_factory));
}

void ExcELIN2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.efdbas"), &assign_ExcELIN2_efdbas));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.iefmax"), &assign_ExcELIN2_iefmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.iefmax2"), &assign_ExcELIN2_iefmax2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.iefmin"), &assign_ExcELIN2_iefmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.k1"), &assign_ExcELIN2_k1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.k1ec"), &assign_ExcELIN2_k1ec));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.k2"), &assign_ExcELIN2_k2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.k3"), &assign_ExcELIN2_k3));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.k4"), &assign_ExcELIN2_k4));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.kd1"), &assign_ExcELIN2_kd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.ke2"), &assign_ExcELIN2_ke2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.ketb"), &assign_ExcELIN2_ketb));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.pid1max"), &assign_ExcELIN2_pid1max));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.seve1"), &assign_ExcELIN2_seve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.seve2"), &assign_ExcELIN2_seve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.tb1"), &assign_ExcELIN2_tb1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.te"), &assign_ExcELIN2_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.te2"), &assign_ExcELIN2_te2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.ti1"), &assign_ExcELIN2_ti1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.ti3"), &assign_ExcELIN2_ti3));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.ti4"), &assign_ExcELIN2_ti4));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.tr4"), &assign_ExcELIN2_tr4));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.upmax"), &assign_ExcELIN2_upmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.upmin"), &assign_ExcELIN2_upmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.ve1"), &assign_ExcELIN2_ve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.ve2"), &assign_ExcELIN2_ve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN2.xp"), &assign_ExcELIN2_xp));
}

void ExcELIN2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcELIN2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcELIN2.efdbas", &get_ExcELIN2_efdbas);
	get_map.emplace("cim:ExcELIN2.iefmax", &get_ExcELIN2_iefmax);
	get_map.emplace("cim:ExcELIN2.iefmax2", &get_ExcELIN2_iefmax2);
	get_map.emplace("cim:ExcELIN2.iefmin", &get_ExcELIN2_iefmin);
	get_map.emplace("cim:ExcELIN2.k1", &get_ExcELIN2_k1);
	get_map.emplace("cim:ExcELIN2.k1ec", &get_ExcELIN2_k1ec);
	get_map.emplace("cim:ExcELIN2.k2", &get_ExcELIN2_k2);
	get_map.emplace("cim:ExcELIN2.k3", &get_ExcELIN2_k3);
	get_map.emplace("cim:ExcELIN2.k4", &get_ExcELIN2_k4);
	get_map.emplace("cim:ExcELIN2.kd1", &get_ExcELIN2_kd1);
	get_map.emplace("cim:ExcELIN2.ke2", &get_ExcELIN2_ke2);
	get_map.emplace("cim:ExcELIN2.ketb", &get_ExcELIN2_ketb);
	get_map.emplace("cim:ExcELIN2.pid1max", &get_ExcELIN2_pid1max);
	get_map.emplace("cim:ExcELIN2.seve1", &get_ExcELIN2_seve1);
	get_map.emplace("cim:ExcELIN2.seve2", &get_ExcELIN2_seve2);
	get_map.emplace("cim:ExcELIN2.tb1", &get_ExcELIN2_tb1);
	get_map.emplace("cim:ExcELIN2.te", &get_ExcELIN2_te);
	get_map.emplace("cim:ExcELIN2.te2", &get_ExcELIN2_te2);
	get_map.emplace("cim:ExcELIN2.ti1", &get_ExcELIN2_ti1);
	get_map.emplace("cim:ExcELIN2.ti3", &get_ExcELIN2_ti3);
	get_map.emplace("cim:ExcELIN2.ti4", &get_ExcELIN2_ti4);
	get_map.emplace("cim:ExcELIN2.tr4", &get_ExcELIN2_tr4);
	get_map.emplace("cim:ExcELIN2.upmax", &get_ExcELIN2_upmax);
	get_map.emplace("cim:ExcELIN2.upmin", &get_ExcELIN2_upmin);
	get_map.emplace("cim:ExcELIN2.ve1", &get_ExcELIN2_ve1);
	get_map.emplace("cim:ExcELIN2.ve2", &get_ExcELIN2_ve2);
	get_map.emplace("cim:ExcELIN2.xp", &get_ExcELIN2_xp);
}

void ExcELIN2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcELIN2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcELIN2::declare()
{
	return BaseClassDefiner(ExcELIN2::addConstructToMap, ExcELIN2::addPrimitiveAssignFnsToMap, ExcELIN2::addClassAssignFnsToMap, ExcELIN2::debugName);
}

namespace CIMPP
{
	BaseClass* ExcELIN2_factory()
	{
		return new ExcELIN2;
	}
}
