/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquivalentNetwork.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "EquivalentEquipment.hpp"

using namespace CIMPP;

EquivalentNetwork::EquivalentNetwork() {}
EquivalentNetwork::~EquivalentNetwork() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:EquivalentNetwork.EquivalentEquipments", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
EquivalentNetwork::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
EquivalentNetwork::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ConnectivityNodeContainer::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_EquivalentEquipment_EquivalentNetwork(BaseClass*, BaseClass*);
bool assign_EquivalentNetwork_EquivalentEquipments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EquivalentNetwork* element = dynamic_cast<EquivalentNetwork*>(BaseClass_ptr1);
	EquivalentEquipment* element2 = dynamic_cast<EquivalentEquipment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->EquivalentEquipments.begin(), element->EquivalentEquipments.end(), element2) == element->EquivalentEquipments.end())
		{
			element->EquivalentEquipments.push_back(element2);
			return assign_EquivalentEquipment_EquivalentNetwork(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char EquivalentNetwork::debugName[] = "EquivalentNetwork";
const char* EquivalentNetwork::debugString() const
{
	return EquivalentNetwork::debugName;
}

void EquivalentNetwork::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:EquivalentNetwork", &EquivalentNetwork_factory);
}

void EquivalentNetwork::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void EquivalentNetwork::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:EquivalentNetwork.EquivalentEquipments", &assign_EquivalentNetwork_EquivalentEquipments);
}

void EquivalentNetwork::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConnectivityNodeContainer::addPrimitiveGetFnsToMap(get_map);
}

void EquivalentNetwork::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConnectivityNodeContainer::addClassGetFnsToMap(get_map);
}

void EquivalentNetwork::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConnectivityNodeContainer::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner EquivalentNetwork::declare()
{
	return BaseClassDefiner(EquivalentNetwork::addConstructToMap, EquivalentNetwork::addPrimitiveAssignFnsToMap, EquivalentNetwork::addClassAssignFnsToMap, EquivalentNetwork::debugName);
}

namespace CIMPP
{
	BaseClass* EquivalentNetwork_factory()
	{
		return new EquivalentNetwork;
	}
}
