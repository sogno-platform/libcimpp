#include <sstream>
#include "BaseClass.hpp"
#include "DiagramLayoutVersion.hpp"

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

DiagramLayoutVersion::DiagramLayoutVersion() {};

DiagramLayoutVersion::~DiagramLayoutVersion() {};




bool assign_DiagramLayoutVersion_date(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1)) {
                element->date = dynamic_cast<Date*>(BaseClass_ptr2);
                if(element->date != nullptr)
                        return true;
        }
        return false;
}









bool assign_DiagramLayoutVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1)) {
		element->baseUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiagramLayoutVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1)) {
		element->baseURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_DiagramLayoutVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1)) {
		element->differenceModelURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiagramLayoutVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1)) {
		element->entsoeUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiagramLayoutVersion_entsoeURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1)) {
		element->entsoeURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiagramLayoutVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1)) {
		element->modelDescriptionURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiagramLayoutVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1)) {
		element->namespaceRDF = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiagramLayoutVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1)) {
		element->namespaceUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiagramLayoutVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1)) {
		element->shortName = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

namespace CIMPP {
	BaseClass* DiagramLayoutVersion_factory() {
		return new DiagramLayoutVersion;
	}
}

void DiagramLayoutVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DiagramLayoutVersion"), &DiagramLayoutVersion_factory));
}

void DiagramLayoutVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DiagramLayoutVersion.baseUML"), &assign_DiagramLayoutVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:DiagramLayoutVersion.baseURI"), &assign_DiagramLayoutVersion_baseURI));
		assign_map.insert(std::make_pair(std::string("cim:DiagramLayoutVersion.differenceModelURI"), &assign_DiagramLayoutVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:DiagramLayoutVersion.entsoeUML"), &assign_DiagramLayoutVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:DiagramLayoutVersion.entsoeURI"), &assign_DiagramLayoutVersion_entsoeURI));
	assign_map.insert(std::make_pair(std::string("cim:DiagramLayoutVersion.modelDescriptionURI"), &assign_DiagramLayoutVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:DiagramLayoutVersion.namespaceRDF"), &assign_DiagramLayoutVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:DiagramLayoutVersion.namespaceUML"), &assign_DiagramLayoutVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:DiagramLayoutVersion.shortName"), &assign_DiagramLayoutVersion_shortName));
}

void DiagramLayoutVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:DiagramLayoutVersion.date"), &assign_DiagramLayoutVersion_date));
							}

const char DiagramLayoutVersion::debugName[] = "DiagramLayoutVersion";
const char* DiagramLayoutVersion::debugString()
{
	return DiagramLayoutVersion::debugName;
}

const BaseClassDefiner DiagramLayoutVersion::declare()
{
	return BaseClassDefiner(DiagramLayoutVersion::addConstructToMap, DiagramLayoutVersion::addPrimitiveAssignFnsToMap, DiagramLayoutVersion::addClassAssignFnsToMap, DiagramLayoutVersion::debugName);
}


