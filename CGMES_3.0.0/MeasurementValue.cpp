/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MeasurementValue.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "MeasurementValueQuality.hpp"
#include "MeasurementValueSource.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		MeasurementValue(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::OP,
		},
		CGMESProfile::OP
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "MeasurementValue.MeasurementValueQuality", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
		{ "MeasurementValue.MeasurementValueSource", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
		{ "MeasurementValue.sensorAccuracy", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
		{ "MeasurementValue.timeStamp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
	};
    return ClassAttrDetailsMap;
}

MeasurementValue::MeasurementValue() : MeasurementValueQuality(nullptr), MeasurementValueSource(nullptr) {}
MeasurementValue::~MeasurementValue() {}

const std::list<std::string>& MeasurementValue::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& MeasurementValue::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& MeasurementValue::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& MeasurementValue::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& MeasurementValue::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& MeasurementValue::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& MeasurementValue::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_MeasurementValueQuality_MeasurementValue(BaseClass*, BaseClass*);
bool assign_MeasurementValue_MeasurementValueQuality(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MeasurementValue* element = dynamic_cast<MeasurementValue*>(BaseClass_ptr1);
	MeasurementValueQuality* element2 = dynamic_cast<MeasurementValueQuality*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->MeasurementValueQuality != element2)
		{
			element->MeasurementValueQuality = element2;
			return assign_MeasurementValueQuality_MeasurementValue(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_MeasurementValueSource_MeasurementValues(BaseClass*, BaseClass*);
bool assign_MeasurementValue_MeasurementValueSource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MeasurementValue* element = dynamic_cast<MeasurementValue*>(BaseClass_ptr1);
	MeasurementValueSource* element2 = dynamic_cast<MeasurementValueSource*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->MeasurementValueSource != element2)
		{
			element->MeasurementValueSource = element2;
			return assign_MeasurementValueSource_MeasurementValues(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_MeasurementValue_sensorAccuracy(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MeasurementValue* element = dynamic_cast<MeasurementValue*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->sensorAccuracy;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_MeasurementValue_timeStamp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MeasurementValue* element = dynamic_cast<MeasurementValue*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->timeStamp = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_MeasurementValue_MeasurementValueSource(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const MeasurementValue* element = dynamic_cast<const MeasurementValue*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->MeasurementValueSource != 0)
		{
			BaseClass_list.push_back(element->MeasurementValueSource);
			return true;
		}
	}
	return false;
}

bool get_MeasurementValue_sensorAccuracy(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MeasurementValue* element = dynamic_cast<const MeasurementValue*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->sensorAccuracy;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_MeasurementValue_timeStamp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MeasurementValue* element = dynamic_cast<const MeasurementValue*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->timeStamp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char MeasurementValue::debugName[] = "MeasurementValue";
const char* MeasurementValue::debugString() const
{
	return MeasurementValue::debugName;
}

void MeasurementValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("MeasurementValue", &MeasurementValue_factory);
}

void MeasurementValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("MeasurementValue.sensorAccuracy", &assign_MeasurementValue_sensorAccuracy);
	assign_map.emplace("MeasurementValue.timeStamp", &assign_MeasurementValue_timeStamp);
}

void MeasurementValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("MeasurementValue.MeasurementValueQuality", &assign_MeasurementValue_MeasurementValueQuality);
	assign_map.emplace("MeasurementValue.MeasurementValueSource", &assign_MeasurementValue_MeasurementValueSource);
}

void MeasurementValue::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IOPoint::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("MeasurementValue.sensorAccuracy", &get_MeasurementValue_sensorAccuracy);
	get_map.emplace("MeasurementValue.timeStamp", &get_MeasurementValue_timeStamp);
}

void MeasurementValue::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IOPoint::addClassGetFnsToMap(get_map);
	get_map.emplace("MeasurementValue.MeasurementValueSource", &get_MeasurementValue_MeasurementValueSource);
}

void MeasurementValue::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IOPoint::addEnumGetFnsToMap(get_map);
}

bool MeasurementValue::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "MeasurementValue" &&
		dynamic_cast<MeasurementValue*>(otherObject) != nullptr;
}

const BaseClassDefiner MeasurementValue::declare()
{
	return BaseClassDefiner(MeasurementValue::addConstructToMap, MeasurementValue::addPrimitiveAssignFnsToMap, MeasurementValue::addClassAssignFnsToMap, MeasurementValue::debugName);
}

std::map<std::string, AttrDetails> MeasurementValue::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IOPoint::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* MeasurementValue_factory()
	{
		return new MeasurementValue;
	}
}
