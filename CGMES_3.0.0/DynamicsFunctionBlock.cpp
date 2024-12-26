/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DynamicsFunctionBlock.hpp"

#include <algorithm>
#include <sstream>

#include "Boolean.hpp"

using namespace CIMPP;

DynamicsFunctionBlock::DynamicsFunctionBlock() {};
DynamicsFunctionBlock::~DynamicsFunctionBlock() {};


bool assign_DynamicsFunctionBlock_enabled(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsFunctionBlock* element = dynamic_cast<DynamicsFunctionBlock*>(BaseClass_ptr1))
	{
		buffer >> element->enabled;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



const char DynamicsFunctionBlock::debugName[] = "DynamicsFunctionBlock";
const char* DynamicsFunctionBlock::debugString() const
{
	return DynamicsFunctionBlock::debugName;
}

void DynamicsFunctionBlock::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DynamicsFunctionBlock"), &DynamicsFunctionBlock_factory));
}

void DynamicsFunctionBlock::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DynamicsFunctionBlock.enabled"), &assign_DynamicsFunctionBlock_enabled));
}

void DynamicsFunctionBlock::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner DynamicsFunctionBlock::declare()
{
	return BaseClassDefiner(DynamicsFunctionBlock::addConstructToMap, DynamicsFunctionBlock::addPrimitiveAssignFnsToMap, DynamicsFunctionBlock::addClassAssignFnsToMap, DynamicsFunctionBlock::debugName);
}

namespace CIMPP
{
	BaseClass* DynamicsFunctionBlock_factory()
	{
		return new DynamicsFunctionBlock;
	}
}
