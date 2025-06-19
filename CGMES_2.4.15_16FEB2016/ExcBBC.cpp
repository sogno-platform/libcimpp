/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcBBC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcBBC::ExcBBC() {}
ExcBBC::~ExcBBC() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcBBC.efdmax", { CGMESProfile::DY, } },
	{ "cim:ExcBBC.efdmin", { CGMESProfile::DY, } },
	{ "cim:ExcBBC.k", { CGMESProfile::DY, } },
	{ "cim:ExcBBC.switch", { CGMESProfile::DY, } },
	{ "cim:ExcBBC.t1", { CGMESProfile::DY, } },
	{ "cim:ExcBBC.t2", { CGMESProfile::DY, } },
	{ "cim:ExcBBC.t3", { CGMESProfile::DY, } },
	{ "cim:ExcBBC.t4", { CGMESProfile::DY, } },
	{ "cim:ExcBBC.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcBBC.vrmin", { CGMESProfile::DY, } },
	{ "cim:ExcBBC.xe", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcBBC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcBBC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcBBC_efdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_efdmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_switch(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->_switch;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_xe(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xe;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcBBC_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_efdmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcBBC_switch(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->_switch;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_xe(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xe;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcBBC::debugName[] = "ExcBBC";
const char* ExcBBC::debugString() const
{
	return ExcBBC::debugName;
}

void ExcBBC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcBBC", &ExcBBC_factory);
}

void ExcBBC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcBBC.efdmax", &assign_ExcBBC_efdmax);
	assign_map.emplace("cim:ExcBBC.efdmin", &assign_ExcBBC_efdmin);
	assign_map.emplace("cim:ExcBBC.k", &assign_ExcBBC_k);
	assign_map.emplace("cim:ExcBBC.switch", &assign_ExcBBC_switch);
	assign_map.emplace("cim:ExcBBC.t1", &assign_ExcBBC_t1);
	assign_map.emplace("cim:ExcBBC.t2", &assign_ExcBBC_t2);
	assign_map.emplace("cim:ExcBBC.t3", &assign_ExcBBC_t3);
	assign_map.emplace("cim:ExcBBC.t4", &assign_ExcBBC_t4);
	assign_map.emplace("cim:ExcBBC.vrmax", &assign_ExcBBC_vrmax);
	assign_map.emplace("cim:ExcBBC.vrmin", &assign_ExcBBC_vrmin);
	assign_map.emplace("cim:ExcBBC.xe", &assign_ExcBBC_xe);
}

void ExcBBC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcBBC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcBBC.efdmax", &get_ExcBBC_efdmax);
	get_map.emplace("cim:ExcBBC.efdmin", &get_ExcBBC_efdmin);
	get_map.emplace("cim:ExcBBC.k", &get_ExcBBC_k);
	get_map.emplace("cim:ExcBBC.switch", &get_ExcBBC_switch);
	get_map.emplace("cim:ExcBBC.t1", &get_ExcBBC_t1);
	get_map.emplace("cim:ExcBBC.t2", &get_ExcBBC_t2);
	get_map.emplace("cim:ExcBBC.t3", &get_ExcBBC_t3);
	get_map.emplace("cim:ExcBBC.t4", &get_ExcBBC_t4);
	get_map.emplace("cim:ExcBBC.vrmax", &get_ExcBBC_vrmax);
	get_map.emplace("cim:ExcBBC.vrmin", &get_ExcBBC_vrmin);
	get_map.emplace("cim:ExcBBC.xe", &get_ExcBBC_xe);
}

void ExcBBC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcBBC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcBBC::declare()
{
	return BaseClassDefiner(ExcBBC::addConstructToMap, ExcBBC::addPrimitiveAssignFnsToMap, ExcBBC::addClassAssignFnsToMap, ExcBBC::debugName);
}

namespace CIMPP
{
	BaseClass* ExcBBC_factory()
	{
		return new ExcBBC;
	}
}
