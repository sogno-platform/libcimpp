/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VSCDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "VsConverter.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		VSCDynamics(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "VSCDynamics.VsConverter", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

VSCDynamics::VSCDynamics() : VsConverter(nullptr) {}
VSCDynamics::~VSCDynamics() {}

const std::list<std::string>& VSCDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& VSCDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& VSCDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& VSCDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& VSCDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& VSCDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& VSCDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_VsConverter_VSCDynamics(BaseClass*, BaseClass*);
bool assign_VSCDynamics_VsConverter(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VSCDynamics* element = dynamic_cast<VSCDynamics*>(BaseClass_ptr1);
	VsConverter* element2 = dynamic_cast<VsConverter*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VsConverter != element2)
		{
			element->VsConverter = element2;
			return assign_VsConverter_VSCDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_VSCDynamics_VsConverter(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const VSCDynamics* element = dynamic_cast<const VSCDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->VsConverter != 0)
		{
			BaseClass_list.push_back(element->VsConverter);
			return true;
		}
	}
	return false;
}

const char VSCDynamics::debugName[] = "VSCDynamics";
const char* VSCDynamics::debugString() const
{
	return VSCDynamics::debugName;
}

void VSCDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("VSCDynamics", &VSCDynamics_factory);
}

void VSCDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void VSCDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("VSCDynamics.VsConverter", &assign_VSCDynamics_VsConverter);
}

void VSCDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	HVDCDynamics::addPrimitiveGetFnsToMap(get_map);
}

void VSCDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	HVDCDynamics::addClassGetFnsToMap(get_map);
	get_map.emplace("VSCDynamics.VsConverter", &get_VSCDynamics_VsConverter);
}

void VSCDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	HVDCDynamics::addEnumGetFnsToMap(get_map);
}

bool VSCDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "VSCDynamics" &&
		dynamic_cast<VSCDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner VSCDynamics::declare()
{
	return BaseClassDefiner(VSCDynamics::addConstructToMap, VSCDynamics::addPrimitiveAssignFnsToMap, VSCDynamics::addClassAssignFnsToMap, VSCDynamics::debugName);
}

std::map<std::string, AttrDetails> VSCDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = HVDCDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* VSCDynamics_factory()
	{
		return new VSCDynamics;
	}
}
