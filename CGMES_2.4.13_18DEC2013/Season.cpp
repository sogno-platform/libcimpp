/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Season.hpp"

#include <algorithm>
#include <sstream>

#include "SeasonDayTypeSchedule.hpp"
#include "MonthDay.hpp"
#include "MonthDay.hpp"

using namespace CIMPP;

Season::Season() {};
Season::~Season() {};



bool assign_Season_endDate(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Season* element = dynamic_cast<Season*>(BaseClass_ptr1))
	{
		buffer >> element->endDate;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Season_startDate(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Season* element = dynamic_cast<Season*>(BaseClass_ptr1))
	{
		buffer >> element->startDate;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_SeasonDayTypeSchedule_Season(BaseClass*, BaseClass*);
bool assign_Season_SeasonDayTypeSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Season* element = dynamic_cast<Season*>(BaseClass_ptr1);
	SeasonDayTypeSchedule* element2 = dynamic_cast<SeasonDayTypeSchedule*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->SeasonDayTypeSchedules.begin(), element->SeasonDayTypeSchedules.end(), element2) == element->SeasonDayTypeSchedules.end())
		{
			element->SeasonDayTypeSchedules.push_back(element2);
			return assign_SeasonDayTypeSchedule_Season(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char Season::debugName[] = "Season";
const char* Season::debugString() const
{
	return Season::debugName;
}

void Season::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Season"), &Season_factory));
}

void Season::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Season.endDate"), &assign_Season_endDate));
	assign_map.insert(std::make_pair(std::string("cim:Season.startDate"), &assign_Season_startDate));
}

void Season::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Season.SeasonDayTypeSchedules"), &assign_Season_SeasonDayTypeSchedules));
}

const BaseClassDefiner Season::declare()
{
	return BaseClassDefiner(Season::addConstructToMap, Season::addPrimitiveAssignFnsToMap, Season::addClassAssignFnsToMap, Season::debugName);
}

namespace CIMPP
{
	BaseClass* Season_factory()
	{
		return new Season;
	}
}
