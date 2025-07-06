/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerTransformer.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PowerTransformerEnd.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PowerTransformer(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SC,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "PowerTransformer.PowerTransformerEnd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "PowerTransformer.beforeShCircuitHighestOperatingCurrent", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "PowerTransformer.beforeShCircuitHighestOperatingVoltage", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "PowerTransformer.beforeShortCircuitAnglePf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "PowerTransformer.highSideMinOperatingU", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "PowerTransformer.isPartOfGeneratorUnit", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "PowerTransformer.operationalValuesConsidered", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
	};
    return ClassAttrDetailsMap;
}

PowerTransformer::PowerTransformer() {}
PowerTransformer::~PowerTransformer() {}

const std::list<std::string>& PowerTransformer::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PowerTransformer::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PowerTransformer::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PowerTransformer::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PowerTransformer::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PowerTransformer::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PowerTransformer::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PowerTransformerEnd_PowerTransformer(BaseClass*, BaseClass*);
bool assign_PowerTransformer_PowerTransformerEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1);
	PowerTransformerEnd* element2 = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->PowerTransformerEnd.begin(), element->PowerTransformerEnd.end(), element2) == element->PowerTransformerEnd.end())
		{
			element->PowerTransformerEnd.push_back(element2);
			return assign_PowerTransformerEnd_PowerTransformer(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PowerTransformer_beforeShCircuitHighestOperatingCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->beforeShCircuitHighestOperatingCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PowerTransformer_beforeShCircuitHighestOperatingVoltage(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->beforeShCircuitHighestOperatingVoltage;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PowerTransformer_beforeShortCircuitAnglePf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->beforeShortCircuitAnglePf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PowerTransformer_highSideMinOperatingU(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->highSideMinOperatingU;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PowerTransformer_isPartOfGeneratorUnit(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->isPartOfGeneratorUnit;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PowerTransformer_operationalValuesConsidered(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerTransformer* element = dynamic_cast<PowerTransformer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->operationalValuesConsidered;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_PowerTransformer_beforeShCircuitHighestOperatingCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerTransformer* element = dynamic_cast<const PowerTransformer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->beforeShCircuitHighestOperatingCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformer_beforeShCircuitHighestOperatingVoltage(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerTransformer* element = dynamic_cast<const PowerTransformer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->beforeShCircuitHighestOperatingVoltage;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformer_beforeShortCircuitAnglePf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerTransformer* element = dynamic_cast<const PowerTransformer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->beforeShortCircuitAnglePf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformer_highSideMinOperatingU(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerTransformer* element = dynamic_cast<const PowerTransformer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->highSideMinOperatingU;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformer_isPartOfGeneratorUnit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerTransformer* element = dynamic_cast<const PowerTransformer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->isPartOfGeneratorUnit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformer_operationalValuesConsidered(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerTransformer* element = dynamic_cast<const PowerTransformer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->operationalValuesConsidered;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PowerTransformer::debugName[] = "PowerTransformer";
const char* PowerTransformer::debugString() const
{
	return PowerTransformer::debugName;
}

void PowerTransformer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PowerTransformer", &PowerTransformer_factory);
}

void PowerTransformer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PowerTransformer.beforeShCircuitHighestOperatingCurrent", &assign_PowerTransformer_beforeShCircuitHighestOperatingCurrent);
	assign_map.emplace("PowerTransformer.beforeShCircuitHighestOperatingVoltage", &assign_PowerTransformer_beforeShCircuitHighestOperatingVoltage);
	assign_map.emplace("PowerTransformer.beforeShortCircuitAnglePf", &assign_PowerTransformer_beforeShortCircuitAnglePf);
	assign_map.emplace("PowerTransformer.highSideMinOperatingU", &assign_PowerTransformer_highSideMinOperatingU);
	assign_map.emplace("PowerTransformer.isPartOfGeneratorUnit", &assign_PowerTransformer_isPartOfGeneratorUnit);
	assign_map.emplace("PowerTransformer.operationalValuesConsidered", &assign_PowerTransformer_operationalValuesConsidered);
}

void PowerTransformer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PowerTransformer.PowerTransformerEnd", &assign_PowerTransformer_PowerTransformerEnd);
}

void PowerTransformer::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PowerTransformer.beforeShCircuitHighestOperatingCurrent", &get_PowerTransformer_beforeShCircuitHighestOperatingCurrent);
	get_map.emplace("PowerTransformer.beforeShCircuitHighestOperatingVoltage", &get_PowerTransformer_beforeShCircuitHighestOperatingVoltage);
	get_map.emplace("PowerTransformer.beforeShortCircuitAnglePf", &get_PowerTransformer_beforeShortCircuitAnglePf);
	get_map.emplace("PowerTransformer.highSideMinOperatingU", &get_PowerTransformer_highSideMinOperatingU);
	get_map.emplace("PowerTransformer.isPartOfGeneratorUnit", &get_PowerTransformer_isPartOfGeneratorUnit);
	get_map.emplace("PowerTransformer.operationalValuesConsidered", &get_PowerTransformer_operationalValuesConsidered);
}

void PowerTransformer::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
}

void PowerTransformer::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool PowerTransformer::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PowerTransformer" &&
		dynamic_cast<PowerTransformer*>(otherObject) != nullptr;
}

const BaseClassDefiner PowerTransformer::declare()
{
	return BaseClassDefiner(PowerTransformer::addConstructToMap, PowerTransformer::addPrimitiveAssignFnsToMap, PowerTransformer::addClassAssignFnsToMap, PowerTransformer::debugName);
}

std::map<std::string, AttrDetails> PowerTransformer::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PowerTransformer_factory()
	{
		return new PowerTransformer;
	}
}
