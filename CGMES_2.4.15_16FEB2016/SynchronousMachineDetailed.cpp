/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineDetailed.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SynchronousMachineDetailed(),
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
		{ "SynchronousMachineDetailed.efdBaseRatio", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineDetailed.ifdBaseType", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineDetailed.ifdBaseValue", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineDetailed.saturationFactor120QAxis", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineDetailed.saturationFactorQAxis", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

SynchronousMachineDetailed::SynchronousMachineDetailed() {}
SynchronousMachineDetailed::~SynchronousMachineDetailed() {}

const std::list<std::string>& SynchronousMachineDetailed::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SynchronousMachineDetailed::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SynchronousMachineDetailed::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SynchronousMachineDetailed::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SynchronousMachineDetailed::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SynchronousMachineDetailed::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SynchronousMachineDetailed::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SynchronousMachineDetailed_efdBaseRatio(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdBaseRatio;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineDetailed_ifdBaseType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ifdBaseType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineDetailed_ifdBaseValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ifdBaseValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineDetailed_saturationFactor120QAxis(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->saturationFactor120QAxis;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineDetailed_saturationFactorQAxis(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->saturationFactorQAxis;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_SynchronousMachineDetailed_efdBaseRatio(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineDetailed* element = dynamic_cast<const SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdBaseRatio;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineDetailed_ifdBaseType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineDetailed* element = dynamic_cast<const SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ifdBaseType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineDetailed_ifdBaseValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineDetailed* element = dynamic_cast<const SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ifdBaseValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineDetailed_saturationFactor120QAxis(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineDetailed* element = dynamic_cast<const SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->saturationFactor120QAxis;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineDetailed_saturationFactorQAxis(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineDetailed* element = dynamic_cast<const SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->saturationFactorQAxis;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char SynchronousMachineDetailed::debugName[] = "SynchronousMachineDetailed";
const char* SynchronousMachineDetailed::debugString() const
{
	return SynchronousMachineDetailed::debugName;
}

void SynchronousMachineDetailed::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SynchronousMachineDetailed", &SynchronousMachineDetailed_factory);
}

void SynchronousMachineDetailed::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("SynchronousMachineDetailed.efdBaseRatio", &assign_SynchronousMachineDetailed_efdBaseRatio);
	assign_map.emplace("SynchronousMachineDetailed.ifdBaseType", &assign_SynchronousMachineDetailed_ifdBaseType);
	assign_map.emplace("SynchronousMachineDetailed.ifdBaseValue", &assign_SynchronousMachineDetailed_ifdBaseValue);
	assign_map.emplace("SynchronousMachineDetailed.saturationFactor120QAxis", &assign_SynchronousMachineDetailed_saturationFactor120QAxis);
	assign_map.emplace("SynchronousMachineDetailed.saturationFactorQAxis", &assign_SynchronousMachineDetailed_saturationFactorQAxis);
}

void SynchronousMachineDetailed::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SynchronousMachineDetailed::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("SynchronousMachineDetailed.efdBaseRatio", &get_SynchronousMachineDetailed_efdBaseRatio);
	get_map.emplace("SynchronousMachineDetailed.ifdBaseValue", &get_SynchronousMachineDetailed_ifdBaseValue);
	get_map.emplace("SynchronousMachineDetailed.saturationFactor120QAxis", &get_SynchronousMachineDetailed_saturationFactor120QAxis);
	get_map.emplace("SynchronousMachineDetailed.saturationFactorQAxis", &get_SynchronousMachineDetailed_saturationFactorQAxis);
}

void SynchronousMachineDetailed::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SynchronousMachineDynamics::addClassGetFnsToMap(get_map);
}

void SynchronousMachineDetailed::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("SynchronousMachineDetailed.ifdBaseType", &get_SynchronousMachineDetailed_ifdBaseType);
}

bool SynchronousMachineDetailed::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SynchronousMachineDetailed" &&
		dynamic_cast<SynchronousMachineDetailed*>(otherObject) != nullptr;
}

const BaseClassDefiner SynchronousMachineDetailed::declare()
{
	return BaseClassDefiner(SynchronousMachineDetailed::addConstructToMap, SynchronousMachineDetailed::addPrimitiveAssignFnsToMap, SynchronousMachineDetailed::addClassAssignFnsToMap, SynchronousMachineDetailed::debugName);
}

std::map<std::string, AttrDetails> SynchronousMachineDetailed::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = SynchronousMachineDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SynchronousMachineDetailed_factory()
	{
		return new SynchronousMachineDetailed;
	}
}
