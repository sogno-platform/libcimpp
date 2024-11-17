#include <sstream>
#include "BaseClass.hpp"
#include "StateVariablesVersion.hpp"

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


bool assign_StateVariablesVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1)) {
		element->baseUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1)) {
		element->baseURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_date(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1)) {
                buffer >> element->date;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_StateVariablesVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1)) {
		element->differenceModelURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1)) {
		element->entsoeUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_entsoeURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1)) {
		element->entsoeURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1)) {
		element->modelDescriptionURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1)) {
		element->namespaceRDF = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1)) {
		element->namespaceUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StateVariablesVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1)) {
		element->shortName = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}












namespace CIMPP {
	BaseClass* StateVariablesVersion_factory() {
		return new StateVariablesVersion;
	}
}

void StateVariablesVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:StateVariablesVersion"), &StateVariablesVersion_factory));
}

void StateVariablesVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
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

void StateVariablesVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
										}

const char StateVariablesVersion::debugName[] = "StateVariablesVersion";
const char* StateVariablesVersion::debugString()
{
	return StateVariablesVersion::debugName;
}

const BaseClassDefiner StateVariablesVersion::declare()
{
	return BaseClassDefiner(StateVariablesVersion::addConstructToMap, StateVariablesVersion::addPrimitiveAssignFnsToMap, StateVariablesVersion::addClassAssignFnsToMap, StateVariablesVersion::debugName);
}
