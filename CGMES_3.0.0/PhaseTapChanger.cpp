/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChanger.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "TransformerEnd.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PhaseTapChanger(),
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
		{ "PhaseTapChanger.TransformerEnd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

PhaseTapChanger::PhaseTapChanger() : TransformerEnd(nullptr) {}
PhaseTapChanger::~PhaseTapChanger() {}

const std::list<std::string>& PhaseTapChanger::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PhaseTapChanger::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PhaseTapChanger::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PhaseTapChanger::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PhaseTapChanger::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PhaseTapChanger::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PhaseTapChanger::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_TransformerEnd_PhaseTapChanger(BaseClass*, BaseClass*);
bool assign_PhaseTapChanger_TransformerEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PhaseTapChanger* element = dynamic_cast<PhaseTapChanger*>(BaseClass_ptr1);
	TransformerEnd* element2 = dynamic_cast<TransformerEnd*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TransformerEnd != element2)
		{
			element->TransformerEnd = element2;
			return assign_TransformerEnd_PhaseTapChanger(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_PhaseTapChanger_TransformerEnd(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const PhaseTapChanger* element = dynamic_cast<const PhaseTapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->TransformerEnd != 0)
		{
			BaseClass_list.push_back(element->TransformerEnd);
			return true;
		}
	}
	return false;
}

const char PhaseTapChanger::debugName[] = "PhaseTapChanger";
const char* PhaseTapChanger::debugString() const
{
	return PhaseTapChanger::debugName;
}

void PhaseTapChanger::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PhaseTapChanger", &PhaseTapChanger_factory);
}

void PhaseTapChanger::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PhaseTapChanger::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PhaseTapChanger.TransformerEnd", &assign_PhaseTapChanger_TransformerEnd);
}

void PhaseTapChanger::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TapChanger::addPrimitiveGetFnsToMap(get_map);
}

void PhaseTapChanger::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TapChanger::addClassGetFnsToMap(get_map);
	get_map.emplace("PhaseTapChanger.TransformerEnd", &get_PhaseTapChanger_TransformerEnd);
}

void PhaseTapChanger::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TapChanger::addEnumGetFnsToMap(get_map);
}

bool PhaseTapChanger::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PhaseTapChanger" &&
		dynamic_cast<PhaseTapChanger*>(otherObject) != nullptr;
}

const BaseClassDefiner PhaseTapChanger::declare()
{
	return BaseClassDefiner(PhaseTapChanger::addConstructToMap, PhaseTapChanger::addPrimitiveAssignFnsToMap, PhaseTapChanger::addClassAssignFnsToMap, PhaseTapChanger::debugName);
}

std::map<std::string, AttrDetails> PhaseTapChanger::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TapChanger::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PhaseTapChanger_factory()
	{
		return new PhaseTapChanger;
	}
}
