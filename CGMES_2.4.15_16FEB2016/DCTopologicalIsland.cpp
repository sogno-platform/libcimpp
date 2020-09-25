#include <sstream>
#include "IdentifiedObject.hpp"
#include "DCTopologicalIsland.hpp"

#include "DCTopologicalNode.hpp"

using namespace CIMPP;

DCTopologicalIsland::DCTopologicalIsland() {};

DCTopologicalIsland::~DCTopologicalIsland() {};


bool assign_DCTopologicalIsland_DCTopologicalNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCTopologicalIsland* element = dynamic_cast<DCTopologicalIsland*>(BaseClass_ptr1)) {
		if(dynamic_cast<DCTopologicalNode*>(BaseClass_ptr2) != nullptr) {
                        element->DCTopologicalNodes.push_back(dynamic_cast<DCTopologicalNode*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}



namespace CIMPP {
	BaseClass* DCTopologicalIsland_factory() {
		return new DCTopologicalIsland;
	}
}

void DCTopologicalIsland::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCTopologicalIsland"), &DCTopologicalIsland_factory));
}

void DCTopologicalIsland::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void DCTopologicalIsland::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DCTopologicalIsland.DCTopologicalNodes"), &assign_DCTopologicalIsland_DCTopologicalNodes));
}

const char DCTopologicalIsland::debugName[] = "DCTopologicalIsland";
const char* DCTopologicalIsland::debugString()
{
	return DCTopologicalIsland::debugName;
}

const BaseClassDefiner DCTopologicalIsland::declare()
{
	return BaseClassDefiner(DCTopologicalIsland::addConstructToMap, DCTopologicalIsland::addPrimitiveAssignFnsToMap, DCTopologicalIsland::addClassAssignFnsToMap, DCTopologicalIsland::debugName);
}


