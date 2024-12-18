/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Connector.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

Connector::Connector() {};
Connector::~Connector() {};



const char Connector::debugName[] = "Connector";
const char* Connector::debugString() const
{
	return Connector::debugName;
}

void Connector::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Connector"), &Connector_factory));
}

void Connector::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Connector::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner Connector::declare()
{
	return BaseClassDefiner(Connector::addConstructToMap, Connector::addPrimitiveAssignFnsToMap, Connector::addClassAssignFnsToMap, Connector::debugName);
}

namespace CIMPP
{
	BaseClass* Connector_factory()
	{
		return new Connector;
	}
}
