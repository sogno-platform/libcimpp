/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Cut.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ACLineSegment.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Cut(),
		"http://iec.ch/TC57/CIM100#",
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
		{ "Cut.ACLineSegment", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "Cut.lengthFromTerminal1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

Cut::Cut() : ACLineSegment(nullptr) {}
Cut::~Cut() {}

const std::list<std::string>& Cut::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Cut::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Cut::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Cut::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Cut::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Cut::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Cut::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ACLineSegment_Cut(BaseClass*, BaseClass*);
bool assign_Cut_ACLineSegment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Cut* element = dynamic_cast<Cut*>(BaseClass_ptr1);
	ACLineSegment* element2 = dynamic_cast<ACLineSegment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ACLineSegment != element2)
		{
			element->ACLineSegment = element2;
			return assign_ACLineSegment_Cut(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Cut_lengthFromTerminal1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Cut* element = dynamic_cast<Cut*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lengthFromTerminal1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_Cut_ACLineSegment(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Cut* element = dynamic_cast<const Cut*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ACLineSegment != 0)
		{
			BaseClass_list.push_back(element->ACLineSegment);
			return true;
		}
	}
	return false;
}

bool get_Cut_lengthFromTerminal1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Cut* element = dynamic_cast<const Cut*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lengthFromTerminal1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Cut::debugName[] = "Cut";
const char* Cut::debugString() const
{
	return Cut::debugName;
}

void Cut::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Cut", &Cut_factory);
}

void Cut::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("Cut.lengthFromTerminal1", &assign_Cut_lengthFromTerminal1);
}

void Cut::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("Cut.ACLineSegment", &assign_Cut_ACLineSegment);
}

void Cut::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("Cut.lengthFromTerminal1", &get_Cut_lengthFromTerminal1);
}

void Cut::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Switch::addClassGetFnsToMap(get_map);
	get_map.emplace("Cut.ACLineSegment", &get_Cut_ACLineSegment);
}

void Cut::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addEnumGetFnsToMap(get_map);
}

bool Cut::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Cut" &&
		dynamic_cast<Cut*>(otherObject) != nullptr;
}

const BaseClassDefiner Cut::declare()
{
	return BaseClassDefiner(Cut::addConstructToMap, Cut::addPrimitiveAssignFnsToMap, Cut::addClassAssignFnsToMap, Cut::debugName);
}

std::map<std::string, AttrDetails> Cut::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Switch::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Cut_factory()
	{
		return new Cut;
	}
}
