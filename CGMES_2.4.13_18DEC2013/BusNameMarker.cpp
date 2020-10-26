#include <sstream>
#include "IdentifiedObject.hpp"
#include "BusNameMarker.hpp"

#include "Integer.hpp"
#include "ReportingGroup.hpp"
#include "ACDCTerminal.hpp"

using namespace CIMPP;

BusNameMarker::BusNameMarker(): ReportingGroup(nullptr) {};

BusNameMarker::~BusNameMarker() {};



bool assign_ReportingGroup_BusNameMarker(BaseClass*, BaseClass*);
bool assign_BusNameMarker_ReportingGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(BusNameMarker* element = dynamic_cast<BusNameMarker*>(BaseClass_ptr1)) {
                element->ReportingGroup = dynamic_cast<ReportingGroup*>(BaseClass_ptr2);
                if(element->ReportingGroup != nullptr)
                        return assign_ReportingGroup_BusNameMarker(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_BusNameMarker_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(BusNameMarker* element = dynamic_cast<BusNameMarker*>(BaseClass_ptr1)) {
		if(dynamic_cast<ACDCTerminal*>(BaseClass_ptr2) != nullptr) {
                        element->Terminal.push_back(dynamic_cast<ACDCTerminal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


bool assign_BusNameMarker_priority(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(BusNameMarker* element = dynamic_cast<BusNameMarker*>(BaseClass_ptr1)) {
                buffer >> element->priority;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}



namespace CIMPP {
	BaseClass* BusNameMarker_factory() {
		return new BusNameMarker;
	}
}

void BusNameMarker::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:BusNameMarker"), &BusNameMarker_factory));
}

void BusNameMarker::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:BusNameMarker.priority"), &assign_BusNameMarker_priority));
		}

void BusNameMarker::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:BusNameMarker.ReportingGroup"), &assign_BusNameMarker_ReportingGroup));
	assign_map.insert(std::make_pair(std::string("cim:BusNameMarker.Terminal"), &assign_BusNameMarker_Terminal));
}

const char BusNameMarker::debugName[] = "BusNameMarker";
const char* BusNameMarker::debugString()
{
	return BusNameMarker::debugName;
}

const BaseClassDefiner BusNameMarker::declare()
{
	return BaseClassDefiner(BusNameMarker::addConstructToMap, BusNameMarker::addPrimitiveAssignFnsToMap, BusNameMarker::addClassAssignFnsToMap, BusNameMarker::debugName);
}


