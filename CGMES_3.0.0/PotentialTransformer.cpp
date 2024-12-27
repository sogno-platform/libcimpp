/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PotentialTransformer.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

PotentialTransformer::PotentialTransformer() {};
PotentialTransformer::~PotentialTransformer() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
PotentialTransformer::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PotentialTransformer::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Sensor::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}






const char PotentialTransformer::debugName[] = "PotentialTransformer";
const char* PotentialTransformer::debugString() const
{
	return PotentialTransformer::debugName;
}

void PotentialTransformer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PotentialTransformer"), &PotentialTransformer_factory));
}

void PotentialTransformer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PotentialTransformer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PotentialTransformer::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Sensor::addPrimitiveGetFnsToMap(get_map);
}

void PotentialTransformer::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Sensor::addClassGetFnsToMap(get_map);
}

void PotentialTransformer::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Sensor::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PotentialTransformer::declare()
{
	return BaseClassDefiner(PotentialTransformer::addConstructToMap, PotentialTransformer::addPrimitiveAssignFnsToMap, PotentialTransformer::addClassAssignFnsToMap, PotentialTransformer::debugName);
}

namespace CIMPP
{
	BaseClass* PotentialTransformer_factory()
	{
		return new PotentialTransformer;
	}
}
