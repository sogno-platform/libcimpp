/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerAsymmetrical.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AngleDegrees.hpp"

using namespace CIMPP;

PhaseTapChangerAsymmetrical::PhaseTapChangerAsymmetrical() {};
PhaseTapChangerAsymmetrical::~PhaseTapChangerAsymmetrical() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PhaseTapChangerAsymmetrical.windingConnectionAngle", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
PhaseTapChangerAsymmetrical::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PhaseTapChangerAsymmetrical::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PhaseTapChangerNonLinear::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_PhaseTapChangerAsymmetrical_windingConnectionAngle(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PhaseTapChangerAsymmetrical* element = dynamic_cast<PhaseTapChangerAsymmetrical*>(BaseClass_ptr1))
	{
		buffer >> element->windingConnectionAngle;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_PhaseTapChangerAsymmetrical_windingConnectionAngle(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PhaseTapChangerAsymmetrical* element = dynamic_cast<const PhaseTapChangerAsymmetrical*>(BaseClass_ptr1))
	{
		buffer << element->windingConnectionAngle;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char PhaseTapChangerAsymmetrical::debugName[] = "PhaseTapChangerAsymmetrical";
const char* PhaseTapChangerAsymmetrical::debugString() const
{
	return PhaseTapChangerAsymmetrical::debugName;
}

void PhaseTapChangerAsymmetrical::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PhaseTapChangerAsymmetrical"), &PhaseTapChangerAsymmetrical_factory));
}

void PhaseTapChangerAsymmetrical::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerAsymmetrical.windingConnectionAngle"), &assign_PhaseTapChangerAsymmetrical_windingConnectionAngle));
}

void PhaseTapChangerAsymmetrical::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PhaseTapChangerAsymmetrical::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChangerNonLinear::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PhaseTapChangerAsymmetrical.windingConnectionAngle", &get_PhaseTapChangerAsymmetrical_windingConnectionAngle);
}

void PhaseTapChangerAsymmetrical::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PhaseTapChangerNonLinear::addClassGetFnsToMap(get_map);
}

void PhaseTapChangerAsymmetrical::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChangerNonLinear::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PhaseTapChangerAsymmetrical::declare()
{
	return BaseClassDefiner(PhaseTapChangerAsymmetrical::addConstructToMap, PhaseTapChangerAsymmetrical::addPrimitiveAssignFnsToMap, PhaseTapChangerAsymmetrical::addClassAssignFnsToMap, PhaseTapChangerAsymmetrical::debugName);
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerAsymmetrical_factory()
	{
		return new PhaseTapChangerAsymmetrical;
	}
}
