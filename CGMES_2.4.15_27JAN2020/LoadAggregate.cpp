#include <sstream>
#include "LoadDynamics.hpp"
#include "LoadAggregate.hpp"

#include "LoadStatic.hpp"
#include "LoadMotor.hpp"

using namespace CIMPP;

LoadAggregate::LoadAggregate() {};

LoadAggregate::~LoadAggregate() {};


bool assign_LoadAggregate_LoadStatic(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(LoadAggregate* element = dynamic_cast<LoadAggregate*>(BaseClass_ptr1)) {
                element->LoadStatic = dynamic_cast<LoadStatic*>(BaseClass_ptr2);
                if(element->LoadStatic != nullptr)
                        return true;
        }
        return false;
}

bool assign_LoadAggregate_LoadMotor(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(LoadAggregate* element = dynamic_cast<LoadAggregate*>(BaseClass_ptr1)) {
                element->LoadMotor = dynamic_cast<LoadMotor*>(BaseClass_ptr2);
                if(element->LoadMotor != nullptr)
                        return true;
        }
        return false;
}




namespace CIMPP {
	BaseClass* LoadAggregate_factory() {
		return new LoadAggregate;
	}
}

void LoadAggregate::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:LoadAggregate"), &LoadAggregate_factory));
}

void LoadAggregate::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void LoadAggregate::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:LoadAggregate.LoadStatic"), &assign_LoadAggregate_LoadStatic));
	assign_map.insert(std::make_pair(std::string("cim:LoadAggregate.LoadMotor"), &assign_LoadAggregate_LoadMotor));
}

const char LoadAggregate::debugName[] = "LoadAggregate";
const char* LoadAggregate::debugString()
{
	return LoadAggregate::debugName;
}

const BaseClassDefiner LoadAggregate::declare()
{
	return BaseClassDefiner(LoadAggregate::addConstructToMap, LoadAggregate::addPrimitiveAssignFnsToMap, LoadAggregate::addClassAssignFnsToMap, LoadAggregate::debugName);
}


