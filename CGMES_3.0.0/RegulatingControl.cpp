/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RegulatingControl.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "RegulatingCondEq.hpp"
#include "RegulationSchedule.hpp"
#include "Terminal.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		RegulatingControl(),
		"http://iec.ch/TC57/CIM100#",
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
		{ "RegulatingControl.RegulatingCondEq", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "RegulatingControl.RegulationSchedule", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "RegulatingControl.Terminal", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "RegulatingControl.discrete", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "RegulatingControl.enabled", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "RegulatingControl.maxAllowedTargetValue", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "RegulatingControl.minAllowedTargetValue", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "RegulatingControl.mode", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "RegulatingControl.targetDeadband", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "RegulatingControl.targetValue", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "RegulatingControl.targetValueUnitMultiplier", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
	};
    return ClassAttrDetailsMap;
}

RegulatingControl::RegulatingControl() : Terminal(nullptr) {}
RegulatingControl::~RegulatingControl() {}

const std::list<std::string>& RegulatingControl::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& RegulatingControl::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& RegulatingControl::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& RegulatingControl::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& RegulatingControl::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& RegulatingControl::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& RegulatingControl::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_RegulatingCondEq_RegulatingControl(BaseClass*, BaseClass*);
bool assign_RegulatingControl_RegulatingCondEq(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1);
	RegulatingCondEq* element2 = dynamic_cast<RegulatingCondEq*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->RegulatingCondEq.begin(), element->RegulatingCondEq.end(), element2) == element->RegulatingCondEq.end())
		{
			element->RegulatingCondEq.push_back(element2);
			return assign_RegulatingCondEq_RegulatingControl(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RegulationSchedule_RegulatingControl(BaseClass*, BaseClass*);
bool assign_RegulatingControl_RegulationSchedule(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1);
	RegulationSchedule* element2 = dynamic_cast<RegulationSchedule*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->RegulationSchedule.begin(), element->RegulationSchedule.end(), element2) == element->RegulationSchedule.end())
		{
			element->RegulationSchedule.push_back(element2);
			return assign_RegulationSchedule_RegulatingControl(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Terminal_RegulatingControl(BaseClass*, BaseClass*);
bool assign_RegulatingControl_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Terminal != element2)
		{
			element->Terminal = element2;
			return assign_Terminal_RegulatingControl(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RegulatingControl_discrete(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->discrete;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RegulatingControl_enabled(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->enabled;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RegulatingControl_maxAllowedTargetValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxAllowedTargetValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RegulatingControl_minAllowedTargetValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minAllowedTargetValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RegulatingControl_mode(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mode;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RegulatingControl_targetDeadband(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->targetDeadband;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RegulatingControl_targetValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->targetValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RegulatingControl_targetValueUnitMultiplier(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->targetValueUnitMultiplier;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}



bool get_RegulatingControl_Terminal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const RegulatingControl* element = dynamic_cast<const RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Terminal != 0)
		{
			BaseClass_list.push_back(element->Terminal);
			return true;
		}
	}
	return false;
}

bool get_RegulatingControl_discrete(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RegulatingControl* element = dynamic_cast<const RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->discrete;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RegulatingControl_enabled(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RegulatingControl* element = dynamic_cast<const RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->enabled;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RegulatingControl_maxAllowedTargetValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RegulatingControl* element = dynamic_cast<const RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxAllowedTargetValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RegulatingControl_minAllowedTargetValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RegulatingControl* element = dynamic_cast<const RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minAllowedTargetValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RegulatingControl_mode(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RegulatingControl* element = dynamic_cast<const RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mode;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RegulatingControl_targetDeadband(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RegulatingControl* element = dynamic_cast<const RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->targetDeadband;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RegulatingControl_targetValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RegulatingControl* element = dynamic_cast<const RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->targetValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RegulatingControl_targetValueUnitMultiplier(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RegulatingControl* element = dynamic_cast<const RegulatingControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->targetValueUnitMultiplier;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char RegulatingControl::debugName[] = "RegulatingControl";
const char* RegulatingControl::debugString() const
{
	return RegulatingControl::debugName;
}

void RegulatingControl::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("RegulatingControl", &RegulatingControl_factory);
}

void RegulatingControl::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("RegulatingControl.discrete", &assign_RegulatingControl_discrete);
	assign_map.emplace("RegulatingControl.enabled", &assign_RegulatingControl_enabled);
	assign_map.emplace("RegulatingControl.maxAllowedTargetValue", &assign_RegulatingControl_maxAllowedTargetValue);
	assign_map.emplace("RegulatingControl.minAllowedTargetValue", &assign_RegulatingControl_minAllowedTargetValue);
	assign_map.emplace("RegulatingControl.mode", &assign_RegulatingControl_mode);
	assign_map.emplace("RegulatingControl.targetDeadband", &assign_RegulatingControl_targetDeadband);
	assign_map.emplace("RegulatingControl.targetValue", &assign_RegulatingControl_targetValue);
	assign_map.emplace("RegulatingControl.targetValueUnitMultiplier", &assign_RegulatingControl_targetValueUnitMultiplier);
}

void RegulatingControl::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("RegulatingControl.RegulatingCondEq", &assign_RegulatingControl_RegulatingCondEq);
	assign_map.emplace("RegulatingControl.RegulationSchedule", &assign_RegulatingControl_RegulationSchedule);
	assign_map.emplace("RegulatingControl.Terminal", &assign_RegulatingControl_Terminal);
}

void RegulatingControl::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("RegulatingControl.discrete", &get_RegulatingControl_discrete);
	get_map.emplace("RegulatingControl.enabled", &get_RegulatingControl_enabled);
	get_map.emplace("RegulatingControl.maxAllowedTargetValue", &get_RegulatingControl_maxAllowedTargetValue);
	get_map.emplace("RegulatingControl.minAllowedTargetValue", &get_RegulatingControl_minAllowedTargetValue);
	get_map.emplace("RegulatingControl.targetDeadband", &get_RegulatingControl_targetDeadband);
	get_map.emplace("RegulatingControl.targetValue", &get_RegulatingControl_targetValue);
}

void RegulatingControl::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
	get_map.emplace("RegulatingControl.Terminal", &get_RegulatingControl_Terminal);
}

void RegulatingControl::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
	get_map.emplace("RegulatingControl.mode", &get_RegulatingControl_mode);
	get_map.emplace("RegulatingControl.targetValueUnitMultiplier", &get_RegulatingControl_targetValueUnitMultiplier);
}

bool RegulatingControl::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "RegulatingControl" &&
		dynamic_cast<RegulatingControl*>(otherObject) != nullptr;
}

const BaseClassDefiner RegulatingControl::declare()
{
	return BaseClassDefiner(RegulatingControl::addConstructToMap, RegulatingControl::addPrimitiveAssignFnsToMap, RegulatingControl::addClassAssignFnsToMap, RegulatingControl::debugName);
}

std::map<std::string, AttrDetails> RegulatingControl::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemResource::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* RegulatingControl_factory()
	{
		return new RegulatingControl;
	}
}
