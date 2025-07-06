/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnderexcLimX1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		UnderexcLimX1(),
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
		{ "UnderexcLimX1.k", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "UnderexcLimX1.kf2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "UnderexcLimX1.km", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "UnderexcLimX1.melmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "UnderexcLimX1.tf2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "UnderexcLimX1.tm", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

UnderexcLimX1::UnderexcLimX1() {}
UnderexcLimX1::~UnderexcLimX1() {}

const std::list<std::string>& UnderexcLimX1::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& UnderexcLimX1::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& UnderexcLimX1::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& UnderexcLimX1::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& UnderexcLimX1::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& UnderexcLimX1::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& UnderexcLimX1::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_UnderexcLimX1_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1);
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

bool assign_UnderexcLimX1_kf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimX1_km(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1);
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

bool assign_UnderexcLimX1_melmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->melmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimX1_tf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimX1_tm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_UnderexcLimX1_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX1* element = dynamic_cast<const UnderexcLimX1*>(BaseClass_ptr1);
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

bool get_UnderexcLimX1_kf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX1* element = dynamic_cast<const UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimX1_km(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX1* element = dynamic_cast<const UnderexcLimX1*>(BaseClass_ptr1);
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

bool get_UnderexcLimX1_melmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX1* element = dynamic_cast<const UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->melmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimX1_tf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX1* element = dynamic_cast<const UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimX1_tm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX1* element = dynamic_cast<const UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char UnderexcLimX1::debugName[] = "UnderexcLimX1";
const char* UnderexcLimX1::debugString() const
{
	return UnderexcLimX1::debugName;
}

void UnderexcLimX1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("UnderexcLimX1", &UnderexcLimX1_factory);
}

void UnderexcLimX1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("UnderexcLimX1.k", &assign_UnderexcLimX1_k);
	assign_map.emplace("UnderexcLimX1.kf2", &assign_UnderexcLimX1_kf2);
	assign_map.emplace("UnderexcLimX1.km", &assign_UnderexcLimX1_km);
	assign_map.emplace("UnderexcLimX1.melmax", &assign_UnderexcLimX1_melmax);
	assign_map.emplace("UnderexcLimX1.tf2", &assign_UnderexcLimX1_tf2);
	assign_map.emplace("UnderexcLimX1.tm", &assign_UnderexcLimX1_tm);
}

void UnderexcLimX1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void UnderexcLimX1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("UnderexcLimX1.k", &get_UnderexcLimX1_k);
	get_map.emplace("UnderexcLimX1.kf2", &get_UnderexcLimX1_kf2);
	get_map.emplace("UnderexcLimX1.km", &get_UnderexcLimX1_km);
	get_map.emplace("UnderexcLimX1.melmax", &get_UnderexcLimX1_melmax);
	get_map.emplace("UnderexcLimX1.tf2", &get_UnderexcLimX1_tf2);
	get_map.emplace("UnderexcLimX1.tm", &get_UnderexcLimX1_tm);
}

void UnderexcLimX1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void UnderexcLimX1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

bool UnderexcLimX1::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "UnderexcLimX1" &&
		dynamic_cast<UnderexcLimX1*>(otherObject) != nullptr;
}

const BaseClassDefiner UnderexcLimX1::declare()
{
	return BaseClassDefiner(UnderexcLimX1::addConstructToMap, UnderexcLimX1::addPrimitiveAssignFnsToMap, UnderexcLimX1::addClassAssignFnsToMap, UnderexcLimX1::debugName);
}

std::map<std::string, AttrDetails> UnderexcLimX1::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = UnderexcitationLimiterDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* UnderexcLimX1_factory()
	{
		return new UnderexcLimX1;
	}
}
