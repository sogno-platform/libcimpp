/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcSCRX.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

ExcSCRX::ExcSCRX() {};
ExcSCRX::~ExcSCRX() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcSCRX.cswitch", { CGMESProfile::DY, } },
	{ "cim:ExcSCRX.emax", { CGMESProfile::DY, } },
	{ "cim:ExcSCRX.emin", { CGMESProfile::DY, } },
	{ "cim:ExcSCRX.k", { CGMESProfile::DY, } },
	{ "cim:ExcSCRX.rcrfd", { CGMESProfile::DY, } },
	{ "cim:ExcSCRX.tatb", { CGMESProfile::DY, } },
	{ "cim:ExcSCRX.tb", { CGMESProfile::DY, } },
	{ "cim:ExcSCRX.te", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcSCRX::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcSCRX::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcSCRX_cswitch(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1))
	{
		buffer >> element->cswitch;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSCRX_emax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1))
	{
		buffer >> element->emax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSCRX_emin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1))
	{
		buffer >> element->emin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSCRX_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1))
	{
		buffer >> element->k;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSCRX_rcrfd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1))
	{
		buffer >> element->rcrfd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSCRX_tatb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1))
	{
		buffer >> element->tatb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSCRX_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSCRX_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSCRX* element = dynamic_cast<ExcSCRX*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcSCRX_cswitch(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1))
	{
		buffer << element->cswitch;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSCRX_emax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1))
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

bool get_ExcSCRX_emin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1))
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

bool get_ExcSCRX_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1))
	{
		buffer << element->k;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSCRX_rcrfd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1))
	{
		buffer << element->rcrfd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSCRX_tatb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1))
	{
		buffer << element->tatb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSCRX_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1))
	{
		buffer << element->tb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSCRX_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSCRX* element = dynamic_cast<const ExcSCRX*>(BaseClass_ptr1))
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



const char ExcSCRX::debugName[] = "ExcSCRX";
const char* ExcSCRX::debugString() const
{
	return ExcSCRX::debugName;
}

void ExcSCRX::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcSCRX"), &ExcSCRX_factory));
}

void ExcSCRX::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.cswitch"), &assign_ExcSCRX_cswitch));
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.emax"), &assign_ExcSCRX_emax));
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.emin"), &assign_ExcSCRX_emin));
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.k"), &assign_ExcSCRX_k));
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.rcrfd"), &assign_ExcSCRX_rcrfd));
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.tatb"), &assign_ExcSCRX_tatb));
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.tb"), &assign_ExcSCRX_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcSCRX.te"), &assign_ExcSCRX_te));
}

void ExcSCRX::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcSCRX::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcSCRX.cswitch", &get_ExcSCRX_cswitch);
	get_map.emplace("cim:ExcSCRX.emax", &get_ExcSCRX_emax);
	get_map.emplace("cim:ExcSCRX.emin", &get_ExcSCRX_emin);
	get_map.emplace("cim:ExcSCRX.k", &get_ExcSCRX_k);
	get_map.emplace("cim:ExcSCRX.rcrfd", &get_ExcSCRX_rcrfd);
	get_map.emplace("cim:ExcSCRX.tatb", &get_ExcSCRX_tatb);
	get_map.emplace("cim:ExcSCRX.tb", &get_ExcSCRX_tb);
	get_map.emplace("cim:ExcSCRX.te", &get_ExcSCRX_te);
}

void ExcSCRX::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcSCRX::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcSCRX::declare()
{
	return BaseClassDefiner(ExcSCRX::addConstructToMap, ExcSCRX::addPrimitiveAssignFnsToMap, ExcSCRX::addClassAssignFnsToMap, ExcSCRX::debugName);
}

namespace CIMPP
{
	BaseClass* ExcSCRX_factory()
	{
		return new ExcSCRX;
	}
}
