/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerSymmetrical.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

PhaseTapChangerSymmetrical::PhaseTapChangerSymmetrical() {};
PhaseTapChangerSymmetrical::~PhaseTapChangerSymmetrical() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
PhaseTapChangerSymmetrical::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PhaseTapChangerSymmetrical::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PhaseTapChangerNonLinear::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}






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

void PhaseTapChangerSymmetrical::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChangerNonLinear::addPrimitiveGetFnsToMap(get_map);
}

void PhaseTapChangerSymmetrical::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PhaseTapChangerNonLinear::addClassGetFnsToMap(get_map);
}

void PhaseTapChangerSymmetrical::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChangerNonLinear::addEnumGetFnsToMap(get_map);
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
