#include <sstream>
#include "Connector.hpp"
#include "Junction.hpp"


using namespace CIMPP;

Junction::Junction() {};

Junction::~Junction() {};



namespace CIMPP {
	BaseClass* Junction_factory() {
		return new Junction;
	}
}

void Junction::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Junction"), &Junction_factory));
}

void Junction::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void Junction::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char Junction::debugName[] = "Junction";
const char* Junction::debugString()
{
	return Junction::debugName;
}

const BaseClassDefiner Junction::declare()
{
	return BaseClassDefiner(Junction::addConstructToMap, Junction::addPrimitiveAssignFnsToMap, Junction::addClassAssignFnsToMap, Junction::debugName);
}
