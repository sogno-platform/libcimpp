/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydro1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovHydro1(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "GovHydro1.at", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydro1.dturb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydro1.gmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydro1.gmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydro1.hdam", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydro1.mwbase", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydro1.qnl", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydro1.rperm", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydro1.rtemp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydro1.tf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydro1.tg", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydro1.tr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydro1.tw", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydro1.velm", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovHydro1::GovHydro1() {}
GovHydro1::~GovHydro1() {}

const std::list<std::string>& GovHydro1::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovHydro1::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovHydro1::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovHydro1::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovHydro1::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovHydro1::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovHydro1::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("GovHydro1", &GovHydro1_factory);
}

void GovHydro1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovHydro1.at", &assign_GovHydro1_at);
	assign_map.emplace("GovHydro1.dturb", &assign_GovHydro1_dturb);
	assign_map.emplace("GovHydro1.gmax", &assign_GovHydro1_gmax);
	assign_map.emplace("GovHydro1.gmin", &assign_GovHydro1_gmin);
	assign_map.emplace("GovHydro1.hdam", &assign_GovHydro1_hdam);
	assign_map.emplace("GovHydro1.mwbase", &assign_GovHydro1_mwbase);
	assign_map.emplace("GovHydro1.qnl", &assign_GovHydro1_qnl);
	assign_map.emplace("GovHydro1.rperm", &assign_GovHydro1_rperm);
	assign_map.emplace("GovHydro1.rtemp", &assign_GovHydro1_rtemp);
	assign_map.emplace("GovHydro1.tf", &assign_GovHydro1_tf);
	assign_map.emplace("GovHydro1.tg", &assign_GovHydro1_tg);
	assign_map.emplace("GovHydro1.tr", &assign_GovHydro1_tr);
	assign_map.emplace("GovHydro1.tw", &assign_GovHydro1_tw);
	assign_map.emplace("GovHydro1.velm", &assign_GovHydro1_velm);
}

void GovHydro1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydro1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovHydro1.at", &get_GovHydro1_at);
	get_map.emplace("GovHydro1.dturb", &get_GovHydro1_dturb);
	get_map.emplace("GovHydro1.gmax", &get_GovHydro1_gmax);
	get_map.emplace("GovHydro1.gmin", &get_GovHydro1_gmin);
	get_map.emplace("GovHydro1.hdam", &get_GovHydro1_hdam);
	get_map.emplace("GovHydro1.mwbase", &get_GovHydro1_mwbase);
	get_map.emplace("GovHydro1.qnl", &get_GovHydro1_qnl);
	get_map.emplace("GovHydro1.rperm", &get_GovHydro1_rperm);
	get_map.emplace("GovHydro1.rtemp", &get_GovHydro1_rtemp);
	get_map.emplace("GovHydro1.tf", &get_GovHydro1_tf);
	get_map.emplace("GovHydro1.tg", &get_GovHydro1_tg);
	get_map.emplace("GovHydro1.tr", &get_GovHydro1_tr);
	get_map.emplace("GovHydro1.tw", &get_GovHydro1_tw);
	get_map.emplace("GovHydro1.velm", &get_GovHydro1_velm);
}

void GovHydro1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydro1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovHydro1::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovHydro1" &&
		dynamic_cast<GovHydro1*>(otherObject) != nullptr;
}

const BaseClassDefiner GovHydro1::declare()
{
	return BaseClassDefiner(GovHydro1::addConstructToMap, GovHydro1::addPrimitiveAssignFnsToMap, GovHydro1::addClassAssignFnsToMap, GovHydro1::debugName);
}

std::map<std::string, AttrDetails> GovHydro1::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovHydro1_factory()
	{
		return new GovHydro1;
	}
}
