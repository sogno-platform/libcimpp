#include <sstream>
#include "IdentifiedObject.hpp"
#include "OperationalLimitType.hpp"

#include "OperationalLimit.hpp"
#include "Seconds.hpp"
#include "OperationalLimitDirectionKind.hpp"
#include "LimitTypeKind.hpp"

using namespace CIMPP;

OperationalLimitType::OperationalLimitType() {};

OperationalLimitType::~OperationalLimitType() {};



bool assign_OperationalLimitType_acceptableDuration(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OperationalLimitType* element = dynamic_cast<OperationalLimitType*>(BaseClass_ptr1)) {
                buffer >> element->acceptableDuration;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OperationalLimitType_direction(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OperationalLimitType* element = dynamic_cast<OperationalLimitType*>(BaseClass_ptr1)) {
                buffer >> element->direction;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_OperationalLimitType_limitType(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OperationalLimitType* element = dynamic_cast<OperationalLimitType*>(BaseClass_ptr1)) {
                buffer >> element->limitType;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_OperationalLimitType_OperationalLimit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(OperationalLimitType* element = dynamic_cast<OperationalLimitType*>(BaseClass_ptr1)) {
		if(dynamic_cast<OperationalLimit*>(BaseClass_ptr2) != nullptr) {
                        element->OperationalLimit.push_back(dynamic_cast<OperationalLimit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}




namespace CIMPP {
	BaseClass* OperationalLimitType_factory() {
		return new OperationalLimitType;
	}
}

void OperationalLimitType::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:OperationalLimitType"), &OperationalLimitType_factory));
}

void OperationalLimitType::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:OperationalLimitType.acceptableDuration"), &assign_OperationalLimitType_acceptableDuration));
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitType.direction"), &assign_OperationalLimitType_direction));
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitType.limitType"), &assign_OperationalLimitType_limitType));
}

void OperationalLimitType::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:OperationalLimitType.OperationalLimit"), &assign_OperationalLimitType_OperationalLimit));
			}

const char OperationalLimitType::debugName[] = "OperationalLimitType";
const char* OperationalLimitType::debugString()
{
	return OperationalLimitType::debugName;
}

const BaseClassDefiner OperationalLimitType::declare()
{
	return BaseClassDefiner(OperationalLimitType::addConstructToMap, OperationalLimitType::addPrimitiveAssignFnsToMap, OperationalLimitType::addClassAssignFnsToMap, OperationalLimitType::debugName);
}
