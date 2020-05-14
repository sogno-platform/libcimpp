#include <sstream>
#include "BaseClass.hpp"
#include "EquipmentVersion.hpp"

#include "String.hpp"
#include "String.hpp"
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
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

EquipmentVersion::EquipmentVersion() {};

EquipmentVersion::~EquipmentVersion() {};






bool assign_EquipmentVersion_date(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1)) {
                element->date = dynamic_cast<Date*>(BaseClass_ptr2);
                if(element->date != nullptr)
                        return true;
        }
        return false;
}











bool assign_EquipmentVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1)) {
		element->baseUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_baseURIcore(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1)) {
		element->baseURIcore = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_baseURIoperation(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1)) {
		element->baseURIoperation = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_baseURIshortCircuit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1)) {
		element->baseURIshortCircuit = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_EquipmentVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1)) {
		element->differenceModelURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1)) {
		element->entsoeUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_entsoeURIcore(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1)) {
		element->entsoeURIcore = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_entsoeURIoperation(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1)) {
		element->entsoeURIoperation = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_entsoeURIshortCircuit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1)) {
		element->entsoeURIshortCircuit = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1)) {
		element->modelDescriptionURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1)) {
		element->namespaceRDF = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1)) {
		element->namespaceUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1)) {
		element->shortName = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

namespace CIMPP {
	BaseClass* EquipmentVersion_factory() {
		return new EquipmentVersion;
	}
}

void EquipmentVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:EquipmentVersion"), &EquipmentVersion_factory));
}

void EquipmentVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.baseUML"), &assign_EquipmentVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.baseURIcore"), &assign_EquipmentVersion_baseURIcore));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.baseURIoperation"), &assign_EquipmentVersion_baseURIoperation));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.baseURIshortCircuit"), &assign_EquipmentVersion_baseURIshortCircuit));
		assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.differenceModelURI"), &assign_EquipmentVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.entsoeUML"), &assign_EquipmentVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.entsoeURIcore"), &assign_EquipmentVersion_entsoeURIcore));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.entsoeURIoperation"), &assign_EquipmentVersion_entsoeURIoperation));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.entsoeURIshortCircuit"), &assign_EquipmentVersion_entsoeURIshortCircuit));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.modelDescriptionURI"), &assign_EquipmentVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.namespaceRDF"), &assign_EquipmentVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.namespaceUML"), &assign_EquipmentVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.shortName"), &assign_EquipmentVersion_shortName));
}

void EquipmentVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
					assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.date"), &assign_EquipmentVersion_date));
									}

const char EquipmentVersion::debugName[] = "EquipmentVersion";
const char* EquipmentVersion::debugString()
{
	return EquipmentVersion::debugName;
}

const BaseClassDefiner EquipmentVersion::declare()
{
	return BaseClassDefiner(EquipmentVersion::addConstructToMap, EquipmentVersion::addPrimitiveAssignFnsToMap, EquipmentVersion::addClassAssignFnsToMap, EquipmentVersion::debugName);
}


