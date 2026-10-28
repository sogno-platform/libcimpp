#include <sstream>
#include <iostream>
#include <istream>
#include <list>

#include "BaseClass.hpp"
#include "UnknownType.hpp"

using namespace CIMPP;

UnknownType::UnknownType() {};

UnknownType::~UnknownType() {};

bool seenAttribute(std::string name, std::string value) {
	static std::list<std::pair<std::string, std::string>> seenAttributes;
	bool found = false;
	for(const std::pair<std::string, std::string> & attribute : seenAttributes) {
		if (name == attribute.first && value == attribute.second) {
			found = true;

		}
	}
	if (!found) {
		seenAttributes.push_back(std::pair<std::string, std::string>(name, value));
	}
	return found;
}

bool assign_Unknown_Attribute(std::stringstream &buffer, std::string name) {
	std::string attribute;
	buffer >> attribute;
	if(buffer.fail()) {
		return false;
	}
	else if (!seenAttribute(name, attribute)) {
			std::cout << "Warning: could not assign attribute with name: " << name << " and value: " << attribute << std::endl;
	}
	return true;
}

bool assign_Name_name(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	return assign_Unknown_Attribute(buffer, "Name.name");
}

bool assign_NameType_name(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	return assign_Unknown_Attribute(buffer, "NameType.name");
}

bool assign_Name_IdentifiedObject(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	return assign_Unknown_Attribute(buffer, "Name.IdentifiedObject");
}

bool assign_ACDCTerminal_connected(std::stringstream &buffer, BaseClass* BaseClass_ptr1);
bool assign_ACDCTerminal_sequenceNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1);

bool assign_Unknown_Class(std::string type) {
	std::cout << "Warning: could not assign class of unrecognised type " << type << "." << std::endl;
	return true;
}

bool assign_Class_NameType_name(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	static bool seen = false;
	if (seen){
		return true;
	}
	else {
		seen = true;
		return assign_Unknown_Class("NameType.name");
	}
}

bool assign_Class_Name_NameType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	static bool seen = false;
	if (seen){
		return true;
	}
	else {
		seen = true;
		return assign_Unknown_Class("Name.NameType");
	}
}

bool assign_Class_Name_name(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	static bool seen = false;
	if (seen){
		return true;
	}
	else {
		seen = true;
		return assign_Unknown_Class("Name.name");
	}
}

bool assign_Class_Name_IdentifiedObject(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	static bool seen = false;
	if (seen){
		return true;
	}
	else {
		seen = true;
		return assign_Unknown_Class("Name.IdentifiedObject");
	}
}

void UnknownType::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("Terminal.sequenceNumber"), &assign_ACDCTerminal_sequenceNumber));
	assign_map.insert(std::make_pair(std::string("Terminal.connected"), &assign_ACDCTerminal_connected));
	assign_map.insert(std::make_pair(std::string("Name.name"), &assign_Name_name));
	assign_map.insert(std::make_pair(std::string("NameType.name"), &assign_NameType_name));
}

void UnknownType::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("Name.name"), &assign_Class_Name_name));
	assign_map.insert(std::make_pair(std::string("Name.IdentifiedObject"), &assign_Class_Name_IdentifiedObject));
	assign_map.insert(std::make_pair(std::string("NameType.name"), &assign_Class_NameType_name));
	assign_map.insert(std::make_pair(std::string("Name.NameType"), &assign_Class_Name_NameType));
}

namespace CIMPP {
	BaseClass* UnknownType_factory() {
		return new UnknownType;
	}
}

void UnknownType::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("NameType"), &UnknownType_factory));
	factory_map.insert(std::make_pair(std::string("Name"), &UnknownType_factory));
}

const char UnknownType::debugName[] = "UnknownType";
const char* UnknownType::debugString() const {
	return UnknownType::debugName;
}

const BaseClassDefiner UnknownType::declare()
{
	return BaseClassDefiner(addConstructToMap, addPrimitiveAssignFnsToMap, addClassAssignFnsToMap, debugName);
}
