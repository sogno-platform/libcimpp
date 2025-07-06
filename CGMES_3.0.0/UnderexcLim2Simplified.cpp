/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnderexcLim2Simplified.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		UnderexcLim2Simplified(),
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
		{ "UnderexcLim2Simplified.kui", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "UnderexcLim2Simplified.p0", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "UnderexcLim2Simplified.p1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "UnderexcLim2Simplified.q0", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "UnderexcLim2Simplified.q1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "UnderexcLim2Simplified.vuimax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "UnderexcLim2Simplified.vuimin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

UnderexcLim2Simplified::UnderexcLim2Simplified() {}
UnderexcLim2Simplified::~UnderexcLim2Simplified() {}

const std::list<std::string>& UnderexcLim2Simplified::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& UnderexcLim2Simplified::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& UnderexcLim2Simplified::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& UnderexcLim2Simplified::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& UnderexcLim2Simplified::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& UnderexcLim2Simplified::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& UnderexcLim2Simplified::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_UnderexcLim2Simplified_kui(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kui;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLim2Simplified_p0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLim2Simplified_p1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLim2Simplified_q0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLim2Simplified_q1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLim2Simplified_vuimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vuimax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLim2Simplified_vuimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLim2Simplified* element = dynamic_cast<UnderexcLim2Simplified*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vuimin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_UnderexcLim2Simplified_kui(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLim2Simplified* element = dynamic_cast<const UnderexcLim2Simplified*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kui;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLim2Simplified_p0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLim2Simplified* element = dynamic_cast<const UnderexcLim2Simplified*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLim2Simplified_p1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLim2Simplified* element = dynamic_cast<const UnderexcLim2Simplified*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLim2Simplified_q0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLim2Simplified* element = dynamic_cast<const UnderexcLim2Simplified*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLim2Simplified_q1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLim2Simplified* element = dynamic_cast<const UnderexcLim2Simplified*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLim2Simplified_vuimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLim2Simplified* element = dynamic_cast<const UnderexcLim2Simplified*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vuimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLim2Simplified_vuimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLim2Simplified* element = dynamic_cast<const UnderexcLim2Simplified*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vuimin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char UnderexcLim2Simplified::debugName[] = "UnderexcLim2Simplified";
const char* UnderexcLim2Simplified::debugString() const
{
	return UnderexcLim2Simplified::debugName;
}

void UnderexcLim2Simplified::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("UnderexcLim2Simplified", &UnderexcLim2Simplified_factory);
}

void UnderexcLim2Simplified::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("UnderexcLim2Simplified.kui", &assign_UnderexcLim2Simplified_kui);
	assign_map.emplace("UnderexcLim2Simplified.p0", &assign_UnderexcLim2Simplified_p0);
	assign_map.emplace("UnderexcLim2Simplified.p1", &assign_UnderexcLim2Simplified_p1);
	assign_map.emplace("UnderexcLim2Simplified.q0", &assign_UnderexcLim2Simplified_q0);
	assign_map.emplace("UnderexcLim2Simplified.q1", &assign_UnderexcLim2Simplified_q1);
	assign_map.emplace("UnderexcLim2Simplified.vuimax", &assign_UnderexcLim2Simplified_vuimax);
	assign_map.emplace("UnderexcLim2Simplified.vuimin", &assign_UnderexcLim2Simplified_vuimin);
}

void UnderexcLim2Simplified::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void UnderexcLim2Simplified::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("UnderexcLim2Simplified.kui", &get_UnderexcLim2Simplified_kui);
	get_map.emplace("UnderexcLim2Simplified.p0", &get_UnderexcLim2Simplified_p0);
	get_map.emplace("UnderexcLim2Simplified.p1", &get_UnderexcLim2Simplified_p1);
	get_map.emplace("UnderexcLim2Simplified.q0", &get_UnderexcLim2Simplified_q0);
	get_map.emplace("UnderexcLim2Simplified.q1", &get_UnderexcLim2Simplified_q1);
	get_map.emplace("UnderexcLim2Simplified.vuimax", &get_UnderexcLim2Simplified_vuimax);
	get_map.emplace("UnderexcLim2Simplified.vuimin", &get_UnderexcLim2Simplified_vuimin);
}

void UnderexcLim2Simplified::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void UnderexcLim2Simplified::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

bool UnderexcLim2Simplified::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "UnderexcLim2Simplified" &&
		dynamic_cast<UnderexcLim2Simplified*>(otherObject) != nullptr;
}

const BaseClassDefiner UnderexcLim2Simplified::declare()
{
	return BaseClassDefiner(UnderexcLim2Simplified::addConstructToMap, UnderexcLim2Simplified::addPrimitiveAssignFnsToMap, UnderexcLim2Simplified::addClassAssignFnsToMap, UnderexcLim2Simplified::debugName);
}

std::map<std::string, AttrDetails> UnderexcLim2Simplified::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = UnderexcitationLimiterDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* UnderexcLim2Simplified_factory()
	{
		return new UnderexcLim2Simplified;
	}
}
