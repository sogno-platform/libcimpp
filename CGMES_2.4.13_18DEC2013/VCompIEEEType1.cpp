/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VCompIEEEType1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		VCompIEEEType1(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "VCompIEEEType1.rc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "VCompIEEEType1.tr", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "VCompIEEEType1.xc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

VCompIEEEType1::VCompIEEEType1() {}
VCompIEEEType1::~VCompIEEEType1() {}

const std::list<std::string>& VCompIEEEType1::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& VCompIEEEType1::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& VCompIEEEType1::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& VCompIEEEType1::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& VCompIEEEType1::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& VCompIEEEType1::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& VCompIEEEType1::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_VCompIEEEType1_rc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VCompIEEEType1* element = dynamic_cast<VCompIEEEType1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VCompIEEEType1_tr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VCompIEEEType1* element = dynamic_cast<VCompIEEEType1*>(BaseClass_ptr1);
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

bool assign_VCompIEEEType1_xc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VCompIEEEType1* element = dynamic_cast<VCompIEEEType1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_VCompIEEEType1_rc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VCompIEEEType1* element = dynamic_cast<const VCompIEEEType1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VCompIEEEType1_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VCompIEEEType1* element = dynamic_cast<const VCompIEEEType1*>(BaseClass_ptr1);
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

bool get_VCompIEEEType1_xc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VCompIEEEType1* element = dynamic_cast<const VCompIEEEType1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char VCompIEEEType1::debugName[] = "VCompIEEEType1";
const char* VCompIEEEType1::debugString() const
{
	return VCompIEEEType1::debugName;
}

void VCompIEEEType1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("VCompIEEEType1", &VCompIEEEType1_factory);
}

void VCompIEEEType1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("VCompIEEEType1.rc", &assign_VCompIEEEType1_rc);
	assign_map.emplace("VCompIEEEType1.tr", &assign_VCompIEEEType1_tr);
	assign_map.emplace("VCompIEEEType1.xc", &assign_VCompIEEEType1_xc);
}

void VCompIEEEType1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void VCompIEEEType1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageCompensatorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("VCompIEEEType1.rc", &get_VCompIEEEType1_rc);
	get_map.emplace("VCompIEEEType1.tr", &get_VCompIEEEType1_tr);
	get_map.emplace("VCompIEEEType1.xc", &get_VCompIEEEType1_xc);
}

void VCompIEEEType1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	VoltageCompensatorDynamics::addClassGetFnsToMap(get_map);
}

void VCompIEEEType1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageCompensatorDynamics::addEnumGetFnsToMap(get_map);
}

bool VCompIEEEType1::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "VCompIEEEType1" &&
		dynamic_cast<VCompIEEEType1*>(otherObject) != nullptr;
}

const BaseClassDefiner VCompIEEEType1::declare()
{
	return BaseClassDefiner(VCompIEEEType1::addConstructToMap, VCompIEEEType1::addPrimitiveAssignFnsToMap, VCompIEEEType1::addClassAssignFnsToMap, VCompIEEEType1::debugName);
}

std::map<std::string, AttrDetails> VCompIEEEType1::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = VoltageCompensatorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* VCompIEEEType1_factory()
	{
		return new VCompIEEEType1;
	}
}
