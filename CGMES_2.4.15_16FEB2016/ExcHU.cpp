/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcHU.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

ExcHU::ExcHU() {};
ExcHU::~ExcHU() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcHU.ae", { CGMESProfile::DY, } },
	{ "cim:ExcHU.ai", { CGMESProfile::DY, } },
	{ "cim:ExcHU.atr", { CGMESProfile::DY, } },
	{ "cim:ExcHU.emax", { CGMESProfile::DY, } },
	{ "cim:ExcHU.emin", { CGMESProfile::DY, } },
	{ "cim:ExcHU.imax", { CGMESProfile::DY, } },
	{ "cim:ExcHU.imin", { CGMESProfile::DY, } },
	{ "cim:ExcHU.ke", { CGMESProfile::DY, } },
	{ "cim:ExcHU.ki", { CGMESProfile::DY, } },
	{ "cim:ExcHU.te", { CGMESProfile::DY, } },
	{ "cim:ExcHU.ti", { CGMESProfile::DY, } },
	{ "cim:ExcHU.tr", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcHU::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcHU::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcHU_ae(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->ae;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_ai(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->ai;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_atr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->atr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_emax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->emax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_emin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->emin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_imax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->imax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_imin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->imin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_ti(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->ti;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_tr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->tr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcHU_ae(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1))
	{
		buffer << element->ae;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_ai(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1))
	{
		buffer << element->ai;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_atr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1))
	{
		buffer << element->atr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_emax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1))
	{
		buffer << element->emax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_emin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1))
	{
		buffer << element->emin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_imax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1))
	{
		buffer << element->imax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_imin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1))
	{
		buffer << element->imin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1))
	{
		buffer << element->ke;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1))
	{
		buffer << element->ki;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1))
	{
		buffer << element->te;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_ti(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1))
	{
		buffer << element->ti;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcHU_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcHU* element = dynamic_cast<const ExcHU*>(BaseClass_ptr1))
	{
		buffer << element->tr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char ExcHU::debugName[] = "ExcHU";
const char* ExcHU::debugString() const
{
	return ExcHU::debugName;
}

void ExcHU::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcHU"), &ExcHU_factory));
}

void ExcHU::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.ae"), &assign_ExcHU_ae));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.ai"), &assign_ExcHU_ai));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.atr"), &assign_ExcHU_atr));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.emax"), &assign_ExcHU_emax));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.emin"), &assign_ExcHU_emin));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.imax"), &assign_ExcHU_imax));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.imin"), &assign_ExcHU_imin));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.ke"), &assign_ExcHU_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.ki"), &assign_ExcHU_ki));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.te"), &assign_ExcHU_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.ti"), &assign_ExcHU_ti));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.tr"), &assign_ExcHU_tr));
}

void ExcHU::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcHU::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcHU.ae", &get_ExcHU_ae);
	get_map.emplace("cim:ExcHU.ai", &get_ExcHU_ai);
	get_map.emplace("cim:ExcHU.atr", &get_ExcHU_atr);
	get_map.emplace("cim:ExcHU.emax", &get_ExcHU_emax);
	get_map.emplace("cim:ExcHU.emin", &get_ExcHU_emin);
	get_map.emplace("cim:ExcHU.imax", &get_ExcHU_imax);
	get_map.emplace("cim:ExcHU.imin", &get_ExcHU_imin);
	get_map.emplace("cim:ExcHU.ke", &get_ExcHU_ke);
	get_map.emplace("cim:ExcHU.ki", &get_ExcHU_ki);
	get_map.emplace("cim:ExcHU.te", &get_ExcHU_te);
	get_map.emplace("cim:ExcHU.ti", &get_ExcHU_ti);
	get_map.emplace("cim:ExcHU.tr", &get_ExcHU_tr);
}

void ExcHU::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcHU::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcHU::declare()
{
	return BaseClassDefiner(ExcHU::addConstructToMap, ExcHU::addPrimitiveAssignFnsToMap, ExcHU::addClassAssignFnsToMap, ExcHU::debugName);
}

namespace CIMPP
{
	BaseClass* ExcHU_factory()
	{
		return new ExcHU;
	}
}
