/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ShuntCompensator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SvShuntCompensatorSections.hpp"

using namespace CIMPP;

ShuntCompensator::ShuntCompensator() : SvShuntCompensatorSections(nullptr) {}
ShuntCompensator::~ShuntCompensator() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SC,
	CGMESProfile::SSH,
	CGMESProfile::SV,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ShuntCompensator.SvShuntCompensatorSections", { CGMESProfile::SV, } },
	{ "cim:ShuntCompensator.aVRDelay", { CGMESProfile::EQ, } },
	{ "cim:ShuntCompensator.grounded", { CGMESProfile::EQ, } },
	{ "cim:ShuntCompensator.maximumSections", { CGMESProfile::EQ, } },
	{ "cim:ShuntCompensator.nomU", { CGMESProfile::EQ, } },
	{ "cim:ShuntCompensator.normalSections", { CGMESProfile::EQ, } },
	{ "cim:ShuntCompensator.sections", { CGMESProfile::SSH, } },
	{ "cim:ShuntCompensator.voltageSensitivity", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
ShuntCompensator::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ShuntCompensator::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = RegulatingCondEq::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_SvShuntCompensatorSections_ShuntCompensator(BaseClass*, BaseClass*);
bool assign_ShuntCompensator_SvShuntCompensatorSections(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	SvShuntCompensatorSections* element2 = dynamic_cast<SvShuntCompensatorSections*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SvShuntCompensatorSections != element2)
		{
			element->SvShuntCompensatorSections = element2;
			return assign_SvShuntCompensatorSections_ShuntCompensator(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ShuntCompensator_aVRDelay(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->aVRDelay;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ShuntCompensator_grounded(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->grounded;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ShuntCompensator_maximumSections(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maximumSections;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ShuntCompensator_nomU(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->nomU;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ShuntCompensator_normalSections(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->normalSections;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ShuntCompensator_sections(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->sections;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ShuntCompensator_voltageSensitivity(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ShuntCompensator* element = dynamic_cast<ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->voltageSensitivity;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_ShuntCompensator_aVRDelay(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ShuntCompensator* element = dynamic_cast<const ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->aVRDelay;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ShuntCompensator_grounded(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ShuntCompensator* element = dynamic_cast<const ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->grounded;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ShuntCompensator_maximumSections(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ShuntCompensator* element = dynamic_cast<const ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maximumSections;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ShuntCompensator_nomU(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ShuntCompensator* element = dynamic_cast<const ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->nomU;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ShuntCompensator_normalSections(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ShuntCompensator* element = dynamic_cast<const ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->normalSections;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ShuntCompensator_sections(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ShuntCompensator* element = dynamic_cast<const ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ShuntCompensator_voltageSensitivity(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ShuntCompensator* element = dynamic_cast<const ShuntCompensator*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->voltageSensitivity;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ShuntCompensator::debugName[] = "ShuntCompensator";
const char* ShuntCompensator::debugString() const
{
	return ShuntCompensator::debugName;
}

void ShuntCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ShuntCompensator", &ShuntCompensator_factory);
}

void ShuntCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ShuntCompensator.aVRDelay", &assign_ShuntCompensator_aVRDelay);
	assign_map.emplace("cim:ShuntCompensator.grounded", &assign_ShuntCompensator_grounded);
	assign_map.emplace("cim:ShuntCompensator.maximumSections", &assign_ShuntCompensator_maximumSections);
	assign_map.emplace("cim:ShuntCompensator.nomU", &assign_ShuntCompensator_nomU);
	assign_map.emplace("cim:ShuntCompensator.normalSections", &assign_ShuntCompensator_normalSections);
	assign_map.emplace("cim:ShuntCompensator.sections", &assign_ShuntCompensator_sections);
	assign_map.emplace("cim:ShuntCompensator.voltageSensitivity", &assign_ShuntCompensator_voltageSensitivity);
}

void ShuntCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:ShuntCompensator.SvShuntCompensatorSections", &assign_ShuntCompensator_SvShuntCompensatorSections);
}

void ShuntCompensator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ShuntCompensator.aVRDelay", &get_ShuntCompensator_aVRDelay);
	get_map.emplace("cim:ShuntCompensator.grounded", &get_ShuntCompensator_grounded);
	get_map.emplace("cim:ShuntCompensator.maximumSections", &get_ShuntCompensator_maximumSections);
	get_map.emplace("cim:ShuntCompensator.nomU", &get_ShuntCompensator_nomU);
	get_map.emplace("cim:ShuntCompensator.normalSections", &get_ShuntCompensator_normalSections);
	get_map.emplace("cim:ShuntCompensator.sections", &get_ShuntCompensator_sections);
	get_map.emplace("cim:ShuntCompensator.voltageSensitivity", &get_ShuntCompensator_voltageSensitivity);
}

void ShuntCompensator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RegulatingCondEq::addClassGetFnsToMap(get_map);
}

void ShuntCompensator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ShuntCompensator::declare()
{
	return BaseClassDefiner(ShuntCompensator::addConstructToMap, ShuntCompensator::addPrimitiveAssignFnsToMap, ShuntCompensator::addClassAssignFnsToMap, ShuntCompensator::debugName);
}

namespace CIMPP
{
	BaseClass* ShuntCompensator_factory()
	{
		return new ShuntCompensator;
	}
}
