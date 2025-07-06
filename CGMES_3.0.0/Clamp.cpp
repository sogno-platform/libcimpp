/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Clamp.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ACLineSegment.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Clamp(),
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
		{ "Clamp.ACLineSegment", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "Clamp.lengthFromTerminal1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

Clamp::Clamp() : ACLineSegment(nullptr) {}
Clamp::~Clamp() {}

const std::list<std::string>& Clamp::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Clamp::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Clamp::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Clamp::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Clamp::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Clamp::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Clamp::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ACLineSegment_Clamp(BaseClass*, BaseClass*);
bool assign_Clamp_ACLineSegment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Clamp* element = dynamic_cast<Clamp*>(BaseClass_ptr1);
	ACLineSegment* element2 = dynamic_cast<ACLineSegment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ACLineSegment != element2)
		{
			element->ACLineSegment = element2;
			return assign_ACLineSegment_Clamp(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Clamp_lengthFromTerminal1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Clamp* element = dynamic_cast<Clamp*>(BaseClass_ptr1);
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

bool get_Clamp_ACLineSegment(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Clamp* element = dynamic_cast<const Clamp*>(BaseClass_ptr1);
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

bool get_Clamp_lengthFromTerminal1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Clamp* element = dynamic_cast<const Clamp*>(BaseClass_ptr1);
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

const char Clamp::debugName[] = "Clamp";
const char* Clamp::debugString() const
{
	return Clamp::debugName;
}

void Clamp::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Clamp", &Clamp_factory);
}

void Clamp::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("Clamp.lengthFromTerminal1", &assign_Clamp_lengthFromTerminal1);
}

void Clamp::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("Clamp.ACLineSegment", &assign_Clamp_ACLineSegment);
}

void Clamp::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("Clamp.lengthFromTerminal1", &get_Clamp_lengthFromTerminal1);
}

void Clamp::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
	get_map.emplace("Clamp.ACLineSegment", &get_Clamp_ACLineSegment);
}

void Clamp::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool Clamp::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Clamp" &&
		dynamic_cast<Clamp*>(otherObject) != nullptr;
}

const BaseClassDefiner Clamp::declare()
{
	return BaseClassDefiner(Clamp::addConstructToMap, Clamp::addPrimitiveAssignFnsToMap, Clamp::addClassAssignFnsToMap, Clamp::debugName);
}

std::map<std::string, AttrDetails> Clamp::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Clamp_factory()
	{
		return new Clamp;
	}
}
