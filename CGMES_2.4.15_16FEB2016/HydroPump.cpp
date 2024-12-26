#include <sstream>
#include "Equipment.hpp"
#include "HydroPump.hpp"

#include "HydroPowerPlant.hpp"
#include "RotatingMachine.hpp"

using namespace CIMPP;

HydroPump::HydroPump(): HydroPowerPlant(nullptr), RotatingMachine(nullptr) {};

HydroPump::~HydroPump() {};





bool assign_HydroPowerPlant_HydroPumps(BaseClass*, BaseClass*);
bool assign_HydroPump_HydroPowerPlant(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(HydroPump* element = dynamic_cast<HydroPump*>(BaseClass_ptr1)) {
                element->HydroPowerPlant = dynamic_cast<HydroPowerPlant*>(BaseClass_ptr2);
                if(element->HydroPowerPlant != nullptr)
                        return assign_HydroPowerPlant_HydroPumps(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_RotatingMachine_HydroPump(BaseClass*, BaseClass*);
bool assign_HydroPump_RotatingMachine(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(HydroPump* element = dynamic_cast<HydroPump*>(BaseClass_ptr1)) {
                element->RotatingMachine = dynamic_cast<RotatingMachine*>(BaseClass_ptr2);
                if(element->RotatingMachine != nullptr)
                        return assign_RotatingMachine_HydroPump(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* HydroPump_factory() {
		return new HydroPump;
	}
}

void HydroPump::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:HydroPump"), &HydroPump_factory));
}

void HydroPump::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void HydroPump::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:HydroPump.HydroPowerPlant"), &assign_HydroPump_HydroPowerPlant));
	assign_map.insert(std::make_pair(std::string("cim:HydroPump.RotatingMachine"), &assign_HydroPump_RotatingMachine));
}

const char HydroPump::debugName[] = "HydroPump";
const char* HydroPump::debugString()
{
	return HydroPump::debugName;
}

const BaseClassDefiner HydroPump::declare()
{
	return BaseClassDefiner(HydroPump::addConstructToMap, HydroPump::addPrimitiveAssignFnsToMap, HydroPump::addClassAssignFnsToMap, HydroPump::debugName);
}
