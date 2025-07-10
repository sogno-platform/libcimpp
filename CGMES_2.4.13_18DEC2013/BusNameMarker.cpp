/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BusNameMarker.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ACDCTerminal.hpp"
#include "ReportingGroup.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		BusNameMarker(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "BusNameMarker.ReportingGroup", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "BusNameMarker.Terminal", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "BusNameMarker.priority", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

BusNameMarker::BusNameMarker() : ReportingGroup(nullptr) {}
BusNameMarker::~BusNameMarker() {}

const std::list<std::string>& BusNameMarker::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& BusNameMarker::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& BusNameMarker::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& BusNameMarker::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& BusNameMarker::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& BusNameMarker::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& BusNameMarker::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ReportingGroup_BusNameMarker(BaseClass*, BaseClass*);
bool assign_BusNameMarker_ReportingGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	BusNameMarker* element = dynamic_cast<BusNameMarker*>(BaseClass_ptr1);
	ReportingGroup* element2 = dynamic_cast<ReportingGroup*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ReportingGroup != element2)
		{
			element->ReportingGroup = element2;
			return assign_ReportingGroup_BusNameMarker(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ACDCTerminal_BusNameMarker(BaseClass*, BaseClass*);
bool assign_BusNameMarker_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	BusNameMarker* element = dynamic_cast<BusNameMarker*>(BaseClass_ptr1);
	ACDCTerminal* element2 = dynamic_cast<ACDCTerminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Terminal.begin(), element->Terminal.end(), element2) == element->Terminal.end())
		{
			element->Terminal.push_back(element2);
			return assign_ACDCTerminal_BusNameMarker(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_BusNameMarker_priority(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BusNameMarker* element = dynamic_cast<BusNameMarker*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->priority;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_BusNameMarker_ReportingGroup(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const BusNameMarker* element = dynamic_cast<const BusNameMarker*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ReportingGroup != 0)
		{
			BaseClass_list.push_back(element->ReportingGroup);
			return true;
		}
	}
	return false;
}


bool get_BusNameMarker_priority(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BusNameMarker* element = dynamic_cast<const BusNameMarker*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->priority;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char BusNameMarker::debugName[] = "BusNameMarker";
const char* BusNameMarker::debugString() const
{
	return BusNameMarker::debugName;
}

void BusNameMarker::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("BusNameMarker", &BusNameMarker_factory);
}

void BusNameMarker::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("BusNameMarker.priority", &assign_BusNameMarker_priority);
}

void BusNameMarker::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("BusNameMarker.ReportingGroup", &assign_BusNameMarker_ReportingGroup);
	assign_map.emplace("BusNameMarker.Terminal", &assign_BusNameMarker_Terminal);
}

void BusNameMarker::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("BusNameMarker.priority", &get_BusNameMarker_priority);
}

void BusNameMarker::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("BusNameMarker.ReportingGroup", &get_BusNameMarker_ReportingGroup);
}

void BusNameMarker::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool BusNameMarker::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "BusNameMarker" &&
		dynamic_cast<BusNameMarker*>(otherObject) != nullptr;
}

const BaseClassDefiner BusNameMarker::declare()
{
	return BaseClassDefiner(BusNameMarker::addConstructToMap, BusNameMarker::addPrimitiveAssignFnsToMap, BusNameMarker::addClassAssignFnsToMap, BusNameMarker::debugName);
}

std::map<std::string, AttrDetails> BusNameMarker::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* BusNameMarker_factory()
	{
		return new BusNameMarker;
	}
}
