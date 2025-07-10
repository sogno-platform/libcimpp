/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Switch.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SwitchSchedule.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Switch(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
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
		{ "Switch.SwitchSchedules", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "Switch.normalOpen", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "Switch.open", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "Switch.ratedCurrent", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "Switch.retained", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

Switch::Switch() {}
Switch::~Switch() {}

const std::list<std::string>& Switch::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Switch::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Switch::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Switch::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Switch::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Switch::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Switch::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SwitchSchedule_Switch(BaseClass*, BaseClass*);
bool assign_Switch_SwitchSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1);
	SwitchSchedule* element2 = dynamic_cast<SwitchSchedule*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->SwitchSchedules.begin(), element->SwitchSchedules.end(), element2) == element->SwitchSchedules.end())
		{
			element->SwitchSchedules.push_back(element2);
			return assign_SwitchSchedule_Switch(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Switch_normalOpen(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->normalOpen;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Switch_open(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->open;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Switch_ratedCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Switch_retained(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->retained;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_Switch_normalOpen(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Switch* element = dynamic_cast<const Switch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->normalOpen;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Switch_open(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Switch* element = dynamic_cast<const Switch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->open;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Switch_ratedCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Switch* element = dynamic_cast<const Switch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Switch_retained(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Switch* element = dynamic_cast<const Switch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->retained;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Switch::debugName[] = "Switch";
const char* Switch::debugString() const
{
	return Switch::debugName;
}

void Switch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Switch", &Switch_factory);
}

void Switch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("Switch.normalOpen", &assign_Switch_normalOpen);
	assign_map.emplace("Switch.open", &assign_Switch_open);
	assign_map.emplace("Switch.ratedCurrent", &assign_Switch_ratedCurrent);
	assign_map.emplace("Switch.retained", &assign_Switch_retained);
}

void Switch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("Switch.SwitchSchedules", &assign_Switch_SwitchSchedules);
}

void Switch::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("Switch.normalOpen", &get_Switch_normalOpen);
	get_map.emplace("Switch.open", &get_Switch_open);
	get_map.emplace("Switch.ratedCurrent", &get_Switch_ratedCurrent);
	get_map.emplace("Switch.retained", &get_Switch_retained);
}

void Switch::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
}

void Switch::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool Switch::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Switch" &&
		dynamic_cast<Switch*>(otherObject) != nullptr;
}

const BaseClassDefiner Switch::declare()
{
	return BaseClassDefiner(Switch::addConstructToMap, Switch::addPrimitiveAssignFnsToMap, Switch::addClassAssignFnsToMap, Switch::debugName);
}

std::map<std::string, AttrDetails> Switch::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Switch_factory()
	{
		return new Switch;
	}
}
