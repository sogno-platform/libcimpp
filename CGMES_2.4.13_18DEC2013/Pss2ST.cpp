/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Pss2ST.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

Pss2ST::Pss2ST() {}
Pss2ST::~Pss2ST() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Pss2ST.inputSignal1Type", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.inputSignal2Type", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.k1", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.k2", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.lsmax", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.lsmin", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.t1", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.t10", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.t2", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.t3", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.t4", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.t5", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.t6", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.t7", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.t8", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.t9", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.vcl", { CGMESProfile::DY, } },
	{ "cim:Pss2ST.vcu", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
Pss2ST::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Pss2ST::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemStabilizerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_Pss2ST_inputSignal1Type(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inputSignal1Type;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2ST_inputSignal2Type(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inputSignal2Type;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2ST_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2ST_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2ST_lsmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lsmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2ST_lsmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lsmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2ST_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
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

bool assign_Pss2ST_t10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t10;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2ST_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
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

bool assign_Pss2ST_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
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

bool assign_Pss2ST_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
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

bool assign_Pss2ST_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2ST_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2ST_t7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2ST_t8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2ST_t9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t9;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2ST_vcl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vcl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2ST_vcu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vcu;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_Pss2ST_inputSignal1Type(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inputSignal1Type;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2ST_inputSignal2Type(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inputSignal2Type;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2ST_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2ST_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2ST_lsmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lsmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2ST_lsmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lsmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2ST_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
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

bool get_Pss2ST_t10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t10;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2ST_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
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

bool get_Pss2ST_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
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

bool get_Pss2ST_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
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

bool get_Pss2ST_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2ST_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2ST_t7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2ST_t8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2ST_t9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t9;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2ST_vcl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vcl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2ST_vcu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2ST* element = dynamic_cast<const Pss2ST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vcu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Pss2ST::debugName[] = "Pss2ST";
const char* Pss2ST::debugString() const
{
	return Pss2ST::debugName;
}

void Pss2ST::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Pss2ST", &Pss2ST_factory);
}

void Pss2ST::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:Pss2ST.inputSignal1Type", &assign_Pss2ST_inputSignal1Type);
	assign_map.emplace("cim:Pss2ST.inputSignal2Type", &assign_Pss2ST_inputSignal2Type);
	assign_map.emplace("cim:Pss2ST.k1", &assign_Pss2ST_k1);
	assign_map.emplace("cim:Pss2ST.k2", &assign_Pss2ST_k2);
	assign_map.emplace("cim:Pss2ST.lsmax", &assign_Pss2ST_lsmax);
	assign_map.emplace("cim:Pss2ST.lsmin", &assign_Pss2ST_lsmin);
	assign_map.emplace("cim:Pss2ST.t1", &assign_Pss2ST_t1);
	assign_map.emplace("cim:Pss2ST.t10", &assign_Pss2ST_t10);
	assign_map.emplace("cim:Pss2ST.t2", &assign_Pss2ST_t2);
	assign_map.emplace("cim:Pss2ST.t3", &assign_Pss2ST_t3);
	assign_map.emplace("cim:Pss2ST.t4", &assign_Pss2ST_t4);
	assign_map.emplace("cim:Pss2ST.t5", &assign_Pss2ST_t5);
	assign_map.emplace("cim:Pss2ST.t6", &assign_Pss2ST_t6);
	assign_map.emplace("cim:Pss2ST.t7", &assign_Pss2ST_t7);
	assign_map.emplace("cim:Pss2ST.t8", &assign_Pss2ST_t8);
	assign_map.emplace("cim:Pss2ST.t9", &assign_Pss2ST_t9);
	assign_map.emplace("cim:Pss2ST.vcl", &assign_Pss2ST_vcl);
	assign_map.emplace("cim:Pss2ST.vcu", &assign_Pss2ST_vcu);
}

void Pss2ST::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Pss2ST::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:Pss2ST.k1", &get_Pss2ST_k1);
	get_map.emplace("cim:Pss2ST.k2", &get_Pss2ST_k2);
	get_map.emplace("cim:Pss2ST.lsmax", &get_Pss2ST_lsmax);
	get_map.emplace("cim:Pss2ST.lsmin", &get_Pss2ST_lsmin);
	get_map.emplace("cim:Pss2ST.t1", &get_Pss2ST_t1);
	get_map.emplace("cim:Pss2ST.t10", &get_Pss2ST_t10);
	get_map.emplace("cim:Pss2ST.t2", &get_Pss2ST_t2);
	get_map.emplace("cim:Pss2ST.t3", &get_Pss2ST_t3);
	get_map.emplace("cim:Pss2ST.t4", &get_Pss2ST_t4);
	get_map.emplace("cim:Pss2ST.t5", &get_Pss2ST_t5);
	get_map.emplace("cim:Pss2ST.t6", &get_Pss2ST_t6);
	get_map.emplace("cim:Pss2ST.t7", &get_Pss2ST_t7);
	get_map.emplace("cim:Pss2ST.t8", &get_Pss2ST_t8);
	get_map.emplace("cim:Pss2ST.t9", &get_Pss2ST_t9);
	get_map.emplace("cim:Pss2ST.vcl", &get_Pss2ST_vcl);
	get_map.emplace("cim:Pss2ST.vcu", &get_Pss2ST_vcu);
}

void Pss2ST::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void Pss2ST::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:Pss2ST.inputSignal1Type", &get_Pss2ST_inputSignal1Type);
	get_map.emplace("cim:Pss2ST.inputSignal2Type", &get_Pss2ST_inputSignal2Type);
}

const BaseClassDefiner Pss2ST::declare()
{
	return BaseClassDefiner(Pss2ST::addConstructToMap, Pss2ST::addPrimitiveAssignFnsToMap, Pss2ST::addClassAssignFnsToMap, Pss2ST::debugName);
}

namespace CIMPP
{
	BaseClass* Pss2ST_factory()
	{
		return new Pss2ST;
	}
}
