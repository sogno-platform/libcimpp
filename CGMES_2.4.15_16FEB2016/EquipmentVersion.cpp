/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquipmentVersion.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		EquipmentVersion(),
		"http://entsoe.eu/CIM/SchemaExtension/3/1#",
		{
			CGMESProfile::EQ,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "EquipmentVersion.baseUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
		{ "EquipmentVersion.baseURIcore", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
		{ "EquipmentVersion.baseURIoperation", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
		{ "EquipmentVersion.baseURIshortCircuit", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
		{ "EquipmentVersion.date", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
		{ "EquipmentVersion.differenceModelURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
		{ "EquipmentVersion.entsoeUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
		{ "EquipmentVersion.entsoeURIcore", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
		{ "EquipmentVersion.entsoeURIoperation", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
		{ "EquipmentVersion.entsoeURIshortCircuit", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
		{ "EquipmentVersion.modelDescriptionURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
		{ "EquipmentVersion.namespaceRDF", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
		{ "EquipmentVersion.namespaceUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
		{ "EquipmentVersion.shortName", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

EquipmentVersion::EquipmentVersion() {}
EquipmentVersion::~EquipmentVersion() {}

const std::list<std::string>& EquipmentVersion::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& EquipmentVersion::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& EquipmentVersion::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& EquipmentVersion::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& EquipmentVersion::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& EquipmentVersion::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& EquipmentVersion::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_EquipmentVersion_baseUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentVersion_baseURIcore(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->baseURIcore = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquipmentVersion_baseURIoperation(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->baseURIoperation = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquipmentVersion_baseURIshortCircuit(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->baseURIshortCircuit = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquipmentVersion_date(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentVersion_differenceModelURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentVersion_entsoeUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentVersion_entsoeURIcore(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentVersion_entsoeURIoperation(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentVersion_entsoeURIshortCircuit(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->entsoeURIshortCircuit = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquipmentVersion_modelDescriptionURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentVersion_namespaceRDF(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentVersion_namespaceUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1);
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

bool assign_EquipmentVersion_shortName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquipmentVersion* element = dynamic_cast<EquipmentVersion*>(BaseClass_ptr1);
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

bool get_EquipmentVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1);
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

bool get_EquipmentVersion_baseURIcore(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1);
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

bool get_EquipmentVersion_differenceModelURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1);
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

bool get_EquipmentVersion_entsoeUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1);
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

bool get_EquipmentVersion_entsoeURIcore(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1);
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

bool get_EquipmentVersion_entsoeURIoperation(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1);
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

bool get_EquipmentVersion_entsoeURIshortCircuit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1);
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

bool get_EquipmentVersion_namespaceRDF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1);
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

bool get_EquipmentVersion_namespaceUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1);
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

bool get_EquipmentVersion_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquipmentVersion* element = dynamic_cast<const EquipmentVersion*>(BaseClass_ptr1);
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

const char EquipmentVersion::debugName[] = "EquipmentVersion";
const char* EquipmentVersion::debugString() const
{
	return EquipmentVersion::debugName;
}

void EquipmentVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("EquipmentVersion", &EquipmentVersion_factory);
}

void EquipmentVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("EquipmentVersion.baseUML", &assign_EquipmentVersion_baseUML);
	assign_map.emplace("EquipmentVersion.baseURIcore", &assign_EquipmentVersion_baseURIcore);
	assign_map.emplace("EquipmentVersion.baseURIoperation", &assign_EquipmentVersion_baseURIoperation);
	assign_map.emplace("EquipmentVersion.baseURIshortCircuit", &assign_EquipmentVersion_baseURIshortCircuit);
	assign_map.emplace("EquipmentVersion.date", &assign_EquipmentVersion_date);
	assign_map.emplace("EquipmentVersion.differenceModelURI", &assign_EquipmentVersion_differenceModelURI);
	assign_map.emplace("EquipmentVersion.entsoeUML", &assign_EquipmentVersion_entsoeUML);
	assign_map.emplace("EquipmentVersion.entsoeURIcore", &assign_EquipmentVersion_entsoeURIcore);
	assign_map.emplace("EquipmentVersion.entsoeURIoperation", &assign_EquipmentVersion_entsoeURIoperation);
	assign_map.emplace("EquipmentVersion.entsoeURIshortCircuit", &assign_EquipmentVersion_entsoeURIshortCircuit);
	assign_map.emplace("EquipmentVersion.modelDescriptionURI", &assign_EquipmentVersion_modelDescriptionURI);
	assign_map.emplace("EquipmentVersion.namespaceRDF", &assign_EquipmentVersion_namespaceRDF);
	assign_map.emplace("EquipmentVersion.namespaceUML", &assign_EquipmentVersion_namespaceUML);
	assign_map.emplace("EquipmentVersion.shortName", &assign_EquipmentVersion_shortName);
}

void EquipmentVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void EquipmentVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("EquipmentVersion.baseUML", &get_EquipmentVersion_baseUML);
	get_map.emplace("EquipmentVersion.baseURIcore", &get_EquipmentVersion_baseURIcore);
	get_map.emplace("EquipmentVersion.baseURIoperation", &get_EquipmentVersion_baseURIoperation);
	get_map.emplace("EquipmentVersion.baseURIshortCircuit", &get_EquipmentVersion_baseURIshortCircuit);
	get_map.emplace("EquipmentVersion.date", &get_EquipmentVersion_date);
	get_map.emplace("EquipmentVersion.differenceModelURI", &get_EquipmentVersion_differenceModelURI);
	get_map.emplace("EquipmentVersion.entsoeUML", &get_EquipmentVersion_entsoeUML);
	get_map.emplace("EquipmentVersion.entsoeURIcore", &get_EquipmentVersion_entsoeURIcore);
	get_map.emplace("EquipmentVersion.entsoeURIoperation", &get_EquipmentVersion_entsoeURIoperation);
	get_map.emplace("EquipmentVersion.entsoeURIshortCircuit", &get_EquipmentVersion_entsoeURIshortCircuit);
	get_map.emplace("EquipmentVersion.modelDescriptionURI", &get_EquipmentVersion_modelDescriptionURI);
	get_map.emplace("EquipmentVersion.namespaceRDF", &get_EquipmentVersion_namespaceRDF);
	get_map.emplace("EquipmentVersion.namespaceUML", &get_EquipmentVersion_namespaceUML);
	get_map.emplace("EquipmentVersion.shortName", &get_EquipmentVersion_shortName);
}

void EquipmentVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void EquipmentVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool EquipmentVersion::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "EquipmentVersion" &&
		dynamic_cast<EquipmentVersion*>(otherObject) != nullptr;
}

const BaseClassDefiner EquipmentVersion::declare()
{
	return BaseClassDefiner(EquipmentVersion::addConstructToMap, EquipmentVersion::addPrimitiveAssignFnsToMap, EquipmentVersion::addClassAssignFnsToMap, EquipmentVersion::debugName);
}

std::map<std::string, AttrDetails> EquipmentVersion::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* EquipmentVersion_factory()
	{
		return new EquipmentVersion;
	}
}
