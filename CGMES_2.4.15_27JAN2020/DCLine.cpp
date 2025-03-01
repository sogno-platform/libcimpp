/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCLine.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SubGeographicalRegion.hpp"

using namespace CIMPP;

DCLine::DCLine() : Region(nullptr) {}
DCLine::~DCLine() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DCLine.Region", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
DCLine::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCLine::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DCEquipmentContainer::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_SubGeographicalRegion_DCLines(BaseClass*, BaseClass*);
bool assign_DCLine_Region(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCLine* element = dynamic_cast<DCLine*>(BaseClass_ptr1);
	SubGeographicalRegion* element2 = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Region != element2)
		{
			element->Region = element2;
			return assign_SubGeographicalRegion_DCLines(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_DCLine_Region(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const DCLine* element = dynamic_cast<const DCLine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Region != 0)
		{
			BaseClass_list.push_back(element->Region);
			return true;
		}
	}
	return false;
}

const char DCLine::debugName[] = "DCLine";
const char* DCLine::debugString() const
{
	return DCLine::debugName;
}

void DCLine::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DCLine", &DCLine_factory);
}

void DCLine::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCLine::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:DCLine.Region", &assign_DCLine_Region);
}

void DCLine::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCEquipmentContainer::addPrimitiveGetFnsToMap(get_map);
}

void DCLine::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCEquipmentContainer::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:DCLine.Region", &get_DCLine_Region);
}

void DCLine::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCEquipmentContainer::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DCLine::declare()
{
	return BaseClassDefiner(DCLine::addConstructToMap, DCLine::addPrimitiveAssignFnsToMap, DCLine::addClassAssignFnsToMap, DCLine::debugName);
}

namespace CIMPP
{
	BaseClass* DCLine_factory()
	{
		return new DCLine;
	}
}
