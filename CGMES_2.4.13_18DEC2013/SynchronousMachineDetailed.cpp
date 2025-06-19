/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineDetailed.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

SynchronousMachineDetailed::SynchronousMachineDetailed() {}
SynchronousMachineDetailed::~SynchronousMachineDetailed() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SynchronousMachineDetailed.efdBaseRatio", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineDetailed.ifdBaseType", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineDetailed.ifdBaseValue", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineDetailed.saturationFactor120QAxis", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineDetailed.saturationFactorQAxis", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
SynchronousMachineDetailed::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SynchronousMachineDetailed::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = SynchronousMachineDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_SynchronousMachineDetailed_efdBaseRatio(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdBaseRatio;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineDetailed_ifdBaseType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ifdBaseType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineDetailed_ifdBaseValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ifdBaseValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineDetailed_saturationFactor120QAxis(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->saturationFactor120QAxis;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineDetailed_saturationFactorQAxis(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineDetailed* element = dynamic_cast<SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->saturationFactorQAxis;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_SynchronousMachineDetailed_efdBaseRatio(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineDetailed* element = dynamic_cast<const SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdBaseRatio;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineDetailed_ifdBaseType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineDetailed* element = dynamic_cast<const SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ifdBaseType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineDetailed_ifdBaseValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineDetailed* element = dynamic_cast<const SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ifdBaseValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineDetailed_saturationFactor120QAxis(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineDetailed* element = dynamic_cast<const SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->saturationFactor120QAxis;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineDetailed_saturationFactorQAxis(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineDetailed* element = dynamic_cast<const SynchronousMachineDetailed*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->saturationFactorQAxis;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char SynchronousMachineDetailed::debugName[] = "SynchronousMachineDetailed";
const char* SynchronousMachineDetailed::debugString() const
{
	return SynchronousMachineDetailed::debugName;
}

void SynchronousMachineDetailed::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:SynchronousMachineDetailed", &SynchronousMachineDetailed_factory);
}

void SynchronousMachineDetailed::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:SynchronousMachineDetailed.efdBaseRatio", &assign_SynchronousMachineDetailed_efdBaseRatio);
	assign_map.emplace("cim:SynchronousMachineDetailed.ifdBaseType", &assign_SynchronousMachineDetailed_ifdBaseType);
	assign_map.emplace("cim:SynchronousMachineDetailed.ifdBaseValue", &assign_SynchronousMachineDetailed_ifdBaseValue);
	assign_map.emplace("cim:SynchronousMachineDetailed.saturationFactor120QAxis", &assign_SynchronousMachineDetailed_saturationFactor120QAxis);
	assign_map.emplace("cim:SynchronousMachineDetailed.saturationFactorQAxis", &assign_SynchronousMachineDetailed_saturationFactorQAxis);
}

void SynchronousMachineDetailed::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SynchronousMachineDetailed::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:SynchronousMachineDetailed.efdBaseRatio", &get_SynchronousMachineDetailed_efdBaseRatio);
	get_map.emplace("cim:SynchronousMachineDetailed.ifdBaseValue", &get_SynchronousMachineDetailed_ifdBaseValue);
	get_map.emplace("cim:SynchronousMachineDetailed.saturationFactor120QAxis", &get_SynchronousMachineDetailed_saturationFactor120QAxis);
	get_map.emplace("cim:SynchronousMachineDetailed.saturationFactorQAxis", &get_SynchronousMachineDetailed_saturationFactorQAxis);
}

void SynchronousMachineDetailed::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SynchronousMachineDynamics::addClassGetFnsToMap(get_map);
}

void SynchronousMachineDetailed::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:SynchronousMachineDetailed.ifdBaseType", &get_SynchronousMachineDetailed_ifdBaseType);
}

const BaseClassDefiner SynchronousMachineDetailed::declare()
{
	return BaseClassDefiner(SynchronousMachineDetailed::addConstructToMap, SynchronousMachineDetailed::addPrimitiveAssignFnsToMap, SynchronousMachineDetailed::addClassAssignFnsToMap, SynchronousMachineDetailed::debugName);
}

namespace CIMPP
{
	BaseClass* SynchronousMachineDetailed_factory()
	{
		return new SynchronousMachineDetailed;
	}
}
