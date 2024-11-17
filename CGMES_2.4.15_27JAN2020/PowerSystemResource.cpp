#include <sstream>
#include "IdentifiedObject.hpp"
#include "PowerSystemResource.hpp"

#include "Control.hpp"
#include "Location.hpp"
#include "Measurement.hpp"

using namespace CIMPP;

PowerSystemResource::PowerSystemResource(): Location(nullptr) {};

PowerSystemResource::~PowerSystemResource() {};






bool assign_PowerSystemResource_Controls(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PowerSystemResource* element = dynamic_cast<PowerSystemResource*>(BaseClass_ptr1)) {
		if(dynamic_cast<Control*>(BaseClass_ptr2) != nullptr) {
                        element->Controls.push_back(dynamic_cast<Control*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PowerSystemResource_Location(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PowerSystemResource* element = dynamic_cast<PowerSystemResource*>(BaseClass_ptr1)) {
                element->Location = dynamic_cast<Location*>(BaseClass_ptr2);
                if(element->Location != nullptr)
                        return true;
        }
        return false;
}

bool assign_PowerSystemResource_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PowerSystemResource* element = dynamic_cast<PowerSystemResource*>(BaseClass_ptr1)) {
		if(dynamic_cast<Measurement*>(BaseClass_ptr2) != nullptr) {
                        element->Measurements.push_back(dynamic_cast<Measurement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* PowerSystemResource_factory() {
		return new PowerSystemResource;
	}
}

void PowerSystemResource::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PowerSystemResource"), &PowerSystemResource_factory));
}

void PowerSystemResource::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			}

void PowerSystemResource::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PowerSystemResource.Controls"), &assign_PowerSystemResource_Controls));
	assign_map.insert(std::make_pair(std::string("cim:PowerSystemResource.Location"), &assign_PowerSystemResource_Location));
	assign_map.insert(std::make_pair(std::string("cim:PowerSystemResource.Measurements"), &assign_PowerSystemResource_Measurements));
}

const char PowerSystemResource::debugName[] = "PowerSystemResource";
const char* PowerSystemResource::debugString()
{
	return PowerSystemResource::debugName;
}

const BaseClassDefiner PowerSystemResource::declare()
{
	return BaseClassDefiner(PowerSystemResource::addConstructToMap, PowerSystemResource::addPrimitiveAssignFnsToMap, PowerSystemResource::addClassAssignFnsToMap, PowerSystemResource::debugName);
}
