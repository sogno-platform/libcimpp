/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PositionPoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Location.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PositionPoint(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::GL,
		},
		CGMESProfile::GL
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "PositionPoint.Location", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::GL, } } },
		{ "PositionPoint.sequenceNumber", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::GL, } } },
		{ "PositionPoint.xPosition", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::GL, } } },
		{ "PositionPoint.yPosition", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::GL, } } },
		{ "PositionPoint.zPosition", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::GL, } } },
	};
    return ClassAttrDetailsMap;
}

PositionPoint::PositionPoint() : Location(nullptr) {}
PositionPoint::~PositionPoint() {}

const std::list<std::string>& PositionPoint::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PositionPoint::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PositionPoint::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PositionPoint::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PositionPoint::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PositionPoint::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PositionPoint::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_Location_PositionPoints(BaseClass*, BaseClass*);
bool assign_PositionPoint_Location(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1);
	Location* element2 = dynamic_cast<Location*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Location != element2)
		{
			element->Location = element2;
			return assign_Location_PositionPoints(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PositionPoint_sequenceNumber(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1);
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

bool assign_PositionPoint_xPosition(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->xPosition = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PositionPoint_yPosition(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->yPosition = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PositionPoint_zPosition(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->zPosition = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PositionPoint_Location(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const PositionPoint* element = dynamic_cast<const PositionPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Location != 0)
		{
			BaseClass_list.push_back(element->Location);
			return true;
		}
	}
	return false;
}

bool get_PositionPoint_sequenceNumber(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PositionPoint* element = dynamic_cast<const PositionPoint*>(BaseClass_ptr1);
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

bool get_PositionPoint_xPosition(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PositionPoint* element = dynamic_cast<const PositionPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xPosition;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PositionPoint_yPosition(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PositionPoint* element = dynamic_cast<const PositionPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->yPosition;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PositionPoint_zPosition(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PositionPoint* element = dynamic_cast<const PositionPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->zPosition;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PositionPoint::debugName[] = "PositionPoint";
const char* PositionPoint::debugString() const
{
	return PositionPoint::debugName;
}

void PositionPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PositionPoint", &PositionPoint_factory);
}

void PositionPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PositionPoint.sequenceNumber", &assign_PositionPoint_sequenceNumber);
	assign_map.emplace("PositionPoint.xPosition", &assign_PositionPoint_xPosition);
	assign_map.emplace("PositionPoint.yPosition", &assign_PositionPoint_yPosition);
	assign_map.emplace("PositionPoint.zPosition", &assign_PositionPoint_zPosition);
}

void PositionPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PositionPoint.Location", &assign_PositionPoint_Location);
}

void PositionPoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PositionPoint.sequenceNumber", &get_PositionPoint_sequenceNumber);
	get_map.emplace("PositionPoint.xPosition", &get_PositionPoint_xPosition);
	get_map.emplace("PositionPoint.yPosition", &get_PositionPoint_yPosition);
	get_map.emplace("PositionPoint.zPosition", &get_PositionPoint_zPosition);
}

void PositionPoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("PositionPoint.Location", &get_PositionPoint_Location);
}

void PositionPoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool PositionPoint::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PositionPoint" &&
		dynamic_cast<PositionPoint*>(otherObject) != nullptr;
}

const BaseClassDefiner PositionPoint::declare()
{
	return BaseClassDefiner(PositionPoint::addConstructToMap, PositionPoint::addPrimitiveAssignFnsToMap, PositionPoint::addClassAssignFnsToMap, PositionPoint::debugName);
}

std::map<std::string, AttrDetails> PositionPoint::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PositionPoint_factory()
	{
		return new PositionPoint;
	}
}
