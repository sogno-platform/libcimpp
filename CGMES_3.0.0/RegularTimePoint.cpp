/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RegularTimePoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "RegularIntervalSchedule.hpp"
#include "Integer.hpp"
#include "Float.hpp"
#include "Float.hpp"

using namespace CIMPP;

RegularTimePoint::RegularTimePoint() : IntervalSchedule(nullptr) {};
RegularTimePoint::~RegularTimePoint() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:RegularTimePoint.IntervalSchedule", { CGMESProfile::EQ, } },
	{ "cim:RegularTimePoint.sequenceNumber", { CGMESProfile::EQ, } },
	{ "cim:RegularTimePoint.value1", { CGMESProfile::EQ, } },
	{ "cim:RegularTimePoint.value2", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
RegularTimePoint::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
RegularTimePoint::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


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

bool get_RegularTimePoint_sequenceNumber(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const RegularTimePoint* element = dynamic_cast<const RegularTimePoint*>(BaseClass_ptr1))
	{
		buffer << element->sequenceNumber;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RegularTimePoint_value1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const RegularTimePoint* element = dynamic_cast<const RegularTimePoint*>(BaseClass_ptr1))
	{
		buffer << element->value1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RegularTimePoint_value2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const RegularTimePoint* element = dynamic_cast<const RegularTimePoint*>(BaseClass_ptr1))
	{
		buffer << element->value2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_RegularTimePoint_IntervalSchedule(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const RegularTimePoint* element = dynamic_cast<const RegularTimePoint*>(BaseClass_ptr1))
	{
		if (element->IntervalSchedule != 0)
		{
			BaseClass_list.push_back(element->IntervalSchedule);
			return true;
		}
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

void RegularTimePoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:RegularTimePoint.sequenceNumber", &get_RegularTimePoint_sequenceNumber);
	get_map.emplace("cim:RegularTimePoint.value1", &get_RegularTimePoint_value1);
	get_map.emplace("cim:RegularTimePoint.value2", &get_RegularTimePoint_value2);
}

void RegularTimePoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:RegularTimePoint.IntervalSchedule", &get_RegularTimePoint_IntervalSchedule);
}

void RegularTimePoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
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
