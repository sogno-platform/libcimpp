#include <sstream>
#include "IdentifiedObject.hpp"
#include "PhaseTapChangerTable.hpp"

#include "PhaseTapChangerTablePoint.hpp"
#include "PhaseTapChangerTabular.hpp"

using namespace CIMPP;

PhaseTapChangerTable::PhaseTapChangerTable() {};

PhaseTapChangerTable::~PhaseTapChangerTable() {};





bool assign_PhaseTapChangerTable_PhaseTapChangerTablePoint(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PhaseTapChangerTable* element = dynamic_cast<PhaseTapChangerTable*>(BaseClass_ptr1)) {
		if(dynamic_cast<PhaseTapChangerTablePoint*>(BaseClass_ptr2) != nullptr) {
                        element->PhaseTapChangerTablePoint.push_back(dynamic_cast<PhaseTapChangerTablePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_PhaseTapChangerTable_PhaseTapChangerTabular(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PhaseTapChangerTable* element = dynamic_cast<PhaseTapChangerTable*>(BaseClass_ptr1)) {
		if(dynamic_cast<PhaseTapChangerTabular*>(BaseClass_ptr2) != nullptr) {
                        element->PhaseTapChangerTabular.push_back(dynamic_cast<PhaseTapChangerTabular*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* PhaseTapChangerTable_factory() {
		return new PhaseTapChangerTable;
	}
}

void PhaseTapChangerTable::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PhaseTapChangerTable"), &PhaseTapChangerTable_factory));
}

void PhaseTapChangerTable::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void PhaseTapChangerTable::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerTable.PhaseTapChangerTablePoint"), &assign_PhaseTapChangerTable_PhaseTapChangerTablePoint));
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerTable.PhaseTapChangerTabular"), &assign_PhaseTapChangerTable_PhaseTapChangerTabular));
}

const char PhaseTapChangerTable::debugName[] = "PhaseTapChangerTable";
const char* PhaseTapChangerTable::debugString()
{
	return PhaseTapChangerTable::debugName;
}

const BaseClassDefiner PhaseTapChangerTable::declare()
{
	return BaseClassDefiner(PhaseTapChangerTable::addConstructToMap, PhaseTapChangerTable::addPrimitiveAssignFnsToMap, PhaseTapChangerTable::addClassAssignFnsToMap, PhaseTapChangerTable::debugName);
}
