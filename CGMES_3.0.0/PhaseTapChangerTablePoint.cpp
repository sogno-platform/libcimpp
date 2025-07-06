/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerTablePoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PhaseTapChangerTable.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PhaseTapChangerTablePoint(),
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
		{ "PhaseTapChangerTablePoint.PhaseTapChangerTable", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "PhaseTapChangerTablePoint.angle", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

PhaseTapChangerTablePoint::PhaseTapChangerTablePoint() : PhaseTapChangerTable(nullptr) {}
PhaseTapChangerTablePoint::~PhaseTapChangerTablePoint() {}

const std::list<std::string>& PhaseTapChangerTablePoint::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PhaseTapChangerTablePoint::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PhaseTapChangerTablePoint::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PhaseTapChangerTablePoint::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PhaseTapChangerTablePoint::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PhaseTapChangerTablePoint::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PhaseTapChangerTablePoint::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PhaseTapChangerTable_PhaseTapChangerTablePoint(BaseClass*, BaseClass*);
bool assign_PhaseTapChangerTablePoint_PhaseTapChangerTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PhaseTapChangerTablePoint* element = dynamic_cast<PhaseTapChangerTablePoint*>(BaseClass_ptr1);
	PhaseTapChangerTable* element2 = dynamic_cast<PhaseTapChangerTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PhaseTapChangerTable != element2)
		{
			element->PhaseTapChangerTable = element2;
			return assign_PhaseTapChangerTable_PhaseTapChangerTablePoint(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PhaseTapChangerTablePoint_angle(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PhaseTapChangerTablePoint* element = dynamic_cast<PhaseTapChangerTablePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->angle;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PhaseTapChangerTablePoint_PhaseTapChangerTable(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const PhaseTapChangerTablePoint* element = dynamic_cast<const PhaseTapChangerTablePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->PhaseTapChangerTable != 0)
		{
			BaseClass_list.push_back(element->PhaseTapChangerTable);
			return true;
		}
	}
	return false;
}

bool get_PhaseTapChangerTablePoint_angle(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PhaseTapChangerTablePoint* element = dynamic_cast<const PhaseTapChangerTablePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->angle;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PhaseTapChangerTablePoint::debugName[] = "PhaseTapChangerTablePoint";
const char* PhaseTapChangerTablePoint::debugString() const
{
	return PhaseTapChangerTablePoint::debugName;
}

void PhaseTapChangerTablePoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PhaseTapChangerTablePoint", &PhaseTapChangerTablePoint_factory);
}

void PhaseTapChangerTablePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PhaseTapChangerTablePoint.angle", &assign_PhaseTapChangerTablePoint_angle);
}

void PhaseTapChangerTablePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PhaseTapChangerTablePoint.PhaseTapChangerTable", &assign_PhaseTapChangerTablePoint_PhaseTapChangerTable);
}

void PhaseTapChangerTablePoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TapChangerTablePoint::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PhaseTapChangerTablePoint.angle", &get_PhaseTapChangerTablePoint_angle);
}

void PhaseTapChangerTablePoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TapChangerTablePoint::addClassGetFnsToMap(get_map);
	get_map.emplace("PhaseTapChangerTablePoint.PhaseTapChangerTable", &get_PhaseTapChangerTablePoint_PhaseTapChangerTable);
}

void PhaseTapChangerTablePoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TapChangerTablePoint::addEnumGetFnsToMap(get_map);
}

bool PhaseTapChangerTablePoint::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PhaseTapChangerTablePoint" &&
		dynamic_cast<PhaseTapChangerTablePoint*>(otherObject) != nullptr;
}

const BaseClassDefiner PhaseTapChangerTablePoint::declare()
{
	return BaseClassDefiner(PhaseTapChangerTablePoint::addConstructToMap, PhaseTapChangerTablePoint::addPrimitiveAssignFnsToMap, PhaseTapChangerTablePoint::addClassAssignFnsToMap, PhaseTapChangerTablePoint::debugName);
}

std::map<std::string, AttrDetails> PhaseTapChangerTablePoint::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TapChangerTablePoint::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerTablePoint_factory()
	{
		return new PhaseTapChangerTablePoint;
	}
}
