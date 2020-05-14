#include <sstream>
#include "IdentifiedObject.hpp"
#include "DynamicsFunctionBlock.hpp"

#include "Boolean.hpp"

using namespace CIMPP;

DynamicsFunctionBlock::DynamicsFunctionBlock() {};

DynamicsFunctionBlock::~DynamicsFunctionBlock() {};




bool assign_DynamicsFunctionBlock_enabled(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DynamicsFunctionBlock* element = dynamic_cast<DynamicsFunctionBlock*>(BaseClass_ptr1)) {
                buffer >> element->enabled;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* DynamicsFunctionBlock_factory() {
		return new DynamicsFunctionBlock;
	}
}

void DynamicsFunctionBlock::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DynamicsFunctionBlock"), &DynamicsFunctionBlock_factory));
}

void DynamicsFunctionBlock::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DynamicsFunctionBlock.enabled"), &assign_DynamicsFunctionBlock_enabled));
}

void DynamicsFunctionBlock::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	}

const char DynamicsFunctionBlock::debugName[] = "DynamicsFunctionBlock";
const char* DynamicsFunctionBlock::debugString()
{
	return DynamicsFunctionBlock::debugName;
}

const BaseClassDefiner DynamicsFunctionBlock::declare()
{
	return BaseClassDefiner(DynamicsFunctionBlock::addConstructToMap, DynamicsFunctionBlock::addPrimitiveAssignFnsToMap, DynamicsFunctionBlock::addClassAssignFnsToMap, DynamicsFunctionBlock::debugName);
}


