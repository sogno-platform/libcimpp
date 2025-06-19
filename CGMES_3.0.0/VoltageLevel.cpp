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

VoltageLevel::VoltageLevel() : BaseVoltage(nullptr), Substation(nullptr) {}
VoltageLevel::~VoltageLevel() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::EQBD,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:VoltageLevel.BaseVoltage", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:VoltageLevel.Bays", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:VoltageLevel.Substation", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:VoltageLevel.highVoltageLimit", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:VoltageLevel.lowVoltageLimit", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
};

std::list<CGMESProfile>
VoltageLevel::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
VoltageLevel::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EquipmentContainer::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:VoltageLevel", &VoltageLevel_factory);
}

void VoltageLevel::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:VoltageLevel.highVoltageLimit", &assign_VoltageLevel_highVoltageLimit);
	assign_map.emplace("cim:VoltageLevel.lowVoltageLimit", &assign_VoltageLevel_lowVoltageLimit);
}

void VoltageLevel::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:VoltageLevel.BaseVoltage", &assign_VoltageLevel_BaseVoltage);
	assign_map.emplace("cim:VoltageLevel.Bays", &assign_VoltageLevel_Bays);
	assign_map.emplace("cim:VoltageLevel.Substation", &assign_VoltageLevel_Substation);
}

void VoltageLevel::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:VoltageLevel.highVoltageLimit", &get_VoltageLevel_highVoltageLimit);
	get_map.emplace("cim:VoltageLevel.lowVoltageLimit", &get_VoltageLevel_lowVoltageLimit);
}

void VoltageLevel::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquipmentContainer::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:VoltageLevel.BaseVoltage", &get_VoltageLevel_BaseVoltage);
	get_map.emplace("cim:VoltageLevel.Substation", &get_VoltageLevel_Substation);
}

void VoltageLevel::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner VoltageLevel::declare()
{
	return BaseClassDefiner(VoltageLevel::addConstructToMap, VoltageLevel::addPrimitiveAssignFnsToMap, VoltageLevel::addClassAssignFnsToMap, VoltageLevel::debugName);
}

namespace CIMPP
{
	BaseClass* VoltageLevel_factory()
	{
		return new VoltageLevel;
	}
}
