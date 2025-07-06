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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DCEquipmentContainer(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
			CGMESProfile::TP,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "DCEquipmentContainer.DCTopologicalNode", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::TP, } } },
	};
    return ClassAttrDetailsMap;
}

DCEquipmentContainer::DCEquipmentContainer() {}
DCEquipmentContainer::~DCEquipmentContainer() {}

const std::list<std::string>& DCEquipmentContainer::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DCEquipmentContainer::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DCEquipmentContainer::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DCEquipmentContainer::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DCEquipmentContainer::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DCEquipmentContainer::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DCEquipmentContainer::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("DCEquipmentContainer", &DCEquipmentContainer_factory);
}

void DCEquipmentContainer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCEquipmentContainer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DCEquipmentContainer.DCTopologicalNode", &assign_DCEquipmentContainer_DCTopologicalNode);
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

bool DCEquipmentContainer::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DCEquipmentContainer" &&
		dynamic_cast<DCEquipmentContainer*>(otherObject) != nullptr;
}

const BaseClassDefiner DCEquipmentContainer::declare()
{
	return BaseClassDefiner(DCEquipmentContainer::addConstructToMap, DCEquipmentContainer::addPrimitiveAssignFnsToMap, DCEquipmentContainer::addClassAssignFnsToMap, DCEquipmentContainer::debugName);
}

std::map<std::string, AttrDetails> DCEquipmentContainer::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EquipmentContainer::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DCEquipmentContainer_factory()
	{
		return new DCEquipmentContainer;
	}
}
