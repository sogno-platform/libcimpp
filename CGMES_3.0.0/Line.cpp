/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Line.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SubGeographicalRegion.hpp"

using namespace CIMPP;

Line::Line() : Region(nullptr) {};
Line::~Line() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::EQBD,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Line.Region", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
};

std::list<CGMESProfile>
Line::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Line::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EquipmentContainer::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_SubGeographicalRegion_Lines(BaseClass*, BaseClass*);
bool assign_Line_Region(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Line* element = dynamic_cast<Line*>(BaseClass_ptr1);
	SubGeographicalRegion* element2 = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Region != element2)
		{
			element->Region = element2;
			return assign_SubGeographicalRegion_Lines(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_Line_Region(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const Line* element = dynamic_cast<const Line*>(BaseClass_ptr1))
	{
		if (element->Region != 0)
		{
			BaseClass_list.push_back(element->Region);
			return true;
		}
	}
	return false;
}


const char Line::debugName[] = "Line";
const char* Line::debugString() const
{
	return Line::debugName;
}

void Line::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Line"), &Line_factory));
}

void Line::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Line::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Line.Region"), &assign_Line_Region));
}

void Line::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addPrimitiveGetFnsToMap(get_map);
}

void Line::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquipmentContainer::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:Line.Region", &get_Line_Region);
}

void Line::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Line::declare()
{
	return BaseClassDefiner(Line::addConstructToMap, Line::addPrimitiveAssignFnsToMap, Line::addClassAssignFnsToMap, Line::debugName);
}

namespace CIMPP
{
	BaseClass* Line_factory()
	{
		return new Line;
	}
}
