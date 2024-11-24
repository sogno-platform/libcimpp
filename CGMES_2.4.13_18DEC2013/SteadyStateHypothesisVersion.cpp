/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SteadyStateHypothesisVersion.hpp"

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

SteadyStateHypothesisVersion::SteadyStateHypothesisVersion() {};
SteadyStateHypothesisVersion::~SteadyStateHypothesisVersion() {};


bool assign_SteadyStateHypothesisVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer >> element->baseUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer >> element->baseURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_date(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer >> element->date;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer >> element->differenceModelURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer >> element->entsoeUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_entsoeURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer >> element->entsoeURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer >> element->modelDescriptionURI;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer >> element->namespaceRDF;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer >> element->namespaceUML;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer >> element->shortName;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}












const char SteadyStateHypothesisVersion::debugName[] = "SteadyStateHypothesisVersion";
const char* SteadyStateHypothesisVersion::debugString() const
{
	return SteadyStateHypothesisVersion::debugName;
}

void SteadyStateHypothesisVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion"), &SteadyStateHypothesisVersion_factory));
}

void SteadyStateHypothesisVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.baseUML"), &assign_SteadyStateHypothesisVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.baseURI"), &assign_SteadyStateHypothesisVersion_baseURI));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.date"), &assign_SteadyStateHypothesisVersion_date));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.differenceModelURI"), &assign_SteadyStateHypothesisVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.entsoeUML"), &assign_SteadyStateHypothesisVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.entsoeURI"), &assign_SteadyStateHypothesisVersion_entsoeURI));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.modelDescriptionURI"), &assign_SteadyStateHypothesisVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.namespaceRDF"), &assign_SteadyStateHypothesisVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.namespaceUML"), &assign_SteadyStateHypothesisVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.shortName"), &assign_SteadyStateHypothesisVersion_shortName));
}

void SteadyStateHypothesisVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner SteadyStateHypothesisVersion::declare()
{
	return BaseClassDefiner(SteadyStateHypothesisVersion::addConstructToMap, SteadyStateHypothesisVersion::addPrimitiveAssignFnsToMap, SteadyStateHypothesisVersion::addClassAssignFnsToMap, SteadyStateHypothesisVersion::debugName);
}

namespace CIMPP
{
	BaseClass* SteadyStateHypothesisVersion_factory()
	{
		return new SteadyStateHypothesisVersion;
	}
}
