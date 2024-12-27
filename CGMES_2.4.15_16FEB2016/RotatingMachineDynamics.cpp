/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RotatingMachineDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

RotatingMachineDynamics::RotatingMachineDynamics() {};
RotatingMachineDynamics::~RotatingMachineDynamics() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:RotatingMachineDynamics.damping", { CGMESProfile::DY, } },
	{ "cim:RotatingMachineDynamics.inertia", { CGMESProfile::DY, } },
	{ "cim:RotatingMachineDynamics.saturationFactor", { CGMESProfile::DY, } },
	{ "cim:RotatingMachineDynamics.saturationFactor120", { CGMESProfile::DY, } },
	{ "cim:RotatingMachineDynamics.statorLeakageReactance", { CGMESProfile::DY, } },
	{ "cim:RotatingMachineDynamics.statorResistance", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
RotatingMachineDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
RotatingMachineDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_RotatingMachineDynamics_damping(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1))
	{
		buffer >> element->damping;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_RotatingMachineDynamics_inertia(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1))
	{
		buffer >> element->inertia;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_RotatingMachineDynamics_saturationFactor(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1))
	{
		buffer >> element->saturationFactor;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_RotatingMachineDynamics_saturationFactor120(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1))
	{
		buffer >> element->saturationFactor120;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_RotatingMachineDynamics_statorLeakageReactance(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1))
	{
		buffer >> element->statorLeakageReactance;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_RotatingMachineDynamics_statorResistance(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (RotatingMachineDynamics* element = dynamic_cast<RotatingMachineDynamics*>(BaseClass_ptr1))
	{
		buffer >> element->statorResistance;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_RotatingMachineDynamics_damping(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const RotatingMachineDynamics* element = dynamic_cast<const RotatingMachineDynamics*>(BaseClass_ptr1))
	{
		buffer << element->damping;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RotatingMachineDynamics_inertia(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const RotatingMachineDynamics* element = dynamic_cast<const RotatingMachineDynamics*>(BaseClass_ptr1))
	{
		buffer << element->inertia;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RotatingMachineDynamics_saturationFactor(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const RotatingMachineDynamics* element = dynamic_cast<const RotatingMachineDynamics*>(BaseClass_ptr1))
	{
		buffer << element->saturationFactor;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RotatingMachineDynamics_saturationFactor120(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const RotatingMachineDynamics* element = dynamic_cast<const RotatingMachineDynamics*>(BaseClass_ptr1))
	{
		buffer << element->saturationFactor120;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RotatingMachineDynamics_statorLeakageReactance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const RotatingMachineDynamics* element = dynamic_cast<const RotatingMachineDynamics*>(BaseClass_ptr1))
	{
		buffer << element->statorLeakageReactance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RotatingMachineDynamics_statorResistance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const RotatingMachineDynamics* element = dynamic_cast<const RotatingMachineDynamics*>(BaseClass_ptr1))
	{
		buffer << element->statorResistance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char RotatingMachineDynamics::debugName[] = "RotatingMachineDynamics";
const char* RotatingMachineDynamics::debugString() const
{
	return RotatingMachineDynamics::debugName;
}

void RotatingMachineDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:RotatingMachineDynamics"), &RotatingMachineDynamics_factory));
}

void RotatingMachineDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachineDynamics.damping"), &assign_RotatingMachineDynamics_damping));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachineDynamics.inertia"), &assign_RotatingMachineDynamics_inertia));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachineDynamics.saturationFactor"), &assign_RotatingMachineDynamics_saturationFactor));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachineDynamics.saturationFactor120"), &assign_RotatingMachineDynamics_saturationFactor120));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachineDynamics.statorLeakageReactance"), &assign_RotatingMachineDynamics_statorLeakageReactance));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachineDynamics.statorResistance"), &assign_RotatingMachineDynamics_statorResistance));
}

void RotatingMachineDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void RotatingMachineDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:RotatingMachineDynamics.damping", &get_RotatingMachineDynamics_damping);
	get_map.emplace("cim:RotatingMachineDynamics.inertia", &get_RotatingMachineDynamics_inertia);
	get_map.emplace("cim:RotatingMachineDynamics.saturationFactor", &get_RotatingMachineDynamics_saturationFactor);
	get_map.emplace("cim:RotatingMachineDynamics.saturationFactor120", &get_RotatingMachineDynamics_saturationFactor120);
	get_map.emplace("cim:RotatingMachineDynamics.statorLeakageReactance", &get_RotatingMachineDynamics_statorLeakageReactance);
	get_map.emplace("cim:RotatingMachineDynamics.statorResistance", &get_RotatingMachineDynamics_statorResistance);
}

void RotatingMachineDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
}

void RotatingMachineDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner RotatingMachineDynamics::declare()
{
	return BaseClassDefiner(RotatingMachineDynamics::addConstructToMap, RotatingMachineDynamics::addPrimitiveAssignFnsToMap, RotatingMachineDynamics::addClassAssignFnsToMap, RotatingMachineDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* RotatingMachineDynamics_factory()
	{
		return new RotatingMachineDynamics;
	}
}
