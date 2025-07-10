/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerTabular.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PhaseTapChangerTable.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PhaseTapChangerTabular(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SSH,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "PhaseTapChangerTabular.PhaseTapChangerTable", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

PhaseTapChangerTabular::PhaseTapChangerTabular() : PhaseTapChangerTable(nullptr) {}
PhaseTapChangerTabular::~PhaseTapChangerTabular() {}

const std::list<std::string>& PhaseTapChangerTabular::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PhaseTapChangerTabular::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PhaseTapChangerTabular::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PhaseTapChangerTabular::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PhaseTapChangerTabular::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PhaseTapChangerTabular::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PhaseTapChangerTabular::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PhaseTapChangerTable_PhaseTapChangerTabular(BaseClass*, BaseClass*);
bool assign_PhaseTapChangerTabular_PhaseTapChangerTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PhaseTapChangerTabular* element = dynamic_cast<PhaseTapChangerTabular*>(BaseClass_ptr1);
	PhaseTapChangerTable* element2 = dynamic_cast<PhaseTapChangerTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PhaseTapChangerTable != element2)
		{
			element->PhaseTapChangerTable = element2;
			return assign_PhaseTapChangerTable_PhaseTapChangerTabular(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_PhaseTapChangerTabular_PhaseTapChangerTable(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const PhaseTapChangerTabular* element = dynamic_cast<const PhaseTapChangerTabular*>(BaseClass_ptr1);
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

const char PhaseTapChangerTabular::debugName[] = "PhaseTapChangerTabular";
const char* PhaseTapChangerTabular::debugString() const
{
	return PhaseTapChangerTabular::debugName;
}

void PhaseTapChangerTabular::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PhaseTapChangerTabular", &PhaseTapChangerTabular_factory);
}

void PhaseTapChangerTabular::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PhaseTapChangerTabular::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PhaseTapChangerTabular.PhaseTapChangerTable", &assign_PhaseTapChangerTabular_PhaseTapChangerTable);
}

void PhaseTapChangerTabular::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChanger::addPrimitiveGetFnsToMap(get_map);
}

void PhaseTapChangerTabular::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PhaseTapChanger::addClassGetFnsToMap(get_map);
	get_map.emplace("PhaseTapChangerTabular.PhaseTapChangerTable", &get_PhaseTapChangerTabular_PhaseTapChangerTable);
}

void PhaseTapChangerTabular::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChanger::addEnumGetFnsToMap(get_map);
}

bool PhaseTapChangerTabular::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PhaseTapChangerTabular" &&
		dynamic_cast<PhaseTapChangerTabular*>(otherObject) != nullptr;
}

const BaseClassDefiner PhaseTapChangerTabular::declare()
{
	return BaseClassDefiner(PhaseTapChangerTabular::addConstructToMap, PhaseTapChangerTabular::addPrimitiveAssignFnsToMap, PhaseTapChangerTabular::addClassAssignFnsToMap, PhaseTapChangerTabular::debugName);
}

std::map<std::string, AttrDetails> PhaseTapChangerTabular::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PhaseTapChanger::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerTabular_factory()
	{
		return new PhaseTapChangerTabular;
	}
}
