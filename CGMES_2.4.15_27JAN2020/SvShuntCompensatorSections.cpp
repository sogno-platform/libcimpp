/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SvShuntCompensatorSections.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ShuntCompensator.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

SvShuntCompensatorSections::SvShuntCompensatorSections() : ShuntCompensator(nullptr) {};
SvShuntCompensatorSections::~SvShuntCompensatorSections() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::SV,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SvShuntCompensatorSections.ShuntCompensator", { CGMESProfile::SV, } },
	{ "cim:SvShuntCompensatorSections.sections", { CGMESProfile::SV, } },
};

std::list<CGMESProfile>
SvShuntCompensatorSections::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SvShuntCompensatorSections::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_SvShuntCompensatorSections_sections(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SvShuntCompensatorSections* element = dynamic_cast<SvShuntCompensatorSections*>(BaseClass_ptr1))
	{
		buffer >> element->sections;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ShuntCompensator_SvShuntCompensatorSections(BaseClass*, BaseClass*);
bool assign_SvShuntCompensatorSections_ShuntCompensator(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SvShuntCompensatorSections* element = dynamic_cast<SvShuntCompensatorSections*>(BaseClass_ptr1);
	ShuntCompensator* element2 = dynamic_cast<ShuntCompensator*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ShuntCompensator != element2)
		{
			element->ShuntCompensator = element2;
			return assign_ShuntCompensator_SvShuntCompensatorSections(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_SvShuntCompensatorSections_sections(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SvShuntCompensatorSections* element = dynamic_cast<const SvShuntCompensatorSections*>(BaseClass_ptr1))
	{
		buffer << element->sections;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_SvShuntCompensatorSections_ShuntCompensator(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const SvShuntCompensatorSections* element = dynamic_cast<const SvShuntCompensatorSections*>(BaseClass_ptr1))
	{
		if (element->ShuntCompensator != 0)
		{
			BaseClass_list.push_back(element->ShuntCompensator);
			return true;
		}
	}
	return false;
}


const char SvShuntCompensatorSections::debugName[] = "SvShuntCompensatorSections";
const char* SvShuntCompensatorSections::debugString() const
{
	return SvShuntCompensatorSections::debugName;
}

void SvShuntCompensatorSections::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SvShuntCompensatorSections"), &SvShuntCompensatorSections_factory));
}

void SvShuntCompensatorSections::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SvShuntCompensatorSections.sections"), &assign_SvShuntCompensatorSections_sections));
}

void SvShuntCompensatorSections::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SvShuntCompensatorSections.ShuntCompensator"), &assign_SvShuntCompensatorSections_ShuntCompensator));
}

void SvShuntCompensatorSections::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:SvShuntCompensatorSections.sections", &get_SvShuntCompensatorSections_sections);
}

void SvShuntCompensatorSections::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:SvShuntCompensatorSections.ShuntCompensator", &get_SvShuntCompensatorSections_ShuntCompensator);
}

void SvShuntCompensatorSections::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SvShuntCompensatorSections::declare()
{
	return BaseClassDefiner(SvShuntCompensatorSections::addConstructToMap, SvShuntCompensatorSections::addPrimitiveAssignFnsToMap, SvShuntCompensatorSections::addClassAssignFnsToMap, SvShuntCompensatorSections::debugName);
}

namespace CIMPP
{
	BaseClass* SvShuntCompensatorSections_factory()
	{
		return new SvShuntCompensatorSections;
	}
}
