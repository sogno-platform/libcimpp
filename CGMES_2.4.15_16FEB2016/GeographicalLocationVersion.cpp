#include <sstream>
#include "BaseClass.hpp"
#include "GeographicalLocationVersion.hpp"

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

GeographicalLocationVersion::GeographicalLocationVersion() {};

GeographicalLocationVersion::~GeographicalLocationVersion() {};




bool assign_GeographicalLocationVersion_date(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1)) {
                element->date = dynamic_cast<Date*>(BaseClass_ptr2);
                if(element->date != nullptr)
                        return true;
        }
        return false;
}









bool assign_GeographicalLocationVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1)) {
		element->baseUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1)) {
		element->baseURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_GeographicalLocationVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1)) {
		element->differenceModelURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1)) {
		element->entsoeUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_entsoeURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1)) {
		element->entsoeURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1)) {
		element->modelDescriptionURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1)) {
		element->namespaceRDF = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1)) {
		element->namespaceUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1)) {
		element->shortName = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

namespace CIMPP {
	BaseClass* GeographicalLocationVersion_factory() {
		return new GeographicalLocationVersion;
	}
}

void GeographicalLocationVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion"), &GeographicalLocationVersion_factory));
}

void GeographicalLocationVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.baseUML"), &assign_GeographicalLocationVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.baseURI"), &assign_GeographicalLocationVersion_baseURI));
		assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.differenceModelURI"), &assign_GeographicalLocationVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.entsoeUML"), &assign_GeographicalLocationVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.entsoeURI"), &assign_GeographicalLocationVersion_entsoeURI));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.modelDescriptionURI"), &assign_GeographicalLocationVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.namespaceRDF"), &assign_GeographicalLocationVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.namespaceUML"), &assign_GeographicalLocationVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.shortName"), &assign_GeographicalLocationVersion_shortName));
}

void GeographicalLocationVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.date"), &assign_GeographicalLocationVersion_date));
							}

const char GeographicalLocationVersion::debugName[] = "GeographicalLocationVersion";
const char* GeographicalLocationVersion::debugString()
{
	return GeographicalLocationVersion::debugName;
}

const BaseClassDefiner GeographicalLocationVersion::declare()
{
	return BaseClassDefiner(GeographicalLocationVersion::addConstructToMap, GeographicalLocationVersion::addPrimitiveAssignFnsToMap, GeographicalLocationVersion::addClassAssignFnsToMap, GeographicalLocationVersion::debugName);
}


