#include <sstream>
#include "DCSwitch.hpp"
#include "DCBreaker.hpp"


using namespace CIMPP;

DCBreaker::DCBreaker() {};

DCBreaker::~DCBreaker() {};



namespace CIMPP {
	BaseClass* DCBreaker_factory() {
		return new DCBreaker;
	}
}

void DCBreaker::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCBreaker"), &DCBreaker_factory));
}

void DCBreaker::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void DCBreaker::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char DCBreaker::debugName[] = "DCBreaker";
const char* DCBreaker::debugString()
{
	return DCBreaker::debugName;
}

const BaseClassDefiner DCBreaker::declare()
{
	return BaseClassDefiner(DCBreaker::addConstructToMap, DCBreaker::addPrimitiveAssignFnsToMap, DCBreaker::addClassAssignFnsToMap, DCBreaker::debugName);
}


