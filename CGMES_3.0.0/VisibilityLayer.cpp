/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VisibilityLayer.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DiagramObject.hpp"
#include "Integer.hpp"

using namespace CIMPP;

VisibilityLayer::VisibilityLayer() {};
VisibilityLayer::~VisibilityLayer() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:VisibilityLayer.VisibleObjects", { CGMESProfile::DL, } },
	{ "cim:VisibilityLayer.drawingOrder", { CGMESProfile::DL, } },
};

std::list<CGMESProfile>
VisibilityLayer::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
VisibilityLayer::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_VisibilityLayer_drawingOrder(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VisibilityLayer* element = dynamic_cast<VisibilityLayer*>(BaseClass_ptr1))
	{
		buffer >> element->drawingOrder;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
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

bool get_VisibilityLayer_drawingOrder(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VisibilityLayer* element = dynamic_cast<const VisibilityLayer*>(BaseClass_ptr1))
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


bool get_VisibilityLayer_VisibleObjects(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const VisibilityLayer* element = dynamic_cast<const VisibilityLayer*>(BaseClass_ptr1))
	{
		std::copy(element->VisibleObjects.begin(), element->VisibleObjects.end(), std::back_inserter(BaseClass_list));
		return !BaseClass_list.empty();
	}
	return false;
}


const char VisibilityLayer::debugName[] = "VisibilityLayer";
const char* VisibilityLayer::debugString() const
{
	return VisibilityLayer::debugName;
}

void VisibilityLayer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VisibilityLayer"), &VisibilityLayer_factory));
}

void VisibilityLayer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VisibilityLayer.drawingOrder"), &assign_VisibilityLayer_drawingOrder));
}

void VisibilityLayer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VisibilityLayer.VisibleObjects"), &assign_VisibilityLayer_VisibleObjects));
}

void VisibilityLayer::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:VisibilityLayer.drawingOrder", &get_VisibilityLayer_drawingOrder);
}

void VisibilityLayer::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:VisibilityLayer.VisibleObjects", &get_VisibilityLayer_VisibleObjects);
}

void VisibilityLayer::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner VisibilityLayer::declare()
{
	return BaseClassDefiner(VisibilityLayer::addConstructToMap, VisibilityLayer::addPrimitiveAssignFnsToMap, VisibilityLayer::addClassAssignFnsToMap, VisibilityLayer::debugName);
}

namespace CIMPP
{
	BaseClass* VisibilityLayer_factory()
	{
		return new VisibilityLayer;
	}
}
