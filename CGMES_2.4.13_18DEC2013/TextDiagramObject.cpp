/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TextDiagramObject.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

TextDiagramObject::TextDiagramObject() {}
TextDiagramObject::~TextDiagramObject() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:TextDiagramObject.text", { CGMESProfile::DL, } },
};

std::list<CGMESProfile>
TextDiagramObject::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
TextDiagramObject::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DiagramObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:TextDiagramObject", &TextDiagramObject_factory);
}

void TextDiagramObject::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:TextDiagramObject.text", &assign_TextDiagramObject_text);
}

void TextDiagramObject::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void TextDiagramObject::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiagramObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:TextDiagramObject.text", &get_TextDiagramObject_text);
}

void TextDiagramObject::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DiagramObject::addClassGetFnsToMap(get_map);
}

void TextDiagramObject::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiagramObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner TextDiagramObject::declare()
{
	return BaseClassDefiner(TextDiagramObject::addConstructToMap, TextDiagramObject::addPrimitiveAssignFnsToMap, TextDiagramObject::addClassAssignFnsToMap, TextDiagramObject::debugName);
}

namespace CIMPP
{
	BaseClass* TextDiagramObject_factory()
	{
		return new TextDiagramObject;
	}
}
