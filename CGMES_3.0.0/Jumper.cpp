/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Jumper.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

Jumper::Jumper() {};
Jumper::~Jumper() {};



const char Jumper::debugName[] = "Jumper";
const char* Jumper::debugString() const
{
	return Jumper::debugName;
}

void Jumper::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Jumper"), &Jumper_factory));
}

void Jumper::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Jumper::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner Jumper::declare()
{
	return BaseClassDefiner(Jumper::addConstructToMap, Jumper::addPrimitiveAssignFnsToMap, Jumper::addClassAssignFnsToMap, Jumper::debugName);
}

namespace CIMPP
{
	BaseClass* Jumper_factory()
	{
		return new Jumper;
	}
}
