/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DynamicsFunctionBlock.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

DynamicsFunctionBlock::DynamicsFunctionBlock() {}
DynamicsFunctionBlock::~DynamicsFunctionBlock() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DynamicsFunctionBlock.enabled", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
DynamicsFunctionBlock::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DynamicsFunctionBlock::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_DynamicsFunctionBlock_enabled(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DynamicsFunctionBlock* element = dynamic_cast<DynamicsFunctionBlock*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->enabled;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_DynamicsFunctionBlock_enabled(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DynamicsFunctionBlock* element = dynamic_cast<const DynamicsFunctionBlock*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->enabled;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char DynamicsFunctionBlock::debugName[] = "DynamicsFunctionBlock";
const char* DynamicsFunctionBlock::debugString() const
{
	return DynamicsFunctionBlock::debugName;
}

void DynamicsFunctionBlock::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DynamicsFunctionBlock", &DynamicsFunctionBlock_factory);
}

void DynamicsFunctionBlock::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:DynamicsFunctionBlock.enabled", &assign_DynamicsFunctionBlock_enabled);
}

void DynamicsFunctionBlock::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DynamicsFunctionBlock::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:DynamicsFunctionBlock.enabled", &get_DynamicsFunctionBlock_enabled);
}

void DynamicsFunctionBlock::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void DynamicsFunctionBlock::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DynamicsFunctionBlock::declare()
{
	return BaseClassDefiner(DynamicsFunctionBlock::addConstructToMap, DynamicsFunctionBlock::addPrimitiveAssignFnsToMap, DynamicsFunctionBlock::addClassAssignFnsToMap, DynamicsFunctionBlock::debugName);
}

namespace CIMPP
{
	BaseClass* DynamicsFunctionBlock_factory()
	{
		return new DynamicsFunctionBlock;
	}
}
