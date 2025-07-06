/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteamBB.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovSteamBB(),
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
		{ "GovSteamBB.fcut", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.k2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.k3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.kd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.kg", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.kls", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.kp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.ks", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.peflag", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.pmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.pmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.t4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.t5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.t6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.td", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamBB.tn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovSteamBB::GovSteamBB() {}
GovSteamBB::~GovSteamBB() {}

const std::list<std::string>& GovSteamBB::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovSteamBB::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovSteamBB::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovSteamBB::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovSteamBB::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovSteamBB::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovSteamBB::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovSteamBB_fcut(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fcut;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_k3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_kg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_kls(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kls;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_peflag(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->peflag;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_td(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->td;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamBB_tn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamBB* element = dynamic_cast<GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovSteamBB_fcut(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fcut;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamBB_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamBB_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamBB_kls(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kls;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamBB_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamBB_peflag(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->peflag;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamBB_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamBB_tn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamBB* element = dynamic_cast<const GovSteamBB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovSteamBB::debugName[] = "GovSteamBB";
const char* GovSteamBB::debugString() const
{
	return GovSteamBB::debugName;
}

void GovSteamBB::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovSteamBB", &GovSteamBB_factory);
}

void GovSteamBB::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovSteamBB.fcut", &assign_GovSteamBB_fcut);
	assign_map.emplace("GovSteamBB.k2", &assign_GovSteamBB_k2);
	assign_map.emplace("GovSteamBB.k3", &assign_GovSteamBB_k3);
	assign_map.emplace("GovSteamBB.kd", &assign_GovSteamBB_kd);
	assign_map.emplace("GovSteamBB.kg", &assign_GovSteamBB_kg);
	assign_map.emplace("GovSteamBB.kls", &assign_GovSteamBB_kls);
	assign_map.emplace("GovSteamBB.kp", &assign_GovSteamBB_kp);
	assign_map.emplace("GovSteamBB.ks", &assign_GovSteamBB_ks);
	assign_map.emplace("GovSteamBB.peflag", &assign_GovSteamBB_peflag);
	assign_map.emplace("GovSteamBB.pmax", &assign_GovSteamBB_pmax);
	assign_map.emplace("GovSteamBB.pmin", &assign_GovSteamBB_pmin);
	assign_map.emplace("GovSteamBB.t1", &assign_GovSteamBB_t1);
	assign_map.emplace("GovSteamBB.t4", &assign_GovSteamBB_t4);
	assign_map.emplace("GovSteamBB.t5", &assign_GovSteamBB_t5);
	assign_map.emplace("GovSteamBB.t6", &assign_GovSteamBB_t6);
	assign_map.emplace("GovSteamBB.td", &assign_GovSteamBB_td);
	assign_map.emplace("GovSteamBB.tn", &assign_GovSteamBB_tn);
}

void GovSteamBB::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteamBB::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovSteamBB.fcut", &get_GovSteamBB_fcut);
	get_map.emplace("GovSteamBB.k2", &get_GovSteamBB_k2);
	get_map.emplace("GovSteamBB.k3", &get_GovSteamBB_k3);
	get_map.emplace("GovSteamBB.kd", &get_GovSteamBB_kd);
	get_map.emplace("GovSteamBB.kg", &get_GovSteamBB_kg);
	get_map.emplace("GovSteamBB.kls", &get_GovSteamBB_kls);
	get_map.emplace("GovSteamBB.kp", &get_GovSteamBB_kp);
	get_map.emplace("GovSteamBB.ks", &get_GovSteamBB_ks);
	get_map.emplace("GovSteamBB.peflag", &get_GovSteamBB_peflag);
	get_map.emplace("GovSteamBB.pmax", &get_GovSteamBB_pmax);
	get_map.emplace("GovSteamBB.pmin", &get_GovSteamBB_pmin);
	get_map.emplace("GovSteamBB.t1", &get_GovSteamBB_t1);
	get_map.emplace("GovSteamBB.t4", &get_GovSteamBB_t4);
	get_map.emplace("GovSteamBB.t5", &get_GovSteamBB_t5);
	get_map.emplace("GovSteamBB.t6", &get_GovSteamBB_t6);
	get_map.emplace("GovSteamBB.td", &get_GovSteamBB_td);
	get_map.emplace("GovSteamBB.tn", &get_GovSteamBB_tn);
}

void GovSteamBB::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteamBB::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovSteamBB::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovSteamBB" &&
		dynamic_cast<GovSteamBB*>(otherObject) != nullptr;
}

const BaseClassDefiner GovSteamBB::declare()
{
	return BaseClassDefiner(GovSteamBB::addConstructToMap, GovSteamBB::addPrimitiveAssignFnsToMap, GovSteamBB::addClassAssignFnsToMap, GovSteamBB::debugName);
}

std::map<std::string, AttrDetails> GovSteamBB::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovSteamBB_factory()
	{
		return new GovSteamBB;
	}
}
