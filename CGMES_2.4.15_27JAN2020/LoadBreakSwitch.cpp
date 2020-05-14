#include <sstream>
#include "ProtectedSwitch.hpp"
#include "LoadBreakSwitch.hpp"


using namespace CIMPP;

LoadBreakSwitch::LoadBreakSwitch() {};

LoadBreakSwitch::~LoadBreakSwitch() {};



namespace CIMPP {
	BaseClass* LoadBreakSwitch_factory() {
		return new LoadBreakSwitch;
	}
}

void LoadBreakSwitch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:LoadBreakSwitch"), &LoadBreakSwitch_factory));
}

void LoadBreakSwitch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void LoadBreakSwitch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char LoadBreakSwitch::debugName[] = "LoadBreakSwitch";
const char* LoadBreakSwitch::debugString()
{
	return LoadBreakSwitch::debugName;
}

const BaseClassDefiner LoadBreakSwitch::declare()
{
	return BaseClassDefiner(LoadBreakSwitch::addConstructToMap, LoadBreakSwitch::addPrimitiveAssignFnsToMap, LoadBreakSwitch::addClassAssignFnsToMap, LoadBreakSwitch::debugName);
}


