/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcELIN1.hpp"

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
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcELIN1::ExcELIN1() {};
ExcELIN1::~ExcELIN1() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcELIN1.dpnf", { CGMESProfile::DY, } },
	{ "cim:ExcELIN1.efmax", { CGMESProfile::DY, } },
	{ "cim:ExcELIN1.efmin", { CGMESProfile::DY, } },
	{ "cim:ExcELIN1.ks1", { CGMESProfile::DY, } },
	{ "cim:ExcELIN1.ks2", { CGMESProfile::DY, } },
	{ "cim:ExcELIN1.smax", { CGMESProfile::DY, } },
	{ "cim:ExcELIN1.tfi", { CGMESProfile::DY, } },
	{ "cim:ExcELIN1.tnu", { CGMESProfile::DY, } },
	{ "cim:ExcELIN1.ts1", { CGMESProfile::DY, } },
	{ "cim:ExcELIN1.ts2", { CGMESProfile::DY, } },
	{ "cim:ExcELIN1.tsw", { CGMESProfile::DY, } },
	{ "cim:ExcELIN1.vpi", { CGMESProfile::DY, } },
	{ "cim:ExcELIN1.vpnf", { CGMESProfile::DY, } },
	{ "cim:ExcELIN1.vpu", { CGMESProfile::DY, } },
	{ "cim:ExcELIN1.xe", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcELIN1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcELIN1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcELIN1_dpnf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->dpnf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN1_efmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->efmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN1_efmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->efmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN1_ks1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->ks1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN1_ks2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->ks2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN1_smax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->smax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN1_tfi(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->tfi;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN1_tnu(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->tnu;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN1_ts1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->ts1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN1_ts2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->ts2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN1_tsw(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->tsw;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN1_vpi(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->vpi;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN1_vpnf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->vpnf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN1_vpu(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->vpu;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcELIN1_xe(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1))
	{
		buffer >> element->xe;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcELIN1_dpnf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
	{
		buffer << element->dpnf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN1_efmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
	{
		buffer << element->efmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN1_efmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
	{
		buffer << element->efmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN1_ks1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
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

bool get_ExcELIN1_ks2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
	{
		buffer << element->ks2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN1_smax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
	{
		buffer << element->smax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN1_tfi(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
	{
		buffer << element->tfi;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN1_tnu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
	{
		buffer << element->tnu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN1_ts1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
	{
		buffer << element->ts1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN1_ts2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
	{
		buffer << element->ts2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN1_tsw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
	{
		buffer << element->tsw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN1_vpi(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
	{
		buffer << element->vpi;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN1_vpnf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
	{
		buffer << element->vpnf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN1_vpu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
	{
		buffer << element->vpu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN1_xe(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1))
	{
		buffer << element->xe;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char ExcELIN1::debugName[] = "ExcELIN1";
const char* ExcELIN1::debugString() const
{
	return ExcELIN1::debugName;
}

void ExcELIN1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcELIN1"), &ExcELIN1_factory));
}

void ExcELIN1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.dpnf"), &assign_ExcELIN1_dpnf));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.efmax"), &assign_ExcELIN1_efmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.efmin"), &assign_ExcELIN1_efmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.ks1"), &assign_ExcELIN1_ks1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.ks2"), &assign_ExcELIN1_ks2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.smax"), &assign_ExcELIN1_smax));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.tfi"), &assign_ExcELIN1_tfi));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.tnu"), &assign_ExcELIN1_tnu));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.ts1"), &assign_ExcELIN1_ts1));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.ts2"), &assign_ExcELIN1_ts2));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.tsw"), &assign_ExcELIN1_tsw));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.vpi"), &assign_ExcELIN1_vpi));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.vpnf"), &assign_ExcELIN1_vpnf));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.vpu"), &assign_ExcELIN1_vpu));
	assign_map.insert(std::make_pair(std::string("cim:ExcELIN1.xe"), &assign_ExcELIN1_xe));
}

void ExcELIN1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcELIN1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcELIN1.dpnf", &get_ExcELIN1_dpnf);
	get_map.emplace("cim:ExcELIN1.efmax", &get_ExcELIN1_efmax);
	get_map.emplace("cim:ExcELIN1.efmin", &get_ExcELIN1_efmin);
	get_map.emplace("cim:ExcELIN1.ks1", &get_ExcELIN1_ks1);
	get_map.emplace("cim:ExcELIN1.ks2", &get_ExcELIN1_ks2);
	get_map.emplace("cim:ExcELIN1.smax", &get_ExcELIN1_smax);
	get_map.emplace("cim:ExcELIN1.tfi", &get_ExcELIN1_tfi);
	get_map.emplace("cim:ExcELIN1.tnu", &get_ExcELIN1_tnu);
	get_map.emplace("cim:ExcELIN1.ts1", &get_ExcELIN1_ts1);
	get_map.emplace("cim:ExcELIN1.ts2", &get_ExcELIN1_ts2);
	get_map.emplace("cim:ExcELIN1.tsw", &get_ExcELIN1_tsw);
	get_map.emplace("cim:ExcELIN1.vpi", &get_ExcELIN1_vpi);
	get_map.emplace("cim:ExcELIN1.vpnf", &get_ExcELIN1_vpnf);
	get_map.emplace("cim:ExcELIN1.vpu", &get_ExcELIN1_vpu);
	get_map.emplace("cim:ExcELIN1.xe", &get_ExcELIN1_xe);
}

void ExcELIN1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcELIN1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcELIN1::declare()
{
	return BaseClassDefiner(ExcELIN1::addConstructToMap, ExcELIN1::addPrimitiveAssignFnsToMap, ExcELIN1::addClassAssignFnsToMap, ExcELIN1::debugName);
}

namespace CIMPP
{
	BaseClass* ExcELIN1_factory()
	{
		return new ExcELIN1;
	}
}
