/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SvVoltage.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "TopologicalNode.hpp"
#include "AngleDegrees.hpp"
#include "Voltage.hpp"

using namespace CIMPP;

SvVoltage::SvVoltage() : TopologicalNode(nullptr) {};
SvVoltage::~SvVoltage() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::SV,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SvVoltage.TopologicalNode", { CGMESProfile::SV, } },
	{ "cim:SvVoltage.angle", { CGMESProfile::SV, } },
	{ "cim:SvVoltage.v", { CGMESProfile::SV, } },
};

std::list<CGMESProfile>
SvVoltage::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SvVoltage::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_SvVoltage_angle(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SvVoltage* element = dynamic_cast<SvVoltage*>(BaseClass_ptr1))
	{
		buffer >> element->angle;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SvVoltage_v(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SvVoltage* element = dynamic_cast<SvVoltage*>(BaseClass_ptr1))
	{
		buffer >> element->v;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_TopologicalNode_SvVoltage(BaseClass*, BaseClass*);
bool assign_SvVoltage_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SvVoltage* element = dynamic_cast<SvVoltage*>(BaseClass_ptr1);
	TopologicalNode* element2 = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TopologicalNode != element2)
		{
			element->TopologicalNode = element2;
			return assign_TopologicalNode_SvVoltage(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_SvVoltage_angle(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SvVoltage* element = dynamic_cast<const SvVoltage*>(BaseClass_ptr1))
	{
		buffer << element->angle;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SvVoltage_v(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SvVoltage* element = dynamic_cast<const SvVoltage*>(BaseClass_ptr1))
	{
		buffer << element->v;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_SvVoltage_TopologicalNode(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const SvVoltage* element = dynamic_cast<const SvVoltage*>(BaseClass_ptr1))
	{
		if (element->TopologicalNode != 0)
		{
			BaseClass_list.push_back(element->TopologicalNode);
			return true;
		}
	}
	return false;
}


const char SvVoltage::debugName[] = "SvVoltage";
const char* SvVoltage::debugString() const
{
	return SvVoltage::debugName;
}

void SvVoltage::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SvVoltage"), &SvVoltage_factory));
}

void SvVoltage::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SvVoltage.angle"), &assign_SvVoltage_angle));
	assign_map.insert(std::make_pair(std::string("cim:SvVoltage.v"), &assign_SvVoltage_v));
}

void SvVoltage::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SvVoltage.TopologicalNode"), &assign_SvVoltage_TopologicalNode));
}

void SvVoltage::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:SvVoltage.angle", &get_SvVoltage_angle);
	get_map.emplace("cim:SvVoltage.v", &get_SvVoltage_v);
}

void SvVoltage::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:SvVoltage.TopologicalNode", &get_SvVoltage_TopologicalNode);
}

void SvVoltage::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SvVoltage::declare()
{
	return BaseClassDefiner(SvVoltage::addConstructToMap, SvVoltage::addPrimitiveAssignFnsToMap, SvVoltage::addClassAssignFnsToMap, SvVoltage::debugName);
}

namespace CIMPP
{
	BaseClass* SvVoltage_factory()
	{
		return new SvVoltage;
	}
}
