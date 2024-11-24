/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerSymmetrical.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

PhaseTapChangerSymmetrical::PhaseTapChangerSymmetrical() {};
PhaseTapChangerSymmetrical::~PhaseTapChangerSymmetrical() {};



const char PhaseTapChangerSymmetrical::debugName[] = "PhaseTapChangerSymmetrical";
const char* PhaseTapChangerSymmetrical::debugString() const
{
	return PhaseTapChangerSymmetrical::debugName;
}

void PhaseTapChangerSymmetrical::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PhaseTapChangerSymmetrical"), &PhaseTapChangerSymmetrical_factory));
}

void PhaseTapChangerSymmetrical::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PhaseTapChangerSymmetrical::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner PhaseTapChangerSymmetrical::declare()
{
	return BaseClassDefiner(PhaseTapChangerSymmetrical::addConstructToMap, PhaseTapChangerSymmetrical::addPrimitiveAssignFnsToMap, PhaseTapChangerSymmetrical::addClassAssignFnsToMap, PhaseTapChangerSymmetrical::debugName);
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerSymmetrical_factory()
	{
		return new PhaseTapChangerSymmetrical;
	}
}
