/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MeasurementValueQuality.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "MeasurementValue.hpp"

using namespace CIMPP;

MeasurementValueQuality::MeasurementValueQuality() : MeasurementValue(nullptr) {};
MeasurementValueQuality::~MeasurementValueQuality() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::OP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:MeasurementValueQuality.MeasurementValue", { CGMESProfile::OP, } },
};

std::list<CGMESProfile>
MeasurementValueQuality::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
MeasurementValueQuality::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Quality61850::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_MeasurementValue_MeasurementValueQuality(BaseClass*, BaseClass*);
bool assign_MeasurementValueQuality_MeasurementValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MeasurementValueQuality* element = dynamic_cast<MeasurementValueQuality*>(BaseClass_ptr1);
	MeasurementValue* element2 = dynamic_cast<MeasurementValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->MeasurementValue != element2)
		{
			element->MeasurementValue = element2;
			return assign_MeasurementValue_MeasurementValueQuality(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_MeasurementValueQuality_MeasurementValue(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const MeasurementValueQuality* element = dynamic_cast<const MeasurementValueQuality*>(BaseClass_ptr1))
	{
		if (element->MeasurementValue != 0)
		{
			BaseClass_list.push_back(element->MeasurementValue);
			return true;
		}
	}
	return false;
}


const char MeasurementValueQuality::debugName[] = "MeasurementValueQuality";
const char* MeasurementValueQuality::debugString() const
{
	return MeasurementValueQuality::debugName;
}

void MeasurementValueQuality::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:MeasurementValueQuality"), &MeasurementValueQuality_factory));
}

void MeasurementValueQuality::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void MeasurementValueQuality::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:MeasurementValueQuality.MeasurementValue"), &assign_MeasurementValueQuality_MeasurementValue));
}

void MeasurementValueQuality::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Quality61850::addPrimitiveGetFnsToMap(get_map);
}

void MeasurementValueQuality::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Quality61850::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:MeasurementValueQuality.MeasurementValue", &get_MeasurementValueQuality_MeasurementValue);
}

void MeasurementValueQuality::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Quality61850::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner MeasurementValueQuality::declare()
{
	return BaseClassDefiner(MeasurementValueQuality::addConstructToMap, MeasurementValueQuality::addPrimitiveAssignFnsToMap, MeasurementValueQuality::addClassAssignFnsToMap, MeasurementValueQuality::debugName);
}

namespace CIMPP
{
	BaseClass* MeasurementValueQuality_factory()
	{
		return new MeasurementValueQuality;
	}
}
