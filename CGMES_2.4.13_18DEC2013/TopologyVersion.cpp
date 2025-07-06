/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TopologyVersion.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TopologyVersion(),
		"http://entsoe.eu/CIM/SchemaExtension/3/1#",
		{
			CGMESProfile::TP,
		},
		CGMESProfile::TP
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "TopologyVersion.baseUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP, } } },
		{ "TopologyVersion.baseURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP, } } },
		{ "TopologyVersion.date", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP, } } },
		{ "TopologyVersion.differenceModelURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP, } } },
		{ "TopologyVersion.entsoeUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP, } } },
		{ "TopologyVersion.entsoeURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP, } } },
		{ "TopologyVersion.modelDescriptionURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP, } } },
		{ "TopologyVersion.namespaceRDF", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP, } } },
		{ "TopologyVersion.namespaceUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP, } } },
		{ "TopologyVersion.shortName", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP, } } },
	};
    return ClassAttrDetailsMap;
}

TopologyVersion::TopologyVersion() {}
TopologyVersion::~TopologyVersion() {}

const std::list<std::string>& TopologyVersion::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TopologyVersion::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TopologyVersion::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TopologyVersion::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TopologyVersion::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TopologyVersion::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TopologyVersion::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_TopologyVersion_baseUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1);
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

bool assign_TopologyVersion_baseURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1);
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

bool assign_TopologyVersion_date(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1);
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

bool assign_TopologyVersion_differenceModelURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1);
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

bool assign_TopologyVersion_entsoeUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1);
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

bool assign_TopologyVersion_entsoeURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1);
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

bool assign_TopologyVersion_modelDescriptionURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1);
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

bool assign_TopologyVersion_namespaceRDF(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1);
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

bool assign_TopologyVersion_namespaceUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1);
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

bool assign_TopologyVersion_shortName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1);
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

bool get_TopologyVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1);
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

bool get_TopologyVersion_baseURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1);
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

bool get_TopologyVersion_date(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1);
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

bool get_TopologyVersion_differenceModelURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1);
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

bool get_TopologyVersion_entsoeUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1);
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

bool get_TopologyVersion_entsoeURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1);
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

bool get_TopologyVersion_modelDescriptionURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1);
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

bool get_TopologyVersion_namespaceRDF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1);
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

bool get_TopologyVersion_namespaceUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1);
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

bool get_TopologyVersion_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1);
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

const char TopologyVersion::debugName[] = "TopologyVersion";
const char* TopologyVersion::debugString() const
{
	return TopologyVersion::debugName;
}

void TopologyVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TopologyVersion", &TopologyVersion_factory);
}

void TopologyVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("TopologyVersion.baseUML", &assign_TopologyVersion_baseUML);
	assign_map.emplace("TopologyVersion.baseURI", &assign_TopologyVersion_baseURI);
	assign_map.emplace("TopologyVersion.date", &assign_TopologyVersion_date);
	assign_map.emplace("TopologyVersion.differenceModelURI", &assign_TopologyVersion_differenceModelURI);
	assign_map.emplace("TopologyVersion.entsoeUML", &assign_TopologyVersion_entsoeUML);
	assign_map.emplace("TopologyVersion.entsoeURI", &assign_TopologyVersion_entsoeURI);
	assign_map.emplace("TopologyVersion.modelDescriptionURI", &assign_TopologyVersion_modelDescriptionURI);
	assign_map.emplace("TopologyVersion.namespaceRDF", &assign_TopologyVersion_namespaceRDF);
	assign_map.emplace("TopologyVersion.namespaceUML", &assign_TopologyVersion_namespaceUML);
	assign_map.emplace("TopologyVersion.shortName", &assign_TopologyVersion_shortName);
}

void TopologyVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void TopologyVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("TopologyVersion.baseUML", &get_TopologyVersion_baseUML);
	get_map.emplace("TopologyVersion.baseURI", &get_TopologyVersion_baseURI);
	get_map.emplace("TopologyVersion.date", &get_TopologyVersion_date);
	get_map.emplace("TopologyVersion.differenceModelURI", &get_TopologyVersion_differenceModelURI);
	get_map.emplace("TopologyVersion.entsoeUML", &get_TopologyVersion_entsoeUML);
	get_map.emplace("TopologyVersion.entsoeURI", &get_TopologyVersion_entsoeURI);
	get_map.emplace("TopologyVersion.modelDescriptionURI", &get_TopologyVersion_modelDescriptionURI);
	get_map.emplace("TopologyVersion.namespaceRDF", &get_TopologyVersion_namespaceRDF);
	get_map.emplace("TopologyVersion.namespaceUML", &get_TopologyVersion_namespaceUML);
	get_map.emplace("TopologyVersion.shortName", &get_TopologyVersion_shortName);
}

void TopologyVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void TopologyVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool TopologyVersion::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TopologyVersion" &&
		dynamic_cast<TopologyVersion*>(otherObject) != nullptr;
}

const BaseClassDefiner TopologyVersion::declare()
{
	return BaseClassDefiner(TopologyVersion::addConstructToMap, TopologyVersion::addPrimitiveAssignFnsToMap, TopologyVersion::addClassAssignFnsToMap, TopologyVersion::debugName);
}

std::map<std::string, AttrDetails> TopologyVersion::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TopologyVersion_factory()
	{
		return new TopologyVersion;
	}
}
