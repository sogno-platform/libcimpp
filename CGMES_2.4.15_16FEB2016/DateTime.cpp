#include <sstream>
#include "BaseClass.hpp"
#include "DateTime.hpp"


using namespace CIMPP;

DateTime::DateTime() {};

DateTime::~DateTime() {};



namespace CIMPP {
	BaseClass* DateTime_factory() {
		return new DateTime;
	}
}

void DateTime::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DateTime"), &DateTime_factory));
}

void DateTime::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void DateTime::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char DateTime::debugName[] = "DateTime";
const char* DateTime::debugString()
{
	return DateTime::debugName;
}

const BaseClassDefiner DateTime::declare()
{
	return BaseClassDefiner(DateTime::addConstructToMap, DateTime::addPrimitiveAssignFnsToMap, DateTime::addClassAssignFnsToMap, DateTime::debugName);
}


