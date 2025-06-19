/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquivalentEquipment.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "EquivalentNetwork.hpp"

using namespace CIMPP;

EquivalentEquipment::EquivalentEquipment() : EquivalentNetwork(nullptr) {}
EquivalentEquipment::~EquivalentEquipment() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SC,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:EquivalentEquipment.EquivalentNetwork", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
EquivalentEquipment::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
EquivalentEquipment::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ConductingEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_EquivalentNetwork_EquivalentEquipments(BaseClass*, BaseClass*);
bool assign_EquivalentEquipment_EquivalentNetwork(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EquivalentEquipment* element = dynamic_cast<EquivalentEquipment*>(BaseClass_ptr1);
	EquivalentNetwork* element2 = dynamic_cast<EquivalentNetwork*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->EquivalentNetwork != element2)
		{
			element->EquivalentNetwork = element2;
			return assign_EquivalentNetwork_EquivalentEquipments(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_EquivalentEquipment_EquivalentNetwork(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const EquivalentEquipment* element = dynamic_cast<const EquivalentEquipment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->EquivalentNetwork != 0)
		{
			BaseClass_list.push_back(element->EquivalentNetwork);
			return true;
		}
	}
	return false;
}

const char EquivalentEquipment::debugName[] = "EquivalentEquipment";
const char* EquivalentEquipment::debugString() const
{
	return EquivalentEquipment::debugName;
}

void EquivalentEquipment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:EquivalentEquipment", &EquivalentEquipment_factory);
}

void EquivalentEquipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void EquivalentEquipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:EquivalentEquipment.EquivalentNetwork", &assign_EquivalentEquipment_EquivalentNetwork);
}

void EquivalentEquipment::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
}

void EquivalentEquipment::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:EquivalentEquipment.EquivalentNetwork", &get_EquivalentEquipment_EquivalentNetwork);
}

void EquivalentEquipment::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner EquivalentEquipment::declare()
{
	return BaseClassDefiner(EquivalentEquipment::addConstructToMap, EquivalentEquipment::addPrimitiveAssignFnsToMap, EquivalentEquipment::addClassAssignFnsToMap, EquivalentEquipment::debugName);
}

namespace CIMPP
{
	BaseClass* EquivalentEquipment_factory()
	{
		return new EquivalentEquipment;
	}
}
