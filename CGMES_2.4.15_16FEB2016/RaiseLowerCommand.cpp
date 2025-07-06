/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RaiseLowerCommand.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ValueAliasSet.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		RaiseLowerCommand(),
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
		{ "RaiseLowerCommand.ValueAliasSet", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

RaiseLowerCommand::RaiseLowerCommand() : ValueAliasSet(nullptr) {}
RaiseLowerCommand::~RaiseLowerCommand() {}

const std::list<std::string>& RaiseLowerCommand::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& RaiseLowerCommand::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& RaiseLowerCommand::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& RaiseLowerCommand::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& RaiseLowerCommand::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& RaiseLowerCommand::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& RaiseLowerCommand::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ValueAliasSet_RaiseLowerCommands(BaseClass*, BaseClass*);
bool assign_RaiseLowerCommand_ValueAliasSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RaiseLowerCommand* element = dynamic_cast<RaiseLowerCommand*>(BaseClass_ptr1);
	ValueAliasSet* element2 = dynamic_cast<ValueAliasSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ValueAliasSet != element2)
		{
			element->ValueAliasSet = element2;
			return assign_ValueAliasSet_RaiseLowerCommands(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_RaiseLowerCommand_ValueAliasSet(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const RaiseLowerCommand* element = dynamic_cast<const RaiseLowerCommand*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ValueAliasSet != 0)
		{
			BaseClass_list.push_back(element->ValueAliasSet);
			return true;
		}
	}
	return false;
}

const char RaiseLowerCommand::debugName[] = "RaiseLowerCommand";
const char* RaiseLowerCommand::debugString() const
{
	return RaiseLowerCommand::debugName;
}

void RaiseLowerCommand::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("RaiseLowerCommand", &RaiseLowerCommand_factory);
}

void RaiseLowerCommand::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void RaiseLowerCommand::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("RaiseLowerCommand.ValueAliasSet", &assign_RaiseLowerCommand_ValueAliasSet);
}

void RaiseLowerCommand::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AnalogControl::addPrimitiveGetFnsToMap(get_map);
}

void RaiseLowerCommand::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AnalogControl::addClassGetFnsToMap(get_map);
	get_map.emplace("RaiseLowerCommand.ValueAliasSet", &get_RaiseLowerCommand_ValueAliasSet);
}

void RaiseLowerCommand::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AnalogControl::addEnumGetFnsToMap(get_map);
}

bool RaiseLowerCommand::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "RaiseLowerCommand" &&
		dynamic_cast<RaiseLowerCommand*>(otherObject) != nullptr;
}

const BaseClassDefiner RaiseLowerCommand::declare()
{
	return BaseClassDefiner(RaiseLowerCommand::addConstructToMap, RaiseLowerCommand::addPrimitiveAssignFnsToMap, RaiseLowerCommand::addClassAssignFnsToMap, RaiseLowerCommand::debugName);
}

std::map<std::string, AttrDetails> RaiseLowerCommand::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = AnalogControl::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* RaiseLowerCommand_factory()
	{
		return new RaiseLowerCommand;
	}
}
