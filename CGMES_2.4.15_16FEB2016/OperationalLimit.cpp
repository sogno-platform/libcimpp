/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OperationalLimit.hpp"

#include <algorithm>
#include <sstream>

#include "OperationalLimitSet.hpp"
#include "OperationalLimitType.hpp"

using namespace CIMPP;

OperationalLimit::OperationalLimit() : OperationalLimitSet(nullptr), OperationalLimitType(nullptr) {};
OperationalLimit::~OperationalLimit() {};





bool assign_OperationalLimitSet_OperationalLimitValue(BaseClass*, BaseClass*);
bool assign_OperationalLimit_OperationalLimitSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OperationalLimit* element = dynamic_cast<OperationalLimit*>(BaseClass_ptr1);
	OperationalLimitSet* element2 = dynamic_cast<OperationalLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->OperationalLimitSet != element2)
		{
			element->OperationalLimitSet = element2;
			return assign_OperationalLimitSet_OperationalLimitValue(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_OperationalLimitType_OperationalLimit(BaseClass*, BaseClass*);
bool assign_OperationalLimit_OperationalLimitType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OperationalLimit* element = dynamic_cast<OperationalLimit*>(BaseClass_ptr1);
	OperationalLimitType* element2 = dynamic_cast<OperationalLimitType*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->OperationalLimitType != element2)
		{
			element->OperationalLimitType = element2;
			return assign_OperationalLimitType_OperationalLimit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char OperationalLimit::debugName[] = "OperationalLimit";
const char* OperationalLimit::debugString() const
{
	return OperationalLimit::debugName;
}

void OperationalLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:OperationalLimit"), &OperationalLimit_factory));
}

void OperationalLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void OperationalLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimit.OperationalLimitSet"), &assign_OperationalLimit_OperationalLimitSet));
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimit.OperationalLimitType"), &assign_OperationalLimit_OperationalLimitType));
}

const BaseClassDefiner OperationalLimit::declare()
{
	return BaseClassDefiner(OperationalLimit::addConstructToMap, OperationalLimit::addPrimitiveAssignFnsToMap, OperationalLimit::addClassAssignFnsToMap, OperationalLimit::debugName);
}

namespace CIMPP
{
	BaseClass* OperationalLimit_factory()
	{
		return new OperationalLimit;
	}
}
