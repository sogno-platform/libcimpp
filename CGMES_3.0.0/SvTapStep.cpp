/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SvTapStep.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "TapChanger.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SvTapStep(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::SV,
		},
		CGMESProfile::SV
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "SvTapStep.TapChanger", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
		{ "SvTapStep.position", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
	};
    return ClassAttrDetailsMap;
}

SvTapStep::SvTapStep() : TapChanger(nullptr) {}
SvTapStep::~SvTapStep() {}

const std::list<std::string>& SvTapStep::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SvTapStep::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SvTapStep::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SvTapStep::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SvTapStep::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SvTapStep::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SvTapStep::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_TapChanger_SvTapStep(BaseClass*, BaseClass*);
bool assign_SvTapStep_TapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SvTapStep* element = dynamic_cast<SvTapStep*>(BaseClass_ptr1);
	TapChanger* element2 = dynamic_cast<TapChanger*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TapChanger != element2)
		{
			element->TapChanger = element2;
			return assign_TapChanger_SvTapStep(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SvTapStep_position(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SvTapStep* element = dynamic_cast<SvTapStep*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->position;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_SvTapStep_TapChanger(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SvTapStep* element = dynamic_cast<const SvTapStep*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->TapChanger != 0)
		{
			BaseClass_list.push_back(element->TapChanger);
			return true;
		}
	}
	return false;
}

bool get_SvTapStep_position(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SvTapStep* element = dynamic_cast<const SvTapStep*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->position;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char SvTapStep::debugName[] = "SvTapStep";
const char* SvTapStep::debugString() const
{
	return SvTapStep::debugName;
}

void SvTapStep::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SvTapStep", &SvTapStep_factory);
}

void SvTapStep::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("SvTapStep.position", &assign_SvTapStep_position);
}

void SvTapStep::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("SvTapStep.TapChanger", &assign_SvTapStep_TapChanger);
}

void SvTapStep::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("SvTapStep.position", &get_SvTapStep_position);
}

void SvTapStep::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("SvTapStep.TapChanger", &get_SvTapStep_TapChanger);
}

void SvTapStep::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool SvTapStep::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SvTapStep" &&
		dynamic_cast<SvTapStep*>(otherObject) != nullptr;
}

const BaseClassDefiner SvTapStep::declare()
{
	return BaseClassDefiner(SvTapStep::addConstructToMap, SvTapStep::addPrimitiveAssignFnsToMap, SvTapStep::addClassAssignFnsToMap, SvTapStep::debugName);
}

std::map<std::string, AttrDetails> SvTapStep::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SvTapStep_factory()
	{
		return new SvTapStep;
	}
}
