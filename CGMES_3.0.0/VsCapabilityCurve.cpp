/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VsCapabilityCurve.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "VsConverter.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		VsCapabilityCurve(),
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
		{ "VsCapabilityCurve.VsConverterDCSides", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

VsCapabilityCurve::VsCapabilityCurve() {}
VsCapabilityCurve::~VsCapabilityCurve() {}

const std::list<std::string>& VsCapabilityCurve::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& VsCapabilityCurve::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& VsCapabilityCurve::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& VsCapabilityCurve::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& VsCapabilityCurve::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& VsCapabilityCurve::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& VsCapabilityCurve::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_VsConverter_CapabilityCurve(BaseClass*, BaseClass*);
bool assign_VsCapabilityCurve_VsConverterDCSides(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VsCapabilityCurve* element = dynamic_cast<VsCapabilityCurve*>(BaseClass_ptr1);
	VsConverter* element2 = dynamic_cast<VsConverter*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->VsConverterDCSides.begin(), element->VsConverterDCSides.end(), element2) == element->VsConverterDCSides.end())
		{
			element->VsConverterDCSides.push_back(element2);
			return assign_VsConverter_CapabilityCurve(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char VsCapabilityCurve::debugName[] = "VsCapabilityCurve";
const char* VsCapabilityCurve::debugString() const
{
	return VsCapabilityCurve::debugName;
}

void VsCapabilityCurve::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("VsCapabilityCurve", &VsCapabilityCurve_factory);
}

void VsCapabilityCurve::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void VsCapabilityCurve::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("VsCapabilityCurve.VsConverterDCSides", &assign_VsCapabilityCurve_VsConverterDCSides);
}

void VsCapabilityCurve::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Curve::addPrimitiveGetFnsToMap(get_map);
}

void VsCapabilityCurve::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Curve::addClassGetFnsToMap(get_map);
}

void VsCapabilityCurve::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Curve::addEnumGetFnsToMap(get_map);
}

bool VsCapabilityCurve::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "VsCapabilityCurve" &&
		dynamic_cast<VsCapabilityCurve*>(otherObject) != nullptr;
}

const BaseClassDefiner VsCapabilityCurve::declare()
{
	return BaseClassDefiner(VsCapabilityCurve::addConstructToMap, VsCapabilityCurve::addPrimitiveAssignFnsToMap, VsCapabilityCurve::addClassAssignFnsToMap, VsCapabilityCurve::debugName);
}

std::map<std::string, AttrDetails> VsCapabilityCurve::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Curve::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* VsCapabilityCurve_factory()
	{
		return new VsCapabilityCurve;
	}
}
