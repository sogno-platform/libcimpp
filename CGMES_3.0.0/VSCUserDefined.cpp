/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VSCUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		VSCUserDefined(),
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
		{ "VSCUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "VSCUserDefined.proprietary", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

VSCUserDefined::VSCUserDefined() {}
VSCUserDefined::~VSCUserDefined() {}

const std::list<std::string>& VSCUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& VSCUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& VSCUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& VSCUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& VSCUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& VSCUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& VSCUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_VSCUserDefined(BaseClass*, BaseClass*);
bool assign_VSCUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VSCUserDefined* element = dynamic_cast<VSCUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_VSCUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VSCUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VSCUserDefined* element = dynamic_cast<VSCUserDefined*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->proprietary;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_VSCUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VSCUserDefined* element = dynamic_cast<const VSCUserDefined*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->proprietary;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char VSCUserDefined::debugName[] = "VSCUserDefined";
const char* VSCUserDefined::debugString() const
{
	return VSCUserDefined::debugName;
}

void VSCUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("VSCUserDefined", &VSCUserDefined_factory);
}

void VSCUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("VSCUserDefined.proprietary", &assign_VSCUserDefined_proprietary);
}

void VSCUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("VSCUserDefined.ProprietaryParameterDynamics", &assign_VSCUserDefined_ProprietaryParameterDynamics);
}

void VSCUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VSCDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("VSCUserDefined.proprietary", &get_VSCUserDefined_proprietary);
}

void VSCUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	VSCDynamics::addClassGetFnsToMap(get_map);
}

void VSCUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VSCDynamics::addEnumGetFnsToMap(get_map);
}

bool VSCUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "VSCUserDefined" &&
		dynamic_cast<VSCUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner VSCUserDefined::declare()
{
	return BaseClassDefiner(VSCUserDefined::addConstructToMap, VSCUserDefined::addPrimitiveAssignFnsToMap, VSCUserDefined::addClassAssignFnsToMap, VSCUserDefined::debugName);
}

std::map<std::string, AttrDetails> VSCUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = VSCDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* VSCUserDefined_factory()
	{
		return new VSCUserDefined;
	}
}
