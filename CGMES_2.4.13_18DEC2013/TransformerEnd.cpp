/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TransformerEnd.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "BaseVoltage.hpp"
#include "PhaseTapChanger.hpp"
#include "RatioTapChanger.hpp"
#include "Terminal.hpp"
#include "Integer.hpp"
#include "Boolean.hpp"
#include "Resistance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

TransformerEnd::TransformerEnd() : BaseVoltage(nullptr), PhaseTapChanger(nullptr), RatioTapChanger(nullptr), Terminal(nullptr) {};
TransformerEnd::~TransformerEnd() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:TransformerEnd.BaseVoltage", { CGMESProfile::EQ, } },
	{ "cim:TransformerEnd.PhaseTapChanger", { CGMESProfile::EQ, } },
	{ "cim:TransformerEnd.RatioTapChanger", { CGMESProfile::EQ, } },
	{ "cim:TransformerEnd.Terminal", { CGMESProfile::EQ, } },
	{ "cim:TransformerEnd.endNumber", { CGMESProfile::EQ, } },
	{ "cim:TransformerEnd.grounded", { CGMESProfile::EQ, } },
	{ "cim:TransformerEnd.rground", { CGMESProfile::EQ, } },
	{ "cim:TransformerEnd.xground", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
TransformerEnd::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
TransformerEnd::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_TransformerEnd_endNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->endNumber;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TransformerEnd_grounded(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->grounded;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TransformerEnd_rground(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->rground;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TransformerEnd_xground(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->xground;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_BaseVoltage_TransformerEnds(BaseClass*, BaseClass*);
bool assign_TransformerEnd_BaseVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	BaseVoltage* element2 = dynamic_cast<BaseVoltage*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->BaseVoltage != element2)
		{
			element->BaseVoltage = element2;
			return assign_BaseVoltage_TransformerEnds(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_PhaseTapChanger_TransformerEnd(BaseClass*, BaseClass*);
bool assign_TransformerEnd_PhaseTapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	PhaseTapChanger* element2 = dynamic_cast<PhaseTapChanger*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PhaseTapChanger != element2)
		{
			element->PhaseTapChanger = element2;
			return assign_PhaseTapChanger_TransformerEnd(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_RatioTapChanger_TransformerEnd(BaseClass*, BaseClass*);
bool assign_TransformerEnd_RatioTapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	RatioTapChanger* element2 = dynamic_cast<RatioTapChanger*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RatioTapChanger != element2)
		{
			element->RatioTapChanger = element2;
			return assign_RatioTapChanger_TransformerEnd(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_Terminal_TransformerEnd(BaseClass*, BaseClass*);
bool assign_TransformerEnd_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Terminal != element2)
		{
			element->Terminal = element2;
			return assign_Terminal_TransformerEnd(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_TransformerEnd_endNumber(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TransformerEnd* element = dynamic_cast<const TransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->endNumber;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TransformerEnd_grounded(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TransformerEnd* element = dynamic_cast<const TransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->grounded;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TransformerEnd_rground(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TransformerEnd* element = dynamic_cast<const TransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->rground;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TransformerEnd_xground(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TransformerEnd* element = dynamic_cast<const TransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->xground;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_TransformerEnd_BaseVoltage(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const TransformerEnd* element = dynamic_cast<const TransformerEnd*>(BaseClass_ptr1))
	{
		if (element->BaseVoltage != 0)
		{
			BaseClass_list.push_back(element->BaseVoltage);
			return true;
		}
	}
	return false;
}

bool get_TransformerEnd_Terminal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const TransformerEnd* element = dynamic_cast<const TransformerEnd*>(BaseClass_ptr1))
	{
		if (element->Terminal != 0)
		{
			BaseClass_list.push_back(element->Terminal);
			return true;
		}
	}
	return false;
}


const char TransformerEnd::debugName[] = "TransformerEnd";
const char* TransformerEnd::debugString() const
{
	return TransformerEnd::debugName;
}

void TransformerEnd::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TransformerEnd"), &TransformerEnd_factory));
}

void TransformerEnd::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.endNumber"), &assign_TransformerEnd_endNumber));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.grounded"), &assign_TransformerEnd_grounded));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.rground"), &assign_TransformerEnd_rground));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.xground"), &assign_TransformerEnd_xground));
}

void TransformerEnd::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.BaseVoltage"), &assign_TransformerEnd_BaseVoltage));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.PhaseTapChanger"), &assign_TransformerEnd_PhaseTapChanger));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.RatioTapChanger"), &assign_TransformerEnd_RatioTapChanger));
	assign_map.insert(std::make_pair(std::string("cim:TransformerEnd.Terminal"), &assign_TransformerEnd_Terminal));
}

void TransformerEnd::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:TransformerEnd.endNumber", &get_TransformerEnd_endNumber);
	get_map.emplace("cim:TransformerEnd.grounded", &get_TransformerEnd_grounded);
	get_map.emplace("cim:TransformerEnd.rground", &get_TransformerEnd_rground);
	get_map.emplace("cim:TransformerEnd.xground", &get_TransformerEnd_xground);
}

void TransformerEnd::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:TransformerEnd.BaseVoltage", &get_TransformerEnd_BaseVoltage);
	get_map.emplace("cim:TransformerEnd.Terminal", &get_TransformerEnd_Terminal);
}

void TransformerEnd::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner TransformerEnd::declare()
{
	return BaseClassDefiner(TransformerEnd::addConstructToMap, TransformerEnd::addPrimitiveAssignFnsToMap, TransformerEnd::addClassAssignFnsToMap, TransformerEnd::debugName);
}

namespace CIMPP
{
	BaseClass* TransformerEnd_factory()
	{
		return new TransformerEnd;
	}
}
