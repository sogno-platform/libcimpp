/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageLevel.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "BaseVoltage.hpp"
#include "Bay.hpp"
#include "Substation.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		VoltageLevel(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::EQBD,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "VoltageLevel.BaseVoltage", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
		{ "VoltageLevel.Bays", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
		{ "VoltageLevel.Substation", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
		{ "VoltageLevel.highVoltageLimit", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
		{ "VoltageLevel.lowVoltageLimit", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
	};
    return ClassAttrDetailsMap;
}

VoltageLevel::VoltageLevel() : BaseVoltage(nullptr), Substation(nullptr) {}
VoltageLevel::~VoltageLevel() {}

const std::list<std::string>& VoltageLevel::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& VoltageLevel::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& VoltageLevel::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& VoltageLevel::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& VoltageLevel::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& VoltageLevel::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& VoltageLevel::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_BaseVoltage_VoltageLevel(BaseClass*, BaseClass*);
bool assign_VoltageLevel_BaseVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageLevel* element = dynamic_cast<VoltageLevel*>(BaseClass_ptr1);
	BaseVoltage* element2 = dynamic_cast<BaseVoltage*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->BaseVoltage != element2)
		{
			element->BaseVoltage = element2;
			return assign_BaseVoltage_VoltageLevel(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Bay_VoltageLevel(BaseClass*, BaseClass*);
bool assign_VoltageLevel_Bays(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageLevel* element = dynamic_cast<VoltageLevel*>(BaseClass_ptr1);
	Bay* element2 = dynamic_cast<Bay*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Bays.begin(), element->Bays.end(), element2) == element->Bays.end())
		{
			element->Bays.push_back(element2);
			return assign_Bay_VoltageLevel(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Substation_VoltageLevels(BaseClass*, BaseClass*);
bool assign_VoltageLevel_Substation(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageLevel* element = dynamic_cast<VoltageLevel*>(BaseClass_ptr1);
	Substation* element2 = dynamic_cast<Substation*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Substation != element2)
		{
			element->Substation = element2;
			return assign_Substation_VoltageLevels(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VoltageLevel_highVoltageLimit(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VoltageLevel* element = dynamic_cast<VoltageLevel*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->highVoltageLimit;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VoltageLevel_lowVoltageLimit(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VoltageLevel* element = dynamic_cast<VoltageLevel*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lowVoltageLimit;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_VoltageLevel_BaseVoltage(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const VoltageLevel* element = dynamic_cast<const VoltageLevel*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->BaseVoltage != 0)
		{
			BaseClass_list.push_back(element->BaseVoltage);
			return true;
		}
	}
	return false;
}


bool get_VoltageLevel_Substation(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const VoltageLevel* element = dynamic_cast<const VoltageLevel*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Substation != 0)
		{
			BaseClass_list.push_back(element->Substation);
			return true;
		}
	}
	return false;
}

bool get_VoltageLevel_highVoltageLimit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VoltageLevel* element = dynamic_cast<const VoltageLevel*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->highVoltageLimit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VoltageLevel_lowVoltageLimit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VoltageLevel* element = dynamic_cast<const VoltageLevel*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lowVoltageLimit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char VoltageLevel::debugName[] = "VoltageLevel";
const char* VoltageLevel::debugString() const
{
	return VoltageLevel::debugName;
}

void VoltageLevel::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("VoltageLevel", &VoltageLevel_factory);
}

void VoltageLevel::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("VoltageLevel.highVoltageLimit", &assign_VoltageLevel_highVoltageLimit);
	assign_map.emplace("VoltageLevel.lowVoltageLimit", &assign_VoltageLevel_lowVoltageLimit);
}

void VoltageLevel::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("VoltageLevel.BaseVoltage", &assign_VoltageLevel_BaseVoltage);
	assign_map.emplace("VoltageLevel.Bays", &assign_VoltageLevel_Bays);
	assign_map.emplace("VoltageLevel.Substation", &assign_VoltageLevel_Substation);
}

void VoltageLevel::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("VoltageLevel.highVoltageLimit", &get_VoltageLevel_highVoltageLimit);
	get_map.emplace("VoltageLevel.lowVoltageLimit", &get_VoltageLevel_lowVoltageLimit);
}

void VoltageLevel::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquipmentContainer::addClassGetFnsToMap(get_map);
	get_map.emplace("VoltageLevel.BaseVoltage", &get_VoltageLevel_BaseVoltage);
	get_map.emplace("VoltageLevel.Substation", &get_VoltageLevel_Substation);
}

void VoltageLevel::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addEnumGetFnsToMap(get_map);
}

bool VoltageLevel::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "VoltageLevel" &&
		dynamic_cast<VoltageLevel*>(otherObject) != nullptr;
}

const BaseClassDefiner VoltageLevel::declare()
{
	return BaseClassDefiner(VoltageLevel::addConstructToMap, VoltageLevel::addPrimitiveAssignFnsToMap, VoltageLevel::addClassAssignFnsToMap, VoltageLevel::debugName);
}

std::map<std::string, AttrDetails> VoltageLevel::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EquipmentContainer::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* VoltageLevel_factory()
	{
		return new VoltageLevel;
	}
}
