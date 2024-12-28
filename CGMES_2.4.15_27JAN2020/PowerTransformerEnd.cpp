/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerTransformerEnd.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PowerTransformer.hpp"
#include "Susceptance.hpp"
#include "Susceptance.hpp"
#include "WindingConnection.hpp"
#include "Conductance.hpp"
#include "Conductance.hpp"
#include "Integer.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "ApparentPower.hpp"
#include "Voltage.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

PowerTransformerEnd::PowerTransformerEnd() : PowerTransformer(nullptr) {};
PowerTransformerEnd::~PowerTransformerEnd() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PowerTransformerEnd.PowerTransformer", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformerEnd.b", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformerEnd.b0", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformerEnd.connectionKind", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformerEnd.g", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformerEnd.g0", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformerEnd.phaseAngleClock", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformerEnd.r", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformerEnd.r0", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformerEnd.ratedS", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformerEnd.ratedU", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformerEnd.x", { CGMESProfile::EQ, } },
	{ "cim:PowerTransformerEnd.x0", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
PowerTransformerEnd::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PowerTransformerEnd::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TransformerEnd::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_PowerTransformerEnd_b(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->b;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformerEnd_b0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->b0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformerEnd_connectionKind(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->connectionKind;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformerEnd_g(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->g;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformerEnd_g0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->g0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformerEnd_phaseAngleClock(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->phaseAngleClock;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformerEnd_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformerEnd_r0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->r0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformerEnd_ratedS(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->ratedS;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformerEnd_ratedU(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->ratedU;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformerEnd_x(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->x;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PowerTransformerEnd_x0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer >> element->x0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_PowerTransformer_PowerTransformerEnd(BaseClass*, BaseClass*);
bool assign_PowerTransformerEnd_PowerTransformer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1);
	PowerTransformer* element2 = dynamic_cast<PowerTransformer*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PowerTransformer != element2)
		{
			element->PowerTransformer = element2;
			return assign_PowerTransformer_PowerTransformerEnd(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_PowerTransformerEnd_b(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformerEnd* element = dynamic_cast<const PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->b;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformerEnd_b0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformerEnd* element = dynamic_cast<const PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->b0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformerEnd_g(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformerEnd* element = dynamic_cast<const PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->g;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformerEnd_g0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformerEnd* element = dynamic_cast<const PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->g0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformerEnd_phaseAngleClock(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformerEnd* element = dynamic_cast<const PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->phaseAngleClock;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformerEnd_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformerEnd* element = dynamic_cast<const PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->r;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformerEnd_r0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformerEnd* element = dynamic_cast<const PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->r0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformerEnd_ratedS(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformerEnd* element = dynamic_cast<const PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->ratedS;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformerEnd_ratedU(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformerEnd* element = dynamic_cast<const PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->ratedU;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformerEnd_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformerEnd* element = dynamic_cast<const PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->x;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerTransformerEnd_x0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformerEnd* element = dynamic_cast<const PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->x0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_PowerTransformerEnd_PowerTransformer(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const PowerTransformerEnd* element = dynamic_cast<const PowerTransformerEnd*>(BaseClass_ptr1))
	{
		if (element->PowerTransformer != 0)
		{
			BaseClass_list.push_back(element->PowerTransformer);
			return true;
		}
	}
	return false;
}


bool get_PowerTransformerEnd_connectionKind(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PowerTransformerEnd* element = dynamic_cast<const PowerTransformerEnd*>(BaseClass_ptr1))
	{
		buffer << element->connectionKind;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PowerTransformerEnd::debugName[] = "PowerTransformerEnd";
const char* PowerTransformerEnd::debugString() const
{
	return PowerTransformerEnd::debugName;
}

void PowerTransformerEnd::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd"), &PowerTransformerEnd_factory));
}

void PowerTransformerEnd::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.b"), &assign_PowerTransformerEnd_b));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.b0"), &assign_PowerTransformerEnd_b0));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.connectionKind"), &assign_PowerTransformerEnd_connectionKind));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.g"), &assign_PowerTransformerEnd_g));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.g0"), &assign_PowerTransformerEnd_g0));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.phaseAngleClock"), &assign_PowerTransformerEnd_phaseAngleClock));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.r"), &assign_PowerTransformerEnd_r));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.r0"), &assign_PowerTransformerEnd_r0));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.ratedS"), &assign_PowerTransformerEnd_ratedS));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.ratedU"), &assign_PowerTransformerEnd_ratedU));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.x"), &assign_PowerTransformerEnd_x));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.x0"), &assign_PowerTransformerEnd_x0));
}

void PowerTransformerEnd::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.PowerTransformer"), &assign_PowerTransformerEnd_PowerTransformer));
}

void PowerTransformerEnd::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TransformerEnd::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PowerTransformerEnd.b", &get_PowerTransformerEnd_b);
	get_map.emplace("cim:PowerTransformerEnd.b0", &get_PowerTransformerEnd_b0);
	get_map.emplace("cim:PowerTransformerEnd.g", &get_PowerTransformerEnd_g);
	get_map.emplace("cim:PowerTransformerEnd.g0", &get_PowerTransformerEnd_g0);
	get_map.emplace("cim:PowerTransformerEnd.phaseAngleClock", &get_PowerTransformerEnd_phaseAngleClock);
	get_map.emplace("cim:PowerTransformerEnd.r", &get_PowerTransformerEnd_r);
	get_map.emplace("cim:PowerTransformerEnd.r0", &get_PowerTransformerEnd_r0);
	get_map.emplace("cim:PowerTransformerEnd.ratedS", &get_PowerTransformerEnd_ratedS);
	get_map.emplace("cim:PowerTransformerEnd.ratedU", &get_PowerTransformerEnd_ratedU);
	get_map.emplace("cim:PowerTransformerEnd.x", &get_PowerTransformerEnd_x);
	get_map.emplace("cim:PowerTransformerEnd.x0", &get_PowerTransformerEnd_x0);
}

void PowerTransformerEnd::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TransformerEnd::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:PowerTransformerEnd.PowerTransformer", &get_PowerTransformerEnd_PowerTransformer);
}

void PowerTransformerEnd::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TransformerEnd::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:PowerTransformerEnd.connectionKind", &get_PowerTransformerEnd_connectionKind);
}

const BaseClassDefiner PowerTransformerEnd::declare()
{
	return BaseClassDefiner(PowerTransformerEnd::addConstructToMap, PowerTransformerEnd::addPrimitiveAssignFnsToMap, PowerTransformerEnd::addClassAssignFnsToMap, PowerTransformerEnd::debugName);
}

namespace CIMPP
{
	BaseClass* PowerTransformerEnd_factory()
	{
		return new PowerTransformerEnd;
	}
}
