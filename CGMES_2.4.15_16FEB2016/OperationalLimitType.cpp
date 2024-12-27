/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OperationalLimitType.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "OperationalLimit.hpp"
#include "Seconds.hpp"
#include "OperationalLimitDirectionKind.hpp"
#include "LimitTypeKind.hpp"

using namespace CIMPP;

OperationalLimitType::OperationalLimitType() {};
OperationalLimitType::~OperationalLimitType() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:OperationalLimitType.OperationalLimit", { CGMESProfile::EQ, } },
	{ "cim:OperationalLimitType.acceptableDuration", { CGMESProfile::EQ, } },
	{ "cim:OperationalLimitType.direction", { CGMESProfile::EQ, } },
	{ "cim:OperationalLimitType.limitType", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
OperationalLimitType::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
OperationalLimitType::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_OperationalLimitType_acceptableDuration(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OperationalLimitType* element = dynamic_cast<OperationalLimitType*>(BaseClass_ptr1))
	{
		buffer >> element->acceptableDuration;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OperationalLimitType_direction(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OperationalLimitType* element = dynamic_cast<OperationalLimitType*>(BaseClass_ptr1))
	{
		buffer >> element->direction;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OperationalLimitType_limitType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OperationalLimitType* element = dynamic_cast<OperationalLimitType*>(BaseClass_ptr1))
	{
		buffer >> element->limitType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
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

bool get_OperationalLimitType_acceptableDuration(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OperationalLimitType* element = dynamic_cast<const OperationalLimitType*>(BaseClass_ptr1))
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
	if (const OperationalLimitType* element = dynamic_cast<const OperationalLimitType*>(BaseClass_ptr1))
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
	if (const OperationalLimitType* element = dynamic_cast<const OperationalLimitType*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:OperationalLimitType"), &OperationalLimitType_factory));
}

void OperationalLimitType::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitType.acceptableDuration"), &assign_OperationalLimitType_acceptableDuration));
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitType.direction"), &assign_OperationalLimitType_direction));
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitType.limitType"), &assign_OperationalLimitType_limitType));
}

void OperationalLimitType::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitType.OperationalLimit"), &assign_OperationalLimitType_OperationalLimit));
}

void OperationalLimitType::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:OperationalLimitType.acceptableDuration", &get_OperationalLimitType_acceptableDuration);
}

void OperationalLimitType::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void OperationalLimitType::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:OperationalLimitType.direction", &get_OperationalLimitType_direction);
	get_map.emplace("cim:OperationalLimitType.limitType", &get_OperationalLimitType_limitType);
}

const BaseClassDefiner OperationalLimitType::declare()
{
	return BaseClassDefiner(OperationalLimitType::addConstructToMap, OperationalLimitType::addPrimitiveAssignFnsToMap, OperationalLimitType::addClassAssignFnsToMap, OperationalLimitType::debugName);
}

namespace CIMPP
{
	BaseClass* OperationalLimitType_factory()
	{
		return new OperationalLimitType;
	}
}
