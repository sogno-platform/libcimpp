#include <sstream>
#include "ConductingEquipment.hpp"
#include "EnergyConsumer.hpp"

#include "LoadDynamics.hpp"
#include "LoadResponseCharacteristic.hpp"
#include "ActivePower.hpp"
#include "ActivePower.hpp"
#include "PerCent.hpp"
#include "ReactivePower.hpp"
#include "ReactivePower.hpp"
#include "PerCent.hpp"

using namespace CIMPP;

EnergyConsumer::EnergyConsumer(): LoadDynamics(nullptr), LoadResponse(nullptr) {};

EnergyConsumer::~EnergyConsumer() {};




bool assign_EnergyConsumer_p(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1)) {
                buffer >> element->p;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergyConsumer_pfixed(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1)) {
                buffer >> element->pfixed;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergyConsumer_pfixedPct(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1)) {
                buffer >> element->pfixedPct;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergyConsumer_q(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1)) {
                buffer >> element->q;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergyConsumer_qfixed(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1)) {
                buffer >> element->qfixed;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergyConsumer_qfixedPct(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1)) {
                buffer >> element->qfixedPct;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_LoadDynamics_EnergyConsumer(BaseClass*, BaseClass*);
bool assign_EnergyConsumer_LoadDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1)) {
                element->LoadDynamics = dynamic_cast<LoadDynamics*>(BaseClass_ptr2);
                if(element->LoadDynamics != nullptr)
                        return assign_LoadDynamics_EnergyConsumer(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_LoadResponseCharacteristic_EnergyConsumer(BaseClass*, BaseClass*);
bool assign_EnergyConsumer_LoadResponse(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1)) {
                element->LoadResponse = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr2);
                if(element->LoadResponse != nullptr)
                        return assign_LoadResponseCharacteristic_EnergyConsumer(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}







namespace CIMPP {
	BaseClass* EnergyConsumer_factory() {
		return new EnergyConsumer;
	}
}

void EnergyConsumer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:EnergyConsumer"), &EnergyConsumer_factory));
}

void EnergyConsumer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.p"), &assign_EnergyConsumer_p));
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.pfixed"), &assign_EnergyConsumer_pfixed));
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.pfixedPct"), &assign_EnergyConsumer_pfixedPct));
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.q"), &assign_EnergyConsumer_q));
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.qfixed"), &assign_EnergyConsumer_qfixed));
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.qfixedPct"), &assign_EnergyConsumer_qfixedPct));
}

void EnergyConsumer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.LoadDynamics"), &assign_EnergyConsumer_LoadDynamics));
	assign_map.insert(std::make_pair(std::string("cim:EnergyConsumer.LoadResponse"), &assign_EnergyConsumer_LoadResponse));
						}

const char EnergyConsumer::debugName[] = "EnergyConsumer";
const char* EnergyConsumer::debugString()
{
	return EnergyConsumer::debugName;
}

const BaseClassDefiner EnergyConsumer::declare()
{
	return BaseClassDefiner(EnergyConsumer::addConstructToMap, EnergyConsumer::addPrimitiveAssignFnsToMap, EnergyConsumer::addClassAssignFnsToMap, EnergyConsumer::debugName);
}
