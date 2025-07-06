/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AsynchronousMachineEquivalentCircuit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		AsynchronousMachineEquivalentCircuit(),
		"http://iec.ch/TC57/CIM100#",
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
		{ "AsynchronousMachineEquivalentCircuit.rr1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "AsynchronousMachineEquivalentCircuit.rr2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "AsynchronousMachineEquivalentCircuit.xlr1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "AsynchronousMachineEquivalentCircuit.xlr2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "AsynchronousMachineEquivalentCircuit.xm", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

AsynchronousMachineEquivalentCircuit::AsynchronousMachineEquivalentCircuit() {}
AsynchronousMachineEquivalentCircuit::~AsynchronousMachineEquivalentCircuit() {}

const std::list<std::string>& AsynchronousMachineEquivalentCircuit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& AsynchronousMachineEquivalentCircuit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& AsynchronousMachineEquivalentCircuit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& AsynchronousMachineEquivalentCircuit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& AsynchronousMachineEquivalentCircuit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& AsynchronousMachineEquivalentCircuit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& AsynchronousMachineEquivalentCircuit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_AsynchronousMachineEquivalentCircuit_rr1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rr1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachineEquivalentCircuit_rr2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rr2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachineEquivalentCircuit_xlr1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xlr1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachineEquivalentCircuit_xlr2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xlr2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachineEquivalentCircuit_xm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_AsynchronousMachineEquivalentCircuit_rr1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachineEquivalentCircuit* element = dynamic_cast<const AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rr1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineEquivalentCircuit_rr2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachineEquivalentCircuit* element = dynamic_cast<const AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rr2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineEquivalentCircuit_xlr1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachineEquivalentCircuit* element = dynamic_cast<const AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xlr1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineEquivalentCircuit_xlr2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachineEquivalentCircuit* element = dynamic_cast<const AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xlr2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachineEquivalentCircuit_xm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachineEquivalentCircuit* element = dynamic_cast<const AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char AsynchronousMachineEquivalentCircuit::debugName[] = "AsynchronousMachineEquivalentCircuit";
const char* AsynchronousMachineEquivalentCircuit::debugString() const
{
	return AsynchronousMachineEquivalentCircuit::debugName;
}

void AsynchronousMachineEquivalentCircuit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("AsynchronousMachineEquivalentCircuit", &AsynchronousMachineEquivalentCircuit_factory);
}

void AsynchronousMachineEquivalentCircuit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("AsynchronousMachineEquivalentCircuit.rr1", &assign_AsynchronousMachineEquivalentCircuit_rr1);
	assign_map.emplace("AsynchronousMachineEquivalentCircuit.rr2", &assign_AsynchronousMachineEquivalentCircuit_rr2);
	assign_map.emplace("AsynchronousMachineEquivalentCircuit.xlr1", &assign_AsynchronousMachineEquivalentCircuit_xlr1);
	assign_map.emplace("AsynchronousMachineEquivalentCircuit.xlr2", &assign_AsynchronousMachineEquivalentCircuit_xlr2);
	assign_map.emplace("AsynchronousMachineEquivalentCircuit.xm", &assign_AsynchronousMachineEquivalentCircuit_xm);
}

void AsynchronousMachineEquivalentCircuit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void AsynchronousMachineEquivalentCircuit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AsynchronousMachineDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("AsynchronousMachineEquivalentCircuit.rr1", &get_AsynchronousMachineEquivalentCircuit_rr1);
	get_map.emplace("AsynchronousMachineEquivalentCircuit.rr2", &get_AsynchronousMachineEquivalentCircuit_rr2);
	get_map.emplace("AsynchronousMachineEquivalentCircuit.xlr1", &get_AsynchronousMachineEquivalentCircuit_xlr1);
	get_map.emplace("AsynchronousMachineEquivalentCircuit.xlr2", &get_AsynchronousMachineEquivalentCircuit_xlr2);
	get_map.emplace("AsynchronousMachineEquivalentCircuit.xm", &get_AsynchronousMachineEquivalentCircuit_xm);
}

void AsynchronousMachineEquivalentCircuit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AsynchronousMachineDynamics::addClassGetFnsToMap(get_map);
}

void AsynchronousMachineEquivalentCircuit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AsynchronousMachineDynamics::addEnumGetFnsToMap(get_map);
}

bool AsynchronousMachineEquivalentCircuit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "AsynchronousMachineEquivalentCircuit" &&
		dynamic_cast<AsynchronousMachineEquivalentCircuit*>(otherObject) != nullptr;
}

const BaseClassDefiner AsynchronousMachineEquivalentCircuit::declare()
{
	return BaseClassDefiner(AsynchronousMachineEquivalentCircuit::addConstructToMap, AsynchronousMachineEquivalentCircuit::addPrimitiveAssignFnsToMap, AsynchronousMachineEquivalentCircuit::addClassAssignFnsToMap, AsynchronousMachineEquivalentCircuit::debugName);
}

std::map<std::string, AttrDetails> AsynchronousMachineEquivalentCircuit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = AsynchronousMachineDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* AsynchronousMachineEquivalentCircuit_factory()
	{
		return new AsynchronousMachineEquivalentCircuit;
	}
}
