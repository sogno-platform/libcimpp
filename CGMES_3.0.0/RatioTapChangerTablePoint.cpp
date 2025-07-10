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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		RatioTapChangerTablePoint(),
		"http://iec.ch/TC57/CIM100#",
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
		{ "RatioTapChangerTablePoint.RatioTapChangerTable", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

RatioTapChangerTablePoint::RatioTapChangerTablePoint() : RatioTapChangerTable(nullptr) {}
RatioTapChangerTablePoint::~RatioTapChangerTablePoint() {}

const std::list<std::string>& RatioTapChangerTablePoint::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& RatioTapChangerTablePoint::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& RatioTapChangerTablePoint::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& RatioTapChangerTablePoint::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& RatioTapChangerTablePoint::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& RatioTapChangerTablePoint::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& RatioTapChangerTablePoint::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("RatioTapChangerTablePoint", &RatioTapChangerTablePoint_factory);
}

void RatioTapChangerTablePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void RatioTapChangerTablePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("RatioTapChangerTablePoint.RatioTapChangerTable", &assign_RatioTapChangerTablePoint_RatioTapChangerTable);
}

void RatioTapChangerTablePoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TapChangerTablePoint::addPrimitiveGetFnsToMap(get_map);
}

void RatioTapChangerTablePoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TapChangerTablePoint::addClassGetFnsToMap(get_map);
	get_map.emplace("RatioTapChangerTablePoint.RatioTapChangerTable", &get_RatioTapChangerTablePoint_RatioTapChangerTable);
}

void RatioTapChangerTablePoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TapChangerTablePoint::addEnumGetFnsToMap(get_map);
}

bool RatioTapChangerTablePoint::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "RatioTapChangerTablePoint" &&
		dynamic_cast<RatioTapChangerTablePoint*>(otherObject) != nullptr;
}

const BaseClassDefiner RatioTapChangerTablePoint::declare()
{
	return BaseClassDefiner(RatioTapChangerTablePoint::addConstructToMap, RatioTapChangerTablePoint::addPrimitiveAssignFnsToMap, RatioTapChangerTablePoint::addClassAssignFnsToMap, RatioTapChangerTablePoint::debugName);
}

std::map<std::string, AttrDetails> RatioTapChangerTablePoint::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TapChangerTablePoint::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* RatioTapChangerTablePoint_factory()
	{
		return new RatioTapChangerTablePoint;
	}
}
