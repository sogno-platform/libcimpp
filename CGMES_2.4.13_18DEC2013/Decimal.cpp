#include <sstream>
#include "BaseClass.hpp"
#include "Decimal.hpp"


using namespace CIMPP;

Decimal::Decimal() {};

Decimal::~Decimal() {};



namespace CIMPP {
	BaseClass* Decimal_factory() {
		return new Decimal;
	}
}

void Decimal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Decimal"), &Decimal_factory));
}

void Decimal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void Decimal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char Decimal::debugName[] = "Decimal";
const char* Decimal::debugString()
{
	return Decimal::debugName;
}

const BaseClassDefiner Decimal::declare()
{
	return BaseClassDefiner(Decimal::addConstructToMap, Decimal::addPrimitiveAssignFnsToMap, Decimal::addClassAssignFnsToMap, Decimal::debugName);
}


