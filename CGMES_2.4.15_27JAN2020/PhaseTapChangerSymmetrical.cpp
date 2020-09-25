#include <sstream>
#include "PhaseTapChangerNonLinear.hpp"
#include "PhaseTapChangerSymmetrical.hpp"


using namespace CIMPP;

PhaseTapChangerSymmetrical::PhaseTapChangerSymmetrical() {};

PhaseTapChangerSymmetrical::~PhaseTapChangerSymmetrical() {};



namespace CIMPP {
	BaseClass* PhaseTapChangerSymmetrical_factory() {
		return new PhaseTapChangerSymmetrical;
	}
}

void PhaseTapChangerSymmetrical::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PhaseTapChangerSymmetrical"), &PhaseTapChangerSymmetrical_factory));
}

void PhaseTapChangerSymmetrical::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void PhaseTapChangerSymmetrical::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char PhaseTapChangerSymmetrical::debugName[] = "PhaseTapChangerSymmetrical";
const char* PhaseTapChangerSymmetrical::debugString()
{
	return PhaseTapChangerSymmetrical::debugName;
}

const BaseClassDefiner PhaseTapChangerSymmetrical::declare()
{
	return BaseClassDefiner(PhaseTapChangerSymmetrical::addConstructToMap, PhaseTapChangerSymmetrical::addPrimitiveAssignFnsToMap, PhaseTapChangerSymmetrical::addClassAssignFnsToMap, PhaseTapChangerSymmetrical::debugName);
}


