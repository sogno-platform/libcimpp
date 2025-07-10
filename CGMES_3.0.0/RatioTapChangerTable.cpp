/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RatioTapChangerTable.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "RatioTapChanger.hpp"
#include "RatioTapChangerTablePoint.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		RatioTapChangerTable(),
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
		{ "RatioTapChangerTable.RatioTapChanger", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "RatioTapChangerTable.RatioTapChangerTablePoint", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

RatioTapChangerTable::RatioTapChangerTable() {}
RatioTapChangerTable::~RatioTapChangerTable() {}

const std::list<std::string>& RatioTapChangerTable::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& RatioTapChangerTable::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& RatioTapChangerTable::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& RatioTapChangerTable::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& RatioTapChangerTable::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& RatioTapChangerTable::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& RatioTapChangerTable::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_RatioTapChanger_RatioTapChangerTable(BaseClass*, BaseClass*);
bool assign_RatioTapChangerTable_RatioTapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RatioTapChangerTable* element = dynamic_cast<RatioTapChangerTable*>(BaseClass_ptr1);
	RatioTapChanger* element2 = dynamic_cast<RatioTapChanger*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->RatioTapChanger.begin(), element->RatioTapChanger.end(), element2) == element->RatioTapChanger.end())
		{
			element->RatioTapChanger.push_back(element2);
			return assign_RatioTapChanger_RatioTapChangerTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RatioTapChangerTablePoint_RatioTapChangerTable(BaseClass*, BaseClass*);
bool assign_RatioTapChangerTable_RatioTapChangerTablePoint(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RatioTapChangerTable* element = dynamic_cast<RatioTapChangerTable*>(BaseClass_ptr1);
	RatioTapChangerTablePoint* element2 = dynamic_cast<RatioTapChangerTablePoint*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->RatioTapChangerTablePoint.begin(), element->RatioTapChangerTablePoint.end(), element2) == element->RatioTapChangerTablePoint.end())
		{
			element->RatioTapChangerTablePoint.push_back(element2);
			return assign_RatioTapChangerTablePoint_RatioTapChangerTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char RatioTapChangerTable::debugName[] = "RatioTapChangerTable";
const char* RatioTapChangerTable::debugString() const
{
	return RatioTapChangerTable::debugName;
}

void RatioTapChangerTable::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("RatioTapChangerTable", &RatioTapChangerTable_factory);
}

void RatioTapChangerTable::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void RatioTapChangerTable::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("RatioTapChangerTable.RatioTapChanger", &assign_RatioTapChangerTable_RatioTapChanger);
	assign_map.emplace("RatioTapChangerTable.RatioTapChangerTablePoint", &assign_RatioTapChangerTable_RatioTapChangerTablePoint);
}

void RatioTapChangerTable::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void RatioTapChangerTable::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void RatioTapChangerTable::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool RatioTapChangerTable::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "RatioTapChangerTable" &&
		dynamic_cast<RatioTapChangerTable*>(otherObject) != nullptr;
}

const BaseClassDefiner RatioTapChangerTable::declare()
{
	return BaseClassDefiner(RatioTapChangerTable::addConstructToMap, RatioTapChangerTable::addPrimitiveAssignFnsToMap, RatioTapChangerTable::addClassAssignFnsToMap, RatioTapChangerTable::debugName);
}

std::map<std::string, AttrDetails> RatioTapChangerTable::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* RatioTapChangerTable_factory()
	{
		return new RatioTapChangerTable;
	}
}
