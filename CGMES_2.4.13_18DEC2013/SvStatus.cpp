/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SvStatus.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ConductingEquipment.hpp"

using namespace CIMPP;

SvStatus::SvStatus() : ConductingEquipment(nullptr) {}
SvStatus::~SvStatus() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::SV,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SvStatus.ConductingEquipment", { CGMESProfile::SV, } },
	{ "cim:SvStatus.inService", { CGMESProfile::SV, } },
};

std::list<CGMESProfile>
SvStatus::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SvStatus::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ConductingEquipment_SvStatus(BaseClass*, BaseClass*);
bool assign_SvStatus_ConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SvStatus* element = dynamic_cast<SvStatus*>(BaseClass_ptr1);
	ConductingEquipment* element2 = dynamic_cast<ConductingEquipment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ConductingEquipment != element2)
		{
			element->ConductingEquipment = element2;
			return assign_ConductingEquipment_SvStatus(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SvStatus_inService(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SvStatus* element = dynamic_cast<SvStatus*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inService;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_SvStatus_ConductingEquipment(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SvStatus* element = dynamic_cast<const SvStatus*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ConductingEquipment != 0)
		{
			BaseClass_list.push_back(element->ConductingEquipment);
			return true;
		}
	}
	return false;
}

bool get_SvStatus_inService(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SvStatus* element = dynamic_cast<const SvStatus*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inService;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char SvStatus::debugName[] = "SvStatus";
const char* SvStatus::debugString() const
{
	return SvStatus::debugName;
}

void SvStatus::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:SvStatus", &SvStatus_factory);
}

void SvStatus::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:SvStatus.inService", &assign_SvStatus_inService);
}

void SvStatus::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:SvStatus.ConductingEquipment", &assign_SvStatus_ConductingEquipment);
}

void SvStatus::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:SvStatus.inService", &get_SvStatus_inService);
}

void SvStatus::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:SvStatus.ConductingEquipment", &get_SvStatus_ConductingEquipment);
}

void SvStatus::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SvStatus::declare()
{
	return BaseClassDefiner(SvStatus::addConstructToMap, SvStatus::addPrimitiveAssignFnsToMap, SvStatus::addClassAssignFnsToMap, SvStatus::debugName);
}

namespace CIMPP
{
	BaseClass* SvStatus_factory()
	{
		return new SvStatus;
	}
}
