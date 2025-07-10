/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AnalogControl.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AnalogValue.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		AnalogControl(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::OP,
		},
		CGMESProfile::OP
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "AnalogControl.AnalogValue", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
		{ "AnalogControl.maxValue", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
		{ "AnalogControl.minValue", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
	};
    return ClassAttrDetailsMap;
}

AnalogControl::AnalogControl() : AnalogValue(nullptr) {}
AnalogControl::~AnalogControl() {}

const std::list<std::string>& AnalogControl::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& AnalogControl::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& AnalogControl::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& AnalogControl::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& AnalogControl::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& AnalogControl::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& AnalogControl::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_AnalogValue_AnalogControl(BaseClass*, BaseClass*);
bool assign_AnalogControl_AnalogValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogControl* element = dynamic_cast<AnalogControl*>(BaseClass_ptr1);
	AnalogValue* element2 = dynamic_cast<AnalogValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AnalogValue != element2)
		{
			element->AnalogValue = element2;
			return assign_AnalogValue_AnalogControl(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AnalogControl_maxValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AnalogControl* element = dynamic_cast<AnalogControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AnalogControl_minValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AnalogControl* element = dynamic_cast<AnalogControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_AnalogControl_AnalogValue(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const AnalogControl* element = dynamic_cast<const AnalogControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->AnalogValue != 0)
		{
			BaseClass_list.push_back(element->AnalogValue);
			return true;
		}
	}
	return false;
}

bool get_AnalogControl_maxValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AnalogControl* element = dynamic_cast<const AnalogControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AnalogControl_minValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AnalogControl* element = dynamic_cast<const AnalogControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char AnalogControl::debugName[] = "AnalogControl";
const char* AnalogControl::debugString() const
{
	return AnalogControl::debugName;
}

void AnalogControl::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("AnalogControl", &AnalogControl_factory);
}

void AnalogControl::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("AnalogControl.maxValue", &assign_AnalogControl_maxValue);
	assign_map.emplace("AnalogControl.minValue", &assign_AnalogControl_minValue);
}

void AnalogControl::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("AnalogControl.AnalogValue", &assign_AnalogControl_AnalogValue);
}

void AnalogControl::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Control::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("AnalogControl.maxValue", &get_AnalogControl_maxValue);
	get_map.emplace("AnalogControl.minValue", &get_AnalogControl_minValue);
}

void AnalogControl::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Control::addClassGetFnsToMap(get_map);
	get_map.emplace("AnalogControl.AnalogValue", &get_AnalogControl_AnalogValue);
}

void AnalogControl::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Control::addEnumGetFnsToMap(get_map);
}

bool AnalogControl::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "AnalogControl" &&
		dynamic_cast<AnalogControl*>(otherObject) != nullptr;
}

const BaseClassDefiner AnalogControl::declare()
{
	return BaseClassDefiner(AnalogControl::addConstructToMap, AnalogControl::addPrimitiveAssignFnsToMap, AnalogControl::addClassAssignFnsToMap, AnalogControl::debugName);
}

std::map<std::string, AttrDetails> AnalogControl::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Control::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* AnalogControl_factory()
	{
		return new AnalogControl;
	}
}
