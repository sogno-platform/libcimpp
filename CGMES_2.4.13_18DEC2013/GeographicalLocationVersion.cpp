/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GeographicalLocationVersion.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GeographicalLocationVersion(),
		"http://entsoe.eu/CIM/SchemaExtension/3/1#",
		{
			CGMESProfile::GL,
		},
		CGMESProfile::GL
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "GeographicalLocationVersion.baseUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::GL, } } },
		{ "GeographicalLocationVersion.baseURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::GL, } } },
		{ "GeographicalLocationVersion.date", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::GL, } } },
		{ "GeographicalLocationVersion.differenceModelURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::GL, } } },
		{ "GeographicalLocationVersion.entsoeUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::GL, } } },
		{ "GeographicalLocationVersion.entsoeURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::GL, } } },
		{ "GeographicalLocationVersion.modelDescriptionURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::GL, } } },
		{ "GeographicalLocationVersion.namespaceRDF", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::GL, } } },
		{ "GeographicalLocationVersion.namespaceUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::GL, } } },
		{ "GeographicalLocationVersion.shortName", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::GL, } } },
	};
    return ClassAttrDetailsMap;
}

GeographicalLocationVersion::GeographicalLocationVersion() {}
GeographicalLocationVersion::~GeographicalLocationVersion() {}

const std::list<std::string>& GeographicalLocationVersion::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GeographicalLocationVersion::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GeographicalLocationVersion::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GeographicalLocationVersion::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GeographicalLocationVersion::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GeographicalLocationVersion::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GeographicalLocationVersion::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GeographicalLocationVersion_baseUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->baseUML = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeographicalLocationVersion_baseURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->baseURI = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeographicalLocationVersion_date(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->date = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeographicalLocationVersion_differenceModelURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->differenceModelURI = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeographicalLocationVersion_entsoeUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->entsoeUML = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeographicalLocationVersion_entsoeURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->entsoeURI = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeographicalLocationVersion_modelDescriptionURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->modelDescriptionURI = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeographicalLocationVersion_namespaceRDF(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->namespaceRDF = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeographicalLocationVersion_namespaceUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->namespaceUML = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeographicalLocationVersion_shortName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeographicalLocationVersion* element = dynamic_cast<GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->shortName = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GeographicalLocationVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const GeographicalLocationVersion* element = dynamic_cast<const GeographicalLocationVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	factory_map.emplace("GeographicalLocationVersion", &GeographicalLocationVersion_factory);
}

void GeographicalLocationVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GeographicalLocationVersion.baseUML", &assign_GeographicalLocationVersion_baseUML);
	assign_map.emplace("GeographicalLocationVersion.baseURI", &assign_GeographicalLocationVersion_baseURI);
	assign_map.emplace("GeographicalLocationVersion.date", &assign_GeographicalLocationVersion_date);
	assign_map.emplace("GeographicalLocationVersion.differenceModelURI", &assign_GeographicalLocationVersion_differenceModelURI);
	assign_map.emplace("GeographicalLocationVersion.entsoeUML", &assign_GeographicalLocationVersion_entsoeUML);
	assign_map.emplace("GeographicalLocationVersion.entsoeURI", &assign_GeographicalLocationVersion_entsoeURI);
	assign_map.emplace("GeographicalLocationVersion.modelDescriptionURI", &assign_GeographicalLocationVersion_modelDescriptionURI);
	assign_map.emplace("GeographicalLocationVersion.namespaceRDF", &assign_GeographicalLocationVersion_namespaceRDF);
	assign_map.emplace("GeographicalLocationVersion.namespaceUML", &assign_GeographicalLocationVersion_namespaceUML);
	assign_map.emplace("GeographicalLocationVersion.shortName", &assign_GeographicalLocationVersion_shortName);
}

void GeographicalLocationVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GeographicalLocationVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GeographicalLocationVersion.baseUML", &get_GeographicalLocationVersion_baseUML);
	get_map.emplace("GeographicalLocationVersion.baseURI", &get_GeographicalLocationVersion_baseURI);
	get_map.emplace("GeographicalLocationVersion.date", &get_GeographicalLocationVersion_date);
	get_map.emplace("GeographicalLocationVersion.differenceModelURI", &get_GeographicalLocationVersion_differenceModelURI);
	get_map.emplace("GeographicalLocationVersion.entsoeUML", &get_GeographicalLocationVersion_entsoeUML);
	get_map.emplace("GeographicalLocationVersion.entsoeURI", &get_GeographicalLocationVersion_entsoeURI);
	get_map.emplace("GeographicalLocationVersion.modelDescriptionURI", &get_GeographicalLocationVersion_modelDescriptionURI);
	get_map.emplace("GeographicalLocationVersion.namespaceRDF", &get_GeographicalLocationVersion_namespaceRDF);
	get_map.emplace("GeographicalLocationVersion.namespaceUML", &get_GeographicalLocationVersion_namespaceUML);
	get_map.emplace("GeographicalLocationVersion.shortName", &get_GeographicalLocationVersion_shortName);
}

void GeographicalLocationVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void GeographicalLocationVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool GeographicalLocationVersion::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GeographicalLocationVersion" &&
		dynamic_cast<GeographicalLocationVersion*>(otherObject) != nullptr;
}

const BaseClassDefiner GeographicalLocationVersion::declare()
{
	return BaseClassDefiner(GeographicalLocationVersion::addConstructToMap, GeographicalLocationVersion::addPrimitiveAssignFnsToMap, GeographicalLocationVersion::addClassAssignFnsToMap, GeographicalLocationVersion::debugName);
}

std::map<std::string, AttrDetails> GeographicalLocationVersion::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GeographicalLocationVersion_factory()
	{
		return new GeographicalLocationVersion;
	}
}
