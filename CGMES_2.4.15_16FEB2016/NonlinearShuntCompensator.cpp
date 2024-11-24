/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "NonlinearShuntCompensator.hpp"

#include <algorithm>
#include <sstream>

#include "NonlinearShuntCompensatorPoint.hpp"

using namespace CIMPP;

NonlinearShuntCompensator::NonlinearShuntCompensator() {};
NonlinearShuntCompensator::~NonlinearShuntCompensator() {};




bool assign_NonlinearShuntCompensatorPoint_NonlinearShuntCompensator(BaseClass*, BaseClass*);
bool assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	NonlinearShuntCompensator* element = dynamic_cast<NonlinearShuntCompensator*>(BaseClass_ptr1);
	NonlinearShuntCompensatorPoint* element2 = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->NonlinearShuntCompensatorPoints.begin(), element->NonlinearShuntCompensatorPoints.end(), element2) == element->NonlinearShuntCompensatorPoints.end())
		{
			element->NonlinearShuntCompensatorPoints.push_back(element2);
			return assign_NonlinearShuntCompensatorPoint_NonlinearShuntCompensator(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char NonlinearShuntCompensator::debugName[] = "NonlinearShuntCompensator";
const char* NonlinearShuntCompensator::debugString() const
{
	return NonlinearShuntCompensator::debugName;
}

void NonlinearShuntCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensator"), &NonlinearShuntCompensator_factory));
}

void NonlinearShuntCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void NonlinearShuntCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:NonlinearShuntCompensator.NonlinearShuntCompensatorPoints"), &assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints));
}

const BaseClassDefiner NonlinearShuntCompensator::declare()
{
	return BaseClassDefiner(NonlinearShuntCompensator::addConstructToMap, NonlinearShuntCompensator::addPrimitiveAssignFnsToMap, NonlinearShuntCompensator::addClassAssignFnsToMap, NonlinearShuntCompensator::debugName);
}

namespace CIMPP
{
	BaseClass* NonlinearShuntCompensator_factory()
	{
		return new NonlinearShuntCompensator;
	}
}
