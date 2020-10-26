#include <sstream>
#include "BaseClass.hpp"
#include "SvStatus.hpp"

#include "ConductingEquipment.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

SvStatus::SvStatus(): ConductingEquipment(nullptr) {};

SvStatus::~SvStatus() {};


bool assign_ConductingEquipment_SvStatus(BaseClass*, BaseClass*);
bool assign_SvStatus_ConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SvStatus* element = dynamic_cast<SvStatus*>(BaseClass_ptr1)) {
                element->ConductingEquipment = dynamic_cast<ConductingEquipment*>(BaseClass_ptr2);
                if(element->ConductingEquipment != nullptr)
                        return assign_ConductingEquipment_SvStatus(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}




bool assign_SvStatus_inService(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SvStatus* element = dynamic_cast<SvStatus*>(BaseClass_ptr1)) {
                buffer >> element->inService;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* SvStatus_factory() {
		return new SvStatus;
	}
}

void SvStatus::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SvStatus"), &SvStatus_factory));
}

void SvStatus::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:SvStatus.inService"), &assign_SvStatus_inService));
}

void SvStatus::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:SvStatus.ConductingEquipment"), &assign_SvStatus_ConductingEquipment));
	}

const char SvStatus::debugName[] = "SvStatus";
const char* SvStatus::debugString()
{
	return SvStatus::debugName;
}

const BaseClassDefiner SvStatus::declare()
{
	return BaseClassDefiner(SvStatus::addConstructToMap, SvStatus::addPrimitiveAssignFnsToMap, SvStatus::addClassAssignFnsToMap, SvStatus::debugName);
}


