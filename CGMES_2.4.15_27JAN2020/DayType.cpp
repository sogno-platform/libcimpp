/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DayType.hpp"

#include <algorithm>
#include <sstream>

#include "SeasonDayTypeSchedule.hpp"

using namespace CIMPP;

DayType::DayType() {};
DayType::~DayType() {};




bool assign_SeasonDayTypeSchedule_DayType(BaseClass*, BaseClass*);
bool assign_DayType_SeasonDayTypeSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DayType* element = dynamic_cast<DayType*>(BaseClass_ptr1);
	SeasonDayTypeSchedule* element2 = dynamic_cast<SeasonDayTypeSchedule*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->SeasonDayTypeSchedules.begin(), element->SeasonDayTypeSchedules.end(), element2) == element->SeasonDayTypeSchedules.end())
		{
			element->SeasonDayTypeSchedules.push_back(element2);
			return assign_SeasonDayTypeSchedule_DayType(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char DayType::debugName[] = "DayType";
const char* DayType::debugString() const
{
	return DayType::debugName;
}

void DayType::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DayType"), &DayType_factory));
}

void DayType::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DayType::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DayType.SeasonDayTypeSchedules"), &assign_DayType_SeasonDayTypeSchedules));
}

const BaseClassDefiner DayType::declare()
{
	return BaseClassDefiner(DayType::addConstructToMap, DayType::addPrimitiveAssignFnsToMap, DayType::addClassAssignFnsToMap, DayType::debugName);
}

namespace CIMPP
{
	BaseClass* DayType_factory()
	{
		return new DayType;
	}
}
