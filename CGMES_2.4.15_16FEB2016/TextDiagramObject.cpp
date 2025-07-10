/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TextDiagramObject.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TextDiagramObject(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::DL,
		},
		CGMESProfile::DL
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "TextDiagramObject.text", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DL, } } },
	};
    return ClassAttrDetailsMap;
}

TextDiagramObject::TextDiagramObject() {}
TextDiagramObject::~TextDiagramObject() {}

const std::list<std::string>& TextDiagramObject::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TextDiagramObject::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TextDiagramObject::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TextDiagramObject::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TextDiagramObject::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TextDiagramObject::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TextDiagramObject::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_TextDiagramObject_text(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TextDiagramObject* element = dynamic_cast<TextDiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->text = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_TextDiagramObject_text(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TextDiagramObject* element = dynamic_cast<const TextDiagramObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->text;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char TextDiagramObject::debugName[] = "TextDiagramObject";
const char* TextDiagramObject::debugString() const
{
	return TextDiagramObject::debugName;
}

void TextDiagramObject::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TextDiagramObject", &TextDiagramObject_factory);
}

void TextDiagramObject::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("TextDiagramObject.text", &assign_TextDiagramObject_text);
}

void TextDiagramObject::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void TextDiagramObject::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiagramObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("TextDiagramObject.text", &get_TextDiagramObject_text);
}

void TextDiagramObject::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DiagramObject::addClassGetFnsToMap(get_map);
}

void TextDiagramObject::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiagramObject::addEnumGetFnsToMap(get_map);
}

bool TextDiagramObject::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TextDiagramObject" &&
		dynamic_cast<TextDiagramObject*>(otherObject) != nullptr;
}

const BaseClassDefiner TextDiagramObject::declare()
{
	return BaseClassDefiner(TextDiagramObject::addConstructToMap, TextDiagramObject::addPrimitiveAssignFnsToMap, TextDiagramObject::addClassAssignFnsToMap, TextDiagramObject::debugName);
}

std::map<std::string, AttrDetails> TextDiagramObject::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DiagramObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TextDiagramObject_factory()
	{
		return new TextDiagramObject;
	}
}
