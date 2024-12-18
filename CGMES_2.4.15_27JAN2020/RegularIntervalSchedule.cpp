/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RegularIntervalSchedule.hpp"

#include <algorithm>
#include <sstream>

#include "RegularTimePoint.hpp"
#include "DateTime.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

RegularIntervalSchedule::RegularIntervalSchedule() {};
RegularIntervalSchedule::~RegularIntervalSchedule() {};



bool assign_RegularIntervalSchedule_endTime(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (RegularIntervalSchedule* element = dynamic_cast<RegularIntervalSchedule*>(BaseClass_ptr1))
	{
		element->endTime = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_RegularIntervalSchedule_timeStep(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (RegularIntervalSchedule* element = dynamic_cast<RegularIntervalSchedule*>(BaseClass_ptr1))
	{
		buffer >> element->timeStep;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_RegularTimePoint_IntervalSchedule(BaseClass*, BaseClass*);
bool assign_RegularIntervalSchedule_TimePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RegularIntervalSchedule* element = dynamic_cast<RegularIntervalSchedule*>(BaseClass_ptr1);
	RegularTimePoint* element2 = dynamic_cast<RegularTimePoint*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TimePoints.begin(), element->TimePoints.end(), element2) == element->TimePoints.end())
		{
			element->TimePoints.push_back(element2);
			return assign_RegularTimePoint_IntervalSchedule(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char RegularIntervalSchedule::debugName[] = "RegularIntervalSchedule";
const char* RegularIntervalSchedule::debugString() const
{
	return RegularIntervalSchedule::debugName;
}

void RegularIntervalSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:RegularIntervalSchedule"), &RegularIntervalSchedule_factory));
}

void RegularIntervalSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RegularIntervalSchedule.endTime"), &assign_RegularIntervalSchedule_endTime));
	assign_map.insert(std::make_pair(std::string("cim:RegularIntervalSchedule.timeStep"), &assign_RegularIntervalSchedule_timeStep));
}

void RegularIntervalSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RegularIntervalSchedule.TimePoints"), &assign_RegularIntervalSchedule_TimePoints));
}

const BaseClassDefiner RegularIntervalSchedule::declare()
{
	return BaseClassDefiner(RegularIntervalSchedule::addConstructToMap, RegularIntervalSchedule::addPrimitiveAssignFnsToMap, RegularIntervalSchedule::addClassAssignFnsToMap, RegularIntervalSchedule::debugName);
}

namespace CIMPP
{
	BaseClass* RegularIntervalSchedule_factory()
	{
		return new RegularIntervalSchedule;
	}
}
