/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OverexcLimIEEE.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		OverexcLimIEEE(),
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
		{ "OverexcLimIEEE.hyst", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "OverexcLimIEEE.ifdlim", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "OverexcLimIEEE.ifdmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "OverexcLimIEEE.itfpu", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "OverexcLimIEEE.kcd", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "OverexcLimIEEE.kramp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

OverexcLimIEEE::OverexcLimIEEE() {}
OverexcLimIEEE::~OverexcLimIEEE() {}

const std::list<std::string>& OverexcLimIEEE::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& OverexcLimIEEE::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& OverexcLimIEEE::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& OverexcLimIEEE::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& OverexcLimIEEE::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& OverexcLimIEEE::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& OverexcLimIEEE::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_OverexcLimIEEE_hyst(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->hyst;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimIEEE_ifdlim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ifdlim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimIEEE_ifdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ifdmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimIEEE_itfpu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->itfpu;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimIEEE_kcd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kcd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimIEEE_kramp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimIEEE* element = dynamic_cast<OverexcLimIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kramp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_OverexcLimIEEE_hyst(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimIEEE* element = dynamic_cast<const OverexcLimIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->hyst;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimIEEE_ifdlim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimIEEE* element = dynamic_cast<const OverexcLimIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ifdlim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimIEEE_ifdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimIEEE* element = dynamic_cast<const OverexcLimIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ifdmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimIEEE_itfpu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimIEEE* element = dynamic_cast<const OverexcLimIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->itfpu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimIEEE_kcd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimIEEE* element = dynamic_cast<const OverexcLimIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kcd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimIEEE_kramp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimIEEE* element = dynamic_cast<const OverexcLimIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kramp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char OverexcLimIEEE::debugName[] = "OverexcLimIEEE";
const char* OverexcLimIEEE::debugString() const
{
	return OverexcLimIEEE::debugName;
}

void OverexcLimIEEE::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("OverexcLimIEEE", &OverexcLimIEEE_factory);
}

void OverexcLimIEEE::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("OverexcLimIEEE.hyst", &assign_OverexcLimIEEE_hyst);
	assign_map.emplace("OverexcLimIEEE.ifdlim", &assign_OverexcLimIEEE_ifdlim);
	assign_map.emplace("OverexcLimIEEE.ifdmax", &assign_OverexcLimIEEE_ifdmax);
	assign_map.emplace("OverexcLimIEEE.itfpu", &assign_OverexcLimIEEE_itfpu);
	assign_map.emplace("OverexcLimIEEE.kcd", &assign_OverexcLimIEEE_kcd);
	assign_map.emplace("OverexcLimIEEE.kramp", &assign_OverexcLimIEEE_kramp);
}

void OverexcLimIEEE::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void OverexcLimIEEE::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("OverexcLimIEEE.hyst", &get_OverexcLimIEEE_hyst);
	get_map.emplace("OverexcLimIEEE.ifdlim", &get_OverexcLimIEEE_ifdlim);
	get_map.emplace("OverexcLimIEEE.ifdmax", &get_OverexcLimIEEE_ifdmax);
	get_map.emplace("OverexcLimIEEE.itfpu", &get_OverexcLimIEEE_itfpu);
	get_map.emplace("OverexcLimIEEE.kcd", &get_OverexcLimIEEE_kcd);
	get_map.emplace("OverexcLimIEEE.kramp", &get_OverexcLimIEEE_kramp);
}

void OverexcLimIEEE::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void OverexcLimIEEE::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

bool OverexcLimIEEE::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "OverexcLimIEEE" &&
		dynamic_cast<OverexcLimIEEE*>(otherObject) != nullptr;
}

const BaseClassDefiner OverexcLimIEEE::declare()
{
	return BaseClassDefiner(OverexcLimIEEE::addConstructToMap, OverexcLimIEEE::addPrimitiveAssignFnsToMap, OverexcLimIEEE::addClassAssignFnsToMap, OverexcLimIEEE::debugName);
}

std::map<std::string, AttrDetails> OverexcLimIEEE::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = OverexcitationLimiterDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* OverexcLimIEEE_factory()
	{
		return new OverexcLimIEEE;
	}
}
