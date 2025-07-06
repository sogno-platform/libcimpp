/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MechanicalLoadUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		MechanicalLoadUserDefined(),
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
		{ "MechanicalLoadUserDefined.ProprietaryParameterDynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "MechanicalLoadUserDefined.proprietary", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

MechanicalLoadUserDefined::MechanicalLoadUserDefined() {}
MechanicalLoadUserDefined::~MechanicalLoadUserDefined() {}

const std::list<std::string>& MechanicalLoadUserDefined::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& MechanicalLoadUserDefined::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& MechanicalLoadUserDefined::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& MechanicalLoadUserDefined::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& MechanicalLoadUserDefined::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& MechanicalLoadUserDefined::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& MechanicalLoadUserDefined::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ProprietaryParameterDynamics_MechanicalLoadUserDefined(BaseClass*, BaseClass*);
bool assign_MechanicalLoadUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MechanicalLoadUserDefined* element = dynamic_cast<MechanicalLoadUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_MechanicalLoadUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_MechanicalLoadUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MechanicalLoadUserDefined* element = dynamic_cast<MechanicalLoadUserDefined*>(BaseClass_ptr1);
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


bool get_MechanicalLoadUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MechanicalLoadUserDefined* element = dynamic_cast<const MechanicalLoadUserDefined*>(BaseClass_ptr1);
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

const char MechanicalLoadUserDefined::debugName[] = "MechanicalLoadUserDefined";
const char* MechanicalLoadUserDefined::debugString() const
{
	return MechanicalLoadUserDefined::debugName;
}

void MechanicalLoadUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("MechanicalLoadUserDefined", &MechanicalLoadUserDefined_factory);
}

void MechanicalLoadUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("MechanicalLoadUserDefined.proprietary", &assign_MechanicalLoadUserDefined_proprietary);
}

void MechanicalLoadUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("MechanicalLoadUserDefined.ProprietaryParameterDynamics", &assign_MechanicalLoadUserDefined_ProprietaryParameterDynamics);
}

void MechanicalLoadUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MechanicalLoadDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("MechanicalLoadUserDefined.proprietary", &get_MechanicalLoadUserDefined_proprietary);
}

void MechanicalLoadUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	MechanicalLoadDynamics::addClassGetFnsToMap(get_map);
}

void MechanicalLoadUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MechanicalLoadDynamics::addEnumGetFnsToMap(get_map);
}

bool MechanicalLoadUserDefined::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "MechanicalLoadUserDefined" &&
		dynamic_cast<MechanicalLoadUserDefined*>(otherObject) != nullptr;
}

const BaseClassDefiner MechanicalLoadUserDefined::declare()
{
	return BaseClassDefiner(MechanicalLoadUserDefined::addConstructToMap, MechanicalLoadUserDefined::addPrimitiveAssignFnsToMap, MechanicalLoadUserDefined::addClassAssignFnsToMap, MechanicalLoadUserDefined::debugName);
}

std::map<std::string, AttrDetails> MechanicalLoadUserDefined::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = MechanicalLoadDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* MechanicalLoadUserDefined_factory()
	{
		return new MechanicalLoadUserDefined;
	}
}
