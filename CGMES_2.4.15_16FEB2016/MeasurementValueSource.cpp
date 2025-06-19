/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MeasurementValueSource.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "MeasurementValue.hpp"

using namespace CIMPP;

MeasurementValueSource::MeasurementValueSource() {}
MeasurementValueSource::~MeasurementValueSource() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:MeasurementValueSource.MeasurementValues", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
MeasurementValueSource::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
MeasurementValueSource::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_MeasurementValue_MeasurementValueSource(BaseClass*, BaseClass*);
bool assign_MeasurementValueSource_MeasurementValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MeasurementValueSource* element = dynamic_cast<MeasurementValueSource*>(BaseClass_ptr1);
	MeasurementValue* element2 = dynamic_cast<MeasurementValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->MeasurementValues.begin(), element->MeasurementValues.end(), element2) == element->MeasurementValues.end())
		{
			element->MeasurementValues.push_back(element2);
			return assign_MeasurementValue_MeasurementValueSource(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char MeasurementValueSource::debugName[] = "MeasurementValueSource";
const char* MeasurementValueSource::debugString() const
{
	return MeasurementValueSource::debugName;
}

void MeasurementValueSource::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:MeasurementValueSource", &MeasurementValueSource_factory);
}

void MeasurementValueSource::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void MeasurementValueSource::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:MeasurementValueSource.MeasurementValues", &assign_MeasurementValueSource_MeasurementValues);
}

void MeasurementValueSource::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void MeasurementValueSource::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void MeasurementValueSource::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner MeasurementValueSource::declare()
{
	return BaseClassDefiner(MeasurementValueSource::addConstructToMap, MeasurementValueSource::addPrimitiveAssignFnsToMap, MeasurementValueSource::addClassAssignFnsToMap, MeasurementValueSource::debugName);
}

namespace CIMPP
{
	BaseClass* MeasurementValueSource_factory()
	{
		return new MeasurementValueSource;
	}
}
