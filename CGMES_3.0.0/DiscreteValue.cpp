/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiscreteValue.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Command.hpp"
#include "Discrete.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DiscreteValue(),
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
		{ "DiscreteValue.Command", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
		{ "DiscreteValue.Discrete", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
	};
    return ClassAttrDetailsMap;
}

DiscreteValue::DiscreteValue() : Command(nullptr), Discrete(nullptr) {}
DiscreteValue::~DiscreteValue() {}

const std::list<std::string>& DiscreteValue::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DiscreteValue::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DiscreteValue::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DiscreteValue::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DiscreteValue::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DiscreteValue::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DiscreteValue::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_Command_DiscreteValue(BaseClass*, BaseClass*);
bool assign_DiscreteValue_Command(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiscreteValue* element = dynamic_cast<DiscreteValue*>(BaseClass_ptr1);
	Command* element2 = dynamic_cast<Command*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Command != element2)
		{
			element->Command = element2;
			return assign_Command_DiscreteValue(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Discrete_DiscreteValues(BaseClass*, BaseClass*);
bool assign_DiscreteValue_Discrete(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiscreteValue* element = dynamic_cast<DiscreteValue*>(BaseClass_ptr1);
	Discrete* element2 = dynamic_cast<Discrete*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Discrete != element2)
		{
			element->Discrete = element2;
			return assign_Discrete_DiscreteValues(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_DiscreteValue_Discrete(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const DiscreteValue* element = dynamic_cast<const DiscreteValue*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Discrete != 0)
		{
			BaseClass_list.push_back(element->Discrete);
			return true;
		}
	}
	return false;
}

const char DiscreteValue::debugName[] = "DiscreteValue";
const char* DiscreteValue::debugString() const
{
	return DiscreteValue::debugName;
}

void DiscreteValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DiscreteValue", &DiscreteValue_factory);
}

void DiscreteValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DiscreteValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DiscreteValue.Command", &assign_DiscreteValue_Command);
	assign_map.emplace("DiscreteValue.Discrete", &assign_DiscreteValue_Discrete);
}

void DiscreteValue::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MeasurementValue::addPrimitiveGetFnsToMap(get_map);
}

void DiscreteValue::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	MeasurementValue::addClassGetFnsToMap(get_map);
	get_map.emplace("DiscreteValue.Discrete", &get_DiscreteValue_Discrete);
}

void DiscreteValue::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MeasurementValue::addEnumGetFnsToMap(get_map);
}

bool DiscreteValue::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DiscreteValue" &&
		dynamic_cast<DiscreteValue*>(otherObject) != nullptr;
}

const BaseClassDefiner DiscreteValue::declare()
{
	return BaseClassDefiner(DiscreteValue::addConstructToMap, DiscreteValue::addPrimitiveAssignFnsToMap, DiscreteValue::addClassAssignFnsToMap, DiscreteValue::debugName);
}

std::map<std::string, AttrDetails> DiscreteValue::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = MeasurementValue::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DiscreteValue_factory()
	{
		return new DiscreteValue;
	}
}
