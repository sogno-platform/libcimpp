/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssPTIST1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

PssPTIST1::PssPTIST1() {}
PssPTIST1::~PssPTIST1() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PssPTIST1.dtc", { CGMESProfile::DY, } },
	{ "cim:PssPTIST1.dtf", { CGMESProfile::DY, } },
	{ "cim:PssPTIST1.dtp", { CGMESProfile::DY, } },
	{ "cim:PssPTIST1.k", { CGMESProfile::DY, } },
	{ "cim:PssPTIST1.m", { CGMESProfile::DY, } },
	{ "cim:PssPTIST1.t1", { CGMESProfile::DY, } },
	{ "cim:PssPTIST1.t2", { CGMESProfile::DY, } },
	{ "cim:PssPTIST1.t3", { CGMESProfile::DY, } },
	{ "cim:PssPTIST1.t4", { CGMESProfile::DY, } },
	{ "cim:PssPTIST1.tf", { CGMESProfile::DY, } },
	{ "cim:PssPTIST1.tp", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PssPTIST1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PssPTIST1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemStabilizerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_PssPTIST1_dtc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dtc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST1_dtf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dtf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST1_dtp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dtp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST1_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1);
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

bool assign_PssPTIST1_m(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->m;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST1_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1);
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

bool assign_PssPTIST1_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1);
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

bool assign_PssPTIST1_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1);
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

bool assign_PssPTIST1_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1);
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

bool assign_PssPTIST1_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST1_tp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PssPTIST1_dtc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST1* element = dynamic_cast<const PssPTIST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dtc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST1_dtf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST1* element = dynamic_cast<const PssPTIST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dtf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST1_dtp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST1* element = dynamic_cast<const PssPTIST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dtp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST1_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST1* element = dynamic_cast<const PssPTIST1*>(BaseClass_ptr1);
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

bool get_PssPTIST1_m(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST1* element = dynamic_cast<const PssPTIST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->m;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST1_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST1* element = dynamic_cast<const PssPTIST1*>(BaseClass_ptr1);
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

bool get_PssPTIST1_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST1* element = dynamic_cast<const PssPTIST1*>(BaseClass_ptr1);
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

bool get_PssPTIST1_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST1* element = dynamic_cast<const PssPTIST1*>(BaseClass_ptr1);
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

bool get_PssPTIST1_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST1* element = dynamic_cast<const PssPTIST1*>(BaseClass_ptr1);
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

bool get_PssPTIST1_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST1* element = dynamic_cast<const PssPTIST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST1_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST1* element = dynamic_cast<const PssPTIST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PssPTIST1::debugName[] = "PssPTIST1";
const char* PssPTIST1::debugString() const
{
	return PssPTIST1::debugName;
}

void PssPTIST1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PssPTIST1", &PssPTIST1_factory);
}

void PssPTIST1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:PssPTIST1.dtc", &assign_PssPTIST1_dtc);
	assign_map.emplace("cim:PssPTIST1.dtf", &assign_PssPTIST1_dtf);
	assign_map.emplace("cim:PssPTIST1.dtp", &assign_PssPTIST1_dtp);
	assign_map.emplace("cim:PssPTIST1.k", &assign_PssPTIST1_k);
	assign_map.emplace("cim:PssPTIST1.m", &assign_PssPTIST1_m);
	assign_map.emplace("cim:PssPTIST1.t1", &assign_PssPTIST1_t1);
	assign_map.emplace("cim:PssPTIST1.t2", &assign_PssPTIST1_t2);
	assign_map.emplace("cim:PssPTIST1.t3", &assign_PssPTIST1_t3);
	assign_map.emplace("cim:PssPTIST1.t4", &assign_PssPTIST1_t4);
	assign_map.emplace("cim:PssPTIST1.tf", &assign_PssPTIST1_tf);
	assign_map.emplace("cim:PssPTIST1.tp", &assign_PssPTIST1_tp);
}

void PssPTIST1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssPTIST1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PssPTIST1.dtc", &get_PssPTIST1_dtc);
	get_map.emplace("cim:PssPTIST1.dtf", &get_PssPTIST1_dtf);
	get_map.emplace("cim:PssPTIST1.dtp", &get_PssPTIST1_dtp);
	get_map.emplace("cim:PssPTIST1.k", &get_PssPTIST1_k);
	get_map.emplace("cim:PssPTIST1.m", &get_PssPTIST1_m);
	get_map.emplace("cim:PssPTIST1.t1", &get_PssPTIST1_t1);
	get_map.emplace("cim:PssPTIST1.t2", &get_PssPTIST1_t2);
	get_map.emplace("cim:PssPTIST1.t3", &get_PssPTIST1_t3);
	get_map.emplace("cim:PssPTIST1.t4", &get_PssPTIST1_t4);
	get_map.emplace("cim:PssPTIST1.tf", &get_PssPTIST1_tf);
	get_map.emplace("cim:PssPTIST1.tp", &get_PssPTIST1_tp);
}

void PssPTIST1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssPTIST1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PssPTIST1::declare()
{
	return BaseClassDefiner(PssPTIST1::addConstructToMap, PssPTIST1::addPrimitiveAssignFnsToMap, PssPTIST1::addClassAssignFnsToMap, PssPTIST1::debugName);
}

namespace CIMPP
{
	BaseClass* PssPTIST1_factory()
	{
		return new PssPTIST1;
	}
}
