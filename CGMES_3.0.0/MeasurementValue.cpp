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

MeasurementValue::MeasurementValue() : MeasurementValueQuality(nullptr), MeasurementValueSource(nullptr) {}
MeasurementValue::~MeasurementValue() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::OP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:MeasurementValue.MeasurementValueQuality", { CGMESProfile::OP, } },
	{ "cim:MeasurementValue.MeasurementValueSource", { CGMESProfile::OP, } },
	{ "cim:MeasurementValue.sensorAccuracy", { CGMESProfile::OP, } },
	{ "cim:MeasurementValue.timeStamp", { CGMESProfile::OP, } },
};

std::list<CGMESProfile>
MeasurementValue::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
MeasurementValue::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IOPoint::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:MeasurementValue", &MeasurementValue_factory);
}

void MeasurementValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:MeasurementValue.sensorAccuracy", &assign_MeasurementValue_sensorAccuracy);
	assign_map.emplace("cim:MeasurementValue.timeStamp", &assign_MeasurementValue_timeStamp);
}

void MeasurementValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:MeasurementValue.MeasurementValueQuality", &assign_MeasurementValue_MeasurementValueQuality);
	assign_map.emplace("cim:MeasurementValue.MeasurementValueSource", &assign_MeasurementValue_MeasurementValueSource);
}

void MeasurementValue::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IOPoint::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:MeasurementValue.sensorAccuracy", &get_MeasurementValue_sensorAccuracy);
	get_map.emplace("cim:MeasurementValue.timeStamp", &get_MeasurementValue_timeStamp);
}

void MeasurementValue::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IOPoint::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:MeasurementValue.MeasurementValueSource", &get_MeasurementValue_MeasurementValueSource);
}

void MeasurementValue::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IOPoint::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner MeasurementValue::declare()
{
	return BaseClassDefiner(MeasurementValue::addConstructToMap, MeasurementValue::addPrimitiveAssignFnsToMap, MeasurementValue::addClassAssignFnsToMap, MeasurementValue::debugName);
}

namespace CIMPP
{
	BaseClass* MeasurementValue_factory()
	{
		return new MeasurementValue;
	}
}
