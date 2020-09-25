#include <sstream>
#include "IdentifiedObject.hpp"
#include "LimitSet.hpp"


using namespace CIMPP;

LimitSet::LimitSet() {};

LimitSet::~LimitSet() {};



namespace CIMPP {
	BaseClass* LimitSet_factory() {
		return new LimitSet;
	}
}

void LimitSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:LimitSet"), &LimitSet_factory));
}

void LimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void LimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char LimitSet::debugName[] = "LimitSet";
const char* LimitSet::debugString()
{
	return LimitSet::debugName;
}

const BaseClassDefiner LimitSet::declare()
{
	return BaseClassDefiner(LimitSet::addConstructToMap, LimitSet::addPrimitiveAssignFnsToMap, LimitSet::addClassAssignFnsToMap, LimitSet::debugName);
}


