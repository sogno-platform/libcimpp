/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquipmentVersion.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
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

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:EquipmentVersion.baseUML", { CGMESProfile::EQ, } },
	{ "cim:EquipmentVersion.baseURIcore", { CGMESProfile::EQ, } },
	{ "cim:EquipmentVersion.baseURIoperation", { CGMESProfile::EQ, } },
	{ "cim:EquipmentVersion.baseURIshortCircuit", { CGMESProfile::EQ, } },
	{ "cim:EquipmentVersion.date", { CGMESProfile::EQ, } },
	{ "cim:EquipmentVersion.differenceModelURI", { CGMESProfile::EQ, } },
	{ "cim:EquipmentVersion.entsoeUML", { CGMESProfile::EQ, } },
	{ "cim:EquipmentVersion.entsoeURIcore", { CGMESProfile::EQ, } },
	{ "cim:EquipmentVersion.entsoeURIoperation", { CGMESProfile::EQ, } },
	{ "cim:EquipmentVersion.entsoeURIshortCircuit", { CGMESProfile::EQ, } },
	{ "cim:EquipmentVersion.modelDescriptionURI", { CGMESProfile::EQ, } },
	{ "cim:EquipmentVersion.namespaceRDF", { CGMESProfile::EQ, } },
	{ "cim:EquipmentVersion.namespaceUML", { CGMESProfile::EQ, } },
	{ "cim:EquipmentVersion.shortName", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
EquipmentVersion::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
EquipmentVersion::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_EquipmentVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1))
	{
		element->baseUML = buffer.str();
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
		element->baseURIcore = buffer.str();
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
		element->baseURIoperation = buffer.str();
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
		element->baseURIshortCircuit = buffer.str();
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
		element->date = buffer.str();
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
		element->differenceModelURI = buffer.str();
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
		element->entsoeUML = buffer.str();
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
		element->entsoeURIcore = buffer.str();
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
		element->entsoeURIoperation = buffer.str();
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
		element->entsoeURIshortCircuit = buffer.str();
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
		element->modelDescriptionURI = buffer.str();
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
		element->namespaceRDF = buffer.str();
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
		element->namespaceUML = buffer.str();
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
		element->shortName = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_EquipmentVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer << element->baseUML;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquipmentVersion_baseURIcore(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer << element->baseURIcore;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquipmentVersion_baseURIoperation(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer << element->baseURIoperation;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquipmentVersion_baseURIshortCircuit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer << element->baseURIshortCircuit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquipmentVersion_date(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer << element->date;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquipmentVersion_differenceModelURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer << element->differenceModelURI;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquipmentVersion_entsoeUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer << element->entsoeUML;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquipmentVersion_entsoeURIcore(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer << element->entsoeURIcore;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquipmentVersion_entsoeURIoperation(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer << element->entsoeURIoperation;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquipmentVersion_entsoeURIshortCircuit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer << element->entsoeURIshortCircuit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquipmentVersion_modelDescriptionURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer << element->modelDescriptionURI;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquipmentVersion_namespaceRDF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer << element->namespaceRDF;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquipmentVersion_namespaceUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer << element->namespaceUML;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquipmentVersion_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1))
	{
		buffer << element->shortName;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
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

void EquipmentVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:EquipmentVersion.baseUML", &get_EquipmentVersion_baseUML);
	get_map.emplace("cim:EquipmentVersion.baseURIcore", &get_EquipmentVersion_baseURIcore);
	get_map.emplace("cim:EquipmentVersion.baseURIoperation", &get_EquipmentVersion_baseURIoperation);
	get_map.emplace("cim:EquipmentVersion.baseURIshortCircuit", &get_EquipmentVersion_baseURIshortCircuit);
	get_map.emplace("cim:EquipmentVersion.date", &get_EquipmentVersion_date);
	get_map.emplace("cim:EquipmentVersion.differenceModelURI", &get_EquipmentVersion_differenceModelURI);
	get_map.emplace("cim:EquipmentVersion.entsoeUML", &get_EquipmentVersion_entsoeUML);
	get_map.emplace("cim:EquipmentVersion.entsoeURIcore", &get_EquipmentVersion_entsoeURIcore);
	get_map.emplace("cim:EquipmentVersion.entsoeURIoperation", &get_EquipmentVersion_entsoeURIoperation);
	get_map.emplace("cim:EquipmentVersion.entsoeURIshortCircuit", &get_EquipmentVersion_entsoeURIshortCircuit);
	get_map.emplace("cim:EquipmentVersion.modelDescriptionURI", &get_EquipmentVersion_modelDescriptionURI);
	get_map.emplace("cim:EquipmentVersion.namespaceRDF", &get_EquipmentVersion_namespaceRDF);
	get_map.emplace("cim:EquipmentVersion.namespaceUML", &get_EquipmentVersion_namespaceUML);
	get_map.emplace("cim:EquipmentVersion.shortName", &get_EquipmentVersion_shortName);
}

void EquipmentVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void EquipmentVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
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
