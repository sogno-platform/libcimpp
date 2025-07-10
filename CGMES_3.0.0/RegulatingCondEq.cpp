/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RegulatingCondEq.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "RegulatingControl.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		RegulatingCondEq(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DY,
			CGMESProfile::EQ,
			CGMESProfile::SC,
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
		{ "RegulatingCondEq.RegulatingControl", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "RegulatingCondEq.controlEnabled", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
	};
    return ClassAttrDetailsMap;
}

RegulatingCondEq::RegulatingCondEq() : RegulatingControl(nullptr) {}
RegulatingCondEq::~RegulatingCondEq() {}

const std::list<std::string>& RegulatingCondEq::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& RegulatingCondEq::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& RegulatingCondEq::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& RegulatingCondEq::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& RegulatingCondEq::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& RegulatingCondEq::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& RegulatingCondEq::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_RegulatingControl_RegulatingCondEq(BaseClass*, BaseClass*);
bool assign_RegulatingCondEq_RegulatingControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RegulatingCondEq* element = dynamic_cast<RegulatingCondEq*>(BaseClass_ptr1);
	RegulatingControl* element2 = dynamic_cast<RegulatingControl*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RegulatingControl != element2)
		{
			element->RegulatingControl = element2;
			return assign_RegulatingControl_RegulatingCondEq(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RegulatingCondEq_controlEnabled(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RegulatingCondEq* element = dynamic_cast<RegulatingCondEq*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->controlEnabled;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_RegulatingCondEq_RegulatingControl(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const RegulatingCondEq* element = dynamic_cast<const RegulatingCondEq*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->RegulatingControl != 0)
		{
			BaseClass_list.push_back(element->RegulatingControl);
			return true;
		}
	}
	return false;
}

bool get_RegulatingCondEq_controlEnabled(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RegulatingCondEq* element = dynamic_cast<const RegulatingCondEq*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->controlEnabled;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char RegulatingCondEq::debugName[] = "RegulatingCondEq";
const char* RegulatingCondEq::debugString() const
{
	return RegulatingCondEq::debugName;
}

void RegulatingCondEq::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("RegulatingCondEq", &RegulatingCondEq_factory);
}

void RegulatingCondEq::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("RegulatingCondEq.controlEnabled", &assign_RegulatingCondEq_controlEnabled);
}

void RegulatingCondEq::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("RegulatingCondEq.RegulatingControl", &assign_RegulatingCondEq_RegulatingControl);
}

void RegulatingCondEq::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConnection::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("RegulatingCondEq.controlEnabled", &get_RegulatingCondEq_controlEnabled);
}

void RegulatingCondEq::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EnergyConnection::addClassGetFnsToMap(get_map);
	get_map.emplace("RegulatingCondEq.RegulatingControl", &get_RegulatingCondEq_RegulatingControl);
}

void RegulatingCondEq::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConnection::addEnumGetFnsToMap(get_map);
}

bool RegulatingCondEq::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "RegulatingCondEq" &&
		dynamic_cast<RegulatingCondEq*>(otherObject) != nullptr;
}

const BaseClassDefiner RegulatingCondEq::declare()
{
	return BaseClassDefiner(RegulatingCondEq::addConstructToMap, RegulatingCondEq::addPrimitiveAssignFnsToMap, RegulatingCondEq::addClassAssignFnsToMap, RegulatingCondEq::debugName);
}

std::map<std::string, AttrDetails> RegulatingCondEq::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EnergyConnection::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* RegulatingCondEq_factory()
	{
		return new RegulatingCondEq;
	}
}
