/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AnalogValue.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Analog.hpp"
#include "AnalogControl.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		AnalogValue(),
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
		{ "AnalogValue.Analog", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
		{ "AnalogValue.AnalogControl", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
	};
    return ClassAttrDetailsMap;
}

AnalogValue::AnalogValue() : Analog(nullptr), AnalogControl(nullptr) {}
AnalogValue::~AnalogValue() {}

const std::list<std::string>& AnalogValue::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& AnalogValue::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& AnalogValue::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& AnalogValue::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& AnalogValue::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& AnalogValue::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& AnalogValue::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_Analog_AnalogValues(BaseClass*, BaseClass*);
bool assign_AnalogValue_Analog(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogValue* element = dynamic_cast<AnalogValue*>(BaseClass_ptr1);
	Analog* element2 = dynamic_cast<Analog*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Analog != element2)
		{
			element->Analog = element2;
			return assign_Analog_AnalogValues(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AnalogControl_AnalogValue(BaseClass*, BaseClass*);
bool assign_AnalogValue_AnalogControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogValue* element = dynamic_cast<AnalogValue*>(BaseClass_ptr1);
	AnalogControl* element2 = dynamic_cast<AnalogControl*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AnalogControl != element2)
		{
			element->AnalogControl = element2;
			return assign_AnalogControl_AnalogValue(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_AnalogValue_Analog(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const AnalogValue* element = dynamic_cast<const AnalogValue*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Analog != 0)
		{
			BaseClass_list.push_back(element->Analog);
			return true;
		}
	}
	return false;
}


const char AnalogValue::debugName[] = "AnalogValue";
const char* AnalogValue::debugString() const
{
	return AnalogValue::debugName;
}

void AnalogValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("AnalogValue", &AnalogValue_factory);
}

void AnalogValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void AnalogValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("AnalogValue.Analog", &assign_AnalogValue_Analog);
	assign_map.emplace("AnalogValue.AnalogControl", &assign_AnalogValue_AnalogControl);
}

void AnalogValue::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MeasurementValue::addPrimitiveGetFnsToMap(get_map);
}

void AnalogValue::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	MeasurementValue::addClassGetFnsToMap(get_map);
	get_map.emplace("AnalogValue.Analog", &get_AnalogValue_Analog);
}

void AnalogValue::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MeasurementValue::addEnumGetFnsToMap(get_map);
}

bool AnalogValue::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "AnalogValue" &&
		dynamic_cast<AnalogValue*>(otherObject) != nullptr;
}

const BaseClassDefiner AnalogValue::declare()
{
	return BaseClassDefiner(AnalogValue::addConstructToMap, AnalogValue::addPrimitiveAssignFnsToMap, AnalogValue::addClassAssignFnsToMap, AnalogValue::debugName);
}

std::map<std::string, AttrDetails> AnalogValue::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = MeasurementValue::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* AnalogValue_factory()
	{
		return new AnalogValue;
	}
}
