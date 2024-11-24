/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DynamicsVersion.hpp"

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

DynamicsVersion::DynamicsVersion() {};
DynamicsVersion::~DynamicsVersion() {};


bool assign_DynamicsVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		buffer >> element->baseUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		buffer >> element->baseURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_date(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		buffer >> element->date;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		buffer >> element->differenceModelURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		buffer >> element->entsoeUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_entsoeURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		buffer >> element->entsoeURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		buffer >> element->modelDescriptionURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		buffer >> element->namespaceRDF;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		buffer >> element->namespaceUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		buffer >> element->shortName;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}












const char DynamicsVersion::debugName[] = "DynamicsVersion";
const char* DynamicsVersion::debugString() const
{
	return DynamicsVersion::debugName;
}

void DynamicsVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DynamicsVersion"), &DynamicsVersion_factory));
}

void DynamicsVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.baseUML"), &assign_DynamicsVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.baseURI"), &assign_DynamicsVersion_baseURI));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.date"), &assign_DynamicsVersion_date));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.differenceModelURI"), &assign_DynamicsVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.entsoeUML"), &assign_DynamicsVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.entsoeURI"), &assign_DynamicsVersion_entsoeURI));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.modelDescriptionURI"), &assign_DynamicsVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.namespaceRDF"), &assign_DynamicsVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.namespaceUML"), &assign_DynamicsVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.shortName"), &assign_DynamicsVersion_shortName));
}

void DynamicsVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner DynamicsVersion::declare()
{
	return BaseClassDefiner(DynamicsVersion::addConstructToMap, DynamicsVersion::addPrimitiveAssignFnsToMap, DynamicsVersion::addClassAssignFnsToMap, DynamicsVersion::debugName);
}

namespace CIMPP
{
	BaseClass* DynamicsVersion_factory()
	{
		return new DynamicsVersion;
	}
}
