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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		EquivalentEquipment(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SC,
			CGMESProfile::SSH,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "EquivalentEquipment.EquivalentNetwork", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

EquivalentEquipment::EquivalentEquipment() : EquivalentNetwork(nullptr) {}
EquivalentEquipment::~EquivalentEquipment() {}

const std::list<std::string>& EquivalentEquipment::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& EquivalentEquipment::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& EquivalentEquipment::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& EquivalentEquipment::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& EquivalentEquipment::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& EquivalentEquipment::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& EquivalentEquipment::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("EquivalentEquipment", &EquivalentEquipment_factory);
}

void EquivalentEquipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void EquivalentEquipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("EquivalentEquipment.EquivalentNetwork", &assign_EquivalentEquipment_EquivalentNetwork);
}

void EquivalentEquipment::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
}

void EquivalentEquipment::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
	get_map.emplace("EquivalentEquipment.EquivalentNetwork", &get_EquivalentEquipment_EquivalentNetwork);
}

void EquivalentEquipment::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool EquivalentEquipment::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "EquivalentEquipment" &&
		dynamic_cast<EquivalentEquipment*>(otherObject) != nullptr;
}

const BaseClassDefiner EquivalentEquipment::declare()
{
	return BaseClassDefiner(EquivalentEquipment::addConstructToMap, EquivalentEquipment::addPrimitiveAssignFnsToMap, EquivalentEquipment::addClassAssignFnsToMap, EquivalentEquipment::debugName);
}

std::map<std::string, AttrDetails> EquivalentEquipment::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* EquivalentEquipment_factory()
	{
		return new EquivalentEquipment;
	}
}
