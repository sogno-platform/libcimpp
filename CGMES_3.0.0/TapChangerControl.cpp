/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TapChangerControl.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "TapChanger.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TapChangerControl(),
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
		{ "TapChangerControl.TapChanger", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

TapChangerControl::TapChangerControl() {}
TapChangerControl::~TapChangerControl() {}

const std::list<std::string>& TapChangerControl::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TapChangerControl::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TapChangerControl::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TapChangerControl::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TapChangerControl::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TapChangerControl::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TapChangerControl::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_TapChanger_TapChangerControl(BaseClass*, BaseClass*);
bool assign_TapChangerControl_TapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TapChangerControl* element = dynamic_cast<TapChangerControl*>(BaseClass_ptr1);
	TapChanger* element2 = dynamic_cast<TapChanger*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TapChanger.begin(), element->TapChanger.end(), element2) == element->TapChanger.end())
		{
			element->TapChanger.push_back(element2);
			return assign_TapChanger_TapChangerControl(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char TapChangerControl::debugName[] = "TapChangerControl";
const char* TapChangerControl::debugString() const
{
	return TapChangerControl::debugName;
}

void TapChangerControl::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TapChangerControl", &TapChangerControl_factory);
}

void TapChangerControl::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void TapChangerControl::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("TapChangerControl.TapChanger", &assign_TapChangerControl_TapChanger);
}

void TapChangerControl::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingControl::addPrimitiveGetFnsToMap(get_map);
}

void TapChangerControl::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RegulatingControl::addClassGetFnsToMap(get_map);
}

void TapChangerControl::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingControl::addEnumGetFnsToMap(get_map);
}

bool TapChangerControl::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TapChangerControl" &&
		dynamic_cast<TapChangerControl*>(otherObject) != nullptr;
}

const BaseClassDefiner TapChangerControl::declare()
{
	return BaseClassDefiner(TapChangerControl::addConstructToMap, TapChangerControl::addPrimitiveAssignFnsToMap, TapChangerControl::addClassAssignFnsToMap, TapChangerControl::debugName);
}

std::map<std::string, AttrDetails> TapChangerControl::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = RegulatingControl::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TapChangerControl_factory()
	{
		return new TapChangerControl;
	}
}
