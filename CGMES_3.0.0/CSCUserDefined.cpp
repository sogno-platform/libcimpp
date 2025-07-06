/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CSCUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		CSCUserDefined(),
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
		{ "CSCUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "CSCUserDefined.proprietary", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

CSCUserDefined::CSCUserDefined() {}
CSCUserDefined::~CSCUserDefined() {}

const std::list<std::string>& CSCUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& CSCUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& CSCUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& CSCUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& CSCUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& CSCUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& CSCUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_CSCUserDefined(BaseClass*, BaseClass*);
bool assign_CSCUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CSCUserDefined* element = dynamic_cast<CSCUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_CSCUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_CSCUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CSCUserDefined* element = dynamic_cast<CSCUserDefined*>(BaseClass_ptr1);
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


bool get_CSCUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CSCUserDefined* element = dynamic_cast<const CSCUserDefined*>(BaseClass_ptr1);
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

const char CSCUserDefined::debugName[] = "CSCUserDefined";
const char* CSCUserDefined::debugString() const
{
	return CSCUserDefined::debugName;
}

void CSCUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("CSCUserDefined", &CSCUserDefined_factory);
}

void CSCUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("CSCUserDefined.proprietary", &assign_CSCUserDefined_proprietary);
}

void CSCUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("CSCUserDefined.ProprietaryParameterDynamics", &assign_CSCUserDefined_ProprietaryParameterDynamics);
}

void CSCUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	CSCDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("CSCUserDefined.proprietary", &get_CSCUserDefined_proprietary);
}

void CSCUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	CSCDynamics::addClassGetFnsToMap(get_map);
}

void CSCUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	CSCDynamics::addEnumGetFnsToMap(get_map);
}

bool CSCUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "CSCUserDefined" &&
		dynamic_cast<CSCUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner CSCUserDefined::declare()
{
	return BaseClassDefiner(CSCUserDefined::addConstructToMap, CSCUserDefined::addPrimitiveAssignFnsToMap, CSCUserDefined::addClassAssignFnsToMap, CSCUserDefined::debugName);
}

std::map<std::string, AttrDetails> CSCUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = CSCDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* CSCUserDefined_factory()
	{
		return new CSCUserDefined;
	}
}
