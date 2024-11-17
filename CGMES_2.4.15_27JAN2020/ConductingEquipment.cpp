#include <sstream>
#include "Equipment.hpp"
#include "ConductingEquipment.hpp"

#include "BaseVoltage.hpp"
#include "SvStatus.hpp"
#include "Terminal.hpp"

using namespace CIMPP;

ConductingEquipment::ConductingEquipment(): BaseVoltage(nullptr), SvStatus(nullptr) {};

ConductingEquipment::~ConductingEquipment() {};






bool assign_BaseVoltage_ConductingEquipment(BaseClass*, BaseClass*);
bool assign_ConductingEquipment_BaseVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ConductingEquipment* element = dynamic_cast<ConductingEquipment*>(BaseClass_ptr1)) {
                element->BaseVoltage = dynamic_cast<BaseVoltage*>(BaseClass_ptr2);
                if(element->BaseVoltage != nullptr)
                        return assign_BaseVoltage_ConductingEquipment(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_ConductingEquipment_SvStatus(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ConductingEquipment* element = dynamic_cast<ConductingEquipment*>(BaseClass_ptr1)) {
                element->SvStatus = dynamic_cast<SvStatus*>(BaseClass_ptr2);
                if(element->SvStatus != nullptr)
                        return true;
        }
        return false;
}

bool assign_ConductingEquipment_Terminals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ConductingEquipment* element = dynamic_cast<ConductingEquipment*>(BaseClass_ptr1)) {
		if(dynamic_cast<Terminal*>(BaseClass_ptr2) != nullptr) {
                        element->Terminals.push_back(dynamic_cast<Terminal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* ConductingEquipment_factory() {
		return new ConductingEquipment;
	}
}

void ConductingEquipment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ConductingEquipment"), &ConductingEquipment_factory));
}

void ConductingEquipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			}

void ConductingEquipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ConductingEquipment.BaseVoltage"), &assign_ConductingEquipment_BaseVoltage));
	assign_map.insert(std::make_pair(std::string("cim:ConductingEquipment.SvStatus"), &assign_ConductingEquipment_SvStatus));
	assign_map.insert(std::make_pair(std::string("cim:ConductingEquipment.Terminals"), &assign_ConductingEquipment_Terminals));
}

const char ConductingEquipment::debugName[] = "ConductingEquipment";
const char* ConductingEquipment::debugString()
{
	return ConductingEquipment::debugName;
}

const BaseClassDefiner ConductingEquipment::declare()
{
	return BaseClassDefiner(ConductingEquipment::addConstructToMap, ConductingEquipment::addPrimitiveAssignFnsToMap, ConductingEquipment::addClassAssignFnsToMap, ConductingEquipment::debugName);
}
