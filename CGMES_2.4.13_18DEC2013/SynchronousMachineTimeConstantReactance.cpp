/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineTimeConstantReactance.hpp"

#include <algorithm>
#include <sstream>

#include "Simple_Float.hpp"
#include "SynchronousMachineModelKind.hpp"
#include "RotorKind.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

SynchronousMachineTimeConstantReactance::SynchronousMachineTimeConstantReactance() {};
SynchronousMachineTimeConstantReactance::~SynchronousMachineTimeConstantReactance() {};


bool assign_SynchronousMachineTimeConstantReactance_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->ks;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_modelType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->modelType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_rotorType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->rotorType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tpdo(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->tpdo;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tppdo(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->tppdo;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tppqo(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->tppqo;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tpqo(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->tpqo;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xDirectSubtrans(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xDirectSubtrans;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xDirectSync(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xDirectSync;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xDirectTrans(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xDirectTrans;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xQuadSubtrans(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xQuadSubtrans;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xQuadSync(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xQuadSync;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xQuadTrans(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xQuadTrans;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}
















const char SynchronousMachineTimeConstantReactance::debugName[] = "SynchronousMachineTimeConstantReactance";
const char* SynchronousMachineTimeConstantReactance::debugString() const
{
	return SynchronousMachineTimeConstantReactance::debugName;
}

void SynchronousMachineTimeConstantReactance::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance"), &SynchronousMachineTimeConstantReactance_factory));
}

void SynchronousMachineTimeConstantReactance::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.ks"), &assign_SynchronousMachineTimeConstantReactance_ks));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.modelType"), &assign_SynchronousMachineTimeConstantReactance_modelType));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.rotorType"), &assign_SynchronousMachineTimeConstantReactance_rotorType));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.tc"), &assign_SynchronousMachineTimeConstantReactance_tc));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.tpdo"), &assign_SynchronousMachineTimeConstantReactance_tpdo));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.tppdo"), &assign_SynchronousMachineTimeConstantReactance_tppdo));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.tppqo"), &assign_SynchronousMachineTimeConstantReactance_tppqo));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.tpqo"), &assign_SynchronousMachineTimeConstantReactance_tpqo));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.xDirectSubtrans"), &assign_SynchronousMachineTimeConstantReactance_xDirectSubtrans));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.xDirectSync"), &assign_SynchronousMachineTimeConstantReactance_xDirectSync));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.xDirectTrans"), &assign_SynchronousMachineTimeConstantReactance_xDirectTrans));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.xQuadSubtrans"), &assign_SynchronousMachineTimeConstantReactance_xQuadSubtrans));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.xQuadSync"), &assign_SynchronousMachineTimeConstantReactance_xQuadSync));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.xQuadTrans"), &assign_SynchronousMachineTimeConstantReactance_xQuadTrans));
}

void SynchronousMachineTimeConstantReactance::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner SynchronousMachineTimeConstantReactance::declare()
{
	return BaseClassDefiner(SynchronousMachineTimeConstantReactance::addConstructToMap, SynchronousMachineTimeConstantReactance::addPrimitiveAssignFnsToMap, SynchronousMachineTimeConstantReactance::addClassAssignFnsToMap, SynchronousMachineTimeConstantReactance::debugName);
}

namespace CIMPP
{
	BaseClass* SynchronousMachineTimeConstantReactance_factory()
	{
		return new SynchronousMachineTimeConstantReactance;
	}
}
