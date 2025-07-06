/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEST6B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcIEEEST6B(),
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
		{ "ExcIEEEST6B.ilr", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST6B.kci", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST6B.kff", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST6B.kg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST6B.kia", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST6B.klr", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST6B.km", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST6B.kpa", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST6B.oelin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST6B.tg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST6B.vamax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST6B.vamin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST6B.vrmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST6B.vrmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcIEEEST6B::ExcIEEEST6B() {}
ExcIEEEST6B::~ExcIEEEST6B() {}

const std::list<std::string>& ExcIEEEST6B::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcIEEEST6B::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcIEEEST6B::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcIEEEST6B::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcIEEEST6B::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcIEEEST6B::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcIEEEST6B::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcIEEEST6B_ilr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ilr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST6B_kci(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kci;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST6B_kff(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kff;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST6B_kg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST6B_kia(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST6B_klr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->klr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST6B_km(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->km;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST6B_kpa(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST6B_oelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST6B_tg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST6B_vamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vamax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST6B_vamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vamin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST6B_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST6B_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST6B* element = dynamic_cast<ExcIEEEST6B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST6B_ilr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ilr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST6B_kci(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kci;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST6B_kff(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kff;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST6B_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST6B_kia(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST6B_klr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->klr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST6B_km(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->km;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST6B_kpa(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST6B_oelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST6B_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST6B_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vamax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST6B_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vamin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST6B_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST6B_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST6B* element = dynamic_cast<const ExcIEEEST6B*>(BaseClass_ptr1);
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

const char ExcIEEEST6B::debugName[] = "ExcIEEEST6B";
const char* ExcIEEEST6B::debugString() const
{
	return ExcIEEEST6B::debugName;
}

void ExcIEEEST6B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcIEEEST6B", &ExcIEEEST6B_factory);
}

void ExcIEEEST6B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcIEEEST6B.ilr", &assign_ExcIEEEST6B_ilr);
	assign_map.emplace("ExcIEEEST6B.kci", &assign_ExcIEEEST6B_kci);
	assign_map.emplace("ExcIEEEST6B.kff", &assign_ExcIEEEST6B_kff);
	assign_map.emplace("ExcIEEEST6B.kg", &assign_ExcIEEEST6B_kg);
	assign_map.emplace("ExcIEEEST6B.kia", &assign_ExcIEEEST6B_kia);
	assign_map.emplace("ExcIEEEST6B.klr", &assign_ExcIEEEST6B_klr);
	assign_map.emplace("ExcIEEEST6B.km", &assign_ExcIEEEST6B_km);
	assign_map.emplace("ExcIEEEST6B.kpa", &assign_ExcIEEEST6B_kpa);
	assign_map.emplace("ExcIEEEST6B.oelin", &assign_ExcIEEEST6B_oelin);
	assign_map.emplace("ExcIEEEST6B.tg", &assign_ExcIEEEST6B_tg);
	assign_map.emplace("ExcIEEEST6B.vamax", &assign_ExcIEEEST6B_vamax);
	assign_map.emplace("ExcIEEEST6B.vamin", &assign_ExcIEEEST6B_vamin);
	assign_map.emplace("ExcIEEEST6B.vrmax", &assign_ExcIEEEST6B_vrmax);
	assign_map.emplace("ExcIEEEST6B.vrmin", &assign_ExcIEEEST6B_vrmin);
}

void ExcIEEEST6B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEST6B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEST6B.ilr", &get_ExcIEEEST6B_ilr);
	get_map.emplace("ExcIEEEST6B.kci", &get_ExcIEEEST6B_kci);
	get_map.emplace("ExcIEEEST6B.kff", &get_ExcIEEEST6B_kff);
	get_map.emplace("ExcIEEEST6B.kg", &get_ExcIEEEST6B_kg);
	get_map.emplace("ExcIEEEST6B.kia", &get_ExcIEEEST6B_kia);
	get_map.emplace("ExcIEEEST6B.klr", &get_ExcIEEEST6B_klr);
	get_map.emplace("ExcIEEEST6B.km", &get_ExcIEEEST6B_km);
	get_map.emplace("ExcIEEEST6B.kpa", &get_ExcIEEEST6B_kpa);
	get_map.emplace("ExcIEEEST6B.tg", &get_ExcIEEEST6B_tg);
	get_map.emplace("ExcIEEEST6B.vamax", &get_ExcIEEEST6B_vamax);
	get_map.emplace("ExcIEEEST6B.vamin", &get_ExcIEEEST6B_vamin);
	get_map.emplace("ExcIEEEST6B.vrmax", &get_ExcIEEEST6B_vrmax);
	get_map.emplace("ExcIEEEST6B.vrmin", &get_ExcIEEEST6B_vrmin);
}

void ExcIEEEST6B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEST6B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEST6B.oelin", &get_ExcIEEEST6B_oelin);
}

bool ExcIEEEST6B::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcIEEEST6B" &&
		dynamic_cast<ExcIEEEST6B*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcIEEEST6B::declare()
{
	return BaseClassDefiner(ExcIEEEST6B::addConstructToMap, ExcIEEEST6B::addPrimitiveAssignFnsToMap, ExcIEEEST6B::addClassAssignFnsToMap, ExcIEEEST6B::debugName);
}

std::map<std::string, AttrDetails> ExcIEEEST6B::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcIEEEST6B_factory()
	{
		return new ExcIEEEST6B;
	}
}
