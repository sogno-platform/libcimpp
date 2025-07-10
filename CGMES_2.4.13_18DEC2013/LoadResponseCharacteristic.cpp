/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadResponseCharacteristic.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "EnergyConsumer.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		LoadResponseCharacteristic(),
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
		{ "LoadResponseCharacteristic.EnergyConsumer", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "LoadResponseCharacteristic.exponentModel", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "LoadResponseCharacteristic.pConstantCurrent", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "LoadResponseCharacteristic.pConstantImpedance", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "LoadResponseCharacteristic.pConstantPower", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "LoadResponseCharacteristic.pFrequencyExponent", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "LoadResponseCharacteristic.pVoltageExponent", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "LoadResponseCharacteristic.qConstantCurrent", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "LoadResponseCharacteristic.qConstantImpedance", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "LoadResponseCharacteristic.qConstantPower", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "LoadResponseCharacteristic.qFrequencyExponent", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "LoadResponseCharacteristic.qVoltageExponent", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

LoadResponseCharacteristic::LoadResponseCharacteristic() {}
LoadResponseCharacteristic::~LoadResponseCharacteristic() {}

const std::list<std::string>& LoadResponseCharacteristic::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& LoadResponseCharacteristic::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& LoadResponseCharacteristic::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& LoadResponseCharacteristic::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& LoadResponseCharacteristic::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& LoadResponseCharacteristic::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& LoadResponseCharacteristic::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_EnergyConsumer_LoadResponse(BaseClass*, BaseClass*);
bool assign_LoadResponseCharacteristic_EnergyConsumer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	EnergyConsumer* element2 = dynamic_cast<EnergyConsumer*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->EnergyConsumer.begin(), element->EnergyConsumer.end(), element2) == element->EnergyConsumer.end())
		{
			element->EnergyConsumer.push_back(element2);
			return assign_EnergyConsumer_LoadResponse(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_LoadResponseCharacteristic_exponentModel(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->exponentModel;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pConstantCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pConstantCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pConstantImpedance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pConstantImpedance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pConstantPower(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pConstantPower;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pFrequencyExponent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pFrequencyExponent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_pVoltageExponent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pVoltageExponent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qConstantCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qConstantCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qConstantImpedance(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qConstantImpedance;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qConstantPower(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qConstantPower;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qFrequencyExponent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qFrequencyExponent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadResponseCharacteristic_qVoltageExponent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadResponseCharacteristic* element = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qVoltageExponent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_LoadResponseCharacteristic_exponentModel(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->exponentModel;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_pConstantCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pConstantCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_pConstantImpedance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pConstantImpedance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_pConstantPower(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pConstantPower;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_pFrequencyExponent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pFrequencyExponent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_pVoltageExponent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pVoltageExponent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_qConstantCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qConstantCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_qConstantImpedance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qConstantImpedance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_qConstantPower(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qConstantPower;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_qFrequencyExponent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qFrequencyExponent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadResponseCharacteristic_qVoltageExponent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadResponseCharacteristic* element = dynamic_cast<const LoadResponseCharacteristic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qVoltageExponent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char LoadResponseCharacteristic::debugName[] = "LoadResponseCharacteristic";
const char* LoadResponseCharacteristic::debugString() const
{
	return LoadResponseCharacteristic::debugName;
}

void LoadResponseCharacteristic::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("LoadResponseCharacteristic", &LoadResponseCharacteristic_factory);
}

void LoadResponseCharacteristic::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("LoadResponseCharacteristic.exponentModel", &assign_LoadResponseCharacteristic_exponentModel);
	assign_map.emplace("LoadResponseCharacteristic.pConstantCurrent", &assign_LoadResponseCharacteristic_pConstantCurrent);
	assign_map.emplace("LoadResponseCharacteristic.pConstantImpedance", &assign_LoadResponseCharacteristic_pConstantImpedance);
	assign_map.emplace("LoadResponseCharacteristic.pConstantPower", &assign_LoadResponseCharacteristic_pConstantPower);
	assign_map.emplace("LoadResponseCharacteristic.pFrequencyExponent", &assign_LoadResponseCharacteristic_pFrequencyExponent);
	assign_map.emplace("LoadResponseCharacteristic.pVoltageExponent", &assign_LoadResponseCharacteristic_pVoltageExponent);
	assign_map.emplace("LoadResponseCharacteristic.qConstantCurrent", &assign_LoadResponseCharacteristic_qConstantCurrent);
	assign_map.emplace("LoadResponseCharacteristic.qConstantImpedance", &assign_LoadResponseCharacteristic_qConstantImpedance);
	assign_map.emplace("LoadResponseCharacteristic.qConstantPower", &assign_LoadResponseCharacteristic_qConstantPower);
	assign_map.emplace("LoadResponseCharacteristic.qFrequencyExponent", &assign_LoadResponseCharacteristic_qFrequencyExponent);
	assign_map.emplace("LoadResponseCharacteristic.qVoltageExponent", &assign_LoadResponseCharacteristic_qVoltageExponent);
}

void LoadResponseCharacteristic::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("LoadResponseCharacteristic.EnergyConsumer", &assign_LoadResponseCharacteristic_EnergyConsumer);
}

void LoadResponseCharacteristic::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("LoadResponseCharacteristic.exponentModel", &get_LoadResponseCharacteristic_exponentModel);
	get_map.emplace("LoadResponseCharacteristic.pConstantCurrent", &get_LoadResponseCharacteristic_pConstantCurrent);
	get_map.emplace("LoadResponseCharacteristic.pConstantImpedance", &get_LoadResponseCharacteristic_pConstantImpedance);
	get_map.emplace("LoadResponseCharacteristic.pConstantPower", &get_LoadResponseCharacteristic_pConstantPower);
	get_map.emplace("LoadResponseCharacteristic.pFrequencyExponent", &get_LoadResponseCharacteristic_pFrequencyExponent);
	get_map.emplace("LoadResponseCharacteristic.pVoltageExponent", &get_LoadResponseCharacteristic_pVoltageExponent);
	get_map.emplace("LoadResponseCharacteristic.qConstantCurrent", &get_LoadResponseCharacteristic_qConstantCurrent);
	get_map.emplace("LoadResponseCharacteristic.qConstantImpedance", &get_LoadResponseCharacteristic_qConstantImpedance);
	get_map.emplace("LoadResponseCharacteristic.qConstantPower", &get_LoadResponseCharacteristic_qConstantPower);
	get_map.emplace("LoadResponseCharacteristic.qFrequencyExponent", &get_LoadResponseCharacteristic_qFrequencyExponent);
	get_map.emplace("LoadResponseCharacteristic.qVoltageExponent", &get_LoadResponseCharacteristic_qVoltageExponent);
}

void LoadResponseCharacteristic::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void LoadResponseCharacteristic::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool LoadResponseCharacteristic::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "LoadResponseCharacteristic" &&
		dynamic_cast<LoadResponseCharacteristic*>(otherObject) != nullptr;
}

const BaseClassDefiner LoadResponseCharacteristic::declare()
{
	return BaseClassDefiner(LoadResponseCharacteristic::addConstructToMap, LoadResponseCharacteristic::addPrimitiveAssignFnsToMap, LoadResponseCharacteristic::addClassAssignFnsToMap, LoadResponseCharacteristic::debugName);
}

std::map<std::string, AttrDetails> LoadResponseCharacteristic::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* LoadResponseCharacteristic_factory()
	{
		return new LoadResponseCharacteristic;
	}
}
