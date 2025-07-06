/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SteadyStateHypothesisVersion.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SteadyStateHypothesisVersion(),
		"http://entsoe.eu/CIM/SchemaExtension/3/1#",
		{
			CGMESProfile::SSH,
		},
		CGMESProfile::SSH
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "SteadyStateHypothesisVersion.baseUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::SSH, } } },
		{ "SteadyStateHypothesisVersion.baseURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::SSH, } } },
		{ "SteadyStateHypothesisVersion.date", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::SSH, } } },
		{ "SteadyStateHypothesisVersion.differenceModelURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::SSH, } } },
		{ "SteadyStateHypothesisVersion.entsoeUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::SSH, } } },
		{ "SteadyStateHypothesisVersion.entsoeURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::SSH, } } },
		{ "SteadyStateHypothesisVersion.modelDescriptionURI", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::SSH, } } },
		{ "SteadyStateHypothesisVersion.namespaceRDF", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::SSH, } } },
		{ "SteadyStateHypothesisVersion.namespaceUML", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::SSH, } } },
		{ "SteadyStateHypothesisVersion.shortName", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::SSH, } } },
	};
    return ClassAttrDetailsMap;
}

SteadyStateHypothesisVersion::SteadyStateHypothesisVersion() {}
SteadyStateHypothesisVersion::~SteadyStateHypothesisVersion() {}

const std::list<std::string>& SteadyStateHypothesisVersion::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SteadyStateHypothesisVersion::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SteadyStateHypothesisVersion::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SteadyStateHypothesisVersion::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SteadyStateHypothesisVersion::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SteadyStateHypothesisVersion::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SteadyStateHypothesisVersion::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SteadyStateHypothesisVersion_baseUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool assign_SteadyStateHypothesisVersion_baseURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool assign_SteadyStateHypothesisVersion_date(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool assign_SteadyStateHypothesisVersion_differenceModelURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool assign_SteadyStateHypothesisVersion_entsoeUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool assign_SteadyStateHypothesisVersion_entsoeURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool assign_SteadyStateHypothesisVersion_modelDescriptionURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool assign_SteadyStateHypothesisVersion_namespaceRDF(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool assign_SteadyStateHypothesisVersion_namespaceUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool assign_SteadyStateHypothesisVersion_shortName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool get_SteadyStateHypothesisVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool get_SteadyStateHypothesisVersion_baseURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool get_SteadyStateHypothesisVersion_date(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool get_SteadyStateHypothesisVersion_differenceModelURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool get_SteadyStateHypothesisVersion_entsoeUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool get_SteadyStateHypothesisVersion_entsoeURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool get_SteadyStateHypothesisVersion_modelDescriptionURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool get_SteadyStateHypothesisVersion_namespaceRDF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool get_SteadyStateHypothesisVersion_namespaceUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

bool get_SteadyStateHypothesisVersion_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1);
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

const char SteadyStateHypothesisVersion::debugName[] = "SteadyStateHypothesisVersion";
const char* SteadyStateHypothesisVersion::debugString() const
{
	return SteadyStateHypothesisVersion::debugName;
}

void SteadyStateHypothesisVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SteadyStateHypothesisVersion", &SteadyStateHypothesisVersion_factory);
}

void SteadyStateHypothesisVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("SteadyStateHypothesisVersion.baseUML", &assign_SteadyStateHypothesisVersion_baseUML);
	assign_map.emplace("SteadyStateHypothesisVersion.baseURI", &assign_SteadyStateHypothesisVersion_baseURI);
	assign_map.emplace("SteadyStateHypothesisVersion.date", &assign_SteadyStateHypothesisVersion_date);
	assign_map.emplace("SteadyStateHypothesisVersion.differenceModelURI", &assign_SteadyStateHypothesisVersion_differenceModelURI);
	assign_map.emplace("SteadyStateHypothesisVersion.entsoeUML", &assign_SteadyStateHypothesisVersion_entsoeUML);
	assign_map.emplace("SteadyStateHypothesisVersion.entsoeURI", &assign_SteadyStateHypothesisVersion_entsoeURI);
	assign_map.emplace("SteadyStateHypothesisVersion.modelDescriptionURI", &assign_SteadyStateHypothesisVersion_modelDescriptionURI);
	assign_map.emplace("SteadyStateHypothesisVersion.namespaceRDF", &assign_SteadyStateHypothesisVersion_namespaceRDF);
	assign_map.emplace("SteadyStateHypothesisVersion.namespaceUML", &assign_SteadyStateHypothesisVersion_namespaceUML);
	assign_map.emplace("SteadyStateHypothesisVersion.shortName", &assign_SteadyStateHypothesisVersion_shortName);
}

void SteadyStateHypothesisVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SteadyStateHypothesisVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("SteadyStateHypothesisVersion.baseUML", &get_SteadyStateHypothesisVersion_baseUML);
	get_map.emplace("SteadyStateHypothesisVersion.baseURI", &get_SteadyStateHypothesisVersion_baseURI);
	get_map.emplace("SteadyStateHypothesisVersion.date", &get_SteadyStateHypothesisVersion_date);
	get_map.emplace("SteadyStateHypothesisVersion.differenceModelURI", &get_SteadyStateHypothesisVersion_differenceModelURI);
	get_map.emplace("SteadyStateHypothesisVersion.entsoeUML", &get_SteadyStateHypothesisVersion_entsoeUML);
	get_map.emplace("SteadyStateHypothesisVersion.entsoeURI", &get_SteadyStateHypothesisVersion_entsoeURI);
	get_map.emplace("SteadyStateHypothesisVersion.modelDescriptionURI", &get_SteadyStateHypothesisVersion_modelDescriptionURI);
	get_map.emplace("SteadyStateHypothesisVersion.namespaceRDF", &get_SteadyStateHypothesisVersion_namespaceRDF);
	get_map.emplace("SteadyStateHypothesisVersion.namespaceUML", &get_SteadyStateHypothesisVersion_namespaceUML);
	get_map.emplace("SteadyStateHypothesisVersion.shortName", &get_SteadyStateHypothesisVersion_shortName);
}

void SteadyStateHypothesisVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void SteadyStateHypothesisVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool SteadyStateHypothesisVersion::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SteadyStateHypothesisVersion" &&
		dynamic_cast<SteadyStateHypothesisVersion*>(otherObject) != nullptr;
}

const BaseClassDefiner SteadyStateHypothesisVersion::declare()
{
	return BaseClassDefiner(SteadyStateHypothesisVersion::addConstructToMap, SteadyStateHypothesisVersion::addPrimitiveAssignFnsToMap, SteadyStateHypothesisVersion::addClassAssignFnsToMap, SteadyStateHypothesisVersion::debugName);
}

std::map<std::string, AttrDetails> SteadyStateHypothesisVersion::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SteadyStateHypothesisVersion_factory()
	{
		return new SteadyStateHypothesisVersion;
	}
}
