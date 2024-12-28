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

DCBaseTerminal::DCBaseTerminal() : DCNode(nullptr), DCTopologicalNode(nullptr) {};
DCBaseTerminal::~DCBaseTerminal() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
	CGMESProfile::TP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DCBaseTerminal.DCNode", { CGMESProfile::EQ, } },
	{ "cim:DCBaseTerminal.DCTopologicalNode", { CGMESProfile::TP, } },
};

std::list<CGMESProfile>
DCBaseTerminal::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCBaseTerminal::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ACDCTerminal::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	if (const DCBaseTerminal* element = dynamic_cast<const DCBaseTerminal*>(BaseClass_ptr1))
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
	if (const DCBaseTerminal* element = dynamic_cast<const DCBaseTerminal*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:DCBaseTerminal"), &DCBaseTerminal_factory));
}

void DCBaseTerminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCBaseTerminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DCBaseTerminal.DCNode"), &assign_DCBaseTerminal_DCNode));
	assign_map.insert(std::make_pair(std::string("cim:DCBaseTerminal.DCTopologicalNode"), &assign_DCBaseTerminal_DCTopologicalNode));
}

void DCBaseTerminal::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ACDCTerminal::addPrimitiveGetFnsToMap(get_map);
}

void DCBaseTerminal::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ACDCTerminal::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:DCBaseTerminal.DCNode", &get_DCBaseTerminal_DCNode);
	get_map.emplace("cim:DCBaseTerminal.DCTopologicalNode", &get_DCBaseTerminal_DCTopologicalNode);
}

void DCBaseTerminal::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ACDCTerminal::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DCBaseTerminal::declare()
{
	return BaseClassDefiner(DCBaseTerminal::addConstructToMap, DCBaseTerminal::addPrimitiveAssignFnsToMap, DCBaseTerminal::addClassAssignFnsToMap, DCBaseTerminal::debugName);
}

namespace CIMPP
{
	BaseClass* DCBaseTerminal_factory()
	{
		return new DCBaseTerminal;
	}
}
