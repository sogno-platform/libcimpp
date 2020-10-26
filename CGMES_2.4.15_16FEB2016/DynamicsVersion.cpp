#include <sstream>
#include "BaseClass.hpp"
#include "DynamicsVersion.hpp"

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

DynamicsVersion::DynamicsVersion(): date(nullptr) {};

DynamicsVersion::~DynamicsVersion() {};




bool assign_DynamicsVersion_date(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1)) {
                element->date = dynamic_cast<Date*>(BaseClass_ptr2);
                if(element->date != nullptr)
                        return true;
        }
        return false;
}









bool assign_DynamicsVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1)) {
		element->baseUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1)) {
		element->baseURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_DynamicsVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1)) {
		element->differenceModelURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1)) {
		element->entsoeUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_entsoeURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1)) {
		element->entsoeURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1)) {
		element->modelDescriptionURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1)) {
		element->namespaceRDF = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1)) {
		element->namespaceUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1)) {
		element->shortName = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

namespace CIMPP {
	BaseClass* DynamicsVersion_factory() {
		return new DynamicsVersion;
	}
}

void DynamicsVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DynamicsVersion"), &DynamicsVersion_factory));
}

void DynamicsVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.baseUML"), &assign_DynamicsVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.baseURI"), &assign_DynamicsVersion_baseURI));
		assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.differenceModelURI"), &assign_DynamicsVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.entsoeUML"), &assign_DynamicsVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.entsoeURI"), &assign_DynamicsVersion_entsoeURI));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.modelDescriptionURI"), &assign_DynamicsVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.namespaceRDF"), &assign_DynamicsVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.namespaceUML"), &assign_DynamicsVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.shortName"), &assign_DynamicsVersion_shortName));
}

void DynamicsVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.date"), &assign_DynamicsVersion_date));
							}

const char DynamicsVersion::debugName[] = "DynamicsVersion";
const char* DynamicsVersion::debugString()
{
	return DynamicsVersion::debugName;
}

const BaseClassDefiner DynamicsVersion::declare()
{
	return BaseClassDefiner(DynamicsVersion::addConstructToMap, DynamicsVersion::addPrimitiveAssignFnsToMap, DynamicsVersion::addClassAssignFnsToMap, DynamicsVersion::debugName);
}


