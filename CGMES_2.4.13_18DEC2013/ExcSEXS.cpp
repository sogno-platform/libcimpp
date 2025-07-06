/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcSEXS.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcSEXS(),
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
		{ "ExcSEXS.efdmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSEXS.efdmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSEXS.emax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSEXS.emin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSEXS.k", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSEXS.kc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSEXS.tatb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSEXS.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSEXS.tc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSEXS.te", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcSEXS::ExcSEXS() {}
ExcSEXS::~ExcSEXS() {}

const std::list<std::string>& ExcSEXS::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcSEXS::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcSEXS::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcSEXS::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcSEXS::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcSEXS::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcSEXS::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcSEXS_efdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSEXS_efdmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSEXS_emax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
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

bool assign_ExcSEXS_emin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
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

bool assign_ExcSEXS_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSEXS_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSEXS_tatb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tatb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSEXS_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
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

bool assign_ExcSEXS_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
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

bool assign_ExcSEXS_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
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

bool get_ExcSEXS_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSEXS_efdmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSEXS_emax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
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

bool get_ExcSEXS_emin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
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

bool get_ExcSEXS_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSEXS_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSEXS_tatb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tatb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSEXS_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
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

bool get_ExcSEXS_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
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

bool get_ExcSEXS_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
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

const char ExcSEXS::debugName[] = "ExcSEXS";
const char* ExcSEXS::debugString() const
{
	return ExcSEXS::debugName;
}

void ExcSEXS::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcSEXS", &ExcSEXS_factory);
}

void ExcSEXS::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcSEXS.efdmax", &assign_ExcSEXS_efdmax);
	assign_map.emplace("ExcSEXS.efdmin", &assign_ExcSEXS_efdmin);
	assign_map.emplace("ExcSEXS.emax", &assign_ExcSEXS_emax);
	assign_map.emplace("ExcSEXS.emin", &assign_ExcSEXS_emin);
	assign_map.emplace("ExcSEXS.k", &assign_ExcSEXS_k);
	assign_map.emplace("ExcSEXS.kc", &assign_ExcSEXS_kc);
	assign_map.emplace("ExcSEXS.tatb", &assign_ExcSEXS_tatb);
	assign_map.emplace("ExcSEXS.tb", &assign_ExcSEXS_tb);
	assign_map.emplace("ExcSEXS.tc", &assign_ExcSEXS_tc);
	assign_map.emplace("ExcSEXS.te", &assign_ExcSEXS_te);
}

void ExcSEXS::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcSEXS::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcSEXS.efdmax", &get_ExcSEXS_efdmax);
	get_map.emplace("ExcSEXS.efdmin", &get_ExcSEXS_efdmin);
	get_map.emplace("ExcSEXS.emax", &get_ExcSEXS_emax);
	get_map.emplace("ExcSEXS.emin", &get_ExcSEXS_emin);
	get_map.emplace("ExcSEXS.k", &get_ExcSEXS_k);
	get_map.emplace("ExcSEXS.kc", &get_ExcSEXS_kc);
	get_map.emplace("ExcSEXS.tatb", &get_ExcSEXS_tatb);
	get_map.emplace("ExcSEXS.tb", &get_ExcSEXS_tb);
	get_map.emplace("ExcSEXS.tc", &get_ExcSEXS_tc);
	get_map.emplace("ExcSEXS.te", &get_ExcSEXS_te);
}

void ExcSEXS::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcSEXS::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcSEXS::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcSEXS" &&
		dynamic_cast<ExcSEXS*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcSEXS::declare()
{
	return BaseClassDefiner(ExcSEXS::addConstructToMap, ExcSEXS::addPrimitiveAssignFnsToMap, ExcSEXS::addClassAssignFnsToMap, ExcSEXS::debugName);
}

std::map<std::string, AttrDetails> ExcSEXS::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcSEXS_factory()
	{
		return new ExcSEXS;
	}
}
