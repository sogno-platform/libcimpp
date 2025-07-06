/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DynamicsFunctionBlock.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DynamicsFunctionBlock(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "DynamicsFunctionBlock.enabled", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

DynamicsFunctionBlock::DynamicsFunctionBlock() {}
DynamicsFunctionBlock::~DynamicsFunctionBlock() {}

const std::list<std::string>& DynamicsFunctionBlock::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DynamicsFunctionBlock::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DynamicsFunctionBlock::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DynamicsFunctionBlock::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DynamicsFunctionBlock::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DynamicsFunctionBlock::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DynamicsFunctionBlock::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("DynamicsFunctionBlock", &DynamicsFunctionBlock_factory);
}

void DynamicsFunctionBlock::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("DynamicsFunctionBlock.enabled", &assign_DynamicsFunctionBlock_enabled);
}

void DynamicsFunctionBlock::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DynamicsFunctionBlock::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("DynamicsFunctionBlock.enabled", &get_DynamicsFunctionBlock_enabled);
}

void DynamicsFunctionBlock::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void DynamicsFunctionBlock::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool DynamicsFunctionBlock::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DynamicsFunctionBlock" &&
		dynamic_cast<DynamicsFunctionBlock*>(otherObject) != nullptr;
}

const BaseClassDefiner DynamicsFunctionBlock::declare()
{
	return BaseClassDefiner(DynamicsFunctionBlock::addConstructToMap, DynamicsFunctionBlock::addPrimitiveAssignFnsToMap, DynamicsFunctionBlock::addClassAssignFnsToMap, DynamicsFunctionBlock::debugName);
}

std::map<std::string, AttrDetails> DynamicsFunctionBlock::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DynamicsFunctionBlock_factory()
	{
		return new DynamicsFunctionBlock;
	}
}
