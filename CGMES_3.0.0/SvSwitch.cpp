/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SvSwitch.hpp"

#include <algorithm>
#include <sstream>

#include "Switch.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

SvSwitch::SvSwitch() : Switch(nullptr) {};
SvSwitch::~SvSwitch() {};



bool assign_SvSwitch_open(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SvSwitch* element = dynamic_cast<SvSwitch*>(BaseClass_ptr1))
	{
		buffer >> element->open;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_Switch_SvSwitch(BaseClass*, BaseClass*);
bool assign_SvSwitch_Switch(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SvSwitch* element = dynamic_cast<SvSwitch*>(BaseClass_ptr1);
	Switch* element2 = dynamic_cast<Switch*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Switch != element2)
		{
			element->Switch = element2;
			return assign_Switch_SvSwitch(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char SvSwitch::debugName[] = "SvSwitch";
const char* SvSwitch::debugString() const
{
	return SvSwitch::debugName;
}

void SvSwitch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SvSwitch"), &SvSwitch_factory));
}

void SvSwitch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SvSwitch.open"), &assign_SvSwitch_open));
}

void SvSwitch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SvSwitch.Switch"), &assign_SvSwitch_Switch));
}

const BaseClassDefiner SvSwitch::declare()
{
	return BaseClassDefiner(SvSwitch::addConstructToMap, SvSwitch::addPrimitiveAssignFnsToMap, SvSwitch::addClassAssignFnsToMap, SvSwitch::debugName);
}

namespace CIMPP
{
	BaseClass* SvSwitch_factory()
	{
		return new SvSwitch;
	}
}
