/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SubGeographicalRegion.hpp"

#include <algorithm>
#include <sstream>

#include "DCLine.hpp"
#include "Line.hpp"
#include "GeographicalRegion.hpp"
#include "Substation.hpp"

using namespace CIMPP;

SubGeographicalRegion::SubGeographicalRegion() : Region(nullptr) {};
SubGeographicalRegion::~SubGeographicalRegion() {};







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
