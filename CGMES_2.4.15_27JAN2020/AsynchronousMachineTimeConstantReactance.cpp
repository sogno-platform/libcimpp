/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AsynchronousMachineTimeConstantReactance.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		AsynchronousMachineTimeConstantReactance(),
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
		{ "AsynchronousMachineTimeConstantReactance.tpo", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "AsynchronousMachineTimeConstantReactance.tppo", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "AsynchronousMachineTimeConstantReactance.xp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "AsynchronousMachineTimeConstantReactance.xpp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "AsynchronousMachineTimeConstantReactance.xs", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

AsynchronousMachineTimeConstantReactance::AsynchronousMachineTimeConstantReactance() {}
AsynchronousMachineTimeConstantReactance::~AsynchronousMachineTimeConstantReactance() {}

const std::list<std::string>& AsynchronousMachineTimeConstantReactance::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& AsynchronousMachineTimeConstantReactance::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& AsynchronousMachineTimeConstantReactance::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& AsynchronousMachineTimeConstantReactance::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& AsynchronousMachineTimeConstantReactance::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& AsynchronousMachineTimeConstantReactance::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& AsynchronousMachineTimeConstantReactance::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_AsynchronousMachineTimeConstantReactance_tpo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachineTimeConstantReactance* element = dynamic_cast<AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpo;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachineTimeConstantReactance_tppo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachineTimeConstantReactance* element = dynamic_cast<AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tppo;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachineTimeConstantReactance_xp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachineTimeConstantReactance* element = dynamic_cast<AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachineTimeConstantReactance_xpp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachineTimeConstantReactance* element = dynamic_cast<AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xpp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachineTimeConstantReactance_xs(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachineTimeConstantReactance* element = dynamic_cast<AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xs;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_AsynchronousMachineTimeConstantReactance_tpo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachineTimeConstantReactance* element = dynamic_cast<const AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineTimeConstantReactance_tppo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachineTimeConstantReactance* element = dynamic_cast<const AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tppo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineTimeConstantReactance_xp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachineTimeConstantReactance* element = dynamic_cast<const AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineTimeConstantReactance_xpp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachineTimeConstantReactance* element = dynamic_cast<const AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xpp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineTimeConstantReactance_xs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachineTimeConstantReactance* element = dynamic_cast<const AsynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char AsynchronousMachineTimeConstantReactance::debugName[] = "AsynchronousMachineTimeConstantReactance";
const char* AsynchronousMachineTimeConstantReactance::debugString() const
{
	return AsynchronousMachineTimeConstantReactance::debugName;
}

void AsynchronousMachineTimeConstantReactance::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("AsynchronousMachineTimeConstantReactance", &AsynchronousMachineTimeConstantReactance_factory);
}

void AsynchronousMachineTimeConstantReactance::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("AsynchronousMachineTimeConstantReactance.tpo", &assign_AsynchronousMachineTimeConstantReactance_tpo);
	assign_map.emplace("AsynchronousMachineTimeConstantReactance.tppo", &assign_AsynchronousMachineTimeConstantReactance_tppo);
	assign_map.emplace("AsynchronousMachineTimeConstantReactance.xp", &assign_AsynchronousMachineTimeConstantReactance_xp);
	assign_map.emplace("AsynchronousMachineTimeConstantReactance.xpp", &assign_AsynchronousMachineTimeConstantReactance_xpp);
	assign_map.emplace("AsynchronousMachineTimeConstantReactance.xs", &assign_AsynchronousMachineTimeConstantReactance_xs);
}

void AsynchronousMachineTimeConstantReactance::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void AsynchronousMachineTimeConstantReactance::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AsynchronousMachineDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("AsynchronousMachineTimeConstantReactance.tpo", &get_AsynchronousMachineTimeConstantReactance_tpo);
	get_map.emplace("AsynchronousMachineTimeConstantReactance.tppo", &get_AsynchronousMachineTimeConstantReactance_tppo);
	get_map.emplace("AsynchronousMachineTimeConstantReactance.xp", &get_AsynchronousMachineTimeConstantReactance_xp);
	get_map.emplace("AsynchronousMachineTimeConstantReactance.xpp", &get_AsynchronousMachineTimeConstantReactance_xpp);
	get_map.emplace("AsynchronousMachineTimeConstantReactance.xs", &get_AsynchronousMachineTimeConstantReactance_xs);
}

void AsynchronousMachineTimeConstantReactance::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AsynchronousMachineDynamics::addClassGetFnsToMap(get_map);
}

void AsynchronousMachineTimeConstantReactance::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AsynchronousMachineDynamics::addEnumGetFnsToMap(get_map);
}

bool AsynchronousMachineTimeConstantReactance::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "AsynchronousMachineTimeConstantReactance" &&
		dynamic_cast<AsynchronousMachineTimeConstantReactance*>(otherObject) != nullptr;
}

const BaseClassDefiner AsynchronousMachineTimeConstantReactance::declare()
{
	return BaseClassDefiner(AsynchronousMachineTimeConstantReactance::addConstructToMap, AsynchronousMachineTimeConstantReactance::addPrimitiveAssignFnsToMap, AsynchronousMachineTimeConstantReactance::addClassAssignFnsToMap, AsynchronousMachineTimeConstantReactance::debugName);
}

std::map<std::string, AttrDetails> AsynchronousMachineTimeConstantReactance::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = AsynchronousMachineDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* AsynchronousMachineTimeConstantReactance_factory()
	{
		return new AsynchronousMachineTimeConstantReactance;
	}
}
