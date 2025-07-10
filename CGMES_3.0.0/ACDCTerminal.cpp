/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ACDCTerminal.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "BusNameMarker.hpp"
#include "Measurement.hpp"
#include "OperationalLimitSet.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ACDCTerminal(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DY,
			CGMESProfile::EQ,
			CGMESProfile::EQBD,
			CGMESProfile::OP,
			CGMESProfile::SC,
			CGMESProfile::SSH,
			CGMESProfile::SV,
			CGMESProfile::TP,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "ACDCTerminal.BusNameMarker", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "ACDCTerminal.Measurements", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
		{ "ACDCTerminal.OperationalLimitSet", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "ACDCTerminal.connected", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "ACDCTerminal.sequenceNumber", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ACDCTerminal::ACDCTerminal() : BusNameMarker(nullptr) {}
ACDCTerminal::~ACDCTerminal() {}

const std::list<std::string>& ACDCTerminal::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ACDCTerminal::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ACDCTerminal::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ACDCTerminal::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ACDCTerminal::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ACDCTerminal::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ACDCTerminal::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_BusNameMarker_Terminal(BaseClass*, BaseClass*);
bool assign_ACDCTerminal_BusNameMarker(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1);
	BusNameMarker* element2 = dynamic_cast<BusNameMarker*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->BusNameMarker != element2)
		{
			element->BusNameMarker = element2;
			return assign_BusNameMarker_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Measurement_Terminal(BaseClass*, BaseClass*);
bool assign_ACDCTerminal_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1);
	Measurement* element2 = dynamic_cast<Measurement*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Measurements.begin(), element->Measurements.end(), element2) == element->Measurements.end())
		{
			element->Measurements.push_back(element2);
			return assign_Measurement_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_OperationalLimitSet_Terminal(BaseClass*, BaseClass*);
bool assign_ACDCTerminal_OperationalLimitSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1);
	OperationalLimitSet* element2 = dynamic_cast<OperationalLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->OperationalLimitSet.begin(), element->OperationalLimitSet.end(), element2) == element->OperationalLimitSet.end())
		{
			element->OperationalLimitSet.push_back(element2);
			return assign_OperationalLimitSet_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ACDCTerminal_connected(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->connected;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCTerminal_sequenceNumber(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->sequenceNumber;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ACDCTerminal_BusNameMarker(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ACDCTerminal* element = dynamic_cast<const ACDCTerminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->BusNameMarker != 0)
		{
			BaseClass_list.push_back(element->BusNameMarker);
			return true;
		}
	}
	return false;
}



bool get_ACDCTerminal_connected(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCTerminal* element = dynamic_cast<const ACDCTerminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->connected;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCTerminal_sequenceNumber(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCTerminal* element = dynamic_cast<const ACDCTerminal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->sequenceNumber;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ACDCTerminal::debugName[] = "ACDCTerminal";
const char* ACDCTerminal::debugString() const
{
	return ACDCTerminal::debugName;
}

void ACDCTerminal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ACDCTerminal", &ACDCTerminal_factory);
}

void ACDCTerminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ACDCTerminal.connected", &assign_ACDCTerminal_connected);
	assign_map.emplace("ACDCTerminal.sequenceNumber", &assign_ACDCTerminal_sequenceNumber);
}

void ACDCTerminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ACDCTerminal.BusNameMarker", &assign_ACDCTerminal_BusNameMarker);
	assign_map.emplace("ACDCTerminal.Measurements", &assign_ACDCTerminal_Measurements);
	assign_map.emplace("ACDCTerminal.OperationalLimitSet", &assign_ACDCTerminal_OperationalLimitSet);
}

void ACDCTerminal::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ACDCTerminal.connected", &get_ACDCTerminal_connected);
	get_map.emplace("ACDCTerminal.sequenceNumber", &get_ACDCTerminal_sequenceNumber);
}

void ACDCTerminal::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("ACDCTerminal.BusNameMarker", &get_ACDCTerminal_BusNameMarker);
}

void ACDCTerminal::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool ACDCTerminal::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ACDCTerminal" &&
		dynamic_cast<ACDCTerminal*>(otherObject) != nullptr;
}

const BaseClassDefiner ACDCTerminal::declare()
{
	return BaseClassDefiner(ACDCTerminal::addConstructToMap, ACDCTerminal::addPrimitiveAssignFnsToMap, ACDCTerminal::addClassAssignFnsToMap, ACDCTerminal::debugName);
}

std::map<std::string, AttrDetails> ACDCTerminal::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ACDCTerminal_factory()
	{
		return new ACDCTerminal;
	}
}
