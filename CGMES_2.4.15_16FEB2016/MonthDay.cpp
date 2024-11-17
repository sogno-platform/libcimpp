#include <sstream>
#include "BaseClass.hpp"
#include "MonthDay.hpp"


using namespace CIMPP;

MonthDay::MonthDay() {};

MonthDay::~MonthDay() {};



namespace CIMPP {
	BaseClass* MonthDay_factory() {
		return new MonthDay;
	}
}

void MonthDay::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:MonthDay"), &MonthDay_factory));
}

void MonthDay::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void MonthDay::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char MonthDay::debugName[] = "MonthDay";
const char* MonthDay::debugString()
{
	return MonthDay::debugName;
}

const BaseClassDefiner MonthDay::declare()
{
	return BaseClassDefiner(MonthDay::addConstructToMap, MonthDay::addPrimitiveAssignFnsToMap, MonthDay::addClassAssignFnsToMap, MonthDay::debugName);
}
