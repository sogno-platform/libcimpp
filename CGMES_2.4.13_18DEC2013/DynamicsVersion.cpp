/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DynamicsVersion.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DynamicsVersion(),
		"http://entsoe.eu/CIM/SchemaExtension/3/1#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "DynamicsVersion.baseUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::DY, } } },
		{ "DynamicsVersion.baseURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::DY, } } },
		{ "DynamicsVersion.date", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::DY, } } },
		{ "DynamicsVersion.differenceModelURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::DY, } } },
		{ "DynamicsVersion.entsoeUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::DY, } } },
		{ "DynamicsVersion.entsoeURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::DY, } } },
		{ "DynamicsVersion.modelDescriptionURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::DY, } } },
		{ "DynamicsVersion.namespaceRDF", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::DY, } } },
		{ "DynamicsVersion.namespaceUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::DY, } } },
		{ "DynamicsVersion.shortName", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

DynamicsVersion::DynamicsVersion() {}
DynamicsVersion::~DynamicsVersion() {}

const std::list<std::string>& DynamicsVersion::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DynamicsVersion::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DynamicsVersion::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DynamicsVersion::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DynamicsVersion::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DynamicsVersion::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DynamicsVersion::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DynamicsVersion_baseUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1);
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

bool assign_DynamicsVersion_baseURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1);
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

bool assign_DynamicsVersion_date(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1);
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

bool assign_DynamicsVersion_differenceModelURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1);
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

bool assign_DynamicsVersion_entsoeUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1);
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

bool assign_DynamicsVersion_entsoeURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1);
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

bool assign_DynamicsVersion_modelDescriptionURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1);
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

bool assign_DynamicsVersion_namespaceRDF(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1);
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

bool assign_DynamicsVersion_namespaceUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1);
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

bool assign_DynamicsVersion_shortName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1);
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

bool get_DynamicsVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1);
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

bool get_DynamicsVersion_baseURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1);
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

bool get_DynamicsVersion_date(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1);
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

bool get_DynamicsVersion_differenceModelURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1);
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

bool get_DynamicsVersion_entsoeUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1);
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

bool get_DynamicsVersion_entsoeURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1);
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

bool get_DynamicsVersion_modelDescriptionURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1);
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

bool get_DynamicsVersion_namespaceRDF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1);
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

bool get_DynamicsVersion_namespaceUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1);
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

bool get_DynamicsVersion_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1);
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

const char DynamicsVersion::debugName[] = "DynamicsVersion";
const char* DynamicsVersion::debugString() const
{
	return DynamicsVersion::debugName;
}

void DynamicsVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DynamicsVersion", &DynamicsVersion_factory);
}

void DynamicsVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("DynamicsVersion.baseUML", &assign_DynamicsVersion_baseUML);
	assign_map.emplace("DynamicsVersion.baseURI", &assign_DynamicsVersion_baseURI);
	assign_map.emplace("DynamicsVersion.date", &assign_DynamicsVersion_date);
	assign_map.emplace("DynamicsVersion.differenceModelURI", &assign_DynamicsVersion_differenceModelURI);
	assign_map.emplace("DynamicsVersion.entsoeUML", &assign_DynamicsVersion_entsoeUML);
	assign_map.emplace("DynamicsVersion.entsoeURI", &assign_DynamicsVersion_entsoeURI);
	assign_map.emplace("DynamicsVersion.modelDescriptionURI", &assign_DynamicsVersion_modelDescriptionURI);
	assign_map.emplace("DynamicsVersion.namespaceRDF", &assign_DynamicsVersion_namespaceRDF);
	assign_map.emplace("DynamicsVersion.namespaceUML", &assign_DynamicsVersion_namespaceUML);
	assign_map.emplace("DynamicsVersion.shortName", &assign_DynamicsVersion_shortName);
}

void DynamicsVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DynamicsVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("DynamicsVersion.baseUML", &get_DynamicsVersion_baseUML);
	get_map.emplace("DynamicsVersion.baseURI", &get_DynamicsVersion_baseURI);
	get_map.emplace("DynamicsVersion.date", &get_DynamicsVersion_date);
	get_map.emplace("DynamicsVersion.differenceModelURI", &get_DynamicsVersion_differenceModelURI);
	get_map.emplace("DynamicsVersion.entsoeUML", &get_DynamicsVersion_entsoeUML);
	get_map.emplace("DynamicsVersion.entsoeURI", &get_DynamicsVersion_entsoeURI);
	get_map.emplace("DynamicsVersion.modelDescriptionURI", &get_DynamicsVersion_modelDescriptionURI);
	get_map.emplace("DynamicsVersion.namespaceRDF", &get_DynamicsVersion_namespaceRDF);
	get_map.emplace("DynamicsVersion.namespaceUML", &get_DynamicsVersion_namespaceUML);
	get_map.emplace("DynamicsVersion.shortName", &get_DynamicsVersion_shortName);
}

void DynamicsVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void DynamicsVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool DynamicsVersion::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DynamicsVersion" &&
		dynamic_cast<DynamicsVersion*>(otherObject) != nullptr;
}

const BaseClassDefiner DynamicsVersion::declare()
{
	return BaseClassDefiner(DynamicsVersion::addConstructToMap, DynamicsVersion::addPrimitiveAssignFnsToMap, DynamicsVersion::addClassAssignFnsToMap, DynamicsVersion::debugName);
}

std::map<std::string, AttrDetails> DynamicsVersion::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DynamicsVersion_factory()
	{
		return new DynamicsVersion;
	}
}
