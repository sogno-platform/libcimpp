/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SvInjection.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "TopologicalNode.hpp"

using namespace CIMPP;

SvInjection::SvInjection() : TopologicalNode(nullptr) {}
SvInjection::~SvInjection() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::SV,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SvInjection.TopologicalNode", { CGMESProfile::SV, } },
	{ "cim:SvInjection.pInjection", { CGMESProfile::SV, } },
	{ "cim:SvInjection.qInjection", { CGMESProfile::SV, } },
};

std::list<CGMESProfile>
SvInjection::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SvInjection::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_TopologicalNode_SvInjection(BaseClass*, BaseClass*);
bool assign_SvInjection_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SvInjection* element = dynamic_cast<SvInjection*>(BaseClass_ptr1);
	TopologicalNode* element2 = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TopologicalNode != element2)
		{
			element->TopologicalNode = element2;
			return assign_TopologicalNode_SvInjection(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SvInjection_pInjection(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SvInjection* element = dynamic_cast<SvInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pInjection;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SvInjection_qInjection(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SvInjection* element = dynamic_cast<SvInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qInjection;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_SvInjection_TopologicalNode(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SvInjection* element = dynamic_cast<const SvInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->TopologicalNode != 0)
		{
			BaseClass_list.push_back(element->TopologicalNode);
			return true;
		}
	}
	return false;
}

bool get_SvInjection_pInjection(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SvInjection* element = dynamic_cast<const SvInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pInjection;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SvInjection_qInjection(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SvInjection* element = dynamic_cast<const SvInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qInjection;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char SvInjection::debugName[] = "SvInjection";
const char* SvInjection::debugString() const
{
	return SvInjection::debugName;
}

void SvInjection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:SvInjection", &SvInjection_factory);
}

void SvInjection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:SvInjection.pInjection", &assign_SvInjection_pInjection);
	assign_map.emplace("cim:SvInjection.qInjection", &assign_SvInjection_qInjection);
}

void SvInjection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:SvInjection.TopologicalNode", &assign_SvInjection_TopologicalNode);
}

void SvInjection::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:SvInjection.pInjection", &get_SvInjection_pInjection);
	get_map.emplace("cim:SvInjection.qInjection", &get_SvInjection_qInjection);
}

void SvInjection::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:SvInjection.TopologicalNode", &get_SvInjection_TopologicalNode);
}

void SvInjection::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SvInjection::declare()
{
	return BaseClassDefiner(SvInjection::addConstructToMap, SvInjection::addPrimitiveAssignFnsToMap, SvInjection::addClassAssignFnsToMap, SvInjection::debugName);
}

namespace CIMPP
{
	BaseClass* SvInjection_factory()
	{
		return new SvInjection;
	}
}
