/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquipmentBoundaryVersion.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		EquipmentBoundaryVersion(),
		"http://entsoe.eu/CIM/SchemaExtension/3/1#",
		{
			CGMESProfile::EQ_BD,
		},
		CGMESProfile::EQ_BD
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "EquipmentBoundaryVersion.baseUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "EquipmentBoundaryVersion.baseURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "EquipmentBoundaryVersion.date", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "EquipmentBoundaryVersion.differenceModelURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "EquipmentBoundaryVersion.entsoeUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "EquipmentBoundaryVersion.entsoeURIcore", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "EquipmentBoundaryVersion.entsoeURIoperation", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "EquipmentBoundaryVersion.modelDescriptionURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "EquipmentBoundaryVersion.namespaceRDF", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "EquipmentBoundaryVersion.namespaceUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "EquipmentBoundaryVersion.shortName", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
	};
    return ClassAttrDetailsMap;
}

EquipmentBoundaryVersion::EquipmentBoundaryVersion() {}
EquipmentBoundaryVersion::~EquipmentBoundaryVersion() {}

const std::list<std::string>& EquipmentBoundaryVersion::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& EquipmentBoundaryVersion::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& EquipmentBoundaryVersion::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& EquipmentBoundaryVersion::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& EquipmentBoundaryVersion::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& EquipmentBoundaryVersion::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& EquipmentBoundaryVersion::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_EquipmentBoundaryVersion_baseUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentBoundaryVersion_baseURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentBoundaryVersion_date(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentBoundaryVersion_differenceModelURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentBoundaryVersion_entsoeUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentBoundaryVersion_entsoeURIcore(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->entsoeURIcore = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_entsoeURIoperation(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->entsoeURIoperation = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquipmentBoundaryVersion_modelDescriptionURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentBoundaryVersion_namespaceRDF(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentBoundaryVersion_namespaceUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentBoundaryVersion_shortName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentBoundaryVersion* element = dynamic_cast<EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool get_EquipmentBoundaryVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool get_EquipmentBoundaryVersion_baseURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool get_EquipmentBoundaryVersion_date(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool get_EquipmentBoundaryVersion_differenceModelURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool get_EquipmentBoundaryVersion_entsoeUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool get_EquipmentBoundaryVersion_entsoeURIcore(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool get_EquipmentBoundaryVersion_namespaceRDF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool get_EquipmentBoundaryVersion_namespaceUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

bool get_EquipmentBoundaryVersion_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentBoundaryVersion* element = dynamic_cast<const EquipmentBoundaryVersion*>(BaseClass_ptr1);
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

const char EquipmentBoundaryVersion::debugName[] = "EquipmentBoundaryVersion";
const char* EquipmentBoundaryVersion::debugString() const
{
	return EquipmentBoundaryVersion::debugName;
}

void EquipmentBoundaryVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("EquipmentBoundaryVersion", &EquipmentBoundaryVersion_factory);
}

void EquipmentBoundaryVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("EquipmentBoundaryVersion.baseUML", &assign_EquipmentBoundaryVersion_baseUML);
	assign_map.emplace("EquipmentBoundaryVersion.baseURI", &assign_EquipmentBoundaryVersion_baseURI);
	assign_map.emplace("EquipmentBoundaryVersion.date", &assign_EquipmentBoundaryVersion_date);
	assign_map.emplace("EquipmentBoundaryVersion.differenceModelURI", &assign_EquipmentBoundaryVersion_differenceModelURI);
	assign_map.emplace("EquipmentBoundaryVersion.entsoeUML", &assign_EquipmentBoundaryVersion_entsoeUML);
	assign_map.emplace("EquipmentBoundaryVersion.entsoeURIcore", &assign_EquipmentBoundaryVersion_entsoeURIcore);
	assign_map.emplace("EquipmentBoundaryVersion.entsoeURIoperation", &assign_EquipmentBoundaryVersion_entsoeURIoperation);
	assign_map.emplace("EquipmentBoundaryVersion.modelDescriptionURI", &assign_EquipmentBoundaryVersion_modelDescriptionURI);
	assign_map.emplace("EquipmentBoundaryVersion.namespaceRDF", &assign_EquipmentBoundaryVersion_namespaceRDF);
	assign_map.emplace("EquipmentBoundaryVersion.namespaceUML", &assign_EquipmentBoundaryVersion_namespaceUML);
	assign_map.emplace("EquipmentBoundaryVersion.shortName", &assign_EquipmentBoundaryVersion_shortName);
}

void EquipmentBoundaryVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void EquipmentBoundaryVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("EquipmentBoundaryVersion.baseUML", &get_EquipmentBoundaryVersion_baseUML);
	get_map.emplace("EquipmentBoundaryVersion.baseURI", &get_EquipmentBoundaryVersion_baseURI);
	get_map.emplace("EquipmentBoundaryVersion.date", &get_EquipmentBoundaryVersion_date);
	get_map.emplace("EquipmentBoundaryVersion.differenceModelURI", &get_EquipmentBoundaryVersion_differenceModelURI);
	get_map.emplace("EquipmentBoundaryVersion.entsoeUML", &get_EquipmentBoundaryVersion_entsoeUML);
	get_map.emplace("EquipmentBoundaryVersion.entsoeURIcore", &get_EquipmentBoundaryVersion_entsoeURIcore);
	get_map.emplace("EquipmentBoundaryVersion.entsoeURIoperation", &get_EquipmentBoundaryVersion_entsoeURIoperation);
	get_map.emplace("EquipmentBoundaryVersion.modelDescriptionURI", &get_EquipmentBoundaryVersion_modelDescriptionURI);
	get_map.emplace("EquipmentBoundaryVersion.namespaceRDF", &get_EquipmentBoundaryVersion_namespaceRDF);
	get_map.emplace("EquipmentBoundaryVersion.namespaceUML", &get_EquipmentBoundaryVersion_namespaceUML);
	get_map.emplace("EquipmentBoundaryVersion.shortName", &get_EquipmentBoundaryVersion_shortName);
}

void EquipmentBoundaryVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void EquipmentBoundaryVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool EquipmentBoundaryVersion::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "EquipmentBoundaryVersion" &&
		dynamic_cast<EquipmentBoundaryVersion*>(otherObject) != nullptr;
}

const BaseClassDefiner EquipmentBoundaryVersion::declare()
{
	return BaseClassDefiner(EquipmentBoundaryVersion::addConstructToMap, EquipmentBoundaryVersion::addPrimitiveAssignFnsToMap, EquipmentBoundaryVersion::addClassAssignFnsToMap, EquipmentBoundaryVersion::debugName);
}

std::map<std::string, AttrDetails> EquipmentBoundaryVersion::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* EquipmentBoundaryVersion_factory()
	{
		return new EquipmentBoundaryVersion;
	}
}
