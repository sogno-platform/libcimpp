#include <sstream>
#include "IdentifiedObject.hpp"
#include "ReportingGroup.hpp"

#include "BusNameMarker.hpp"
#include "TopologicalNode.hpp"

using namespace CIMPP;

ReportingGroup::ReportingGroup() {};

ReportingGroup::~ReportingGroup() {};





bool assign_ReportingGroup_BusNameMarker(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ReportingGroup* element = dynamic_cast<ReportingGroup*>(BaseClass_ptr1)) {
		if(dynamic_cast<BusNameMarker*>(BaseClass_ptr2) != nullptr) {
                        element->BusNameMarker.push_back(dynamic_cast<BusNameMarker*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ReportingGroup_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ReportingGroup* element = dynamic_cast<ReportingGroup*>(BaseClass_ptr1)) {
		if(dynamic_cast<TopologicalNode*>(BaseClass_ptr2) != nullptr) {
                        element->TopologicalNode.push_back(dynamic_cast<TopologicalNode*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* ReportingGroup_factory() {
		return new ReportingGroup;
	}
}

void ReportingGroup::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ReportingGroup"), &ReportingGroup_factory));
}

void ReportingGroup::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void ReportingGroup::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ReportingGroup.BusNameMarker"), &assign_ReportingGroup_BusNameMarker));
	assign_map.insert(std::make_pair(std::string("cim:ReportingGroup.TopologicalNode"), &assign_ReportingGroup_TopologicalNode));
}

const char ReportingGroup::debugName[] = "ReportingGroup";
const char* ReportingGroup::debugString()
{
	return ReportingGroup::debugName;
}

const BaseClassDefiner ReportingGroup::declare()
{
	return BaseClassDefiner(ReportingGroup::addConstructToMap, ReportingGroup::addPrimitiveAssignFnsToMap, ReportingGroup::addClassAssignFnsToMap, ReportingGroup::debugName);
}
