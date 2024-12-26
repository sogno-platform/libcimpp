#include <sstream>
#include "IdentifiedObject.hpp"
#include "RatioTapChangerTable.hpp"

#include "RatioTapChanger.hpp"
#include "RatioTapChangerTablePoint.hpp"

using namespace CIMPP;

RatioTapChangerTable::RatioTapChangerTable() {};

RatioTapChangerTable::~RatioTapChangerTable() {};





bool assign_RatioTapChangerTable_RatioTapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RatioTapChangerTable* element = dynamic_cast<RatioTapChangerTable*>(BaseClass_ptr1)) {
		if(dynamic_cast<RatioTapChanger*>(BaseClass_ptr2) != nullptr) {
                        element->RatioTapChanger.push_back(dynamic_cast<RatioTapChanger*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_RatioTapChangerTable_RatioTapChangerTablePoint(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RatioTapChangerTable* element = dynamic_cast<RatioTapChangerTable*>(BaseClass_ptr1)) {
		if(dynamic_cast<RatioTapChangerTablePoint*>(BaseClass_ptr2) != nullptr) {
                        element->RatioTapChangerTablePoint.push_back(dynamic_cast<RatioTapChangerTablePoint*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* RatioTapChangerTable_factory() {
		return new RatioTapChangerTable;
	}
}

void RatioTapChangerTable::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:RatioTapChangerTable"), &RatioTapChangerTable_factory));
}

void RatioTapChangerTable::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void RatioTapChangerTable::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:RatioTapChangerTable.RatioTapChanger"), &assign_RatioTapChangerTable_RatioTapChanger));
	assign_map.insert(std::make_pair(std::string("cim:RatioTapChangerTable.RatioTapChangerTablePoint"), &assign_RatioTapChangerTable_RatioTapChangerTablePoint));
}

const char RatioTapChangerTable::debugName[] = "RatioTapChangerTable";
const char* RatioTapChangerTable::debugString()
{
	return RatioTapChangerTable::debugName;
}

const BaseClassDefiner RatioTapChangerTable::declare()
{
	return BaseClassDefiner(RatioTapChangerTable::addConstructToMap, RatioTapChangerTable::addPrimitiveAssignFnsToMap, RatioTapChangerTable::addClassAssignFnsToMap, RatioTapChangerTable::debugName);
}
