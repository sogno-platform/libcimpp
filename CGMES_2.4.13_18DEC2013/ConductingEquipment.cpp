/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ConductingEquipment.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "BaseVoltage.hpp"
#include "SvStatus.hpp"
#include "Terminal.hpp"

using namespace CIMPP;

ConductingEquipment::ConductingEquipment() : BaseVoltage(nullptr), SvStatus(nullptr) {}
ConductingEquipment::~ConductingEquipment() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
	CGMESProfile::EQ_BD,
	CGMESProfile::EQ,
	CGMESProfile::SV,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ConductingEquipment.BaseVoltage", { CGMESProfile::EQ, } },
	{ "cim:ConductingEquipment.SvStatus", { CGMESProfile::SV, } },
	{ "cim:ConductingEquipment.Terminals", { CGMESProfile::DY, CGMESProfile::EQ_BD, CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
ConductingEquipment::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ConductingEquipment::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Equipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_BaseVoltage_ConductingEquipment(BaseClass*, BaseClass*);
bool assign_ConductingEquipment_BaseVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConductingEquipment* element = dynamic_cast<ConductingEquipment*>(BaseClass_ptr1);
	BaseVoltage* element2 = dynamic_cast<BaseVoltage*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->BaseVoltage != element2)
		{
			element->BaseVoltage = element2;
			return assign_BaseVoltage_ConductingEquipment(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SvStatus_ConductingEquipment(BaseClass*, BaseClass*);
bool assign_ConductingEquipment_SvStatus(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConductingEquipment* element = dynamic_cast<ConductingEquipment*>(BaseClass_ptr1);
	SvStatus* element2 = dynamic_cast<SvStatus*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SvStatus != element2)
		{
			element->SvStatus = element2;
			return assign_SvStatus_ConductingEquipment(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Terminal_ConductingEquipment(BaseClass*, BaseClass*);
bool assign_ConductingEquipment_Terminals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConductingEquipment* element = dynamic_cast<ConductingEquipment*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Terminals.begin(), element->Terminals.end(), element2) == element->Terminals.end())
		{
			element->Terminals.push_back(element2);
			return assign_Terminal_ConductingEquipment(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_ConductingEquipment_BaseVoltage(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ConductingEquipment* element = dynamic_cast<const ConductingEquipment*>(BaseClass_ptr1);
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



const char ConductingEquipment::debugName[] = "ConductingEquipment";
const char* ConductingEquipment::debugString() const
{
	return ConductingEquipment::debugName;
}

void ConductingEquipment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ConductingEquipment", &ConductingEquipment_factory);
}

void ConductingEquipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ConductingEquipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:ConductingEquipment.BaseVoltage", &assign_ConductingEquipment_BaseVoltage);
	assign_map.emplace("cim:ConductingEquipment.SvStatus", &assign_ConductingEquipment_SvStatus);
	assign_map.emplace("cim:ConductingEquipment.Terminals", &assign_ConductingEquipment_Terminals);
}

void ConductingEquipment::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addPrimitiveGetFnsToMap(get_map);
}

void ConductingEquipment::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Equipment::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:ConductingEquipment.BaseVoltage", &get_ConductingEquipment_BaseVoltage);
}

void ConductingEquipment::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ConductingEquipment::declare()
{
	return BaseClassDefiner(ConductingEquipment::addConstructToMap, ConductingEquipment::addPrimitiveAssignFnsToMap, ConductingEquipment::addClassAssignFnsToMap, ConductingEquipment::debugName);
}

namespace CIMPP
{
	BaseClass* ConductingEquipment_factory()
	{
		return new ConductingEquipment;
	}
}
