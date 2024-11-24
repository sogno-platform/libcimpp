/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ConformLoadSchedule.hpp"

#include <algorithm>
#include <sstream>

#include "ConformLoadGroup.hpp"

using namespace CIMPP;

ConformLoadSchedule::ConformLoadSchedule() : ConformLoadGroup(nullptr) {};
ConformLoadSchedule::~ConformLoadSchedule() {};




bool assign_ConformLoadGroup_ConformLoadSchedules(BaseClass*, BaseClass*);
bool assign_ConformLoadSchedule_ConformLoadGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConformLoadSchedule* element = dynamic_cast<ConformLoadSchedule*>(BaseClass_ptr1);
	ConformLoadGroup* element2 = dynamic_cast<ConformLoadGroup*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ConformLoadGroup != element2)
		{
			element->ConformLoadGroup = element2;
			return assign_ConformLoadGroup_ConformLoadSchedules(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char ConformLoadSchedule::debugName[] = "ConformLoadSchedule";
const char* ConformLoadSchedule::debugString() const
{
	return ConformLoadSchedule::debugName;
}

void ConformLoadSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ConformLoadSchedule"), &ConformLoadSchedule_factory));
}

void ConformLoadSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ConformLoadSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ConformLoadSchedule.ConformLoadGroup"), &assign_ConformLoadSchedule_ConformLoadGroup));
}

const BaseClassDefiner ConformLoadSchedule::declare()
{
	return BaseClassDefiner(ConformLoadSchedule::addConstructToMap, ConformLoadSchedule::addPrimitiveAssignFnsToMap, ConformLoadSchedule::addClassAssignFnsToMap, ConformLoadSchedule::debugName);
}

namespace CIMPP
{
	BaseClass* ConformLoadSchedule_factory()
	{
		return new ConformLoadSchedule;
	}
}
