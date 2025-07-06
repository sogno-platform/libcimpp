/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerTable.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PhaseTapChangerTablePoint.hpp"
#include "PhaseTapChangerTabular.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PhaseTapChangerTable(),
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
		{ "PhaseTapChangerTable.PhaseTapChangerTablePoint", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "PhaseTapChangerTable.PhaseTapChangerTabular", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

PhaseTapChangerTable::PhaseTapChangerTable() {}
PhaseTapChangerTable::~PhaseTapChangerTable() {}

const std::list<std::string>& PhaseTapChangerTable::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PhaseTapChangerTable::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PhaseTapChangerTable::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PhaseTapChangerTable::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PhaseTapChangerTable::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PhaseTapChangerTable::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PhaseTapChangerTable::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PhaseTapChangerTablePoint_PhaseTapChangerTable(BaseClass*, BaseClass*);
bool assign_PhaseTapChangerTable_PhaseTapChangerTablePoint(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PhaseTapChangerTable* element = dynamic_cast<PhaseTapChangerTable*>(BaseClass_ptr1);
	PhaseTapChangerTablePoint* element2 = dynamic_cast<PhaseTapChangerTablePoint*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->PhaseTapChangerTablePoint.begin(), element->PhaseTapChangerTablePoint.end(), element2) == element->PhaseTapChangerTablePoint.end())
		{
			element->PhaseTapChangerTablePoint.push_back(element2);
			return assign_PhaseTapChangerTablePoint_PhaseTapChangerTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PhaseTapChangerTabular_PhaseTapChangerTable(BaseClass*, BaseClass*);
bool assign_PhaseTapChangerTable_PhaseTapChangerTabular(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PhaseTapChangerTable* element = dynamic_cast<PhaseTapChangerTable*>(BaseClass_ptr1);
	PhaseTapChangerTabular* element2 = dynamic_cast<PhaseTapChangerTabular*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->PhaseTapChangerTabular.begin(), element->PhaseTapChangerTabular.end(), element2) == element->PhaseTapChangerTabular.end())
		{
			element->PhaseTapChangerTabular.push_back(element2);
			return assign_PhaseTapChangerTabular_PhaseTapChangerTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char PhaseTapChangerTable::debugName[] = "PhaseTapChangerTable";
const char* PhaseTapChangerTable::debugString() const
{
	return PhaseTapChangerTable::debugName;
}

void PhaseTapChangerTable::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PhaseTapChangerTable", &PhaseTapChangerTable_factory);
}

void PhaseTapChangerTable::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PhaseTapChangerTable::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PhaseTapChangerTable.PhaseTapChangerTablePoint", &assign_PhaseTapChangerTable_PhaseTapChangerTablePoint);
	assign_map.emplace("PhaseTapChangerTable.PhaseTapChangerTabular", &assign_PhaseTapChangerTable_PhaseTapChangerTabular);
}

void PhaseTapChangerTable::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void PhaseTapChangerTable::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void PhaseTapChangerTable::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool PhaseTapChangerTable::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PhaseTapChangerTable" &&
		dynamic_cast<PhaseTapChangerTable*>(otherObject) != nullptr;
}

const BaseClassDefiner PhaseTapChangerTable::declare()
{
	return BaseClassDefiner(PhaseTapChangerTable::addConstructToMap, PhaseTapChangerTable::addPrimitiveAssignFnsToMap, PhaseTapChangerTable::addClassAssignFnsToMap, PhaseTapChangerTable::debugName);
}

std::map<std::string, AttrDetails> PhaseTapChangerTable::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerTable_factory()
	{
		return new PhaseTapChangerTable;
	}
}
