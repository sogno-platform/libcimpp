/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquipmentVersion.hpp"

#include <algorithm>
#include <sstream>

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


bool assign_EquipmentVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer >> element->baseUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_baseURIcore(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer >> element->baseURIcore;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_baseURIoperation(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer >> element->baseURIoperation;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_baseURIshortCircuit(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer >> element->baseURIshortCircuit;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_date(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer >> element->date;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer >> element->differenceModelURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer >> element->entsoeUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_entsoeURIcore(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer >> element->entsoeURIcore;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_entsoeURIoperation(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer >> element->entsoeURIoperation;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_entsoeURIshortCircuit(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer >> element->entsoeURIshortCircuit;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer >> element->modelDescriptionURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer >> element->namespaceRDF;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer >> element->namespaceUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer >> element->shortName;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}
















const char EquipmentVersion::debugName[] = "EquipmentVersion";
const char* EquipmentVersion::debugString() const
{
	return EquipmentVersion::debugName;
}

void EquipmentVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:EquipmentVersion"), &EquipmentVersion_factory));
}

void EquipmentVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.baseUML"), &assign_EquipmentVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.baseURIcore"), &assign_EquipmentVersion_baseURIcore));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.baseURIoperation"), &assign_EquipmentVersion_baseURIoperation));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.baseURIshortCircuit"), &assign_EquipmentVersion_baseURIshortCircuit));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentVersion.date"), &assign_EquipmentVersion_date));
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

void EquipmentVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner EquipmentVersion::declare()
{
	return BaseClassDefiner(EquipmentVersion::addConstructToMap, EquipmentVersion::addPrimitiveAssignFnsToMap, EquipmentVersion::addClassAssignFnsToMap, EquipmentVersion::debugName);
}

namespace CIMPP
{
	BaseClass* EquipmentVersion_factory()
	{
		return new EquipmentVersion;
	}
}
