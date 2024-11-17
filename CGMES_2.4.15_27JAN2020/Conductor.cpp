#include <sstream>
#include "ConductingEquipment.hpp"
#include "Conductor.hpp"

#include "Length.hpp"

using namespace CIMPP;

Conductor::Conductor() {};

Conductor::~Conductor() {};


bool assign_Conductor_length(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Conductor* element = dynamic_cast<Conductor*>(BaseClass_ptr1)) {
                buffer >> element->length;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}



namespace CIMPP {
	BaseClass* Conductor_factory() {
		return new Conductor;
	}
}

void Conductor::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Conductor"), &Conductor_factory));
}

void Conductor::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Conductor.length"), &assign_Conductor_length));
}

void Conductor::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	}

const char Conductor::debugName[] = "Conductor";
const char* Conductor::debugString()
{
	return Conductor::debugName;
}

const BaseClassDefiner Conductor::declare()
{
	return BaseClassDefiner(Conductor::addConstructToMap, Conductor::addPrimitiveAssignFnsToMap, Conductor::addClassAssignFnsToMap, Conductor::debugName);
}
