/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineDetailed.hpp"

#include <algorithm>
#include <sstream>

#include "Simple_Float.hpp"
#include "IfdBaseKind.hpp"
#include "CurrentFlow.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

SynchronousMachineDetailed::SynchronousMachineDetailed() {};
SynchronousMachineDetailed::~SynchronousMachineDetailed() {};


bool assign_SynchronousMachineDetailed_efdBaseRatio(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1))
	{
		buffer >> element->efdBaseRatio;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineDetailed_ifdBaseType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1))
	{
		buffer >> element->ifdBaseType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineDetailed_ifdBaseValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1))
	{
		buffer >> element->ifdBaseValue;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineDetailed_saturationFactor120QAxis(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1))
	{
		buffer >> element->saturationFactor120QAxis;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineDetailed_saturationFactorQAxis(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1))
	{
		buffer >> element->saturationFactorQAxis;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}







const char SynchronousMachineDetailed::debugName[] = "SynchronousMachineDetailed";
const char* SynchronousMachineDetailed::debugString() const
{
	return SynchronousMachineDetailed::debugName;
}

void SynchronousMachineDetailed::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SynchronousMachineDetailed"), &SynchronousMachineDetailed_factory));
}

void SynchronousMachineDetailed::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDetailed.efdBaseRatio"), &assign_SynchronousMachineDetailed_efdBaseRatio));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDetailed.ifdBaseType"), &assign_SynchronousMachineDetailed_ifdBaseType));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDetailed.ifdBaseValue"), &assign_SynchronousMachineDetailed_ifdBaseValue));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDetailed.saturationFactor120QAxis"), &assign_SynchronousMachineDetailed_saturationFactor120QAxis));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDetailed.saturationFactorQAxis"), &assign_SynchronousMachineDetailed_saturationFactorQAxis));
}

void SynchronousMachineDetailed::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner SynchronousMachineDetailed::declare()
{
	return BaseClassDefiner(SynchronousMachineDetailed::addConstructToMap, SynchronousMachineDetailed::addPrimitiveAssignFnsToMap, SynchronousMachineDetailed::addClassAssignFnsToMap, SynchronousMachineDetailed::debugName);
}

namespace CIMPP
{
	BaseClass* SynchronousMachineDetailed_factory()
	{
		return new SynchronousMachineDetailed;
	}
}
