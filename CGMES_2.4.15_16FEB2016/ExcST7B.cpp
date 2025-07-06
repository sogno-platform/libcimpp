/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcST7B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcST7B(),
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
		{ "ExcST7B.kh", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.kia", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.kl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.kpa", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.oelin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.tc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.tf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.tg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.tia", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.ts", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.uelin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.vmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.vmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.vrmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST7B.vrmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcST7B::ExcST7B() {}
ExcST7B::~ExcST7B() {}

const std::list<std::string>& ExcST7B::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcST7B::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcST7B::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcST7B::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcST7B::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcST7B::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcST7B::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcST7B_kh(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kh;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_kia(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kia;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_kl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_kpa(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpa;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_oelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->oelin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
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

bool assign_ExcST7B_tg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
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

bool assign_ExcST7B_tia(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tia;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_ts(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ts;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_uelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uelin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_vmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_vmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST7B_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST7B* element = dynamic_cast<ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcST7B_kh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kh;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_kia(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kia;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_kl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_kpa(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpa;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_oelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->oelin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcST7B_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcST7B_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
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

bool get_ExcST7B_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
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

bool get_ExcST7B_tia(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tia;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_ts(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ts;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_uelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uelin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_vmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_vmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST7B_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcST7B_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST7B* element = dynamic_cast<const ExcST7B*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char ExcST7B::debugName[] = "ExcST7B";
const char* ExcST7B::debugString() const
{
	return ExcST7B::debugName;
}

void ExcST7B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcST7B", &ExcST7B_factory);
}

void ExcST7B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcST7B.kh", &assign_ExcST7B_kh);
	assign_map.emplace("ExcST7B.kia", &assign_ExcST7B_kia);
	assign_map.emplace("ExcST7B.kl", &assign_ExcST7B_kl);
	assign_map.emplace("ExcST7B.kpa", &assign_ExcST7B_kpa);
	assign_map.emplace("ExcST7B.oelin", &assign_ExcST7B_oelin);
	assign_map.emplace("ExcST7B.tb", &assign_ExcST7B_tb);
	assign_map.emplace("ExcST7B.tc", &assign_ExcST7B_tc);
	assign_map.emplace("ExcST7B.tf", &assign_ExcST7B_tf);
	assign_map.emplace("ExcST7B.tg", &assign_ExcST7B_tg);
	assign_map.emplace("ExcST7B.tia", &assign_ExcST7B_tia);
	assign_map.emplace("ExcST7B.ts", &assign_ExcST7B_ts);
	assign_map.emplace("ExcST7B.uelin", &assign_ExcST7B_uelin);
	assign_map.emplace("ExcST7B.vmax", &assign_ExcST7B_vmax);
	assign_map.emplace("ExcST7B.vmin", &assign_ExcST7B_vmin);
	assign_map.emplace("ExcST7B.vrmax", &assign_ExcST7B_vrmax);
	assign_map.emplace("ExcST7B.vrmin", &assign_ExcST7B_vrmin);
}

void ExcST7B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcST7B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcST7B.kh", &get_ExcST7B_kh);
	get_map.emplace("ExcST7B.kia", &get_ExcST7B_kia);
	get_map.emplace("ExcST7B.kl", &get_ExcST7B_kl);
	get_map.emplace("ExcST7B.kpa", &get_ExcST7B_kpa);
	get_map.emplace("ExcST7B.tb", &get_ExcST7B_tb);
	get_map.emplace("ExcST7B.tc", &get_ExcST7B_tc);
	get_map.emplace("ExcST7B.tf", &get_ExcST7B_tf);
	get_map.emplace("ExcST7B.tg", &get_ExcST7B_tg);
	get_map.emplace("ExcST7B.tia", &get_ExcST7B_tia);
	get_map.emplace("ExcST7B.ts", &get_ExcST7B_ts);
	get_map.emplace("ExcST7B.vmax", &get_ExcST7B_vmax);
	get_map.emplace("ExcST7B.vmin", &get_ExcST7B_vmin);
	get_map.emplace("ExcST7B.vrmax", &get_ExcST7B_vrmax);
	get_map.emplace("ExcST7B.vrmin", &get_ExcST7B_vrmin);
}

void ExcST7B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcST7B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("ExcST7B.oelin", &get_ExcST7B_oelin);
	get_map.emplace("ExcST7B.uelin", &get_ExcST7B_uelin);
}

bool ExcST7B::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcST7B" &&
		dynamic_cast<ExcST7B*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcST7B::declare()
{
	return BaseClassDefiner(ExcST7B::addConstructToMap, ExcST7B::addPrimitiveAssignFnsToMap, ExcST7B::addClassAssignFnsToMap, ExcST7B::debugName);
}

std::map<std::string, AttrDetails> ExcST7B::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcST7B_factory()
	{
		return new ExcST7B;
	}
}
