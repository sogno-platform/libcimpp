/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OperationalLimitType.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "OperationalLimit.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		OperationalLimitType(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "OperationalLimitType.OperationalLimit", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "OperationalLimitType.acceptableDuration", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "OperationalLimitType.direction", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "OperationalLimitType.limitType", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

OperationalLimitType::OperationalLimitType() {}
OperationalLimitType::~OperationalLimitType() {}

const std::list<std::string>& OperationalLimitType::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& OperationalLimitType::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& OperationalLimitType::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& OperationalLimitType::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& OperationalLimitType::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& OperationalLimitType::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& OperationalLimitType::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_OperationalLimit_OperationalLimitType(BaseClass*, BaseClass*);
bool assign_OperationalLimitType_OperationalLimit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OperationalLimitType* element = dynamic_cast<OperationalLimitType*>(BaseClass_ptr1);
	OperationalLimit* element2 = dynamic_cast<OperationalLimit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->OperationalLimit.begin(), element->OperationalLimit.end(), element2) == element->OperationalLimit.end())
		{
			element->OperationalLimit.push_back(element2);
			return assign_OperationalLimit_OperationalLimitType(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_OperationalLimitType_acceptableDuration(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OperationalLimitType* element = dynamic_cast<OperationalLimitType*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->acceptableDuration;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OperationalLimitType_direction(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OperationalLimitType* element = dynamic_cast<OperationalLimitType*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->direction;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_OperationalLimitType_limitType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OperationalLimitType* element = dynamic_cast<OperationalLimitType*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->limitType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_OperationalLimitType_acceptableDuration(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OperationalLimitType* element = dynamic_cast<const OperationalLimitType*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->acceptableDuration;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OperationalLimitType_direction(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OperationalLimitType* element = dynamic_cast<const OperationalLimitType*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->direction;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OperationalLimitType_limitType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OperationalLimitType* element = dynamic_cast<const OperationalLimitType*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->limitType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char OperationalLimitType::debugName[] = "OperationalLimitType";
const char* OperationalLimitType::debugString() const
{
	return OperationalLimitType::debugName;
}

void OperationalLimitType::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("OperationalLimitType", &OperationalLimitType_factory);
}

void OperationalLimitType::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("OperationalLimitType.acceptableDuration", &assign_OperationalLimitType_acceptableDuration);
	assign_map.emplace("OperationalLimitType.direction", &assign_OperationalLimitType_direction);
	assign_map.emplace("OperationalLimitType.limitType", &assign_OperationalLimitType_limitType);
}

void OperationalLimitType::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("OperationalLimitType.OperationalLimit", &assign_OperationalLimitType_OperationalLimit);
}

void OperationalLimitType::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("OperationalLimitType.acceptableDuration", &get_OperationalLimitType_acceptableDuration);
}

void OperationalLimitType::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void OperationalLimitType::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("OperationalLimitType.direction", &get_OperationalLimitType_direction);
	get_map.emplace("OperationalLimitType.limitType", &get_OperationalLimitType_limitType);
}

bool OperationalLimitType::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "OperationalLimitType" &&
		dynamic_cast<OperationalLimitType*>(otherObject) != nullptr;
}

const BaseClassDefiner OperationalLimitType::declare()
{
	return BaseClassDefiner(OperationalLimitType::addConstructToMap, OperationalLimitType::addPrimitiveAssignFnsToMap, OperationalLimitType::addClassAssignFnsToMap, OperationalLimitType::debugName);
}

std::map<std::string, AttrDetails> OperationalLimitType::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* OperationalLimitType_factory()
	{
		return new OperationalLimitType;
	}
}
