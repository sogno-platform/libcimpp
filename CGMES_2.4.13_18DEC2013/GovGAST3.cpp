/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovGAST3.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Temperature.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Temperature.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Temperature.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

GovGAST3::GovGAST3() {};
GovGAST3::~GovGAST3() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovGAST3.bca", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.bp", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.dtc", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.ka", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.kac", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.kca", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.ksi", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.ky", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.mnef", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.mxef", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.rcmn", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.rcmx", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.tac", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.tc", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.td", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.tfen", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.tg", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.tsi", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.tt", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.ttc", { CGMESProfile::DY, } },
	{ "cim:GovGAST3.ty", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovGAST3::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovGAST3::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_GovGAST3_bca(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->bca;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_bp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->bp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_dtc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->dtc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_kac(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->kac;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_kca(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->kca;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_ksi(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->ksi;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_ky(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->ky;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_mnef(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->mnef;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_mxef(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->mxef;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_rcmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->rcmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_rcmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->rcmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_tac(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->tac;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->td;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_tfen(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->tfen;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->tg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_tsi(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->tsi;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_tt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->tt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_ttc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->ttc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST3_ty(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1))
	{
		buffer >> element->ty;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_GovGAST3_bca(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->bca;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_bp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->bp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_dtc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->dtc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
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

bool get_GovGAST3_kac(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->kac;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_kca(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->kca;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_ksi(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->ksi;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_ky(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->ky;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_mnef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->mnef;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_mxef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->mxef;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_rcmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->rcmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_rcmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->rcmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_tac(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->tac;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
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

bool get_GovGAST3_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
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

bool get_GovGAST3_tfen(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->tfen;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->tg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_tsi(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->tsi;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_tt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->tt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_ttc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->ttc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_ty(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1))
	{
		buffer << element->ty;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char GovGAST3::debugName[] = "GovGAST3";
const char* GovGAST3::debugString() const
{
	return GovGAST3::debugName;
}

void GovGAST3::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovGAST3"), &GovGAST3_factory));
}

void GovGAST3::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.bca"), &assign_GovGAST3_bca));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.bp"), &assign_GovGAST3_bp));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.dtc"), &assign_GovGAST3_dtc));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.ka"), &assign_GovGAST3_ka));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.kac"), &assign_GovGAST3_kac));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.kca"), &assign_GovGAST3_kca));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.ksi"), &assign_GovGAST3_ksi));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.ky"), &assign_GovGAST3_ky));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.mnef"), &assign_GovGAST3_mnef));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.mxef"), &assign_GovGAST3_mxef));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.rcmn"), &assign_GovGAST3_rcmn));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.rcmx"), &assign_GovGAST3_rcmx));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.tac"), &assign_GovGAST3_tac));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.tc"), &assign_GovGAST3_tc));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.td"), &assign_GovGAST3_td));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.tfen"), &assign_GovGAST3_tfen));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.tg"), &assign_GovGAST3_tg));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.tsi"), &assign_GovGAST3_tsi));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.tt"), &assign_GovGAST3_tt));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.ttc"), &assign_GovGAST3_ttc));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST3.ty"), &assign_GovGAST3_ty));
}

void GovGAST3::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovGAST3::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovGAST3.bca", &get_GovGAST3_bca);
	get_map.emplace("cim:GovGAST3.bp", &get_GovGAST3_bp);
	get_map.emplace("cim:GovGAST3.dtc", &get_GovGAST3_dtc);
	get_map.emplace("cim:GovGAST3.ka", &get_GovGAST3_ka);
	get_map.emplace("cim:GovGAST3.kac", &get_GovGAST3_kac);
	get_map.emplace("cim:GovGAST3.kca", &get_GovGAST3_kca);
	get_map.emplace("cim:GovGAST3.ksi", &get_GovGAST3_ksi);
	get_map.emplace("cim:GovGAST3.ky", &get_GovGAST3_ky);
	get_map.emplace("cim:GovGAST3.mnef", &get_GovGAST3_mnef);
	get_map.emplace("cim:GovGAST3.mxef", &get_GovGAST3_mxef);
	get_map.emplace("cim:GovGAST3.rcmn", &get_GovGAST3_rcmn);
	get_map.emplace("cim:GovGAST3.rcmx", &get_GovGAST3_rcmx);
	get_map.emplace("cim:GovGAST3.tac", &get_GovGAST3_tac);
	get_map.emplace("cim:GovGAST3.tc", &get_GovGAST3_tc);
	get_map.emplace("cim:GovGAST3.td", &get_GovGAST3_td);
	get_map.emplace("cim:GovGAST3.tfen", &get_GovGAST3_tfen);
	get_map.emplace("cim:GovGAST3.tg", &get_GovGAST3_tg);
	get_map.emplace("cim:GovGAST3.tsi", &get_GovGAST3_tsi);
	get_map.emplace("cim:GovGAST3.tt", &get_GovGAST3_tt);
	get_map.emplace("cim:GovGAST3.ttc", &get_GovGAST3_ttc);
	get_map.emplace("cim:GovGAST3.ty", &get_GovGAST3_ty);
}

void GovGAST3::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovGAST3::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovGAST3::declare()
{
	return BaseClassDefiner(GovGAST3::addConstructToMap, GovGAST3::addPrimitiveAssignFnsToMap, GovGAST3::addClassAssignFnsToMap, GovGAST3::debugName);
}

namespace CIMPP
{
	BaseClass* GovGAST3_factory()
	{
		return new GovGAST3;
	}
}
