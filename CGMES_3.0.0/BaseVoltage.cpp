/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BaseVoltage.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ConductingEquipment.hpp"
#include "TopologicalNode.hpp"
#include "TransformerEnd.hpp"
#include "VoltageLevel.hpp"
#include "Voltage.hpp"

using namespace CIMPP;

BaseVoltage::BaseVoltage() {};
BaseVoltage::~BaseVoltage() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::EQBD,
	CGMESProfile::TP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:BaseVoltage.ConductingEquipment", { CGMESProfile::EQ, } },
	{ "cim:BaseVoltage.TopologicalNode", { CGMESProfile::TP, } },
	{ "cim:BaseVoltage.TransformerEnds", { CGMESProfile::EQ, } },
	{ "cim:BaseVoltage.VoltageLevel", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:BaseVoltage.nominalVoltage", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
};

std::list<CGMESProfile>
BaseVoltage::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
BaseVoltage::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_BaseVoltage_nominalVoltage(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BaseVoltage* element = dynamic_cast<BaseVoltage*>(BaseClass_ptr1))
	{
		buffer >> element->nominalVoltage;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ConductingEquipment_BaseVoltage(BaseClass*, BaseClass*);
bool assign_BaseVoltage_ConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	BaseVoltage* element = dynamic_cast<BaseVoltage*>(BaseClass_ptr1);
	ConductingEquipment* element2 = dynamic_cast<ConductingEquipment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ConductingEquipment.begin(), element->ConductingEquipment.end(), element2) == element->ConductingEquipment.end())
		{
			element->ConductingEquipment.push_back(element2);
			return assign_ConductingEquipment_BaseVoltage(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_TopologicalNode_BaseVoltage(BaseClass*, BaseClass*);
bool assign_BaseVoltage_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	BaseVoltage* element = dynamic_cast<BaseVoltage*>(BaseClass_ptr1);
	TopologicalNode* element2 = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TopologicalNode.begin(), element->TopologicalNode.end(), element2) == element->TopologicalNode.end())
		{
			element->TopologicalNode.push_back(element2);
			return assign_TopologicalNode_BaseVoltage(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_TransformerEnd_BaseVoltage(BaseClass*, BaseClass*);
bool assign_BaseVoltage_TransformerEnds(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	BaseVoltage* element = dynamic_cast<BaseVoltage*>(BaseClass_ptr1);
	TransformerEnd* element2 = dynamic_cast<TransformerEnd*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TransformerEnds.begin(), element->TransformerEnds.end(), element2) == element->TransformerEnds.end())
		{
			element->TransformerEnds.push_back(element2);
			return assign_TransformerEnd_BaseVoltage(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_VoltageLevel_BaseVoltage(BaseClass*, BaseClass*);
bool assign_BaseVoltage_VoltageLevel(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	BaseVoltage* element = dynamic_cast<BaseVoltage*>(BaseClass_ptr1);
	VoltageLevel* element2 = dynamic_cast<VoltageLevel*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->VoltageLevel.begin(), element->VoltageLevel.end(), element2) == element->VoltageLevel.end())
		{
			element->VoltageLevel.push_back(element2);
			return assign_VoltageLevel_BaseVoltage(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_BaseVoltage_nominalVoltage(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const BaseVoltage* element = dynamic_cast<const BaseVoltage*>(BaseClass_ptr1))
	{
		buffer << element->nominalVoltage;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char BaseVoltage::debugName[] = "BaseVoltage";
const char* BaseVoltage::debugString() const
{
	return BaseVoltage::debugName;
}

void BaseVoltage::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:BaseVoltage"), &BaseVoltage_factory));
}

void BaseVoltage::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:BaseVoltage.nominalVoltage"), &assign_BaseVoltage_nominalVoltage));
}

void BaseVoltage::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:BaseVoltage.ConductingEquipment"), &assign_BaseVoltage_ConductingEquipment));
	assign_map.insert(std::make_pair(std::string("cim:BaseVoltage.TopologicalNode"), &assign_BaseVoltage_TopologicalNode));
	assign_map.insert(std::make_pair(std::string("cim:BaseVoltage.TransformerEnds"), &assign_BaseVoltage_TransformerEnds));
	assign_map.insert(std::make_pair(std::string("cim:BaseVoltage.VoltageLevel"), &assign_BaseVoltage_VoltageLevel));
}

void BaseVoltage::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:BaseVoltage.nominalVoltage", &get_BaseVoltage_nominalVoltage);
}

void BaseVoltage::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void BaseVoltage::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner BaseVoltage::declare()
{
	return BaseClassDefiner(BaseVoltage::addConstructToMap, BaseVoltage::addPrimitiveAssignFnsToMap, BaseVoltage::addClassAssignFnsToMap, BaseVoltage::debugName);
}

namespace CIMPP
{
	BaseClass* BaseVoltage_factory()
	{
		return new BaseVoltage;
	}
}
