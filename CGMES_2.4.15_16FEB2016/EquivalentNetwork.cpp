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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		EquivalentNetwork(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "EquivalentNetwork.EquivalentEquipments", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

EquivalentNetwork::EquivalentNetwork() {}
EquivalentNetwork::~EquivalentNetwork() {}

const std::list<std::string>& EquivalentNetwork::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& EquivalentNetwork::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& EquivalentNetwork::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& EquivalentNetwork::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& EquivalentNetwork::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& EquivalentNetwork::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& EquivalentNetwork::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("EquivalentNetwork", &EquivalentNetwork_factory);
}

void EquivalentNetwork::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void EquivalentNetwork::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("EquivalentNetwork.EquivalentEquipments", &assign_EquivalentNetwork_EquivalentEquipments);
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

bool EquivalentNetwork::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "EquivalentNetwork" &&
		dynamic_cast<EquivalentNetwork*>(otherObject) != nullptr;
}

const BaseClassDefiner EquivalentNetwork::declare()
{
	return BaseClassDefiner(EquivalentNetwork::addConstructToMap, EquivalentNetwork::addPrimitiveAssignFnsToMap, EquivalentNetwork::addClassAssignFnsToMap, EquivalentNetwork::debugName);
}

std::map<std::string, AttrDetails> EquivalentNetwork::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ConnectivityNodeContainer::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* EquivalentNetwork_factory()
	{
		return new EquivalentNetwork;
	}
}
