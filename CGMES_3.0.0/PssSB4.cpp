/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssSB4.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

PssSB4::PssSB4() {}
PssSB4::~PssSB4() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PssSB4.kx", { CGMESProfile::DY, } },
	{ "cim:PssSB4.ta", { CGMESProfile::DY, } },
	{ "cim:PssSB4.tb", { CGMESProfile::DY, } },
	{ "cim:PssSB4.tc", { CGMESProfile::DY, } },
	{ "cim:PssSB4.td", { CGMESProfile::DY, } },
	{ "cim:PssSB4.te", { CGMESProfile::DY, } },
	{ "cim:PssSB4.tt", { CGMESProfile::DY, } },
	{ "cim:PssSB4.tx1", { CGMESProfile::DY, } },
	{ "cim:PssSB4.tx2", { CGMESProfile::DY, } },
	{ "cim:PssSB4.vsmax", { CGMESProfile::DY, } },
	{ "cim:PssSB4.vsmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PssSB4::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PssSB4::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemStabilizerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_PssSB4_kx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSB4_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ta;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSB4_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSB4_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSB4_td(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->td;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSB4_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->te;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSB4_tt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSB4_tx1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tx1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSB4_tx2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tx2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSB4_vsmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vsmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSB4_vsmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vsmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PssSB4_kx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSB4* element = dynamic_cast<const PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSB4_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSB4* element = dynamic_cast<const PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSB4_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSB4* element = dynamic_cast<const PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_PssSB4_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSB4* element = dynamic_cast<const PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSB4_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSB4* element = dynamic_cast<const PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->td;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSB4_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSB4* element = dynamic_cast<const PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_PssSB4_tt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSB4* element = dynamic_cast<const PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSB4_tx1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSB4* element = dynamic_cast<const PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tx1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSB4_tx2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSB4* element = dynamic_cast<const PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tx2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSB4_vsmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSB4* element = dynamic_cast<const PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vsmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSB4_vsmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSB4* element = dynamic_cast<const PssSB4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vsmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PssSB4::debugName[] = "PssSB4";
const char* PssSB4::debugString() const
{
	return PssSB4::debugName;
}

void PssSB4::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PssSB4", &PssSB4_factory);
}

void PssSB4::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:PssSB4.kx", &assign_PssSB4_kx);
	assign_map.emplace("cim:PssSB4.ta", &assign_PssSB4_ta);
	assign_map.emplace("cim:PssSB4.tb", &assign_PssSB4_tb);
	assign_map.emplace("cim:PssSB4.tc", &assign_PssSB4_tc);
	assign_map.emplace("cim:PssSB4.td", &assign_PssSB4_td);
	assign_map.emplace("cim:PssSB4.te", &assign_PssSB4_te);
	assign_map.emplace("cim:PssSB4.tt", &assign_PssSB4_tt);
	assign_map.emplace("cim:PssSB4.tx1", &assign_PssSB4_tx1);
	assign_map.emplace("cim:PssSB4.tx2", &assign_PssSB4_tx2);
	assign_map.emplace("cim:PssSB4.vsmax", &assign_PssSB4_vsmax);
	assign_map.emplace("cim:PssSB4.vsmin", &assign_PssSB4_vsmin);
}

void PssSB4::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssSB4::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PssSB4.kx", &get_PssSB4_kx);
	get_map.emplace("cim:PssSB4.ta", &get_PssSB4_ta);
	get_map.emplace("cim:PssSB4.tb", &get_PssSB4_tb);
	get_map.emplace("cim:PssSB4.tc", &get_PssSB4_tc);
	get_map.emplace("cim:PssSB4.td", &get_PssSB4_td);
	get_map.emplace("cim:PssSB4.te", &get_PssSB4_te);
	get_map.emplace("cim:PssSB4.tt", &get_PssSB4_tt);
	get_map.emplace("cim:PssSB4.tx1", &get_PssSB4_tx1);
	get_map.emplace("cim:PssSB4.tx2", &get_PssSB4_tx2);
	get_map.emplace("cim:PssSB4.vsmax", &get_PssSB4_vsmax);
	get_map.emplace("cim:PssSB4.vsmin", &get_PssSB4_vsmin);
}

void PssSB4::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssSB4::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PssSB4::declare()
{
	return BaseClassDefiner(PssSB4::addConstructToMap, PssSB4::addPrimitiveAssignFnsToMap, PssSB4::addClassAssignFnsToMap, PssSB4::debugName);
}

namespace CIMPP
{
	BaseClass* PssSB4_factory()
	{
		return new PssSB4;
	}
}
