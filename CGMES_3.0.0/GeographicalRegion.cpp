/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GeographicalRegion.hpp"

#include <algorithm>
#include <sstream>

#include "SubGeographicalRegion.hpp"

using namespace CIMPP;

GeographicalRegion::GeographicalRegion() {};
GeographicalRegion::~GeographicalRegion() {};




bool assign_SubGeographicalRegion_Region(BaseClass*, BaseClass*);
bool assign_GeographicalRegion_Regions(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	GeographicalRegion* element = dynamic_cast<GeographicalRegion*>(BaseClass_ptr1);
	SubGeographicalRegion* element2 = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Regions.begin(), element->Regions.end(), element2) == element->Regions.end())
		{
			element->Regions.push_back(element2);
			return assign_SubGeographicalRegion_Region(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char GeographicalRegion::debugName[] = "GeographicalRegion";
const char* GeographicalRegion::debugString() const
{
	return GeographicalRegion::debugName;
}

void GeographicalRegion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GeographicalRegion"), &GeographicalRegion_factory));
}

void GeographicalRegion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void GeographicalRegion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GeographicalRegion.Regions"), &assign_GeographicalRegion_Regions));
}

const BaseClassDefiner GeographicalRegion::declare()
{
	return BaseClassDefiner(GeographicalRegion::addConstructToMap, GeographicalRegion::addPrimitiveAssignFnsToMap, GeographicalRegion::addClassAssignFnsToMap, GeographicalRegion::debugName);
}

namespace CIMPP
{
	BaseClass* GeographicalRegion_factory()
	{
		return new GeographicalRegion;
	}
}
