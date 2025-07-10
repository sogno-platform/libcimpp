/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiscExcContIEEEDEC2A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DiscExcContIEEEDEC2A(),
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
		{ "DiscExcContIEEEDEC2A.td1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC2A.td2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC2A.vdmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC2A.vdmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC2A.vk", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

DiscExcContIEEEDEC2A::DiscExcContIEEEDEC2A() {}
DiscExcContIEEEDEC2A::~DiscExcContIEEEDEC2A() {}

const std::list<std::string>& DiscExcContIEEEDEC2A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DiscExcContIEEEDEC2A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DiscExcContIEEEDEC2A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DiscExcContIEEEDEC2A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DiscExcContIEEEDEC2A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DiscExcContIEEEDEC2A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DiscExcContIEEEDEC2A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DiscExcContIEEEDEC2A_td1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->td1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC2A_td2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->td2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC2A_vdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vdmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC2A_vdmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vdmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC2A_vk(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC2A* element = dynamic_cast<DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vk;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_DiscExcContIEEEDEC2A_td1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC2A* element = dynamic_cast<const DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->td1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC2A_td2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC2A* element = dynamic_cast<const DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->td2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC2A_vdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC2A* element = dynamic_cast<const DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vdmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC2A_vdmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC2A* element = dynamic_cast<const DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vdmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC2A_vk(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC2A* element = dynamic_cast<const DiscExcContIEEEDEC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vk;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char DiscExcContIEEEDEC2A::debugName[] = "DiscExcContIEEEDEC2A";
const char* DiscExcContIEEEDEC2A::debugString() const
{
	return DiscExcContIEEEDEC2A::debugName;
}

void DiscExcContIEEEDEC2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DiscExcContIEEEDEC2A", &DiscExcContIEEEDEC2A_factory);
}

void DiscExcContIEEEDEC2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("DiscExcContIEEEDEC2A.td1", &assign_DiscExcContIEEEDEC2A_td1);
	assign_map.emplace("DiscExcContIEEEDEC2A.td2", &assign_DiscExcContIEEEDEC2A_td2);
	assign_map.emplace("DiscExcContIEEEDEC2A.vdmax", &assign_DiscExcContIEEEDEC2A_vdmax);
	assign_map.emplace("DiscExcContIEEEDEC2A.vdmin", &assign_DiscExcContIEEEDEC2A_vdmin);
	assign_map.emplace("DiscExcContIEEEDEC2A.vk", &assign_DiscExcContIEEEDEC2A_vk);
}

void DiscExcContIEEEDEC2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DiscExcContIEEEDEC2A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("DiscExcContIEEEDEC2A.td1", &get_DiscExcContIEEEDEC2A_td1);
	get_map.emplace("DiscExcContIEEEDEC2A.td2", &get_DiscExcContIEEEDEC2A_td2);
	get_map.emplace("DiscExcContIEEEDEC2A.vdmax", &get_DiscExcContIEEEDEC2A_vdmax);
	get_map.emplace("DiscExcContIEEEDEC2A.vdmin", &get_DiscExcContIEEEDEC2A_vdmin);
	get_map.emplace("DiscExcContIEEEDEC2A.vk", &get_DiscExcContIEEEDEC2A_vk);
}

void DiscExcContIEEEDEC2A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addClassGetFnsToMap(get_map);
}

void DiscExcContIEEEDEC2A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addEnumGetFnsToMap(get_map);
}

bool DiscExcContIEEEDEC2A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DiscExcContIEEEDEC2A" &&
		dynamic_cast<DiscExcContIEEEDEC2A*>(otherObject) != nullptr;
}

const BaseClassDefiner DiscExcContIEEEDEC2A::declare()
{
	return BaseClassDefiner(DiscExcContIEEEDEC2A::addConstructToMap, DiscExcContIEEEDEC2A::addPrimitiveAssignFnsToMap, DiscExcContIEEEDEC2A::addClassAssignFnsToMap, DiscExcContIEEEDEC2A::debugName);
}

std::map<std::string, AttrDetails> DiscExcContIEEEDEC2A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DiscontinuousExcitationControlDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DiscExcContIEEEDEC2A_factory()
	{
		return new DiscExcContIEEEDEC2A;
	}
}
