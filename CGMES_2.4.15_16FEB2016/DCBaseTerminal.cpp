/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCBaseTerminal.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DCNode.hpp"
#include "DCTopologicalNode.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DCBaseTerminal(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SSH,
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
		{ "DCBaseTerminal.DCNode", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "DCBaseTerminal.DCTopologicalNode", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::TP, } } },
	};
    return ClassAttrDetailsMap;
}

DCBaseTerminal::DCBaseTerminal() : DCNode(nullptr), DCTopologicalNode(nullptr) {}
DCBaseTerminal::~DCBaseTerminal() {}

const std::list<std::string>& DCBaseTerminal::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DCBaseTerminal::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DCBaseTerminal::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DCBaseTerminal::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DCBaseTerminal::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DCBaseTerminal::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DCBaseTerminal::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DCNode_DCTerminals(BaseClass*, BaseClass*);
bool assign_DCBaseTerminal_DCNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCBaseTerminal* element = dynamic_cast<DCBaseTerminal*>(BaseClass_ptr1);
	DCNode* element2 = dynamic_cast<DCNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DCNode != element2)
		{
			element->DCNode = element2;
			return assign_DCNode_DCTerminals(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DCTopologicalNode_DCTerminals(BaseClass*, BaseClass*);
bool assign_DCBaseTerminal_DCTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCBaseTerminal* element = dynamic_cast<DCBaseTerminal*>(BaseClass_ptr1);
	DCTopologicalNode* element2 = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DCTopologicalNode != element2)
		{
			element->DCTopologicalNode = element2;
			return assign_DCTopologicalNode_DCTerminals(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_DCBaseTerminal_DCNode(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const DCBaseTerminal* element = dynamic_cast<const DCBaseTerminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->DCNode != 0)
		{
			BaseClass_list.push_back(element->DCNode);
			return true;
		}
	}
	return false;
}

bool get_DCBaseTerminal_DCTopologicalNode(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const DCBaseTerminal* element = dynamic_cast<const DCBaseTerminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->DCTopologicalNode != 0)
		{
			BaseClass_list.push_back(element->DCTopologicalNode);
			return true;
		}
	}
	return false;
}

const char DCBaseTerminal::debugName[] = "DCBaseTerminal";
const char* DCBaseTerminal::debugString() const
{
	return DCBaseTerminal::debugName;
}

void DCBaseTerminal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DCBaseTerminal", &DCBaseTerminal_factory);
}

void DCBaseTerminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCBaseTerminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DCBaseTerminal.DCNode", &assign_DCBaseTerminal_DCNode);
	assign_map.emplace("DCBaseTerminal.DCTopologicalNode", &assign_DCBaseTerminal_DCTopologicalNode);
}

void DCBaseTerminal::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ACDCTerminal::addPrimitiveGetFnsToMap(get_map);
}

void DCBaseTerminal::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ACDCTerminal::addClassGetFnsToMap(get_map);
	get_map.emplace("DCBaseTerminal.DCNode", &get_DCBaseTerminal_DCNode);
	get_map.emplace("DCBaseTerminal.DCTopologicalNode", &get_DCBaseTerminal_DCTopologicalNode);
}

void DCBaseTerminal::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ACDCTerminal::addEnumGetFnsToMap(get_map);
}

bool DCBaseTerminal::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DCBaseTerminal" &&
		dynamic_cast<DCBaseTerminal*>(otherObject) != nullptr;
}

const BaseClassDefiner DCBaseTerminal::declare()
{
	return BaseClassDefiner(DCBaseTerminal::addConstructToMap, DCBaseTerminal::addPrimitiveAssignFnsToMap, DCBaseTerminal::addClassAssignFnsToMap, DCBaseTerminal::debugName);
}

std::map<std::string, AttrDetails> DCBaseTerminal::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ACDCTerminal::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DCBaseTerminal_factory()
	{
		return new DCBaseTerminal;
	}
}
