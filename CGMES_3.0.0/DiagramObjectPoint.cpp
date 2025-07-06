/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiagramObjectPoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DiagramObject.hpp"
#include "DiagramObjectGluePoint.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DiagramObjectPoint(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DL,
		},
		CGMESProfile::DL
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "DiagramObjectPoint.DiagramObject", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
		{ "DiagramObjectPoint.DiagramObjectGluePoint", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
		{ "DiagramObjectPoint.sequenceNumber", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
		{ "DiagramObjectPoint.xPosition", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
		{ "DiagramObjectPoint.yPosition", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
		{ "DiagramObjectPoint.zPosition", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
	};
    return ClassAttrDetailsMap;
}

DiagramObjectPoint::DiagramObjectPoint() : DiagramObject(nullptr), DiagramObjectGluePoint(nullptr) {}
DiagramObjectPoint::~DiagramObjectPoint() {}

const std::list<std::string>& DiagramObjectPoint::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DiagramObjectPoint::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DiagramObjectPoint::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DiagramObjectPoint::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DiagramObjectPoint::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DiagramObjectPoint::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DiagramObjectPoint::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DiagramObject_DiagramObjectPoints(BaseClass*, BaseClass*);
bool assign_DiagramObjectPoint_DiagramObject(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiagramObjectPoint* element = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr1);
	DiagramObject* element2 = dynamic_cast<DiagramObject*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DiagramObject != element2)
		{
			element->DiagramObject = element2;
			return assign_DiagramObject_DiagramObjectPoints(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DiagramObjectGluePoint_DiagramObjectPoints(BaseClass*, BaseClass*);
bool assign_DiagramObjectPoint_DiagramObjectGluePoint(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiagramObjectPoint* element = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr1);
	DiagramObjectGluePoint* element2 = dynamic_cast<DiagramObjectGluePoint*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DiagramObjectGluePoint != element2)
		{
			element->DiagramObjectGluePoint = element2;
			return assign_DiagramObjectGluePoint_DiagramObjectPoints(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DiagramObjectPoint_sequenceNumber(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramObjectPoint* element = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr1);
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

bool assign_DiagramObjectPoint_xPosition(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramObjectPoint* element = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xPosition;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramObjectPoint_yPosition(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramObjectPoint* element = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->yPosition;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramObjectPoint_zPosition(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramObjectPoint* element = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->zPosition;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_DiagramObjectPoint_DiagramObject(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const DiagramObjectPoint* element = dynamic_cast<const DiagramObjectPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->DiagramObject != 0)
		{
			BaseClass_list.push_back(element->DiagramObject);
			return true;
		}
	}
	return false;
}

bool get_DiagramObjectPoint_DiagramObjectGluePoint(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const DiagramObjectPoint* element = dynamic_cast<const DiagramObjectPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->DiagramObjectGluePoint != 0)
		{
			BaseClass_list.push_back(element->DiagramObjectGluePoint);
			return true;
		}
	}
	return false;
}

bool get_DiagramObjectPoint_sequenceNumber(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramObjectPoint* element = dynamic_cast<const DiagramObjectPoint*>(BaseClass_ptr1);
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

bool get_DiagramObjectPoint_xPosition(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramObjectPoint* element = dynamic_cast<const DiagramObjectPoint*>(BaseClass_ptr1);
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

bool get_DiagramObjectPoint_yPosition(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramObjectPoint* element = dynamic_cast<const DiagramObjectPoint*>(BaseClass_ptr1);
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

bool get_DiagramObjectPoint_zPosition(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramObjectPoint* element = dynamic_cast<const DiagramObjectPoint*>(BaseClass_ptr1);
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

const char DiagramObjectPoint::debugName[] = "DiagramObjectPoint";
const char* DiagramObjectPoint::debugString() const
{
	return DiagramObjectPoint::debugName;
}

void DiagramObjectPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DiagramObjectPoint", &DiagramObjectPoint_factory);
}

void DiagramObjectPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("DiagramObjectPoint.sequenceNumber", &assign_DiagramObjectPoint_sequenceNumber);
	assign_map.emplace("DiagramObjectPoint.xPosition", &assign_DiagramObjectPoint_xPosition);
	assign_map.emplace("DiagramObjectPoint.yPosition", &assign_DiagramObjectPoint_yPosition);
	assign_map.emplace("DiagramObjectPoint.zPosition", &assign_DiagramObjectPoint_zPosition);
}

void DiagramObjectPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DiagramObjectPoint.DiagramObject", &assign_DiagramObjectPoint_DiagramObject);
	assign_map.emplace("DiagramObjectPoint.DiagramObjectGluePoint", &assign_DiagramObjectPoint_DiagramObjectGluePoint);
}

void DiagramObjectPoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("DiagramObjectPoint.sequenceNumber", &get_DiagramObjectPoint_sequenceNumber);
	get_map.emplace("DiagramObjectPoint.xPosition", &get_DiagramObjectPoint_xPosition);
	get_map.emplace("DiagramObjectPoint.yPosition", &get_DiagramObjectPoint_yPosition);
	get_map.emplace("DiagramObjectPoint.zPosition", &get_DiagramObjectPoint_zPosition);
}

void DiagramObjectPoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("DiagramObjectPoint.DiagramObject", &get_DiagramObjectPoint_DiagramObject);
	get_map.emplace("DiagramObjectPoint.DiagramObjectGluePoint", &get_DiagramObjectPoint_DiagramObjectGluePoint);
}

void DiagramObjectPoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool DiagramObjectPoint::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DiagramObjectPoint" &&
		dynamic_cast<DiagramObjectPoint*>(otherObject) != nullptr;
}

const BaseClassDefiner DiagramObjectPoint::declare()
{
	return BaseClassDefiner(DiagramObjectPoint::addConstructToMap, DiagramObjectPoint::addPrimitiveAssignFnsToMap, DiagramObjectPoint::addClassAssignFnsToMap, DiagramObjectPoint::debugName);
}

std::map<std::string, AttrDetails> DiagramObjectPoint::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DiagramObjectPoint_factory()
	{
		return new DiagramObjectPoint;
	}
}
