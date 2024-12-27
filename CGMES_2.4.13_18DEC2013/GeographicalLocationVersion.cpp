/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GeographicalLocationVersion.hpp"

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

using namespace CIMPP;

GeographicalLocationVersion::GeographicalLocationVersion() {};
GeographicalLocationVersion::~GeographicalLocationVersion() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::GL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GeographicalLocationVersion.baseUML", { CGMESProfile::GL, } },
	{ "cim:GeographicalLocationVersion.baseURI", { CGMESProfile::GL, } },
	{ "cim:GeographicalLocationVersion.date", { CGMESProfile::GL, } },
	{ "cim:GeographicalLocationVersion.differenceModelURI", { CGMESProfile::GL, } },
	{ "cim:GeographicalLocationVersion.entsoeUML", { CGMESProfile::GL, } },
	{ "cim:GeographicalLocationVersion.entsoeURI", { CGMESProfile::GL, } },
	{ "cim:GeographicalLocationVersion.modelDescriptionURI", { CGMESProfile::GL, } },
	{ "cim:GeographicalLocationVersion.namespaceRDF", { CGMESProfile::GL, } },
	{ "cim:GeographicalLocationVersion.namespaceUML", { CGMESProfile::GL, } },
	{ "cim:GeographicalLocationVersion.shortName", { CGMESProfile::GL, } },
};

std::list<CGMESProfile>
GeographicalLocationVersion::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GeographicalLocationVersion::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_GeographicalLocationVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1))
	{
		element->baseUML = buffer.str();
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
		element->baseURI = buffer.str();
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
		element->date = buffer.str();
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
		element->differenceModelURI = buffer.str();
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
		element->entsoeUML = buffer.str();
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
		element->entsoeURI = buffer.str();
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
		element->modelDescriptionURI = buffer.str();
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
		element->namespaceRDF = buffer.str();
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
		element->namespaceUML = buffer.str();
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
		element->shortName = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_GeographicalLocationVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1))
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

bool get_GeographicalLocationVersion_baseURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1))
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

bool get_GeographicalLocationVersion_date(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1))
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

bool get_GeographicalLocationVersion_differenceModelURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1))
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

bool get_GeographicalLocationVersion_entsoeUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1))
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

bool get_GeographicalLocationVersion_entsoeURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1))
	{
		buffer << element->entsoeURI;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeographicalLocationVersion_modelDescriptionURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1))
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

bool get_GeographicalLocationVersion_namespaceRDF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1))
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

bool get_GeographicalLocationVersion_namespaceUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1))
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

bool get_GeographicalLocationVersion_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1))
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

void GeographicalLocationVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GeographicalLocationVersion.baseUML", &get_GeographicalLocationVersion_baseUML);
	get_map.emplace("cim:GeographicalLocationVersion.baseURI", &get_GeographicalLocationVersion_baseURI);
	get_map.emplace("cim:GeographicalLocationVersion.date", &get_GeographicalLocationVersion_date);
	get_map.emplace("cim:GeographicalLocationVersion.differenceModelURI", &get_GeographicalLocationVersion_differenceModelURI);
	get_map.emplace("cim:GeographicalLocationVersion.entsoeUML", &get_GeographicalLocationVersion_entsoeUML);
	get_map.emplace("cim:GeographicalLocationVersion.entsoeURI", &get_GeographicalLocationVersion_entsoeURI);
	get_map.emplace("cim:GeographicalLocationVersion.modelDescriptionURI", &get_GeographicalLocationVersion_modelDescriptionURI);
	get_map.emplace("cim:GeographicalLocationVersion.namespaceRDF", &get_GeographicalLocationVersion_namespaceRDF);
	get_map.emplace("cim:GeographicalLocationVersion.namespaceUML", &get_GeographicalLocationVersion_namespaceUML);
	get_map.emplace("cim:GeographicalLocationVersion.shortName", &get_GeographicalLocationVersion_shortName);
}

void GeographicalLocationVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void GeographicalLocationVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
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
