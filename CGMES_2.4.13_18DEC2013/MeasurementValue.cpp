/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MeasurementValue.hpp"

#include <algorithm>
#include <sstream>

#include "MeasurementValueQuality.hpp"
#include "MeasurementValueSource.hpp"
#include "PerCent.hpp"
#include "DateTime.hpp"

using namespace CIMPP;

MeasurementValue::MeasurementValue() : MeasurementValueQuality(nullptr), MeasurementValueSource(nullptr) {};
MeasurementValue::~MeasurementValue() {};




bool assign_MeasurementValue_sensorAccuracy(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (MeasurementValue* element = dynamic_cast<MeasurementValue*>(BaseClass_ptr1))
	{
		buffer >> element->sensorAccuracy;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_MeasurementValue_timeStamp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (MeasurementValue* element = dynamic_cast<MeasurementValue*>(BaseClass_ptr1))
	{
		element->timeStamp = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
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



const char MeasurementValue::debugName[] = "MeasurementValue";
const char* MeasurementValue::debugString() const
{
	return MeasurementValue::debugName;
}

void MeasurementValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:MeasurementValue"), &MeasurementValue_factory));
}

void MeasurementValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:MeasurementValue.sensorAccuracy"), &assign_MeasurementValue_sensorAccuracy));
	assign_map.insert(std::make_pair(std::string("cim:MeasurementValue.timeStamp"), &assign_MeasurementValue_timeStamp));
}

void MeasurementValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:MeasurementValue.MeasurementValueQuality"), &assign_MeasurementValue_MeasurementValueQuality));
	assign_map.insert(std::make_pair(std::string("cim:MeasurementValue.MeasurementValueSource"), &assign_MeasurementValue_MeasurementValueSource));
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
