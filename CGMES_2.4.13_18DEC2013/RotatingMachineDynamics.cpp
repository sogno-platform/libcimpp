/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RotatingMachineDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		RotatingMachineDynamics(),
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
		{ "RotatingMachineDynamics.damping", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "RotatingMachineDynamics.inertia", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "RotatingMachineDynamics.saturationFactor", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "RotatingMachineDynamics.saturationFactor120", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "RotatingMachineDynamics.statorLeakageReactance", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "RotatingMachineDynamics.statorResistance", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

RotatingMachineDynamics::RotatingMachineDynamics() {}
RotatingMachineDynamics::~RotatingMachineDynamics() {}

const std::list<std::string>& RotatingMachineDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& RotatingMachineDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& RotatingMachineDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& RotatingMachineDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& RotatingMachineDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& RotatingMachineDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& RotatingMachineDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_RotatingMachineDynamics_damping(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->damping;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RotatingMachineDynamics_inertia(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inertia;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RotatingMachineDynamics_saturationFactor(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->saturationFactor;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RotatingMachineDynamics_saturationFactor120(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->saturationFactor120;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RotatingMachineDynamics_statorLeakageReactance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->statorLeakageReactance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RotatingMachineDynamics_statorResistance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->statorResistance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_RotatingMachineDynamics_damping(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RotatingMachineDynamics* element = dynamic_cast<const RotatingMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->damping;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RotatingMachineDynamics_inertia(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RotatingMachineDynamics* element = dynamic_cast<const RotatingMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inertia;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RotatingMachineDynamics_saturationFactor(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RotatingMachineDynamics* element = dynamic_cast<const RotatingMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->saturationFactor;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RotatingMachineDynamics_saturationFactor120(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RotatingMachineDynamics* element = dynamic_cast<const RotatingMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->saturationFactor120;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RotatingMachineDynamics_statorLeakageReactance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RotatingMachineDynamics* element = dynamic_cast<const RotatingMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->statorLeakageReactance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RotatingMachineDynamics_statorResistance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RotatingMachineDynamics* element = dynamic_cast<const RotatingMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->statorResistance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char RotatingMachineDynamics::debugName[] = "RotatingMachineDynamics";
const char* RotatingMachineDynamics::debugString() const
{
	return RotatingMachineDynamics::debugName;
}

void RotatingMachineDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("RotatingMachineDynamics", &RotatingMachineDynamics_factory);
}

void RotatingMachineDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("RotatingMachineDynamics.damping", &assign_RotatingMachineDynamics_damping);
	assign_map.emplace("RotatingMachineDynamics.inertia", &assign_RotatingMachineDynamics_inertia);
	assign_map.emplace("RotatingMachineDynamics.saturationFactor", &assign_RotatingMachineDynamics_saturationFactor);
	assign_map.emplace("RotatingMachineDynamics.saturationFactor120", &assign_RotatingMachineDynamics_saturationFactor120);
	assign_map.emplace("RotatingMachineDynamics.statorLeakageReactance", &assign_RotatingMachineDynamics_statorLeakageReactance);
	assign_map.emplace("RotatingMachineDynamics.statorResistance", &assign_RotatingMachineDynamics_statorResistance);
}

void RotatingMachineDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void RotatingMachineDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("RotatingMachineDynamics.damping", &get_RotatingMachineDynamics_damping);
	get_map.emplace("RotatingMachineDynamics.inertia", &get_RotatingMachineDynamics_inertia);
	get_map.emplace("RotatingMachineDynamics.saturationFactor", &get_RotatingMachineDynamics_saturationFactor);
	get_map.emplace("RotatingMachineDynamics.saturationFactor120", &get_RotatingMachineDynamics_saturationFactor120);
	get_map.emplace("RotatingMachineDynamics.statorLeakageReactance", &get_RotatingMachineDynamics_statorLeakageReactance);
	get_map.emplace("RotatingMachineDynamics.statorResistance", &get_RotatingMachineDynamics_statorResistance);
}

void RotatingMachineDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
}

void RotatingMachineDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool RotatingMachineDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "RotatingMachineDynamics" &&
		dynamic_cast<RotatingMachineDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner RotatingMachineDynamics::declare()
{
	return BaseClassDefiner(RotatingMachineDynamics::addConstructToMap, RotatingMachineDynamics::addPrimitiveAssignFnsToMap, RotatingMachineDynamics::addClassAssignFnsToMap, RotatingMachineDynamics::debugName);
}

std::map<std::string, AttrDetails> RotatingMachineDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* RotatingMachineDynamics_factory()
	{
		return new RotatingMachineDynamics;
	}
}
