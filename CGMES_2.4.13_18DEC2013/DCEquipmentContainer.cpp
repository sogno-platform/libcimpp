/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCEquipmentContainer.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DCTopologicalNode.hpp"

using namespace CIMPP;

DCEquipmentContainer::DCEquipmentContainer() {}
DCEquipmentContainer::~DCEquipmentContainer() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::TP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DCEquipmentContainer.DCTopologicalNode", { CGMESProfile::TP, } },
};

std::list<CGMESProfile>
DCEquipmentContainer::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCEquipmentContainer::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EquipmentContainer::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_DCTopologicalNode_DCEquipmentContainer(BaseClass*, BaseClass*);
bool assign_DCEquipmentContainer_DCTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCEquipmentContainer* element = dynamic_cast<DCEquipmentContainer*>(BaseClass_ptr1);
	DCTopologicalNode* element2 = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCTopologicalNode.begin(), element->DCTopologicalNode.end(), element2) == element->DCTopologicalNode.end())
		{
			element->DCTopologicalNode.push_back(element2);
			return assign_DCTopologicalNode_DCEquipmentContainer(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char DCEquipmentContainer::debugName[] = "DCEquipmentContainer";
const char* DCEquipmentContainer::debugString() const
{
	return DCEquipmentContainer::debugName;
}

void DCEquipmentContainer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DCEquipmentContainer", &DCEquipmentContainer_factory);
}

void DCEquipmentContainer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCEquipmentContainer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:DCEquipmentContainer.DCTopologicalNode", &assign_DCEquipmentContainer_DCTopologicalNode);
}

void DCEquipmentContainer::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addPrimitiveGetFnsToMap(get_map);
}

void DCEquipmentContainer::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquipmentContainer::addClassGetFnsToMap(get_map);
}

void DCEquipmentContainer::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DCEquipmentContainer::declare()
{
	return BaseClassDefiner(DCEquipmentContainer::addConstructToMap, DCEquipmentContainer::addPrimitiveAssignFnsToMap, DCEquipmentContainer::addClassAssignFnsToMap, DCEquipmentContainer::debugName);
}

namespace CIMPP
{
	BaseClass* DCEquipmentContainer_factory()
	{
		return new DCEquipmentContainer;
	}
}
