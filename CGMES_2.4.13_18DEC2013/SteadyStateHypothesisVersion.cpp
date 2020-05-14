#include <sstream>
#include "BaseClass.hpp"
#include "SteadyStateHypothesisVersion.hpp"

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

SteadyStateHypothesisVersion::SteadyStateHypothesisVersion() {};

SteadyStateHypothesisVersion::~SteadyStateHypothesisVersion() {};




bool assign_SteadyStateHypothesisVersion_date(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1)) {
                element->date = dynamic_cast<Date*>(BaseClass_ptr2);
                if(element->date != nullptr)
                        return true;
        }
        return false;
}









bool assign_SteadyStateHypothesisVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1)) {
		element->baseUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1)) {
		element->baseURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_SteadyStateHypothesisVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1)) {
		element->differenceModelURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1)) {
		element->entsoeUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_entsoeURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1)) {
		element->entsoeURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1)) {
		element->modelDescriptionURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1)) {
		element->namespaceRDF = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1)) {
		element->namespaceUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1)) {
		element->shortName = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

namespace CIMPP {
	BaseClass* SteadyStateHypothesisVersion_factory() {
		return new SteadyStateHypothesisVersion;
	}
}

void SteadyStateHypothesisVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion"), &SteadyStateHypothesisVersion_factory));
}

void SteadyStateHypothesisVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.baseUML"), &assign_SteadyStateHypothesisVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.baseURI"), &assign_SteadyStateHypothesisVersion_baseURI));
		assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.differenceModelURI"), &assign_SteadyStateHypothesisVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.entsoeUML"), &assign_SteadyStateHypothesisVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.entsoeURI"), &assign_SteadyStateHypothesisVersion_entsoeURI));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.modelDescriptionURI"), &assign_SteadyStateHypothesisVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.namespaceRDF"), &assign_SteadyStateHypothesisVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.namespaceUML"), &assign_SteadyStateHypothesisVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.shortName"), &assign_SteadyStateHypothesisVersion_shortName));
}

void SteadyStateHypothesisVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.date"), &assign_SteadyStateHypothesisVersion_date));
							}

const char SteadyStateHypothesisVersion::debugName[] = "SteadyStateHypothesisVersion";
const char* SteadyStateHypothesisVersion::debugString()
{
	return SteadyStateHypothesisVersion::debugName;
}

const BaseClassDefiner SteadyStateHypothesisVersion::declare()
{
	return BaseClassDefiner(SteadyStateHypothesisVersion::addConstructToMap, SteadyStateHypothesisVersion::addPrimitiveAssignFnsToMap, SteadyStateHypothesisVersion::addClassAssignFnsToMap, SteadyStateHypothesisVersion::debugName);
}


