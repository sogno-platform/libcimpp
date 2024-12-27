/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquipmentBoundaryVersion.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
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
#include "String.hpp"

using namespace CIMPP;

EquipmentBoundaryVersion::EquipmentBoundaryVersion() {};
EquipmentBoundaryVersion::~EquipmentBoundaryVersion() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ_BD,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:EquipmentBoundaryVersion.baseUML", { CGMESProfile::EQ_BD, } },
	{ "cim:EquipmentBoundaryVersion.baseURI", { CGMESProfile::EQ_BD, } },
	{ "cim:EquipmentBoundaryVersion.date", { CGMESProfile::EQ_BD, } },
	{ "cim:EquipmentBoundaryVersion.differenceModelURI", { CGMESProfile::EQ_BD, } },
	{ "cim:EquipmentBoundaryVersion.entsoeUML", { CGMESProfile::EQ_BD, } },
	{ "cim:EquipmentBoundaryVersion.entsoeURIcore", { CGMESProfile::EQ_BD, } },
	{ "cim:EquipmentBoundaryVersion.entsoeURIoperation", { CGMESProfile::EQ_BD, } },
	{ "cim:EquipmentBoundaryVersion.modelDescriptionURI", { CGMESProfile::EQ_BD, } },
	{ "cim:EquipmentBoundaryVersion.namespaceRDF", { CGMESProfile::EQ_BD, } },
	{ "cim:EquipmentBoundaryVersion.namespaceUML", { CGMESProfile::EQ_BD, } },
	{ "cim:EquipmentBoundaryVersion.shortName", { CGMESProfile::EQ_BD, } },
};

std::list<CGMESProfile>
EquipmentBoundaryVersion::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
EquipmentBoundaryVersion::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_EquipmentBoundaryVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->baseUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->baseURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_date(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->date = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->differenceModelURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->entsoeUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_entsoeURIcore(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->entsoeURIcore = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_entsoeURIoperation(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->entsoeURIoperation = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->modelDescriptionURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->namespaceRDF = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->namespaceUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		element->shortName = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_EquipmentBoundaryVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1))
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

bool get_EquipmentBoundaryVersion_baseURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1))
	{
		buffer << element->baseURI;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquipmentBoundaryVersion_date(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1))
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

bool get_EquipmentBoundaryVersion_differenceModelURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1))
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

bool get_EquipmentBoundaryVersion_entsoeUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1))
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

bool get_EquipmentBoundaryVersion_entsoeURIcore(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1))
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

bool get_EquipmentBoundaryVersion_entsoeURIoperation(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1))
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

bool get_EquipmentBoundaryVersion_modelDescriptionURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1))
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

bool get_EquipmentBoundaryVersion_namespaceRDF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1))
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

bool get_EquipmentBoundaryVersion_namespaceUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1))
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

bool get_EquipmentBoundaryVersion_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1))
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



const char EquipmentBoundaryVersion::debugName[] = "EquipmentBoundaryVersion";
const char* EquipmentBoundaryVersion::debugString() const
{
	return EquipmentBoundaryVersion::debugName;
}

void EquipmentBoundaryVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion"), &EquipmentBoundaryVersion_factory));
}

void EquipmentBoundaryVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.baseUML"), &assign_EquipmentBoundaryVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.baseURI"), &assign_EquipmentBoundaryVersion_baseURI));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.date"), &assign_EquipmentBoundaryVersion_date));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.differenceModelURI"), &assign_EquipmentBoundaryVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.entsoeUML"), &assign_EquipmentBoundaryVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.entsoeURIcore"), &assign_EquipmentBoundaryVersion_entsoeURIcore));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.entsoeURIoperation"), &assign_EquipmentBoundaryVersion_entsoeURIoperation));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.modelDescriptionURI"), &assign_EquipmentBoundaryVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.namespaceRDF"), &assign_EquipmentBoundaryVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.namespaceUML"), &assign_EquipmentBoundaryVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:EquipmentBoundaryVersion.shortName"), &assign_EquipmentBoundaryVersion_shortName));
}

void EquipmentBoundaryVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void EquipmentBoundaryVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:EquipmentBoundaryVersion.baseUML", &get_EquipmentBoundaryVersion_baseUML);
	get_map.emplace("cim:EquipmentBoundaryVersion.baseURI", &get_EquipmentBoundaryVersion_baseURI);
	get_map.emplace("cim:EquipmentBoundaryVersion.date", &get_EquipmentBoundaryVersion_date);
	get_map.emplace("cim:EquipmentBoundaryVersion.differenceModelURI", &get_EquipmentBoundaryVersion_differenceModelURI);
	get_map.emplace("cim:EquipmentBoundaryVersion.entsoeUML", &get_EquipmentBoundaryVersion_entsoeUML);
	get_map.emplace("cim:EquipmentBoundaryVersion.entsoeURIcore", &get_EquipmentBoundaryVersion_entsoeURIcore);
	get_map.emplace("cim:EquipmentBoundaryVersion.entsoeURIoperation", &get_EquipmentBoundaryVersion_entsoeURIoperation);
	get_map.emplace("cim:EquipmentBoundaryVersion.modelDescriptionURI", &get_EquipmentBoundaryVersion_modelDescriptionURI);
	get_map.emplace("cim:EquipmentBoundaryVersion.namespaceRDF", &get_EquipmentBoundaryVersion_namespaceRDF);
	get_map.emplace("cim:EquipmentBoundaryVersion.namespaceUML", &get_EquipmentBoundaryVersion_namespaceUML);
	get_map.emplace("cim:EquipmentBoundaryVersion.shortName", &get_EquipmentBoundaryVersion_shortName);
}

void EquipmentBoundaryVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void EquipmentBoundaryVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner EquipmentBoundaryVersion::declare()
{
	return BaseClassDefiner(EquipmentBoundaryVersion::addConstructToMap, EquipmentBoundaryVersion::addPrimitiveAssignFnsToMap, EquipmentBoundaryVersion::addClassAssignFnsToMap, EquipmentBoundaryVersion::debugName);
}

namespace CIMPP
{
	BaseClass* EquipmentBoundaryVersion_factory()
	{
		return new EquipmentBoundaryVersion;
	}
}
