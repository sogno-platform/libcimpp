/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ShuntCompensator.hpp"

#include <algorithm>
#include <sstream>

#include "SvShuntCompensatorSections.hpp"
#include "Seconds.hpp"
#include "Boolean.hpp"
#include "Integer.hpp"
#include "Voltage.hpp"
#include "Integer.hpp"
#include "Simple_Float.hpp"
#include "Integer.hpp"
#include "DateTime.hpp"
#include "VoltagePerReactivePower.hpp"

using namespace CIMPP;

ShuntCompensator::ShuntCompensator() : SvShuntCompensatorSections(nullptr) {};
ShuntCompensator::~ShuntCompensator() {};



bool assign_ShuntCompensator_aVRDelay(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->aVRDelay;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ShuntCompensator_grounded(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->grounded;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ShuntCompensator_maximumSections(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->maximumSections;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ShuntCompensator_nomU(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->nomU;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ShuntCompensator_normalSections(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->normalSections;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ShuntCompensator_sections(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->sections;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ShuntCompensator_switchOnCount(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->switchOnCount;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ShuntCompensator_switchOnDate(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->switchOnDate;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ShuntCompensator_voltageSensitivity(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->voltageSensitivity;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_SvShuntCompensatorSections_ShuntCompensator(BaseClass*, BaseClass*);
bool assign_ShuntCompensator_SvShuntCompensatorSections(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	SvShuntCompensatorSections* element2 = dynamic_cast<SvShuntCompensatorSections*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SvShuntCompensatorSections != element2)
		{
			element->SvShuntCompensatorSections = element2;
			return assign_SvShuntCompensatorSections_ShuntCompensator(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}










const char ShuntCompensator::debugName[] = "ShuntCompensator";
const char* ShuntCompensator::debugString() const
{
	return ShuntCompensator::debugName;
}

void ShuntCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ShuntCompensator"), &ShuntCompensator_factory));
}

void ShuntCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.aVRDelay"), &assign_ShuntCompensator_aVRDelay));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.grounded"), &assign_ShuntCompensator_grounded));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.maximumSections"), &assign_ShuntCompensator_maximumSections));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.nomU"), &assign_ShuntCompensator_nomU));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.normalSections"), &assign_ShuntCompensator_normalSections));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.sections"), &assign_ShuntCompensator_sections));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.switchOnCount"), &assign_ShuntCompensator_switchOnCount));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.switchOnDate"), &assign_ShuntCompensator_switchOnDate));
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.voltageSensitivity"), &assign_ShuntCompensator_voltageSensitivity));
}

void ShuntCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ShuntCompensator.SvShuntCompensatorSections"), &assign_ShuntCompensator_SvShuntCompensatorSections));
}

const BaseClassDefiner ShuntCompensator::declare()
{
	return BaseClassDefiner(ShuntCompensator::addConstructToMap, ShuntCompensator::addPrimitiveAssignFnsToMap, ShuntCompensator::addClassAssignFnsToMap, ShuntCompensator::debugName);
}

namespace CIMPP
{
	BaseClass* ShuntCompensator_factory()
	{
		return new ShuntCompensator;
	}
}
