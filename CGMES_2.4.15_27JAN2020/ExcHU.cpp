/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcHU.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcHU(),
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
		{ "ExcHU.ae", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcHU.ai", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcHU.atr", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcHU.emax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcHU.emin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcHU.imax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcHU.imin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcHU.ke", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcHU.ki", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcHU.te", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcHU.ti", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcHU.tr", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcHU::ExcHU() {}
ExcHU::~ExcHU() {}

const std::list<std::string>& ExcHU::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcHU::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcHU::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcHU::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcHU::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcHU::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcHU::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcHU_ae(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ae;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcHU_ai(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ai;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcHU_atr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->atr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcHU_emax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->emax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcHU_emin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->emin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcHU_imax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->imax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcHU_imin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->imin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcHU_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ke;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcHU_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcHU_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->te;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcHU_ti(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcHU_tr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1);
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

bool get_ExcHU_ae(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ae;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_ai(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ai;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_atr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->atr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_emax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->emax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_emin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->emin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_imax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->imax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_imin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->imin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ke;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->te;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_ti(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1);
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

const char ExcHU::debugName[] = "ExcHU";
const char* ExcHU::debugString() const
{
	return ExcHU::debugName;
}

void ExcHU::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcHU", &ExcHU_factory);
}

void ExcHU::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcHU.ae", &assign_ExcHU_ae);
	assign_map.emplace("ExcHU.ai", &assign_ExcHU_ai);
	assign_map.emplace("ExcHU.atr", &assign_ExcHU_atr);
	assign_map.emplace("ExcHU.emax", &assign_ExcHU_emax);
	assign_map.emplace("ExcHU.emin", &assign_ExcHU_emin);
	assign_map.emplace("ExcHU.imax", &assign_ExcHU_imax);
	assign_map.emplace("ExcHU.imin", &assign_ExcHU_imin);
	assign_map.emplace("ExcHU.ke", &assign_ExcHU_ke);
	assign_map.emplace("ExcHU.ki", &assign_ExcHU_ki);
	assign_map.emplace("ExcHU.te", &assign_ExcHU_te);
	assign_map.emplace("ExcHU.ti", &assign_ExcHU_ti);
	assign_map.emplace("ExcHU.tr", &assign_ExcHU_tr);
}

void ExcHU::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcHU::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcHU.ae", &get_ExcHU_ae);
	get_map.emplace("ExcHU.ai", &get_ExcHU_ai);
	get_map.emplace("ExcHU.atr", &get_ExcHU_atr);
	get_map.emplace("ExcHU.emax", &get_ExcHU_emax);
	get_map.emplace("ExcHU.emin", &get_ExcHU_emin);
	get_map.emplace("ExcHU.imax", &get_ExcHU_imax);
	get_map.emplace("ExcHU.imin", &get_ExcHU_imin);
	get_map.emplace("ExcHU.ke", &get_ExcHU_ke);
	get_map.emplace("ExcHU.ki", &get_ExcHU_ki);
	get_map.emplace("ExcHU.te", &get_ExcHU_te);
	get_map.emplace("ExcHU.ti", &get_ExcHU_ti);
	get_map.emplace("ExcHU.tr", &get_ExcHU_tr);
}

void ExcHU::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcHU::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcHU::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcHU" &&
		dynamic_cast<ExcHU*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcHU::declare()
{
	return BaseClassDefiner(ExcHU::addConstructToMap, ExcHU::addPrimitiveAssignFnsToMap, ExcHU::addClassAssignFnsToMap, ExcHU::debugName);
}

std::map<std::string, AttrDetails> ExcHU::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcHU_factory()
	{
		return new ExcHU;
	}
}
