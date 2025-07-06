/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TopologyBoundaryVersion.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TopologyBoundaryVersion(),
		"http://entsoe.eu/CIM/SchemaExtension/3/1#",
		{
			CGMESProfile::TP_BD,
		},
		CGMESProfile::TP_BD
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "TopologyBoundaryVersion.baseUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP_BD, } } },
		{ "TopologyBoundaryVersion.baseURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP_BD, } } },
		{ "TopologyBoundaryVersion.date", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP_BD, } } },
		{ "TopologyBoundaryVersion.differenceModelURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP_BD, } } },
		{ "TopologyBoundaryVersion.entsoeUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP_BD, } } },
		{ "TopologyBoundaryVersion.entsoeURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP_BD, } } },
		{ "TopologyBoundaryVersion.modelDescriptionURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP_BD, } } },
		{ "TopologyBoundaryVersion.namespaceRDF", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP_BD, } } },
		{ "TopologyBoundaryVersion.namespaceUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP_BD, } } },
		{ "TopologyBoundaryVersion.shortName", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::TP_BD, } } },
	};
    return ClassAttrDetailsMap;
}

TopologyBoundaryVersion::TopologyBoundaryVersion() {}
TopologyBoundaryVersion::~TopologyBoundaryVersion() {}

const std::list<std::string>& TopologyBoundaryVersion::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TopologyBoundaryVersion::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TopologyBoundaryVersion::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TopologyBoundaryVersion::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TopologyBoundaryVersion::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TopologyBoundaryVersion::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TopologyBoundaryVersion::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_TopologyBoundaryVersion_baseUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_TopologyBoundaryVersion_baseURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_TopologyBoundaryVersion_date(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_TopologyBoundaryVersion_differenceModelURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_TopologyBoundaryVersion_entsoeUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_TopologyBoundaryVersion_entsoeURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_TopologyBoundaryVersion_modelDescriptionURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_TopologyBoundaryVersion_namespaceRDF(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_TopologyBoundaryVersion_namespaceUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_TopologyBoundaryVersion_shortName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TopologyBoundaryVersion* element = dynamic_cast<TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool get_TopologyBoundaryVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyBoundaryVersion* element = dynamic_cast<const TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool get_TopologyBoundaryVersion_baseURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyBoundaryVersion* element = dynamic_cast<const TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool get_TopologyBoundaryVersion_date(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyBoundaryVersion* element = dynamic_cast<const TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool get_TopologyBoundaryVersion_differenceModelURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyBoundaryVersion* element = dynamic_cast<const TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool get_TopologyBoundaryVersion_entsoeUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyBoundaryVersion* element = dynamic_cast<const TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool get_TopologyBoundaryVersion_entsoeURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyBoundaryVersion* element = dynamic_cast<const TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool get_TopologyBoundaryVersion_modelDescriptionURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyBoundaryVersion* element = dynamic_cast<const TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool get_TopologyBoundaryVersion_namespaceRDF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyBoundaryVersion* element = dynamic_cast<const TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool get_TopologyBoundaryVersion_namespaceUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyBoundaryVersion* element = dynamic_cast<const TopologyBoundaryVersion*>(BaseClass_ptr1);
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

bool get_TopologyBoundaryVersion_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TopologyBoundaryVersion* element = dynamic_cast<const TopologyBoundaryVersion*>(BaseClass_ptr1);
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

const char TopologyBoundaryVersion::debugName[] = "TopologyBoundaryVersion";
const char* TopologyBoundaryVersion::debugString() const
{
	return TopologyBoundaryVersion::debugName;
}

void TopologyBoundaryVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TopologyBoundaryVersion", &TopologyBoundaryVersion_factory);
}

void TopologyBoundaryVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("TopologyBoundaryVersion.baseUML", &assign_TopologyBoundaryVersion_baseUML);
	assign_map.emplace("TopologyBoundaryVersion.baseURI", &assign_TopologyBoundaryVersion_baseURI);
	assign_map.emplace("TopologyBoundaryVersion.date", &assign_TopologyBoundaryVersion_date);
	assign_map.emplace("TopologyBoundaryVersion.differenceModelURI", &assign_TopologyBoundaryVersion_differenceModelURI);
	assign_map.emplace("TopologyBoundaryVersion.entsoeUML", &assign_TopologyBoundaryVersion_entsoeUML);
	assign_map.emplace("TopologyBoundaryVersion.entsoeURI", &assign_TopologyBoundaryVersion_entsoeURI);
	assign_map.emplace("TopologyBoundaryVersion.modelDescriptionURI", &assign_TopologyBoundaryVersion_modelDescriptionURI);
	assign_map.emplace("TopologyBoundaryVersion.namespaceRDF", &assign_TopologyBoundaryVersion_namespaceRDF);
	assign_map.emplace("TopologyBoundaryVersion.namespaceUML", &assign_TopologyBoundaryVersion_namespaceUML);
	assign_map.emplace("TopologyBoundaryVersion.shortName", &assign_TopologyBoundaryVersion_shortName);
}

void TopologyBoundaryVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void TopologyBoundaryVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("TopologyBoundaryVersion.baseUML", &get_TopologyBoundaryVersion_baseUML);
	get_map.emplace("TopologyBoundaryVersion.baseURI", &get_TopologyBoundaryVersion_baseURI);
	get_map.emplace("TopologyBoundaryVersion.date", &get_TopologyBoundaryVersion_date);
	get_map.emplace("TopologyBoundaryVersion.differenceModelURI", &get_TopologyBoundaryVersion_differenceModelURI);
	get_map.emplace("TopologyBoundaryVersion.entsoeUML", &get_TopologyBoundaryVersion_entsoeUML);
	get_map.emplace("TopologyBoundaryVersion.entsoeURI", &get_TopologyBoundaryVersion_entsoeURI);
	get_map.emplace("TopologyBoundaryVersion.modelDescriptionURI", &get_TopologyBoundaryVersion_modelDescriptionURI);
	get_map.emplace("TopologyBoundaryVersion.namespaceRDF", &get_TopologyBoundaryVersion_namespaceRDF);
	get_map.emplace("TopologyBoundaryVersion.namespaceUML", &get_TopologyBoundaryVersion_namespaceUML);
	get_map.emplace("TopologyBoundaryVersion.shortName", &get_TopologyBoundaryVersion_shortName);
}

void TopologyBoundaryVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void TopologyBoundaryVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool TopologyBoundaryVersion::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TopologyBoundaryVersion" &&
		dynamic_cast<TopologyBoundaryVersion*>(otherObject) != nullptr;
}

const BaseClassDefiner TopologyBoundaryVersion::declare()
{
	return BaseClassDefiner(TopologyBoundaryVersion::addConstructToMap, TopologyBoundaryVersion::addPrimitiveAssignFnsToMap, TopologyBoundaryVersion::addClassAssignFnsToMap, TopologyBoundaryVersion::debugName);
}

std::map<std::string, AttrDetails> TopologyBoundaryVersion::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TopologyBoundaryVersion_factory()
	{
		return new TopologyBoundaryVersion;
	}
}
