/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SurgeArrester.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

SurgeArrester::SurgeArrester() {};
SurgeArrester::~SurgeArrester() {};



const char SurgeArrester::debugName[] = "SurgeArrester";
const char* SurgeArrester::debugString() const
{
	return SurgeArrester::debugName;
}

void SurgeArrester::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SurgeArrester"), &SurgeArrester_factory));
}

void SurgeArrester::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SurgeArrester::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner SurgeArrester::declare()
{
	return BaseClassDefiner(SurgeArrester::addConstructToMap, SurgeArrester::addPrimitiveAssignFnsToMap, SurgeArrester::addClassAssignFnsToMap, SurgeArrester::debugName);
}

namespace CIMPP
{
	BaseClass* SurgeArrester_factory()
	{
		return new SurgeArrester;
	}
}
