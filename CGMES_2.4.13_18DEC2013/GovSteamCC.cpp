/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteamCC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovSteamCC(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "GovSteamCC.dhp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.dlp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.fhp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.flp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.mwbase", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.pmaxhp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.pmaxlp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.rhp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.rlp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.t1hp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.t1lp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.t3hp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.t3lp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.t4hp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.t4lp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.t5hp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamCC.t5lp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovSteamCC::GovSteamCC() {}
GovSteamCC::~GovSteamCC() {}

const std::list<std::string>& GovSteamCC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovSteamCC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovSteamCC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovSteamCC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovSteamCC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovSteamCC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovSteamCC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovSteamCC_dhp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dhp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_dlp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dlp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_fhp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fhp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_flp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->flp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
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

bool assign_GovSteamCC_pmaxhp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmaxhp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_pmaxlp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmaxlp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_rhp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rhp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_rlp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rlp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_t1hp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1hp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_t1lp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1lp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_t3hp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3hp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_t3lp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3lp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_t4hp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4hp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_t4lp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4lp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_t5hp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t5hp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamCC_t5lp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t5lp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovSteamCC_dhp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dhp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_dlp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dlp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_fhp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fhp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_flp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->flp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
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

bool get_GovSteamCC_pmaxhp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmaxhp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_pmaxlp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmaxlp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_rhp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rhp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_rlp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rlp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_t1hp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1hp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_t1lp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1lp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_t3hp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t3hp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_t3lp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t3lp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_t4hp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4hp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_t4lp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4lp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_t5hp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t5hp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamCC_t5lp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamCC* element = dynamic_cast<const GovSteamCC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t5lp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovSteamCC::debugName[] = "GovSteamCC";
const char* GovSteamCC::debugString() const
{
	return GovSteamCC::debugName;
}

void GovSteamCC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovSteamCC", &GovSteamCC_factory);
}

void GovSteamCC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovSteamCC.dhp", &assign_GovSteamCC_dhp);
	assign_map.emplace("GovSteamCC.dlp", &assign_GovSteamCC_dlp);
	assign_map.emplace("GovSteamCC.fhp", &assign_GovSteamCC_fhp);
	assign_map.emplace("GovSteamCC.flp", &assign_GovSteamCC_flp);
	assign_map.emplace("GovSteamCC.mwbase", &assign_GovSteamCC_mwbase);
	assign_map.emplace("GovSteamCC.pmaxhp", &assign_GovSteamCC_pmaxhp);
	assign_map.emplace("GovSteamCC.pmaxlp", &assign_GovSteamCC_pmaxlp);
	assign_map.emplace("GovSteamCC.rhp", &assign_GovSteamCC_rhp);
	assign_map.emplace("GovSteamCC.rlp", &assign_GovSteamCC_rlp);
	assign_map.emplace("GovSteamCC.t1hp", &assign_GovSteamCC_t1hp);
	assign_map.emplace("GovSteamCC.t1lp", &assign_GovSteamCC_t1lp);
	assign_map.emplace("GovSteamCC.t3hp", &assign_GovSteamCC_t3hp);
	assign_map.emplace("GovSteamCC.t3lp", &assign_GovSteamCC_t3lp);
	assign_map.emplace("GovSteamCC.t4hp", &assign_GovSteamCC_t4hp);
	assign_map.emplace("GovSteamCC.t4lp", &assign_GovSteamCC_t4lp);
	assign_map.emplace("GovSteamCC.t5hp", &assign_GovSteamCC_t5hp);
	assign_map.emplace("GovSteamCC.t5lp", &assign_GovSteamCC_t5lp);
}

void GovSteamCC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteamCC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovSteamCC.dhp", &get_GovSteamCC_dhp);
	get_map.emplace("GovSteamCC.dlp", &get_GovSteamCC_dlp);
	get_map.emplace("GovSteamCC.fhp", &get_GovSteamCC_fhp);
	get_map.emplace("GovSteamCC.flp", &get_GovSteamCC_flp);
	get_map.emplace("GovSteamCC.mwbase", &get_GovSteamCC_mwbase);
	get_map.emplace("GovSteamCC.pmaxhp", &get_GovSteamCC_pmaxhp);
	get_map.emplace("GovSteamCC.pmaxlp", &get_GovSteamCC_pmaxlp);
	get_map.emplace("GovSteamCC.rhp", &get_GovSteamCC_rhp);
	get_map.emplace("GovSteamCC.rlp", &get_GovSteamCC_rlp);
	get_map.emplace("GovSteamCC.t1hp", &get_GovSteamCC_t1hp);
	get_map.emplace("GovSteamCC.t1lp", &get_GovSteamCC_t1lp);
	get_map.emplace("GovSteamCC.t3hp", &get_GovSteamCC_t3hp);
	get_map.emplace("GovSteamCC.t3lp", &get_GovSteamCC_t3lp);
	get_map.emplace("GovSteamCC.t4hp", &get_GovSteamCC_t4hp);
	get_map.emplace("GovSteamCC.t4lp", &get_GovSteamCC_t4lp);
	get_map.emplace("GovSteamCC.t5hp", &get_GovSteamCC_t5hp);
	get_map.emplace("GovSteamCC.t5lp", &get_GovSteamCC_t5lp);
}

void GovSteamCC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteamCC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovSteamCC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovSteamCC" &&
		dynamic_cast<GovSteamCC*>(otherObject) != nullptr;
}

const BaseClassDefiner GovSteamCC::declare()
{
	return BaseClassDefiner(GovSteamCC::addConstructToMap, GovSteamCC::addPrimitiveAssignFnsToMap, GovSteamCC::addClassAssignFnsToMap, GovSteamCC::debugName);
}

std::map<std::string, AttrDetails> GovSteamCC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovSteamCC_factory()
	{
		return new GovSteamCC;
	}
}
