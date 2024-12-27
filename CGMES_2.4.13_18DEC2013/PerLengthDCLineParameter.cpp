/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PerLengthDCLineParameter.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DCLineSegment.hpp"
#include "CapacitancePerLength.hpp"
#include "InductancePerLength.hpp"
#include "ResistancePerLength.hpp"

using namespace CIMPP;

PerLengthDCLineParameter::PerLengthDCLineParameter() {};
PerLengthDCLineParameter::~PerLengthDCLineParameter() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PerLengthDCLineParameter.DCLineSegments", { CGMESProfile::EQ, } },
	{ "cim:PerLengthDCLineParameter.capacitance", { CGMESProfile::EQ, } },
	{ "cim:PerLengthDCLineParameter.inductance", { CGMESProfile::EQ, } },
	{ "cim:PerLengthDCLineParameter.resistance", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
PerLengthDCLineParameter::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PerLengthDCLineParameter::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_PerLengthDCLineParameter_capacitance(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PerLengthDCLineParameter* element = dynamic_cast<PerLengthDCLineParameter*>(BaseClass_ptr1))
	{
		buffer >> element->capacitance;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PerLengthDCLineParameter_inductance(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PerLengthDCLineParameter* element = dynamic_cast<PerLengthDCLineParameter*>(BaseClass_ptr1))
	{
		buffer >> element->inductance;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PerLengthDCLineParameter_resistance(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PerLengthDCLineParameter* element = dynamic_cast<PerLengthDCLineParameter*>(BaseClass_ptr1))
	{
		buffer >> element->resistance;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_DCLineSegment_PerLengthParameter(BaseClass*, BaseClass*);
bool assign_PerLengthDCLineParameter_DCLineSegments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PerLengthDCLineParameter* element = dynamic_cast<PerLengthDCLineParameter*>(BaseClass_ptr1);
	DCLineSegment* element2 = dynamic_cast<DCLineSegment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCLineSegments.begin(), element->DCLineSegments.end(), element2) == element->DCLineSegments.end())
		{
			element->DCLineSegments.push_back(element2);
			return assign_DCLineSegment_PerLengthParameter(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_PerLengthDCLineParameter_capacitance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PerLengthDCLineParameter* element = dynamic_cast<const PerLengthDCLineParameter*>(BaseClass_ptr1))
	{
		buffer << element->capacitance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PerLengthDCLineParameter_inductance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PerLengthDCLineParameter* element = dynamic_cast<const PerLengthDCLineParameter*>(BaseClass_ptr1))
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

bool get_PerLengthDCLineParameter_resistance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PerLengthDCLineParameter* element = dynamic_cast<const PerLengthDCLineParameter*>(BaseClass_ptr1))
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



const char PerLengthDCLineParameter::debugName[] = "PerLengthDCLineParameter";
const char* PerLengthDCLineParameter::debugString() const
{
	return PerLengthDCLineParameter::debugName;
}

void PerLengthDCLineParameter::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PerLengthDCLineParameter"), &PerLengthDCLineParameter_factory));
}

void PerLengthDCLineParameter::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PerLengthDCLineParameter.capacitance"), &assign_PerLengthDCLineParameter_capacitance));
	assign_map.insert(std::make_pair(std::string("cim:PerLengthDCLineParameter.inductance"), &assign_PerLengthDCLineParameter_inductance));
	assign_map.insert(std::make_pair(std::string("cim:PerLengthDCLineParameter.resistance"), &assign_PerLengthDCLineParameter_resistance));
}

void PerLengthDCLineParameter::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PerLengthDCLineParameter.DCLineSegments"), &assign_PerLengthDCLineParameter_DCLineSegments));
}

void PerLengthDCLineParameter::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PerLengthDCLineParameter.capacitance", &get_PerLengthDCLineParameter_capacitance);
	get_map.emplace("cim:PerLengthDCLineParameter.inductance", &get_PerLengthDCLineParameter_inductance);
	get_map.emplace("cim:PerLengthDCLineParameter.resistance", &get_PerLengthDCLineParameter_resistance);
}

void PerLengthDCLineParameter::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void PerLengthDCLineParameter::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PerLengthDCLineParameter::declare()
{
	return BaseClassDefiner(PerLengthDCLineParameter::addConstructToMap, PerLengthDCLineParameter::addPrimitiveAssignFnsToMap, PerLengthDCLineParameter::addClassAssignFnsToMap, PerLengthDCLineParameter::debugName);
}

namespace CIMPP
{
	BaseClass* PerLengthDCLineParameter_factory()
	{
		return new PerLengthDCLineParameter;
	}
}
