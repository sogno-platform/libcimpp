/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnderexcLimX2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		UnderexcLimX2(),
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
		{ "UnderexcLimX2.kf2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "UnderexcLimX2.km", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "UnderexcLimX2.melmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "UnderexcLimX2.qo", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "UnderexcLimX2.r", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "UnderexcLimX2.tf2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "UnderexcLimX2.tm", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

UnderexcLimX2::UnderexcLimX2() {}
UnderexcLimX2::~UnderexcLimX2() {}

const std::list<std::string>& UnderexcLimX2::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& UnderexcLimX2::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& UnderexcLimX2::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& UnderexcLimX2::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& UnderexcLimX2::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& UnderexcLimX2::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& UnderexcLimX2::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_UnderexcLimX2_kf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1);
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

bool assign_UnderexcLimX2_km(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1);
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

bool assign_UnderexcLimX2_melmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1);
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

bool assign_UnderexcLimX2_qo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qo;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimX2_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimX2_tf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1);
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

bool assign_UnderexcLimX2_tm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1);
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

bool get_UnderexcLimX2_kf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX2* element = dynamic_cast<const UnderexcLimX2*>(BaseClass_ptr1);
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

bool get_UnderexcLimX2_km(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX2* element = dynamic_cast<const UnderexcLimX2*>(BaseClass_ptr1);
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

bool get_UnderexcLimX2_melmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX2* element = dynamic_cast<const UnderexcLimX2*>(BaseClass_ptr1);
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

bool get_UnderexcLimX2_qo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX2* element = dynamic_cast<const UnderexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimX2_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX2* element = dynamic_cast<const UnderexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimX2_tf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX2* element = dynamic_cast<const UnderexcLimX2*>(BaseClass_ptr1);
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

bool get_UnderexcLimX2_tm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX2* element = dynamic_cast<const UnderexcLimX2*>(BaseClass_ptr1);
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

const char UnderexcLimX2::debugName[] = "UnderexcLimX2";
const char* UnderexcLimX2::debugString() const
{
	return UnderexcLimX2::debugName;
}

void UnderexcLimX2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("UnderexcLimX2", &UnderexcLimX2_factory);
}

void UnderexcLimX2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("UnderexcLimX2.kf2", &assign_UnderexcLimX2_kf2);
	assign_map.emplace("UnderexcLimX2.km", &assign_UnderexcLimX2_km);
	assign_map.emplace("UnderexcLimX2.melmax", &assign_UnderexcLimX2_melmax);
	assign_map.emplace("UnderexcLimX2.qo", &assign_UnderexcLimX2_qo);
	assign_map.emplace("UnderexcLimX2.r", &assign_UnderexcLimX2_r);
	assign_map.emplace("UnderexcLimX2.tf2", &assign_UnderexcLimX2_tf2);
	assign_map.emplace("UnderexcLimX2.tm", &assign_UnderexcLimX2_tm);
}

void UnderexcLimX2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void UnderexcLimX2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("UnderexcLimX2.kf2", &get_UnderexcLimX2_kf2);
	get_map.emplace("UnderexcLimX2.km", &get_UnderexcLimX2_km);
	get_map.emplace("UnderexcLimX2.melmax", &get_UnderexcLimX2_melmax);
	get_map.emplace("UnderexcLimX2.qo", &get_UnderexcLimX2_qo);
	get_map.emplace("UnderexcLimX2.r", &get_UnderexcLimX2_r);
	get_map.emplace("UnderexcLimX2.tf2", &get_UnderexcLimX2_tf2);
	get_map.emplace("UnderexcLimX2.tm", &get_UnderexcLimX2_tm);
}

void UnderexcLimX2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void UnderexcLimX2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

bool UnderexcLimX2::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "UnderexcLimX2" &&
		dynamic_cast<UnderexcLimX2*>(otherObject) != nullptr;
}

const BaseClassDefiner UnderexcLimX2::declare()
{
	return BaseClassDefiner(UnderexcLimX2::addConstructToMap, UnderexcLimX2::addPrimitiveAssignFnsToMap, UnderexcLimX2::addClassAssignFnsToMap, UnderexcLimX2::debugName);
}

std::map<std::string, AttrDetails> UnderexcLimX2::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = UnderexcitationLimiterDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* UnderexcLimX2_factory()
	{
		return new UnderexcLimX2;
	}
}
