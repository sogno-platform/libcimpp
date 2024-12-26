/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OperationalLimitType.hpp"

#include <algorithm>
#include <sstream>

#include "OperationalLimit.hpp"
#include "Seconds.hpp"
#include "OperationalLimitDirectionKind.hpp"
#include "Boolean.hpp"
#include "LimitKind.hpp"

using namespace CIMPP;

OperationalLimitType::OperationalLimitType() {};
OperationalLimitType::~OperationalLimitType() {};



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

bool assign_OperationalLimitType_isInfiniteDuration(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OperationalLimitType* element = dynamic_cast<OperationalLimitType*>(BaseClass_ptr1))
	{
		buffer >> element->isInfiniteDuration;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OperationalLimitType_kind(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OperationalLimitType* element = dynamic_cast<OperationalLimitType*>(BaseClass_ptr1))
	{
		buffer >> element->kind;
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
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitType.isInfiniteDuration"), &assign_OperationalLimitType_isInfiniteDuration));
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitType.kind"), &assign_OperationalLimitType_kind));
}

void OperationalLimitType::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitType.OperationalLimit"), &assign_OperationalLimitType_OperationalLimit));
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
