/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VisibilityLayer.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DiagramObject.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		VisibilityLayer(),
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
		{ "VisibilityLayer.VisibleObjects", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DL, } } },
		{ "VisibilityLayer.drawingOrder", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DL, } } },
	};
    return ClassAttrDetailsMap;
}

VisibilityLayer::VisibilityLayer() {}
VisibilityLayer::~VisibilityLayer() {}

const std::list<std::string>& VisibilityLayer::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& VisibilityLayer::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& VisibilityLayer::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& VisibilityLayer::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& VisibilityLayer::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& VisibilityLayer::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& VisibilityLayer::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DiagramObject_VisibilityLayers(BaseClass*, BaseClass*);
bool assign_VisibilityLayer_VisibleObjects(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VisibilityLayer* element = dynamic_cast<VisibilityLayer*>(BaseClass_ptr1);
	DiagramObject* element2 = dynamic_cast<DiagramObject*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->VisibleObjects.begin(), element->VisibleObjects.end(), element2) == element->VisibleObjects.end())
		{
			element->VisibleObjects.push_back(element2);
			return assign_DiagramObject_VisibilityLayers(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VisibilityLayer_drawingOrder(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VisibilityLayer* element = dynamic_cast<VisibilityLayer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->drawingOrder;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_VisibilityLayer_VisibleObjects(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const VisibilityLayer* element = dynamic_cast<const VisibilityLayer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		std::copy(element->VisibleObjects.begin(), element->VisibleObjects.end(), std::back_inserter(BaseClass_list));
		return !BaseClass_list.empty();
	}
	return false;
}

bool get_VisibilityLayer_drawingOrder(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VisibilityLayer* element = dynamic_cast<const VisibilityLayer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->drawingOrder;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char VisibilityLayer::debugName[] = "VisibilityLayer";
const char* VisibilityLayer::debugString() const
{
	return VisibilityLayer::debugName;
}

void VisibilityLayer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("VisibilityLayer", &VisibilityLayer_factory);
}

void VisibilityLayer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("VisibilityLayer.drawingOrder", &assign_VisibilityLayer_drawingOrder);
}

void VisibilityLayer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("VisibilityLayer.VisibleObjects", &assign_VisibilityLayer_VisibleObjects);
}

void VisibilityLayer::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("VisibilityLayer.drawingOrder", &get_VisibilityLayer_drawingOrder);
}

void VisibilityLayer::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("VisibilityLayer.VisibleObjects", &get_VisibilityLayer_VisibleObjects);
}

void VisibilityLayer::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool VisibilityLayer::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "VisibilityLayer" &&
		dynamic_cast<VisibilityLayer*>(otherObject) != nullptr;
}

const BaseClassDefiner VisibilityLayer::declare()
{
	return BaseClassDefiner(VisibilityLayer::addConstructToMap, VisibilityLayer::addPrimitiveAssignFnsToMap, VisibilityLayer::addClassAssignFnsToMap, VisibilityLayer::debugName);
}

std::map<std::string, AttrDetails> VisibilityLayer::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* VisibilityLayer_factory()
	{
		return new VisibilityLayer;
	}
}
