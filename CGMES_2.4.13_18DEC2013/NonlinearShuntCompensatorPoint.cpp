/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "NonlinearShuntCompensatorPoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "NonlinearShuntCompensator.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		NonlinearShuntCompensatorPoint(),
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
		{ "NonlinearShuntCompensatorPoint.NonlinearShuntCompensator", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "NonlinearShuntCompensatorPoint.b", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "NonlinearShuntCompensatorPoint.b0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "NonlinearShuntCompensatorPoint.g", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "NonlinearShuntCompensatorPoint.g0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "NonlinearShuntCompensatorPoint.sectionNumber", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

NonlinearShuntCompensatorPoint::NonlinearShuntCompensatorPoint() : NonlinearShuntCompensator(nullptr) {}
NonlinearShuntCompensatorPoint::~NonlinearShuntCompensatorPoint() {}

const std::list<std::string>& NonlinearShuntCompensatorPoint::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& NonlinearShuntCompensatorPoint::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& NonlinearShuntCompensatorPoint::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& NonlinearShuntCompensatorPoint::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& NonlinearShuntCompensatorPoint::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& NonlinearShuntCompensatorPoint::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& NonlinearShuntCompensatorPoint::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints(BaseClass*, BaseClass*);
bool assign_NonlinearShuntCompensatorPoint_NonlinearShuntCompensator(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1);
	NonlinearShuntCompensator* element2 = dynamic_cast<NonlinearShuntCompensator*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->NonlinearShuntCompensator != element2)
		{
			element->NonlinearShuntCompensator = element2;
			return assign_NonlinearShuntCompensator_NonlinearShuntCompensatorPoints(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_NonlinearShuntCompensatorPoint_b(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_NonlinearShuntCompensatorPoint_b0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_NonlinearShuntCompensatorPoint_g(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->g;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_NonlinearShuntCompensatorPoint_g0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->g0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_NonlinearShuntCompensatorPoint_sectionNumber(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	NonlinearShuntCompensatorPoint* element = dynamic_cast<NonlinearShuntCompensatorPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->sectionNumber;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_NonlinearShuntCompensatorPoint_NonlinearShuntCompensator(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const NonlinearShuntCompensatorPoint* element = dynamic_cast<const NonlinearShuntCompensatorPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->NonlinearShuntCompensator != 0)
		{
			BaseClass_list.push_back(element->NonlinearShuntCompensator);
			return true;
		}
	}
	return false;
}

bool get_NonlinearShuntCompensatorPoint_b(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const NonlinearShuntCompensatorPoint* element = dynamic_cast<const NonlinearShuntCompensatorPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_NonlinearShuntCompensatorPoint_b0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const NonlinearShuntCompensatorPoint* element = dynamic_cast<const NonlinearShuntCompensatorPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_NonlinearShuntCompensatorPoint_g(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const NonlinearShuntCompensatorPoint* element = dynamic_cast<const NonlinearShuntCompensatorPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->g;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_NonlinearShuntCompensatorPoint_g0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const NonlinearShuntCompensatorPoint* element = dynamic_cast<const NonlinearShuntCompensatorPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->g0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_NonlinearShuntCompensatorPoint_sectionNumber(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const NonlinearShuntCompensatorPoint* element = dynamic_cast<const NonlinearShuntCompensatorPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->sectionNumber;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char NonlinearShuntCompensatorPoint::debugName[] = "NonlinearShuntCompensatorPoint";
const char* NonlinearShuntCompensatorPoint::debugString() const
{
	return NonlinearShuntCompensatorPoint::debugName;
}

void NonlinearShuntCompensatorPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("NonlinearShuntCompensatorPoint", &NonlinearShuntCompensatorPoint_factory);
}

void NonlinearShuntCompensatorPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("NonlinearShuntCompensatorPoint.b", &assign_NonlinearShuntCompensatorPoint_b);
	assign_map.emplace("NonlinearShuntCompensatorPoint.b0", &assign_NonlinearShuntCompensatorPoint_b0);
	assign_map.emplace("NonlinearShuntCompensatorPoint.g", &assign_NonlinearShuntCompensatorPoint_g);
	assign_map.emplace("NonlinearShuntCompensatorPoint.g0", &assign_NonlinearShuntCompensatorPoint_g0);
	assign_map.emplace("NonlinearShuntCompensatorPoint.sectionNumber", &assign_NonlinearShuntCompensatorPoint_sectionNumber);
}

void NonlinearShuntCompensatorPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("NonlinearShuntCompensatorPoint.NonlinearShuntCompensator", &assign_NonlinearShuntCompensatorPoint_NonlinearShuntCompensator);
}

void NonlinearShuntCompensatorPoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("NonlinearShuntCompensatorPoint.b", &get_NonlinearShuntCompensatorPoint_b);
	get_map.emplace("NonlinearShuntCompensatorPoint.b0", &get_NonlinearShuntCompensatorPoint_b0);
	get_map.emplace("NonlinearShuntCompensatorPoint.g", &get_NonlinearShuntCompensatorPoint_g);
	get_map.emplace("NonlinearShuntCompensatorPoint.g0", &get_NonlinearShuntCompensatorPoint_g0);
	get_map.emplace("NonlinearShuntCompensatorPoint.sectionNumber", &get_NonlinearShuntCompensatorPoint_sectionNumber);
}

void NonlinearShuntCompensatorPoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("NonlinearShuntCompensatorPoint.NonlinearShuntCompensator", &get_NonlinearShuntCompensatorPoint_NonlinearShuntCompensator);
}

void NonlinearShuntCompensatorPoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool NonlinearShuntCompensatorPoint::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "NonlinearShuntCompensatorPoint" &&
		dynamic_cast<NonlinearShuntCompensatorPoint*>(otherObject) != nullptr;
}

const BaseClassDefiner NonlinearShuntCompensatorPoint::declare()
{
	return BaseClassDefiner(NonlinearShuntCompensatorPoint::addConstructToMap, NonlinearShuntCompensatorPoint::addPrimitiveAssignFnsToMap, NonlinearShuntCompensatorPoint::addClassAssignFnsToMap, NonlinearShuntCompensatorPoint::debugName);
}

std::map<std::string, AttrDetails> NonlinearShuntCompensatorPoint::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* NonlinearShuntCompensatorPoint_factory()
	{
		return new NonlinearShuntCompensatorPoint;
	}
}
