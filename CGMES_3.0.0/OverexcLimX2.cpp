/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OverexcLimX2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		OverexcLimX2(),
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
		{ "OverexcLimX2.efd1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "OverexcLimX2.efd2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "OverexcLimX2.efd3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "OverexcLimX2.efddes", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "OverexcLimX2.efdrated", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "OverexcLimX2.kmx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "OverexcLimX2.m", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "OverexcLimX2.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "OverexcLimX2.t2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "OverexcLimX2.t3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "OverexcLimX2.vlow", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

OverexcLimX2::OverexcLimX2() {}
OverexcLimX2::~OverexcLimX2() {}

const std::list<std::string>& OverexcLimX2::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& OverexcLimX2::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& OverexcLimX2::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& OverexcLimX2::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& OverexcLimX2::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& OverexcLimX2::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& OverexcLimX2::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_OverexcLimX2_efd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efd1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimX2_efd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efd2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimX2_efd3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efd3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimX2_efddes(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efddes;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimX2_efdrated(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdrated;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimX2_kmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimX2_m(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->m;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimX2_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimX2_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimX2_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OverexcLimX2_vlow(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vlow;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_OverexcLimX2_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efd1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efd2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_efd3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efd3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_efddes(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efddes;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_efdrated(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdrated;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_kmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_m(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->m;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX2_vlow(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX2* element = dynamic_cast<const OverexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vlow;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char OverexcLimX2::debugName[] = "OverexcLimX2";
const char* OverexcLimX2::debugString() const
{
	return OverexcLimX2::debugName;
}

void OverexcLimX2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("OverexcLimX2", &OverexcLimX2_factory);
}

void OverexcLimX2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("OverexcLimX2.efd1", &assign_OverexcLimX2_efd1);
	assign_map.emplace("OverexcLimX2.efd2", &assign_OverexcLimX2_efd2);
	assign_map.emplace("OverexcLimX2.efd3", &assign_OverexcLimX2_efd3);
	assign_map.emplace("OverexcLimX2.efddes", &assign_OverexcLimX2_efddes);
	assign_map.emplace("OverexcLimX2.efdrated", &assign_OverexcLimX2_efdrated);
	assign_map.emplace("OverexcLimX2.kmx", &assign_OverexcLimX2_kmx);
	assign_map.emplace("OverexcLimX2.m", &assign_OverexcLimX2_m);
	assign_map.emplace("OverexcLimX2.t1", &assign_OverexcLimX2_t1);
	assign_map.emplace("OverexcLimX2.t2", &assign_OverexcLimX2_t2);
	assign_map.emplace("OverexcLimX2.t3", &assign_OverexcLimX2_t3);
	assign_map.emplace("OverexcLimX2.vlow", &assign_OverexcLimX2_vlow);
}

void OverexcLimX2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void OverexcLimX2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("OverexcLimX2.efd1", &get_OverexcLimX2_efd1);
	get_map.emplace("OverexcLimX2.efd2", &get_OverexcLimX2_efd2);
	get_map.emplace("OverexcLimX2.efd3", &get_OverexcLimX2_efd3);
	get_map.emplace("OverexcLimX2.efddes", &get_OverexcLimX2_efddes);
	get_map.emplace("OverexcLimX2.efdrated", &get_OverexcLimX2_efdrated);
	get_map.emplace("OverexcLimX2.kmx", &get_OverexcLimX2_kmx);
	get_map.emplace("OverexcLimX2.m", &get_OverexcLimX2_m);
	get_map.emplace("OverexcLimX2.t1", &get_OverexcLimX2_t1);
	get_map.emplace("OverexcLimX2.t2", &get_OverexcLimX2_t2);
	get_map.emplace("OverexcLimX2.t3", &get_OverexcLimX2_t3);
	get_map.emplace("OverexcLimX2.vlow", &get_OverexcLimX2_vlow);
}

void OverexcLimX2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void OverexcLimX2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

bool OverexcLimX2::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "OverexcLimX2" &&
		dynamic_cast<OverexcLimX2*>(otherObject) != nullptr;
}

const BaseClassDefiner OverexcLimX2::declare()
{
	return BaseClassDefiner(OverexcLimX2::addConstructToMap, OverexcLimX2::addPrimitiveAssignFnsToMap, OverexcLimX2::addClassAssignFnsToMap, OverexcLimX2::debugName);
}

std::map<std::string, AttrDetails> OverexcLimX2::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = OverexcitationLimiterDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* OverexcLimX2_factory()
	{
		return new OverexcLimX2;
	}
}
