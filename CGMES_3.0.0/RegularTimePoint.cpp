/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RegularTimePoint.hpp"

#include <algorithm>
#include <sstream>

#include "RegularIntervalSchedule.hpp"
#include "Integer.hpp"
#include "Float.hpp"
#include "Float.hpp"

using namespace CIMPP;

RegularTimePoint::RegularTimePoint() : IntervalSchedule(nullptr) {};
RegularTimePoint::~RegularTimePoint() {};



bool assign_RegularTimePoint_sequenceNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (RegularTimePoint* element = dynamic_cast<RegularTimePoint*>(BaseClass_ptr1))
	{
		buffer >> element->sequenceNumber;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_RegularTimePoint_value1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (RegularTimePoint* element = dynamic_cast<RegularTimePoint*>(BaseClass_ptr1))
	{
		buffer >> element->value1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_RegularTimePoint_value2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (RegularTimePoint* element = dynamic_cast<RegularTimePoint*>(BaseClass_ptr1))
	{
		buffer >> element->value2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_RegularIntervalSchedule_TimePoints(BaseClass*, BaseClass*);
bool assign_RegularTimePoint_IntervalSchedule(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RegularTimePoint* element = dynamic_cast<RegularTimePoint*>(BaseClass_ptr1);
	RegularIntervalSchedule* element2 = dynamic_cast<RegularIntervalSchedule*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->IntervalSchedule != element2)
		{
			element->IntervalSchedule = element2;
			return assign_RegularIntervalSchedule_TimePoints(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}




const char RegularTimePoint::debugName[] = "RegularTimePoint";
const char* RegularTimePoint::debugString() const
{
	return RegularTimePoint::debugName;
}

void RegularTimePoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:RegularTimePoint"), &RegularTimePoint_factory));
}

void RegularTimePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RegularTimePoint.sequenceNumber"), &assign_RegularTimePoint_sequenceNumber));
	assign_map.insert(std::make_pair(std::string("cim:RegularTimePoint.value1"), &assign_RegularTimePoint_value1));
	assign_map.insert(std::make_pair(std::string("cim:RegularTimePoint.value2"), &assign_RegularTimePoint_value2));
}

void RegularTimePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RegularTimePoint.IntervalSchedule"), &assign_RegularTimePoint_IntervalSchedule));
}

const BaseClassDefiner RegularTimePoint::declare()
{
	return BaseClassDefiner(RegularTimePoint::addConstructToMap, RegularTimePoint::addPrimitiveAssignFnsToMap, RegularTimePoint::addClassAssignFnsToMap, RegularTimePoint::debugName);
}

namespace CIMPP
{
	BaseClass* RegularTimePoint_factory()
	{
		return new RegularTimePoint;
	}
}
