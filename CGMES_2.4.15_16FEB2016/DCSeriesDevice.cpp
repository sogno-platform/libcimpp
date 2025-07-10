/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCSeriesDevice.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DCSeriesDevice(),
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
		{ "DCSeriesDevice.inductance", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "DCSeriesDevice.ratedUdc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "DCSeriesDevice.resistance", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

DCSeriesDevice::DCSeriesDevice() {}
DCSeriesDevice::~DCSeriesDevice() {}

const std::list<std::string>& DCSeriesDevice::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DCSeriesDevice::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DCSeriesDevice::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DCSeriesDevice::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DCSeriesDevice::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DCSeriesDevice::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DCSeriesDevice::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DCSeriesDevice_inductance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCSeriesDevice* element = dynamic_cast<DCSeriesDevice*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inductance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DCSeriesDevice_ratedUdc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCSeriesDevice* element = dynamic_cast<DCSeriesDevice*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedUdc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DCSeriesDevice_resistance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DCSeriesDevice* element = dynamic_cast<DCSeriesDevice*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->resistance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_DCSeriesDevice_inductance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCSeriesDevice* element = dynamic_cast<const DCSeriesDevice*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inductance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DCSeriesDevice_ratedUdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCSeriesDevice* element = dynamic_cast<const DCSeriesDevice*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedUdc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DCSeriesDevice_resistance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DCSeriesDevice* element = dynamic_cast<const DCSeriesDevice*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->resistance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char DCSeriesDevice::debugName[] = "DCSeriesDevice";
const char* DCSeriesDevice::debugString() const
{
	return DCSeriesDevice::debugName;
}

void DCSeriesDevice::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DCSeriesDevice", &DCSeriesDevice_factory);
}

void DCSeriesDevice::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("DCSeriesDevice.inductance", &assign_DCSeriesDevice_inductance);
	assign_map.emplace("DCSeriesDevice.ratedUdc", &assign_DCSeriesDevice_ratedUdc);
	assign_map.emplace("DCSeriesDevice.resistance", &assign_DCSeriesDevice_resistance);
}

void DCSeriesDevice::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DCSeriesDevice::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("DCSeriesDevice.inductance", &get_DCSeriesDevice_inductance);
	get_map.emplace("DCSeriesDevice.ratedUdc", &get_DCSeriesDevice_ratedUdc);
	get_map.emplace("DCSeriesDevice.resistance", &get_DCSeriesDevice_resistance);
}

void DCSeriesDevice::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCConductingEquipment::addClassGetFnsToMap(get_map);
}

void DCSeriesDevice::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool DCSeriesDevice::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DCSeriesDevice" &&
		dynamic_cast<DCSeriesDevice*>(otherObject) != nullptr;
}

const BaseClassDefiner DCSeriesDevice::declare()
{
	return BaseClassDefiner(DCSeriesDevice::addConstructToMap, DCSeriesDevice::addPrimitiveAssignFnsToMap, DCSeriesDevice::addClassAssignFnsToMap, DCSeriesDevice::debugName);
}

std::map<std::string, AttrDetails> DCSeriesDevice::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DCConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DCSeriesDevice_factory()
	{
		return new DCSeriesDevice;
	}
}
