/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TurbineLoadControllerUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TurbineLoadControllerUserDefined(),
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
		{ "TurbineLoadControllerUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "TurbineLoadControllerUserDefined.proprietary", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

TurbineLoadControllerUserDefined::TurbineLoadControllerUserDefined() {}
TurbineLoadControllerUserDefined::~TurbineLoadControllerUserDefined() {}

const std::list<std::string>& TurbineLoadControllerUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TurbineLoadControllerUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TurbineLoadControllerUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TurbineLoadControllerUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TurbineLoadControllerUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TurbineLoadControllerUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TurbineLoadControllerUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined(BaseClass*, BaseClass*);
bool assign_TurbineLoadControllerUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TurbineLoadControllerUserDefined* element = dynamic_cast<TurbineLoadControllerUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TurbineLoadControllerUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbineLoadControllerUserDefined* element = dynamic_cast<TurbineLoadControllerUserDefined*>(BaseClass_ptr1);
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


bool get_TurbineLoadControllerUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbineLoadControllerUserDefined* element = dynamic_cast<const TurbineLoadControllerUserDefined*>(BaseClass_ptr1);
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

const char TurbineLoadControllerUserDefined::debugName[] = "TurbineLoadControllerUserDefined";
const char* TurbineLoadControllerUserDefined::debugString() const
{
	return TurbineLoadControllerUserDefined::debugName;
}

void TurbineLoadControllerUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TurbineLoadControllerUserDefined", &TurbineLoadControllerUserDefined_factory);
}

void TurbineLoadControllerUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("TurbineLoadControllerUserDefined.proprietary", &assign_TurbineLoadControllerUserDefined_proprietary);
}

void TurbineLoadControllerUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("TurbineLoadControllerUserDefined.ProprietaryParameterDynamics", &assign_TurbineLoadControllerUserDefined_ProprietaryParameterDynamics);
}

void TurbineLoadControllerUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineLoadControllerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("TurbineLoadControllerUserDefined.proprietary", &get_TurbineLoadControllerUserDefined_proprietary);
}

void TurbineLoadControllerUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineLoadControllerDynamics::addClassGetFnsToMap(get_map);
}

void TurbineLoadControllerUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineLoadControllerDynamics::addEnumGetFnsToMap(get_map);
}

bool TurbineLoadControllerUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TurbineLoadControllerUserDefined" &&
		dynamic_cast<TurbineLoadControllerUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner TurbineLoadControllerUserDefined::declare()
{
	return BaseClassDefiner(TurbineLoadControllerUserDefined::addConstructToMap, TurbineLoadControllerUserDefined::addPrimitiveAssignFnsToMap, TurbineLoadControllerUserDefined::addClassAssignFnsToMap, TurbineLoadControllerUserDefined::debugName);
}

std::map<std::string, AttrDetails> TurbineLoadControllerUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineLoadControllerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TurbineLoadControllerUserDefined_factory()
	{
		return new TurbineLoadControllerUserDefined;
	}
}
