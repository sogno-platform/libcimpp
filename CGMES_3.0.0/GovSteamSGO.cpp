/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteamSGO.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovSteamSGO(),
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
		{ "GovSteamSGO.k1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamSGO.k2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamSGO.k3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamSGO.mwbase", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamSGO.pmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamSGO.pmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamSGO.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamSGO.t2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamSGO.t3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamSGO.t4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamSGO.t5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamSGO.t6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovSteamSGO::GovSteamSGO() {}
GovSteamSGO::~GovSteamSGO() {}

const std::list<std::string>& GovSteamSGO::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovSteamSGO::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovSteamSGO::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovSteamSGO::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovSteamSGO::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovSteamSGO::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovSteamSGO::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovSteamSGO_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamSGO_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_k3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamSGO_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamSGO_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool assign_GovSteamSGO_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamSGO_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamSGO_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamSGO_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

bool get_GovSteamSGO_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamSGO* element = dynamic_cast<const GovSteamSGO*>(BaseClass_ptr1);
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

const char GovSteamSGO::debugName[] = "GovSteamSGO";
const char* GovSteamSGO::debugString() const
{
	return GovSteamSGO::debugName;
}

void GovSteamSGO::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovSteamSGO", &GovSteamSGO_factory);
}

void GovSteamSGO::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovSteamSGO.k1", &assign_GovSteamSGO_k1);
	assign_map.emplace("GovSteamSGO.k2", &assign_GovSteamSGO_k2);
	assign_map.emplace("GovSteamSGO.k3", &assign_GovSteamSGO_k3);
	assign_map.emplace("GovSteamSGO.mwbase", &assign_GovSteamSGO_mwbase);
	assign_map.emplace("GovSteamSGO.pmax", &assign_GovSteamSGO_pmax);
	assign_map.emplace("GovSteamSGO.pmin", &assign_GovSteamSGO_pmin);
	assign_map.emplace("GovSteamSGO.t1", &assign_GovSteamSGO_t1);
	assign_map.emplace("GovSteamSGO.t2", &assign_GovSteamSGO_t2);
	assign_map.emplace("GovSteamSGO.t3", &assign_GovSteamSGO_t3);
	assign_map.emplace("GovSteamSGO.t4", &assign_GovSteamSGO_t4);
	assign_map.emplace("GovSteamSGO.t5", &assign_GovSteamSGO_t5);
	assign_map.emplace("GovSteamSGO.t6", &assign_GovSteamSGO_t6);
}

void GovSteamSGO::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteamSGO::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovSteamSGO.k1", &get_GovSteamSGO_k1);
	get_map.emplace("GovSteamSGO.k2", &get_GovSteamSGO_k2);
	get_map.emplace("GovSteamSGO.k3", &get_GovSteamSGO_k3);
	get_map.emplace("GovSteamSGO.mwbase", &get_GovSteamSGO_mwbase);
	get_map.emplace("GovSteamSGO.pmax", &get_GovSteamSGO_pmax);
	get_map.emplace("GovSteamSGO.pmin", &get_GovSteamSGO_pmin);
	get_map.emplace("GovSteamSGO.t1", &get_GovSteamSGO_t1);
	get_map.emplace("GovSteamSGO.t2", &get_GovSteamSGO_t2);
	get_map.emplace("GovSteamSGO.t3", &get_GovSteamSGO_t3);
	get_map.emplace("GovSteamSGO.t4", &get_GovSteamSGO_t4);
	get_map.emplace("GovSteamSGO.t5", &get_GovSteamSGO_t5);
	get_map.emplace("GovSteamSGO.t6", &get_GovSteamSGO_t6);
}

void GovSteamSGO::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteamSGO::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovSteamSGO::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovSteamSGO" &&
		dynamic_cast<GovSteamSGO*>(otherObject) != nullptr;
}

const BaseClassDefiner GovSteamSGO::declare()
{
	return BaseClassDefiner(GovSteamSGO::addConstructToMap, GovSteamSGO::addPrimitiveAssignFnsToMap, GovSteamSGO::addClassAssignFnsToMap, GovSteamSGO::debugName);
}

std::map<std::string, AttrDetails> GovSteamSGO::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovSteamSGO_factory()
	{
		return new GovSteamSGO;
	}
}
