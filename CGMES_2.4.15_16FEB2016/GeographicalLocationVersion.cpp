/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GeographicalLocationVersion.hpp"

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

GeographicalLocationVersion::GeographicalLocationVersion() {};
GeographicalLocationVersion::~GeographicalLocationVersion() {};


bool assign_GeographicalLocationVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1))
	{
		buffer >> element->baseUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1))
	{
		buffer >> element->baseURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_date(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1))
	{
		buffer >> element->date;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1))
	{
		buffer >> element->differenceModelURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1))
	{
		buffer >> element->entsoeUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_entsoeURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1))
	{
		buffer >> element->entsoeURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1))
	{
		buffer >> element->modelDescriptionURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1))
	{
		buffer >> element->namespaceRDF;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1))
	{
		buffer >> element->namespaceUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeographicalLocationVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1))
	{
		buffer >> element->shortName;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}












const char GeographicalLocationVersion::debugName[] = "GeographicalLocationVersion";
const char* GeographicalLocationVersion::debugString() const
{
	return GeographicalLocationVersion::debugName;
}

void GeographicalLocationVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion"), &GeographicalLocationVersion_factory));
}

void GeographicalLocationVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.baseUML"), &assign_GeographicalLocationVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.baseURI"), &assign_GeographicalLocationVersion_baseURI));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.date"), &assign_GeographicalLocationVersion_date));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.differenceModelURI"), &assign_GeographicalLocationVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.entsoeUML"), &assign_GeographicalLocationVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.entsoeURI"), &assign_GeographicalLocationVersion_entsoeURI));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.modelDescriptionURI"), &assign_GeographicalLocationVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.namespaceRDF"), &assign_GeographicalLocationVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.namespaceUML"), &assign_GeographicalLocationVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:GeographicalLocationVersion.shortName"), &assign_GeographicalLocationVersion_shortName));
}

void GeographicalLocationVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner GeographicalLocationVersion::declare()
{
	return BaseClassDefiner(GeographicalLocationVersion::addConstructToMap, GeographicalLocationVersion::addPrimitiveAssignFnsToMap, GeographicalLocationVersion::addClassAssignFnsToMap, GeographicalLocationVersion::debugName);
}

namespace CIMPP
{
	BaseClass* GeographicalLocationVersion_factory()
	{
		return new GeographicalLocationVersion;
	}
}
