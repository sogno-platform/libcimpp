/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OverexcLimX1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		OverexcLimX1(),
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
		{ "OverexcLimX1.efd1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "OverexcLimX1.efd2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "OverexcLimX1.efd3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "OverexcLimX1.efddes", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "OverexcLimX1.efdrated", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "OverexcLimX1.kmx", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "OverexcLimX1.t1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "OverexcLimX1.t2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "OverexcLimX1.t3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "OverexcLimX1.vlow", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

OverexcLimX1::OverexcLimX1() {}
OverexcLimX1::~OverexcLimX1() {}

const std::list<std::string>& OverexcLimX1::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& OverexcLimX1::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& OverexcLimX1::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& OverexcLimX1::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& OverexcLimX1::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& OverexcLimX1::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& OverexcLimX1::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_OverexcLimX1_efd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1);
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

bool assign_OverexcLimX1_efd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1);
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

bool assign_OverexcLimX1_efd3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1);
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

bool assign_OverexcLimX1_efddes(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1);
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

bool assign_OverexcLimX1_efdrated(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1);
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

bool assign_OverexcLimX1_kmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1);
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

bool assign_OverexcLimX1_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1);
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

bool assign_OverexcLimX1_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1);
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

bool assign_OverexcLimX1_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1);
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

bool assign_OverexcLimX1_vlow(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1);
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

bool get_OverexcLimX1_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1);
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

bool get_OverexcLimX1_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1);
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

bool get_OverexcLimX1_efd3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1);
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

bool get_OverexcLimX1_efddes(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1);
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

bool get_OverexcLimX1_efdrated(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1);
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

bool get_OverexcLimX1_kmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1);
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

bool get_OverexcLimX1_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1);
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

bool get_OverexcLimX1_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1);
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

bool get_OverexcLimX1_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1);
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

bool get_OverexcLimX1_vlow(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1);
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

const char OverexcLimX1::debugName[] = "OverexcLimX1";
const char* OverexcLimX1::debugString() const
{
	return OverexcLimX1::debugName;
}

void OverexcLimX1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("OverexcLimX1", &OverexcLimX1_factory);
}

void OverexcLimX1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("OverexcLimX1.efd1", &assign_OverexcLimX1_efd1);
	assign_map.emplace("OverexcLimX1.efd2", &assign_OverexcLimX1_efd2);
	assign_map.emplace("OverexcLimX1.efd3", &assign_OverexcLimX1_efd3);
	assign_map.emplace("OverexcLimX1.efddes", &assign_OverexcLimX1_efddes);
	assign_map.emplace("OverexcLimX1.efdrated", &assign_OverexcLimX1_efdrated);
	assign_map.emplace("OverexcLimX1.kmx", &assign_OverexcLimX1_kmx);
	assign_map.emplace("OverexcLimX1.t1", &assign_OverexcLimX1_t1);
	assign_map.emplace("OverexcLimX1.t2", &assign_OverexcLimX1_t2);
	assign_map.emplace("OverexcLimX1.t3", &assign_OverexcLimX1_t3);
	assign_map.emplace("OverexcLimX1.vlow", &assign_OverexcLimX1_vlow);
}

void OverexcLimX1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void OverexcLimX1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("OverexcLimX1.efd1", &get_OverexcLimX1_efd1);
	get_map.emplace("OverexcLimX1.efd2", &get_OverexcLimX1_efd2);
	get_map.emplace("OverexcLimX1.efd3", &get_OverexcLimX1_efd3);
	get_map.emplace("OverexcLimX1.efddes", &get_OverexcLimX1_efddes);
	get_map.emplace("OverexcLimX1.efdrated", &get_OverexcLimX1_efdrated);
	get_map.emplace("OverexcLimX1.kmx", &get_OverexcLimX1_kmx);
	get_map.emplace("OverexcLimX1.t1", &get_OverexcLimX1_t1);
	get_map.emplace("OverexcLimX1.t2", &get_OverexcLimX1_t2);
	get_map.emplace("OverexcLimX1.t3", &get_OverexcLimX1_t3);
	get_map.emplace("OverexcLimX1.vlow", &get_OverexcLimX1_vlow);
}

void OverexcLimX1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void OverexcLimX1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

bool OverexcLimX1::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "OverexcLimX1" &&
		dynamic_cast<OverexcLimX1*>(otherObject) != nullptr;
}

const BaseClassDefiner OverexcLimX1::declare()
{
	return BaseClassDefiner(OverexcLimX1::addConstructToMap, OverexcLimX1::addPrimitiveAssignFnsToMap, OverexcLimX1::addClassAssignFnsToMap, OverexcLimX1::debugName);
}

std::map<std::string, AttrDetails> OverexcLimX1::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = OverexcitationLimiterDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* OverexcLimX1_factory()
	{
		return new OverexcLimX1;
	}
}
