/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PetersenCoil.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

PetersenCoil::PetersenCoil() {}
PetersenCoil::~PetersenCoil() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SC,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PetersenCoil.mode", { CGMESProfile::SC, } },
	{ "cim:PetersenCoil.nominalU", { CGMESProfile::SC, } },
	{ "cim:PetersenCoil.offsetCurrent", { CGMESProfile::SC, } },
	{ "cim:PetersenCoil.positionCurrent", { CGMESProfile::SC, } },
	{ "cim:PetersenCoil.xGroundMax", { CGMESProfile::SC, } },
	{ "cim:PetersenCoil.xGroundMin", { CGMESProfile::SC, } },
	{ "cim:PetersenCoil.xGroundNominal", { CGMESProfile::SC, } },
};

std::list<CGMESProfile>
PetersenCoil::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PetersenCoil::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EarthFaultCompensator::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_PetersenCoil_mode(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mode;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PetersenCoil_nominalU(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->nominalU;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PetersenCoil_offsetCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->offsetCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PetersenCoil_positionCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->positionCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PetersenCoil_xGroundMax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xGroundMax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PetersenCoil_xGroundMin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xGroundMin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PetersenCoil_xGroundNominal(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xGroundNominal;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PetersenCoil_mode(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PetersenCoil* element = dynamic_cast<const PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mode;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PetersenCoil_nominalU(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PetersenCoil* element = dynamic_cast<const PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->nominalU;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PetersenCoil_offsetCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PetersenCoil* element = dynamic_cast<const PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->offsetCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PetersenCoil_positionCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PetersenCoil* element = dynamic_cast<const PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->positionCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PetersenCoil_xGroundMax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PetersenCoil* element = dynamic_cast<const PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xGroundMax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PetersenCoil_xGroundMin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PetersenCoil* element = dynamic_cast<const PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xGroundMin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PetersenCoil_xGroundNominal(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PetersenCoil* element = dynamic_cast<const PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xGroundNominal;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PetersenCoil::debugName[] = "PetersenCoil";
const char* PetersenCoil::debugString() const
{
	return PetersenCoil::debugName;
}

void PetersenCoil::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PetersenCoil", &PetersenCoil_factory);
}

void PetersenCoil::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:PetersenCoil.mode", &assign_PetersenCoil_mode);
	assign_map.emplace("cim:PetersenCoil.nominalU", &assign_PetersenCoil_nominalU);
	assign_map.emplace("cim:PetersenCoil.offsetCurrent", &assign_PetersenCoil_offsetCurrent);
	assign_map.emplace("cim:PetersenCoil.positionCurrent", &assign_PetersenCoil_positionCurrent);
	assign_map.emplace("cim:PetersenCoil.xGroundMax", &assign_PetersenCoil_xGroundMax);
	assign_map.emplace("cim:PetersenCoil.xGroundMin", &assign_PetersenCoil_xGroundMin);
	assign_map.emplace("cim:PetersenCoil.xGroundNominal", &assign_PetersenCoil_xGroundNominal);
}

void PetersenCoil::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PetersenCoil::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EarthFaultCompensator::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PetersenCoil.nominalU", &get_PetersenCoil_nominalU);
	get_map.emplace("cim:PetersenCoil.offsetCurrent", &get_PetersenCoil_offsetCurrent);
	get_map.emplace("cim:PetersenCoil.positionCurrent", &get_PetersenCoil_positionCurrent);
	get_map.emplace("cim:PetersenCoil.xGroundMax", &get_PetersenCoil_xGroundMax);
	get_map.emplace("cim:PetersenCoil.xGroundMin", &get_PetersenCoil_xGroundMin);
	get_map.emplace("cim:PetersenCoil.xGroundNominal", &get_PetersenCoil_xGroundNominal);
}

void PetersenCoil::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EarthFaultCompensator::addClassGetFnsToMap(get_map);
}

void PetersenCoil::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EarthFaultCompensator::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:PetersenCoil.mode", &get_PetersenCoil_mode);
}

const BaseClassDefiner PetersenCoil::declare()
{
	return BaseClassDefiner(PetersenCoil::addConstructToMap, PetersenCoil::addPrimitiveAssignFnsToMap, PetersenCoil::addClassAssignFnsToMap, PetersenCoil::debugName);
}

namespace CIMPP
{
	BaseClass* PetersenCoil_factory()
	{
		return new PetersenCoil;
	}
}
