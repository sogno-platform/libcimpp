/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiscExcContIEEEDEC3A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DiscExcContIEEEDEC3A(),
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
		{ "DiscExcContIEEEDEC3A.tdr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC3A.vtmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

DiscExcContIEEEDEC3A::DiscExcContIEEEDEC3A() {}
DiscExcContIEEEDEC3A::~DiscExcContIEEEDEC3A() {}

const std::list<std::string>& DiscExcContIEEEDEC3A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DiscExcContIEEEDEC3A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DiscExcContIEEEDEC3A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DiscExcContIEEEDEC3A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DiscExcContIEEEDEC3A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DiscExcContIEEEDEC3A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DiscExcContIEEEDEC3A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DiscExcContIEEEDEC3A_tdr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC3A* element = dynamic_cast<DiscExcContIEEEDEC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tdr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC3A_vtmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC3A* element = dynamic_cast<DiscExcContIEEEDEC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vtmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_DiscExcContIEEEDEC3A_tdr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC3A* element = dynamic_cast<const DiscExcContIEEEDEC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tdr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC3A_vtmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC3A* element = dynamic_cast<const DiscExcContIEEEDEC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vtmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char DiscExcContIEEEDEC3A::debugName[] = "DiscExcContIEEEDEC3A";
const char* DiscExcContIEEEDEC3A::debugString() const
{
	return DiscExcContIEEEDEC3A::debugName;
}

void DiscExcContIEEEDEC3A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DiscExcContIEEEDEC3A", &DiscExcContIEEEDEC3A_factory);
}

void DiscExcContIEEEDEC3A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("DiscExcContIEEEDEC3A.tdr", &assign_DiscExcContIEEEDEC3A_tdr);
	assign_map.emplace("DiscExcContIEEEDEC3A.vtmin", &assign_DiscExcContIEEEDEC3A_vtmin);
}

void DiscExcContIEEEDEC3A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DiscExcContIEEEDEC3A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("DiscExcContIEEEDEC3A.tdr", &get_DiscExcContIEEEDEC3A_tdr);
	get_map.emplace("DiscExcContIEEEDEC3A.vtmin", &get_DiscExcContIEEEDEC3A_vtmin);
}

void DiscExcContIEEEDEC3A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addClassGetFnsToMap(get_map);
}

void DiscExcContIEEEDEC3A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addEnumGetFnsToMap(get_map);
}

bool DiscExcContIEEEDEC3A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DiscExcContIEEEDEC3A" &&
		dynamic_cast<DiscExcContIEEEDEC3A*>(otherObject) != nullptr;
}

const BaseClassDefiner DiscExcContIEEEDEC3A::declare()
{
	return BaseClassDefiner(DiscExcContIEEEDEC3A::addConstructToMap, DiscExcContIEEEDEC3A::addPrimitiveAssignFnsToMap, DiscExcContIEEEDEC3A::addClassAssignFnsToMap, DiscExcContIEEEDEC3A::debugName);
}

std::map<std::string, AttrDetails> DiscExcContIEEEDEC3A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DiscontinuousExcitationControlDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DiscExcContIEEEDEC3A_factory()
	{
		return new DiscExcContIEEEDEC3A;
	}
}
