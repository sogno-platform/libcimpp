/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydro1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GovHydro1::GovHydro1() {}
GovHydro1::~GovHydro1() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovHydro1.at", { CGMESProfile::DY, } },
	{ "cim:GovHydro1.dturb", { CGMESProfile::DY, } },
	{ "cim:GovHydro1.gmax", { CGMESProfile::DY, } },
	{ "cim:GovHydro1.gmin", { CGMESProfile::DY, } },
	{ "cim:GovHydro1.hdam", { CGMESProfile::DY, } },
	{ "cim:GovHydro1.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovHydro1.qnl", { CGMESProfile::DY, } },
	{ "cim:GovHydro1.rperm", { CGMESProfile::DY, } },
	{ "cim:GovHydro1.rtemp", { CGMESProfile::DY, } },
	{ "cim:GovHydro1.tf", { CGMESProfile::DY, } },
	{ "cim:GovHydro1.tg", { CGMESProfile::DY, } },
	{ "cim:GovHydro1.tr", { CGMESProfile::DY, } },
	{ "cim:GovHydro1.tw", { CGMESProfile::DY, } },
	{ "cim:GovHydro1.velm", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovHydro1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovHydro1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GovHydro1_at(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->at;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro1_dturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dturb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro1_gmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro1_gmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro1_hdam(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->hdam;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro1_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mwbase;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro1_qnl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qnl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro1_rperm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rperm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro1_rtemp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rtemp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro1_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro1_tg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro1_tr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro1_tw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro1_velm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->velm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovHydro1_at(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro1* element = dynamic_cast<const GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->at;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro1_dturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro1* element = dynamic_cast<const GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dturb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro1_gmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro1* element = dynamic_cast<const GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro1_gmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro1* element = dynamic_cast<const GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro1_hdam(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro1* element = dynamic_cast<const GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->hdam;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro1_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro1* element = dynamic_cast<const GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mwbase;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro1_qnl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro1* element = dynamic_cast<const GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qnl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro1_rperm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro1* element = dynamic_cast<const GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rperm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro1_rtemp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro1* element = dynamic_cast<const GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rtemp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro1_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro1* element = dynamic_cast<const GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydro1_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro1* element = dynamic_cast<const GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydro1_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro1* element = dynamic_cast<const GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro1_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro1* element = dynamic_cast<const GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro1_velm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro1* element = dynamic_cast<const GovHydro1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->velm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovHydro1::debugName[] = "GovHydro1";
const char* GovHydro1::debugString() const
{
	return GovHydro1::debugName;
}

void GovHydro1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GovHydro1", &GovHydro1_factory);
}

void GovHydro1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GovHydro1.at", &assign_GovHydro1_at);
	assign_map.emplace("cim:GovHydro1.dturb", &assign_GovHydro1_dturb);
	assign_map.emplace("cim:GovHydro1.gmax", &assign_GovHydro1_gmax);
	assign_map.emplace("cim:GovHydro1.gmin", &assign_GovHydro1_gmin);
	assign_map.emplace("cim:GovHydro1.hdam", &assign_GovHydro1_hdam);
	assign_map.emplace("cim:GovHydro1.mwbase", &assign_GovHydro1_mwbase);
	assign_map.emplace("cim:GovHydro1.qnl", &assign_GovHydro1_qnl);
	assign_map.emplace("cim:GovHydro1.rperm", &assign_GovHydro1_rperm);
	assign_map.emplace("cim:GovHydro1.rtemp", &assign_GovHydro1_rtemp);
	assign_map.emplace("cim:GovHydro1.tf", &assign_GovHydro1_tf);
	assign_map.emplace("cim:GovHydro1.tg", &assign_GovHydro1_tg);
	assign_map.emplace("cim:GovHydro1.tr", &assign_GovHydro1_tr);
	assign_map.emplace("cim:GovHydro1.tw", &assign_GovHydro1_tw);
	assign_map.emplace("cim:GovHydro1.velm", &assign_GovHydro1_velm);
}

void GovHydro1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydro1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovHydro1.at", &get_GovHydro1_at);
	get_map.emplace("cim:GovHydro1.dturb", &get_GovHydro1_dturb);
	get_map.emplace("cim:GovHydro1.gmax", &get_GovHydro1_gmax);
	get_map.emplace("cim:GovHydro1.gmin", &get_GovHydro1_gmin);
	get_map.emplace("cim:GovHydro1.hdam", &get_GovHydro1_hdam);
	get_map.emplace("cim:GovHydro1.mwbase", &get_GovHydro1_mwbase);
	get_map.emplace("cim:GovHydro1.qnl", &get_GovHydro1_qnl);
	get_map.emplace("cim:GovHydro1.rperm", &get_GovHydro1_rperm);
	get_map.emplace("cim:GovHydro1.rtemp", &get_GovHydro1_rtemp);
	get_map.emplace("cim:GovHydro1.tf", &get_GovHydro1_tf);
	get_map.emplace("cim:GovHydro1.tg", &get_GovHydro1_tg);
	get_map.emplace("cim:GovHydro1.tr", &get_GovHydro1_tr);
	get_map.emplace("cim:GovHydro1.tw", &get_GovHydro1_tw);
	get_map.emplace("cim:GovHydro1.velm", &get_GovHydro1_velm);
}

void GovHydro1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydro1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovHydro1::declare()
{
	return BaseClassDefiner(GovHydro1::addConstructToMap, GovHydro1::addPrimitiveAssignFnsToMap, GovHydro1::addClassAssignFnsToMap, GovHydro1::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydro1_factory()
	{
		return new GovHydro1;
	}
}
