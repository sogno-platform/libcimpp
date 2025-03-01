/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiagramObjectGluePoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DiagramObjectPoint.hpp"

using namespace CIMPP;

DiagramObjectGluePoint::DiagramObjectGluePoint() {}
DiagramObjectGluePoint::~DiagramObjectGluePoint() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DiagramObjectGluePoint.DiagramObjectPoints", { CGMESProfile::DL, } },
};

std::list<CGMESProfile>
DiagramObjectGluePoint::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DiagramObjectGluePoint::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_DiagramObjectPoint_DiagramObjectGluePoint(BaseClass*, BaseClass*);
bool assign_DiagramObjectGluePoint_DiagramObjectPoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiagramObjectGluePoint* element = dynamic_cast<DiagramObjectGluePoint*>(BaseClass_ptr1);
	DiagramObjectPoint* element2 = dynamic_cast<DiagramObjectPoint*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DiagramObjectPoints.begin(), element->DiagramObjectPoints.end(), element2) == element->DiagramObjectPoints.end())
		{
			element->DiagramObjectPoints.push_back(element2);
			return assign_DiagramObjectPoint_DiagramObjectGluePoint(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char DiagramObjectGluePoint::debugName[] = "DiagramObjectGluePoint";
const char* DiagramObjectGluePoint::debugString() const
{
	return DiagramObjectGluePoint::debugName;
}

void DiagramObjectGluePoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DiagramObjectGluePoint", &DiagramObjectGluePoint_factory);
}

void DiagramObjectGluePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DiagramObjectGluePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:DiagramObjectGluePoint.DiagramObjectPoints", &assign_DiagramObjectGluePoint_DiagramObjectPoints);
}

void DiagramObjectGluePoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
}

void DiagramObjectGluePoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void DiagramObjectGluePoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DiagramObjectGluePoint::declare()
{
	return BaseClassDefiner(DiagramObjectGluePoint::addConstructToMap, DiagramObjectGluePoint::addPrimitiveAssignFnsToMap, DiagramObjectGluePoint::addClassAssignFnsToMap, DiagramObjectGluePoint::debugName);
}

namespace CIMPP
{
	BaseClass* DiagramObjectGluePoint_factory()
	{
		return new DiagramObjectGluePoint;
	}
}
