/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VCompIEEEType2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "GenICompensationForGenJ.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		VCompIEEEType2(),
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
		{ "VCompIEEEType2.GenICompensationForGenJ", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "VCompIEEEType2.tr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

VCompIEEEType2::VCompIEEEType2() {}
VCompIEEEType2::~VCompIEEEType2() {}

const std::list<std::string>& VCompIEEEType2::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& VCompIEEEType2::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& VCompIEEEType2::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& VCompIEEEType2::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& VCompIEEEType2::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& VCompIEEEType2::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& VCompIEEEType2::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GenICompensationForGenJ_VcompIEEEType2(BaseClass*, BaseClass*);
bool assign_VCompIEEEType2_GenICompensationForGenJ(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VCompIEEEType2* element = dynamic_cast<VCompIEEEType2*>(BaseClass_ptr1);
	GenICompensationForGenJ* element2 = dynamic_cast<GenICompensationForGenJ*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->GenICompensationForGenJ.begin(), element->GenICompensationForGenJ.end(), element2) == element->GenICompensationForGenJ.end())
		{
			element->GenICompensationForGenJ.push_back(element2);
			return assign_GenICompensationForGenJ_VcompIEEEType2(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VCompIEEEType2_tr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VCompIEEEType2* element = dynamic_cast<VCompIEEEType2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_VCompIEEEType2_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VCompIEEEType2* element = dynamic_cast<const VCompIEEEType2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char VCompIEEEType2::debugName[] = "VCompIEEEType2";
const char* VCompIEEEType2::debugString() const
{
	return VCompIEEEType2::debugName;
}

void VCompIEEEType2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("VCompIEEEType2", &VCompIEEEType2_factory);
}

void VCompIEEEType2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("VCompIEEEType2.tr", &assign_VCompIEEEType2_tr);
}

void VCompIEEEType2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("VCompIEEEType2.GenICompensationForGenJ", &assign_VCompIEEEType2_GenICompensationForGenJ);
}

void VCompIEEEType2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageCompensatorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("VCompIEEEType2.tr", &get_VCompIEEEType2_tr);
}

void VCompIEEEType2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	VoltageCompensatorDynamics::addClassGetFnsToMap(get_map);
}

void VCompIEEEType2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageCompensatorDynamics::addEnumGetFnsToMap(get_map);
}

bool VCompIEEEType2::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "VCompIEEEType2" &&
		dynamic_cast<VCompIEEEType2*>(otherObject) != nullptr;
}

const BaseClassDefiner VCompIEEEType2::declare()
{
	return BaseClassDefiner(VCompIEEEType2::addConstructToMap, VCompIEEEType2::addPrimitiveAssignFnsToMap, VCompIEEEType2::addClassAssignFnsToMap, VCompIEEEType2::debugName);
}

std::map<std::string, AttrDetails> VCompIEEEType2::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = VoltageCompensatorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* VCompIEEEType2_factory()
	{
		return new VCompIEEEType2;
	}
}
