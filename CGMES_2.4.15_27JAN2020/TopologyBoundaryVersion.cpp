#include <sstream>
#include "BaseClass.hpp"
#include "TopologyBoundaryVersion.hpp"

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

TopologyBoundaryVersion::TopologyBoundaryVersion(): date(nullptr) {};

TopologyBoundaryVersion::~TopologyBoundaryVersion() {};




bool assign_TopologyBoundaryVersion_date(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1)) {
                element->date = dynamic_cast<Date*>(BaseClass_ptr2);
                if(element->date != nullptr)
                        return true;
        }
        return false;
}









bool assign_TopologyBoundaryVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1)) {
		element->baseUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyBoundaryVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1)) {
		element->baseURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_TopologyBoundaryVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1)) {
		element->differenceModelURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyBoundaryVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1)) {
		element->entsoeUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyBoundaryVersion_entsoeURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1)) {
		element->entsoeURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyBoundaryVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1)) {
		element->modelDescriptionURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyBoundaryVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1)) {
		element->namespaceRDF = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyBoundaryVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1)) {
		element->namespaceUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyBoundaryVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1)) {
		element->shortName = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

namespace CIMPP {
	BaseClass* TopologyBoundaryVersion_factory() {
		return new TopologyBoundaryVersion;
	}
}

void TopologyBoundaryVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:TopologyBoundaryVersion"), &TopologyBoundaryVersion_factory));
}

void TopologyBoundaryVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:TopologyBoundaryVersion.baseUML"), &assign_TopologyBoundaryVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:TopologyBoundaryVersion.baseURI"), &assign_TopologyBoundaryVersion_baseURI));
		assign_map.insert(std::make_pair(std::string("cim:TopologyBoundaryVersion.differenceModelURI"), &assign_TopologyBoundaryVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:TopologyBoundaryVersion.entsoeUML"), &assign_TopologyBoundaryVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:TopologyBoundaryVersion.entsoeURI"), &assign_TopologyBoundaryVersion_entsoeURI));
	assign_map.insert(std::make_pair(std::string("cim:TopologyBoundaryVersion.modelDescriptionURI"), &assign_TopologyBoundaryVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:TopologyBoundaryVersion.namespaceRDF"), &assign_TopologyBoundaryVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:TopologyBoundaryVersion.namespaceUML"), &assign_TopologyBoundaryVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:TopologyBoundaryVersion.shortName"), &assign_TopologyBoundaryVersion_shortName));
}

void TopologyBoundaryVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:TopologyBoundaryVersion.date"), &assign_TopologyBoundaryVersion_date));
							}

const char TopologyBoundaryVersion::debugName[] = "TopologyBoundaryVersion";
const char* TopologyBoundaryVersion::debugString()
{
	return TopologyBoundaryVersion::debugName;
}

const BaseClassDefiner TopologyBoundaryVersion::declare()
{
	return BaseClassDefiner(TopologyBoundaryVersion::addConstructToMap, TopologyBoundaryVersion::addPrimitiveAssignFnsToMap, TopologyBoundaryVersion::addClassAssignFnsToMap, TopologyBoundaryVersion::debugName);
}


