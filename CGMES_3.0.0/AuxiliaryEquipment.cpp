/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AuxiliaryEquipment.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Terminal.hpp"

using namespace CIMPP;

AuxiliaryEquipment::AuxiliaryEquipment() : Terminal(nullptr) {}
AuxiliaryEquipment::~AuxiliaryEquipment() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:AuxiliaryEquipment.Terminal", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
AuxiliaryEquipment::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
AuxiliaryEquipment::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Equipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_Terminal_AuxiliaryEquipment(BaseClass*, BaseClass*);
bool assign_AuxiliaryEquipment_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AuxiliaryEquipment* element = dynamic_cast<AuxiliaryEquipment*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Terminal != element2)
		{
			element->Terminal = element2;
			return assign_Terminal_AuxiliaryEquipment(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_AuxiliaryEquipment_Terminal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const AuxiliaryEquipment* element = dynamic_cast<const AuxiliaryEquipment*>(BaseClass_ptr1);
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

const char AuxiliaryEquipment::debugName[] = "AuxiliaryEquipment";
const char* AuxiliaryEquipment::debugString() const
{
	return AuxiliaryEquipment::debugName;
}

void AuxiliaryEquipment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:AuxiliaryEquipment", &AuxiliaryEquipment_factory);
}

void AuxiliaryEquipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void AuxiliaryEquipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:AuxiliaryEquipment.Terminal", &assign_AuxiliaryEquipment_Terminal);
}

void AuxiliaryEquipment::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addPrimitiveGetFnsToMap(get_map);
}

void AuxiliaryEquipment::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Equipment::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:AuxiliaryEquipment.Terminal", &get_AuxiliaryEquipment_Terminal);
}

void AuxiliaryEquipment::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner AuxiliaryEquipment::declare()
{
	return BaseClassDefiner(AuxiliaryEquipment::addConstructToMap, AuxiliaryEquipment::addPrimitiveAssignFnsToMap, AuxiliaryEquipment::addClassAssignFnsToMap, AuxiliaryEquipment::debugName);
}

namespace CIMPP
{
	BaseClass* AuxiliaryEquipment_factory()
	{
		return new AuxiliaryEquipment;
	}
}
