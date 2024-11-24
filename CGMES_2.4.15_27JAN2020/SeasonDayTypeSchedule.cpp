/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SeasonDayTypeSchedule.hpp"

#include <algorithm>
#include <sstream>

#include "DayType.hpp"
#include "Season.hpp"

using namespace CIMPP;

SeasonDayTypeSchedule::SeasonDayTypeSchedule() : DayType(nullptr), Season(nullptr) {};
SeasonDayTypeSchedule::~SeasonDayTypeSchedule() {};





bool assign_DayType_SeasonDayTypeSchedules(BaseClass*, BaseClass*);
bool assign_SeasonDayTypeSchedule_DayType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SeasonDayTypeSchedule* element = dynamic_cast<SeasonDayTypeSchedule*>(BaseClass_ptr1);
	DayType* element2 = dynamic_cast<DayType*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DayType != element2)
		{
			element->DayType = element2;
			return assign_DayType_SeasonDayTypeSchedules(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Season_SeasonDayTypeSchedules(BaseClass*, BaseClass*);
bool assign_SeasonDayTypeSchedule_Season(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SeasonDayTypeSchedule* element = dynamic_cast<SeasonDayTypeSchedule*>(BaseClass_ptr1);
	Season* element2 = dynamic_cast<Season*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Season != element2)
		{
			element->Season = element2;
			return assign_Season_SeasonDayTypeSchedules(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char SeasonDayTypeSchedule::debugName[] = "SeasonDayTypeSchedule";
const char* SeasonDayTypeSchedule::debugString() const
{
	return SeasonDayTypeSchedule::debugName;
}

void SeasonDayTypeSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SeasonDayTypeSchedule"), &SeasonDayTypeSchedule_factory));
}

void SeasonDayTypeSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SeasonDayTypeSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SeasonDayTypeSchedule.DayType"), &assign_SeasonDayTypeSchedule_DayType));
	assign_map.insert(std::make_pair(std::string("cim:SeasonDayTypeSchedule.Season"), &assign_SeasonDayTypeSchedule_Season));
}

const BaseClassDefiner SeasonDayTypeSchedule::declare()
{
	return BaseClassDefiner(SeasonDayTypeSchedule::addConstructToMap, SeasonDayTypeSchedule::addPrimitiveAssignFnsToMap, SeasonDayTypeSchedule::addClassAssignFnsToMap, SeasonDayTypeSchedule::debugName);
}

namespace CIMPP
{
	BaseClass* SeasonDayTypeSchedule_factory()
	{
		return new SeasonDayTypeSchedule;
	}
}
