#include <sstream>
#include "GeneratingUnit.hpp"
#include "WindGeneratingUnit.hpp"

#include "WindGenUnitKind.hpp"

using namespace CIMPP;

WindGeneratingUnit::WindGeneratingUnit() {};

WindGeneratingUnit::~WindGeneratingUnit() {};




bool assign_WindGeneratingUnit_windGenUnitType(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindGeneratingUnit* element = dynamic_cast<WindGeneratingUnit*>(BaseClass_ptr1)) {
                buffer >> element->windGenUnitType;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* WindGeneratingUnit_factory() {
		return new WindGeneratingUnit;
	}
}

void WindGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindGeneratingUnit"), &WindGeneratingUnit_factory));
}

void WindGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindGeneratingUnit.windGenUnitType"), &assign_WindGeneratingUnit_windGenUnitType));
}

void WindGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	}

const char WindGeneratingUnit::debugName[] = "WindGeneratingUnit";
const char* WindGeneratingUnit::debugString()
{
	return WindGeneratingUnit::debugName;
}

const BaseClassDefiner WindGeneratingUnit::declare()
{
	return BaseClassDefiner(WindGeneratingUnit::addConstructToMap, WindGeneratingUnit::addPrimitiveAssignFnsToMap, WindGeneratingUnit::addClassAssignFnsToMap, WindGeneratingUnit::debugName);
}


