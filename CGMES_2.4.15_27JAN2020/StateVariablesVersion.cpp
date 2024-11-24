/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StateVariablesVersion.hpp"

#include <algorithm>
#include <sstream>

#include "String.hpp"
#include "String.hpp"
#include "Date.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

StateVariablesVersion::StateVariablesVersion() {};
StateVariablesVersion::~StateVariablesVersion() {};


bool assign_StateVariablesVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1))
	{
		buffer >> element->baseUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1))
	{
		buffer >> element->baseURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_date(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1))
	{
		buffer >> element->date;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1))
	{
		buffer >> element->differenceModelURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1))
	{
		buffer >> element->entsoeUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_entsoeURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1))
	{
		buffer >> element->entsoeURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1))
	{
		buffer >> element->modelDescriptionURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1))
	{
		buffer >> element->namespaceRDF;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1))
	{
		buffer >> element->namespaceUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1))
	{
		buffer >> element->shortName;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}












const char StateVariablesVersion::debugName[] = "StateVariablesVersion";
const char* StateVariablesVersion::debugString() const
{
	return StateVariablesVersion::debugName;
}

void StateVariablesVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:StateVariablesVersion"), &StateVariablesVersion_factory));
}

void StateVariablesVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:StateVariablesVersion.baseUML"), &assign_StateVariablesVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:StateVariablesVersion.baseURI"), &assign_StateVariablesVersion_baseURI));
	assign_map.insert(std::make_pair(std::string("cim:StateVariablesVersion.date"), &assign_StateVariablesVersion_date));
	assign_map.insert(std::make_pair(std::string("cim:StateVariablesVersion.differenceModelURI"), &assign_StateVariablesVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:StateVariablesVersion.entsoeUML"), &assign_StateVariablesVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:StateVariablesVersion.entsoeURI"), &assign_StateVariablesVersion_entsoeURI));
	assign_map.insert(std::make_pair(std::string("cim:StateVariablesVersion.modelDescriptionURI"), &assign_StateVariablesVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:StateVariablesVersion.namespaceRDF"), &assign_StateVariablesVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:StateVariablesVersion.namespaceUML"), &assign_StateVariablesVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:StateVariablesVersion.shortName"), &assign_StateVariablesVersion_shortName));
}

void StateVariablesVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner StateVariablesVersion::declare()
{
	return BaseClassDefiner(StateVariablesVersion::addConstructToMap, StateVariablesVersion::addPrimitiveAssignFnsToMap, StateVariablesVersion::addClassAssignFnsToMap, StateVariablesVersion::debugName);
}

namespace CIMPP
{
	BaseClass* StateVariablesVersion_factory()
	{
		return new StateVariablesVersion;
	}
}
