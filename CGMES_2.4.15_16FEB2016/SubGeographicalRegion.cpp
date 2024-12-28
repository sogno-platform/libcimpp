/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SubGeographicalRegion.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DCLine.hpp"
#include "Line.hpp"
#include "GeographicalRegion.hpp"
#include "Substation.hpp"

using namespace CIMPP;

SubGeographicalRegion::SubGeographicalRegion() : Region(nullptr) {};
SubGeographicalRegion::~SubGeographicalRegion() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ_BD,
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SubGeographicalRegion.DCLines", { CGMESProfile::EQ, } },
	{ "cim:SubGeographicalRegion.Lines", { CGMESProfile::EQ_BD, CGMESProfile::EQ, } },
	{ "cim:SubGeographicalRegion.Region", { CGMESProfile::EQ_BD, CGMESProfile::EQ, } },
	{ "cim:SubGeographicalRegion.Substations", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
SubGeographicalRegion::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SubGeographicalRegion::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_DCLine_Region(BaseClass*, BaseClass*);
bool assign_SubGeographicalRegion_DCLines(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SubGeographicalRegion* element = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr1);
	DCLine* element2 = dynamic_cast<DCLine*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCLines.begin(), element->DCLines.end(), element2) == element->DCLines.end())
		{
			element->DCLines.push_back(element2);
			return assign_DCLine_Region(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_Line_Region(BaseClass*, BaseClass*);
bool assign_SubGeographicalRegion_Lines(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SubGeographicalRegion* element = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr1);
	Line* element2 = dynamic_cast<Line*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Lines.begin(), element->Lines.end(), element2) == element->Lines.end())
		{
			element->Lines.push_back(element2);
			return assign_Line_Region(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_GeographicalRegion_Regions(BaseClass*, BaseClass*);
bool assign_SubGeographicalRegion_Region(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SubGeographicalRegion* element = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr1);
	GeographicalRegion* element2 = dynamic_cast<GeographicalRegion*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Region != element2)
		{
			element->Region = element2;
			return assign_GeographicalRegion_Regions(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_Substation_Region(BaseClass*, BaseClass*);
bool assign_SubGeographicalRegion_Substations(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SubGeographicalRegion* element = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr1);
	Substation* element2 = dynamic_cast<Substation*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Substations.begin(), element->Substations.end(), element2) == element->Substations.end())
		{
			element->Substations.push_back(element2);
			return assign_Substation_Region(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_SubGeographicalRegion_Region(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const SubGeographicalRegion* element = dynamic_cast<const SubGeographicalRegion*>(BaseClass_ptr1))
	{
		if (element->Region != 0)
		{
			BaseClass_list.push_back(element->Region);
			return true;
		}
	}
	return false;
}


const char SubGeographicalRegion::debugName[] = "SubGeographicalRegion";
const char* SubGeographicalRegion::debugString() const
{
	return SubGeographicalRegion::debugName;
}

void SubGeographicalRegion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SubGeographicalRegion"), &SubGeographicalRegion_factory));
}

void SubGeographicalRegion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SubGeographicalRegion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SubGeographicalRegion.DCLines"), &assign_SubGeographicalRegion_DCLines));
	assign_map.insert(std::make_pair(std::string("cim:SubGeographicalRegion.Lines"), &assign_SubGeographicalRegion_Lines));
	assign_map.insert(std::make_pair(std::string("cim:SubGeographicalRegion.Region"), &assign_SubGeographicalRegion_Region));
	assign_map.insert(std::make_pair(std::string("cim:SubGeographicalRegion.Substations"), &assign_SubGeographicalRegion_Substations));
}

void SubGeographicalRegion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void SubGeographicalRegion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:SubGeographicalRegion.Region", &get_SubGeographicalRegion_Region);
}

void SubGeographicalRegion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SubGeographicalRegion::declare()
{
	return BaseClassDefiner(SubGeographicalRegion::addConstructToMap, SubGeographicalRegion::addPrimitiveAssignFnsToMap, SubGeographicalRegion::addClassAssignFnsToMap, SubGeographicalRegion::debugName);
}

namespace CIMPP
{
	BaseClass* SubGeographicalRegion_factory()
	{
		return new SubGeographicalRegion;
	}
}
