#include <sstream>
#include "EquipmentContainer.hpp"
#include "VoltageLevel.hpp"

#include "BaseVoltage.hpp"
#include "Bay.hpp"
#include "Substation.hpp"
#include "Voltage.hpp"
#include "Voltage.hpp"

using namespace CIMPP;

VoltageLevel::VoltageLevel(): BaseVoltage(nullptr), Substation(nullptr) {};

VoltageLevel::~VoltageLevel() {};





bool assign_VoltageLevel_highVoltageLimit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VoltageLevel* element = dynamic_cast<VoltageLevel*>(BaseClass_ptr1)) {
                buffer >> element->highVoltageLimit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VoltageLevel_lowVoltageLimit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VoltageLevel* element = dynamic_cast<VoltageLevel*>(BaseClass_ptr1)) {
                buffer >> element->lowVoltageLimit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_BaseVoltage_VoltageLevel(BaseClass*, BaseClass*);
bool assign_VoltageLevel_BaseVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(VoltageLevel* element = dynamic_cast<VoltageLevel*>(BaseClass_ptr1)) {
                element->BaseVoltage = dynamic_cast<BaseVoltage*>(BaseClass_ptr2);
                if(element->BaseVoltage != nullptr)
                        return assign_BaseVoltage_VoltageLevel(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_VoltageLevel_Bays(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(VoltageLevel* element = dynamic_cast<VoltageLevel*>(BaseClass_ptr1)) {
		if(dynamic_cast<Bay*>(BaseClass_ptr2) != nullptr) {
                        element->Bays.push_back(dynamic_cast<Bay*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Substation_VoltageLevels(BaseClass*, BaseClass*);
bool assign_VoltageLevel_Substation(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(VoltageLevel* element = dynamic_cast<VoltageLevel*>(BaseClass_ptr1)) {
                element->Substation = dynamic_cast<Substation*>(BaseClass_ptr2);
                if(element->Substation != nullptr)
                        return assign_Substation_VoltageLevels(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* VoltageLevel_factory() {
		return new VoltageLevel;
	}
}

void VoltageLevel::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:VoltageLevel"), &VoltageLevel_factory));
}

void VoltageLevel::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
				assign_map.insert(std::make_pair(std::string("cim:VoltageLevel.highVoltageLimit"), &assign_VoltageLevel_highVoltageLimit));
	assign_map.insert(std::make_pair(std::string("cim:VoltageLevel.lowVoltageLimit"), &assign_VoltageLevel_lowVoltageLimit));
}

void VoltageLevel::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:VoltageLevel.BaseVoltage"), &assign_VoltageLevel_BaseVoltage));
	assign_map.insert(std::make_pair(std::string("cim:VoltageLevel.Bays"), &assign_VoltageLevel_Bays));
	assign_map.insert(std::make_pair(std::string("cim:VoltageLevel.Substation"), &assign_VoltageLevel_Substation));
		}

const char VoltageLevel::debugName[] = "VoltageLevel";
const char* VoltageLevel::debugString()
{
	return VoltageLevel::debugName;
}

const BaseClassDefiner VoltageLevel::declare()
{
	return BaseClassDefiner(VoltageLevel::addConstructToMap, VoltageLevel::addPrimitiveAssignFnsToMap, VoltageLevel::addClassAssignFnsToMap, VoltageLevel::debugName);
}
