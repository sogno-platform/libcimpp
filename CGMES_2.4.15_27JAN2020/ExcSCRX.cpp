/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcSCRX.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcSCRX(),
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
		{ "ExcSCRX.cswitch", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSCRX.emax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSCRX.emin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSCRX.k", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSCRX.rcrfd", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSCRX.tatb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSCRX.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcSCRX.te", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcSCRX::ExcSCRX() {}
ExcSCRX::~ExcSCRX() {}

const std::list<std::string>& ExcSCRX::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcSCRX::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcSCRX::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcSCRX::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcSCRX::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcSCRX::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcSCRX::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcSCRX_cswitch(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->cswitch;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSCRX_emax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1);
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

bool assign_ExcSCRX_emin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1);
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

bool assign_ExcSCRX_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1);
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

bool assign_ExcSCRX_rcrfd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rcrfd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSCRX_tatb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1);
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

bool assign_ExcSCRX_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1);
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

bool assign_ExcSCRX_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1);
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

bool get_ExcSCRX_cswitch(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->cswitch;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSCRX_emax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1);
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

bool get_ExcSCRX_emin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1);
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

bool get_ExcSCRX_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1);
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

bool get_ExcSCRX_rcrfd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rcrfd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSCRX_tatb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1);
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

bool get_ExcSCRX_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1);
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

bool get_ExcSCRX_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1);
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

const char ExcSCRX::debugName[] = "ExcSCRX";
const char* ExcSCRX::debugString() const
{
	return ExcSCRX::debugName;
}

void ExcSCRX::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcSCRX", &ExcSCRX_factory);
}

void ExcSCRX::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcSCRX.cswitch", &assign_ExcSCRX_cswitch);
	assign_map.emplace("ExcSCRX.emax", &assign_ExcSCRX_emax);
	assign_map.emplace("ExcSCRX.emin", &assign_ExcSCRX_emin);
	assign_map.emplace("ExcSCRX.k", &assign_ExcSCRX_k);
	assign_map.emplace("ExcSCRX.rcrfd", &assign_ExcSCRX_rcrfd);
	assign_map.emplace("ExcSCRX.tatb", &assign_ExcSCRX_tatb);
	assign_map.emplace("ExcSCRX.tb", &assign_ExcSCRX_tb);
	assign_map.emplace("ExcSCRX.te", &assign_ExcSCRX_te);
}

void ExcSCRX::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcSCRX::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcSCRX.cswitch", &get_ExcSCRX_cswitch);
	get_map.emplace("ExcSCRX.emax", &get_ExcSCRX_emax);
	get_map.emplace("ExcSCRX.emin", &get_ExcSCRX_emin);
	get_map.emplace("ExcSCRX.k", &get_ExcSCRX_k);
	get_map.emplace("ExcSCRX.rcrfd", &get_ExcSCRX_rcrfd);
	get_map.emplace("ExcSCRX.tatb", &get_ExcSCRX_tatb);
	get_map.emplace("ExcSCRX.tb", &get_ExcSCRX_tb);
	get_map.emplace("ExcSCRX.te", &get_ExcSCRX_te);
}

void ExcSCRX::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcSCRX::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcSCRX::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcSCRX" &&
		dynamic_cast<ExcSCRX*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcSCRX::declare()
{
	return BaseClassDefiner(ExcSCRX::addConstructToMap, ExcSCRX::addPrimitiveAssignFnsToMap, ExcSCRX::addClassAssignFnsToMap, ExcSCRX::debugName);
}

std::map<std::string, AttrDetails> ExcSCRX::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcSCRX_factory()
	{
		return new ExcSCRX;
	}
}
