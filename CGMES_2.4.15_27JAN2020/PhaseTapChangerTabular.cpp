#include <sstream>
#include "PhaseTapChanger.hpp"
#include "PhaseTapChangerTabular.hpp"

#include "PhaseTapChangerTable.hpp"

using namespace CIMPP;

PhaseTapChangerTabular::PhaseTapChangerTabular(): PhaseTapChangerTable(nullptr) {};

PhaseTapChangerTabular::~PhaseTapChangerTabular() {};


bool assign_PhaseTapChangerTable_PhaseTapChangerTabular(BaseClass*, BaseClass*);
bool assign_PhaseTapChangerTabular_PhaseTapChangerTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PhaseTapChangerTabular* element = dynamic_cast<PhaseTapChangerTabular*>(BaseClass_ptr1)) {
                element->PhaseTapChangerTable = dynamic_cast<PhaseTapChangerTable*>(BaseClass_ptr2);
                if(element->PhaseTapChangerTable != nullptr)
                        return assign_PhaseTapChangerTable_PhaseTapChangerTabular(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* PhaseTapChangerTabular_factory() {
		return new PhaseTapChangerTabular;
	}
}

void PhaseTapChangerTabular::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PhaseTapChangerTabular"), &PhaseTapChangerTabular_factory));
}

void PhaseTapChangerTabular::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void PhaseTapChangerTabular::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerTabular.PhaseTapChangerTable"), &assign_PhaseTapChangerTabular_PhaseTapChangerTable));
}

const char PhaseTapChangerTabular::debugName[] = "PhaseTapChangerTabular";
const char* PhaseTapChangerTabular::debugString()
{
	return PhaseTapChangerTabular::debugName;
}

const BaseClassDefiner PhaseTapChangerTabular::declare()
{
	return BaseClassDefiner(PhaseTapChangerTabular::addConstructToMap, PhaseTapChangerTabular::addPrimitiveAssignFnsToMap, PhaseTapChangerTabular::addClassAssignFnsToMap, PhaseTapChangerTabular::debugName);
}


