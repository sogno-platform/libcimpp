/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RegularTimePoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "RegularIntervalSchedule.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		RegularTimePoint(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "RegularTimePoint.IntervalSchedule", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "RegularTimePoint.sequenceNumber", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "RegularTimePoint.value1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "RegularTimePoint.value2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

RegularTimePoint::RegularTimePoint() : IntervalSchedule(nullptr) {}
RegularTimePoint::~RegularTimePoint() {}

const std::list<std::string>& RegularTimePoint::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& RegularTimePoint::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& RegularTimePoint::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& RegularTimePoint::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& RegularTimePoint::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& RegularTimePoint::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& RegularTimePoint::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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

bool assign_RegularTimePoint_sequenceNumber(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RegularTimePoint* element = dynamic_cast<RegularTimePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->sequenceNumber;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RegularTimePoint_value1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RegularTimePoint* element = dynamic_cast<RegularTimePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->value1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RegularTimePoint_value2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RegularTimePoint* element = dynamic_cast<RegularTimePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->value2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_RegularTimePoint_IntervalSchedule(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const RegularTimePoint* element = dynamic_cast<const RegularTimePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->IntervalSchedule != 0)
		{
			BaseClass_list.push_back(element->IntervalSchedule);
			return true;
		}
	}
	return false;
}

bool get_RegularTimePoint_sequenceNumber(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RegularTimePoint* element = dynamic_cast<const RegularTimePoint*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const RegularTimePoint* element = dynamic_cast<const RegularTimePoint*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const RegularTimePoint* element = dynamic_cast<const RegularTimePoint*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char RegularTimePoint::debugName[] = "RegularTimePoint";
const char* RegularTimePoint::debugString() const
{
	return RegularTimePoint::debugName;
}

void RegularTimePoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("RegularTimePoint", &RegularTimePoint_factory);
}

void RegularTimePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("RegularTimePoint.sequenceNumber", &assign_RegularTimePoint_sequenceNumber);
	assign_map.emplace("RegularTimePoint.value1", &assign_RegularTimePoint_value1);
	assign_map.emplace("RegularTimePoint.value2", &assign_RegularTimePoint_value2);
}

void RegularTimePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("RegularTimePoint.IntervalSchedule", &assign_RegularTimePoint_IntervalSchedule);
}

void RegularTimePoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("RegularTimePoint.sequenceNumber", &get_RegularTimePoint_sequenceNumber);
	get_map.emplace("RegularTimePoint.value1", &get_RegularTimePoint_value1);
	get_map.emplace("RegularTimePoint.value2", &get_RegularTimePoint_value2);
}

void RegularTimePoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("RegularTimePoint.IntervalSchedule", &get_RegularTimePoint_IntervalSchedule);
}

void RegularTimePoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool RegularTimePoint::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "RegularTimePoint" &&
		dynamic_cast<RegularTimePoint*>(otherObject) != nullptr;
}

const BaseClassDefiner RegularTimePoint::declare()
{
	return BaseClassDefiner(RegularTimePoint::addConstructToMap, RegularTimePoint::addPrimitiveAssignFnsToMap, RegularTimePoint::addClassAssignFnsToMap, RegularTimePoint::debugName);
}

std::map<std::string, AttrDetails> RegularTimePoint::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* RegularTimePoint_factory()
	{
		return new RegularTimePoint;
	}
}
