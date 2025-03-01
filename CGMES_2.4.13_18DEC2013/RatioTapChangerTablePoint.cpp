/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RatioTapChangerTablePoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "RatioTapChangerTable.hpp"

using namespace CIMPP;

RatioTapChangerTablePoint::RatioTapChangerTablePoint() : RatioTapChangerTable(nullptr) {}
RatioTapChangerTablePoint::~RatioTapChangerTablePoint() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:RatioTapChangerTablePoint.RatioTapChangerTable", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
RatioTapChangerTablePoint::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
RatioTapChangerTablePoint::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TapChangerTablePoint::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_RatioTapChangerTable_RatioTapChangerTablePoint(BaseClass*, BaseClass*);
bool assign_RatioTapChangerTablePoint_RatioTapChangerTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RatioTapChangerTablePoint* element = dynamic_cast<RatioTapChangerTablePoint*>(BaseClass_ptr1);
	RatioTapChangerTable* element2 = dynamic_cast<RatioTapChangerTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RatioTapChangerTable != element2)
		{
			element->RatioTapChangerTable = element2;
			return assign_RatioTapChangerTable_RatioTapChangerTablePoint(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_RatioTapChangerTablePoint_RatioTapChangerTable(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const RatioTapChangerTablePoint* element = dynamic_cast<const RatioTapChangerTablePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->RatioTapChangerTable != 0)
		{
			BaseClass_list.push_back(element->RatioTapChangerTable);
			return true;
		}
	}
	return false;
}

const char RatioTapChangerTablePoint::debugName[] = "RatioTapChangerTablePoint";
const char* RatioTapChangerTablePoint::debugString() const
{
	return RatioTapChangerTablePoint::debugName;
}

void RatioTapChangerTablePoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:RatioTapChangerTablePoint", &RatioTapChangerTablePoint_factory);
}

void RatioTapChangerTablePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void RatioTapChangerTablePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:RatioTapChangerTablePoint.RatioTapChangerTable", &assign_RatioTapChangerTablePoint_RatioTapChangerTable);
}

void RatioTapChangerTablePoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TapChangerTablePoint::addPrimitiveGetFnsToMap(get_map);
}

void RatioTapChangerTablePoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TapChangerTablePoint::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:RatioTapChangerTablePoint.RatioTapChangerTable", &get_RatioTapChangerTablePoint_RatioTapChangerTable);
}

void RatioTapChangerTablePoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TapChangerTablePoint::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner RatioTapChangerTablePoint::declare()
{
	return BaseClassDefiner(RatioTapChangerTablePoint::addConstructToMap, RatioTapChangerTablePoint::addPrimitiveAssignFnsToMap, RatioTapChangerTablePoint::addClassAssignFnsToMap, RatioTapChangerTablePoint::debugName);
}

namespace CIMPP
{
	BaseClass* RatioTapChangerTablePoint_factory()
	{
		return new RatioTapChangerTablePoint;
	}
}
