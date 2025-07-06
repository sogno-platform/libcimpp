/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcELIN1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcELIN1(),
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
		{ "ExcELIN1.dpnf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN1.efmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN1.efmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN1.ks1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN1.ks2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN1.smax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN1.tfi", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN1.tnu", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN1.ts1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN1.ts2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN1.tsw", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN1.vpi", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN1.vpnf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN1.vpu", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN1.xe", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcELIN1::ExcELIN1() {}
ExcELIN1::~ExcELIN1() {}

const std::list<std::string>& ExcELIN1::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcELIN1::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcELIN1::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcELIN1::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcELIN1::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcELIN1::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcELIN1::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcELIN1_dpnf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dpnf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN1_efmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN1_efmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN1_ks1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN1_ks2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN1_smax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->smax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN1_tfi(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tfi;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN1_tnu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tnu;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN1_ts1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ts1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN1_ts2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ts2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN1_tsw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tsw;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN1_vpi(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vpi;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN1_vpnf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vpnf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN1_vpu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vpu;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN1_xe(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN1* element = dynamic_cast<ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xe;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcELIN1_dpnf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ExcELIN1* element = dynamic_cast<const ExcELIN1*>(BaseClass_ptr1);
	if (element != nullptr)
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
	factory_map.emplace("ExcELIN1", &ExcELIN1_factory);
}

void ExcELIN1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcELIN1.dpnf", &assign_ExcELIN1_dpnf);
	assign_map.emplace("ExcELIN1.efmax", &assign_ExcELIN1_efmax);
	assign_map.emplace("ExcELIN1.efmin", &assign_ExcELIN1_efmin);
	assign_map.emplace("ExcELIN1.ks1", &assign_ExcELIN1_ks1);
	assign_map.emplace("ExcELIN1.ks2", &assign_ExcELIN1_ks2);
	assign_map.emplace("ExcELIN1.smax", &assign_ExcELIN1_smax);
	assign_map.emplace("ExcELIN1.tfi", &assign_ExcELIN1_tfi);
	assign_map.emplace("ExcELIN1.tnu", &assign_ExcELIN1_tnu);
	assign_map.emplace("ExcELIN1.ts1", &assign_ExcELIN1_ts1);
	assign_map.emplace("ExcELIN1.ts2", &assign_ExcELIN1_ts2);
	assign_map.emplace("ExcELIN1.tsw", &assign_ExcELIN1_tsw);
	assign_map.emplace("ExcELIN1.vpi", &assign_ExcELIN1_vpi);
	assign_map.emplace("ExcELIN1.vpnf", &assign_ExcELIN1_vpnf);
	assign_map.emplace("ExcELIN1.vpu", &assign_ExcELIN1_vpu);
	assign_map.emplace("ExcELIN1.xe", &assign_ExcELIN1_xe);
}

void ExcELIN1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcELIN1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcELIN1.dpnf", &get_ExcELIN1_dpnf);
	get_map.emplace("ExcELIN1.efmax", &get_ExcELIN1_efmax);
	get_map.emplace("ExcELIN1.efmin", &get_ExcELIN1_efmin);
	get_map.emplace("ExcELIN1.ks1", &get_ExcELIN1_ks1);
	get_map.emplace("ExcELIN1.ks2", &get_ExcELIN1_ks2);
	get_map.emplace("ExcELIN1.smax", &get_ExcELIN1_smax);
	get_map.emplace("ExcELIN1.tfi", &get_ExcELIN1_tfi);
	get_map.emplace("ExcELIN1.tnu", &get_ExcELIN1_tnu);
	get_map.emplace("ExcELIN1.ts1", &get_ExcELIN1_ts1);
	get_map.emplace("ExcELIN1.ts2", &get_ExcELIN1_ts2);
	get_map.emplace("ExcELIN1.tsw", &get_ExcELIN1_tsw);
	get_map.emplace("ExcELIN1.vpi", &get_ExcELIN1_vpi);
	get_map.emplace("ExcELIN1.vpnf", &get_ExcELIN1_vpnf);
	get_map.emplace("ExcELIN1.vpu", &get_ExcELIN1_vpu);
	get_map.emplace("ExcELIN1.xe", &get_ExcELIN1_xe);
}

void ExcELIN1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcELIN1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcELIN1::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcELIN1" &&
		dynamic_cast<ExcELIN1*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcELIN1::declare()
{
	return BaseClassDefiner(ExcELIN1::addConstructToMap, ExcELIN1::addPrimitiveAssignFnsToMap, ExcELIN1::addClassAssignFnsToMap, ExcELIN1::debugName);
}

std::map<std::string, AttrDetails> ExcELIN1::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcELIN1_factory()
	{
		return new ExcELIN1;
	}
}
