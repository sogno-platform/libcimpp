#include <sstream>
#include "IdentifiedObject.hpp"
#include "OperationalLimitSet.hpp"

#include "Equipment.hpp"
#include "OperationalLimit.hpp"
#include "ACDCTerminal.hpp"

using namespace CIMPP;

OperationalLimitSet::OperationalLimitSet(): Equipment(nullptr), Terminal(nullptr) {};

OperationalLimitSet::~OperationalLimitSet() {};






bool assign_Equipment_OperationalLimitSet(BaseClass*, BaseClass*);
bool assign_OperationalLimitSet_Equipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(OperationalLimitSet* element = dynamic_cast<OperationalLimitSet*>(BaseClass_ptr1)) {
                element->Equipment = dynamic_cast<Equipment*>(BaseClass_ptr2);
                if(element->Equipment != nullptr)
                        return assign_Equipment_OperationalLimitSet(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_OperationalLimitSet_OperationalLimitValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(OperationalLimitSet* element = dynamic_cast<OperationalLimitSet*>(BaseClass_ptr1)) {
		if(dynamic_cast<OperationalLimit*>(BaseClass_ptr2) != nullptr) {
                        element->OperationalLimitValue.push_back(dynamic_cast<OperationalLimit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ACDCTerminal_OperationalLimitSet(BaseClass*, BaseClass*);
bool assign_OperationalLimitSet_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(OperationalLimitSet* element = dynamic_cast<OperationalLimitSet*>(BaseClass_ptr1)) {
                element->Terminal = dynamic_cast<ACDCTerminal*>(BaseClass_ptr2);
                if(element->Terminal != nullptr)
                        return assign_ACDCTerminal_OperationalLimitSet(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* OperationalLimitSet_factory() {
		return new OperationalLimitSet;
	}
}

void OperationalLimitSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:OperationalLimitSet"), &OperationalLimitSet_factory));
}

void OperationalLimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			}

void OperationalLimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitSet.Equipment"), &assign_OperationalLimitSet_Equipment));
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitSet.OperationalLimitValue"), &assign_OperationalLimitSet_OperationalLimitValue));
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitSet.Terminal"), &assign_OperationalLimitSet_Terminal));
}

const char OperationalLimitSet::debugName[] = "OperationalLimitSet";
const char* OperationalLimitSet::debugString()
{
	return OperationalLimitSet::debugName;
}

const BaseClassDefiner OperationalLimitSet::declare()
{
	return BaseClassDefiner(OperationalLimitSet::addConstructToMap, OperationalLimitSet::addPrimitiveAssignFnsToMap, OperationalLimitSet::addClassAssignFnsToMap, OperationalLimitSet::debugName);
}
