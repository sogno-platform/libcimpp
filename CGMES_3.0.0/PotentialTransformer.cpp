/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PotentialTransformer.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

PotentialTransformer::PotentialTransformer() {};
PotentialTransformer::~PotentialTransformer() {};



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
