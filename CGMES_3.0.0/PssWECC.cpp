/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssWECC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

PssWECC::PssWECC() {}
PssWECC::~PssWECC() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PssWECC.inputSignal1Type", { CGMESProfile::DY, } },
	{ "cim:PssWECC.inputSignal2Type", { CGMESProfile::DY, } },
	{ "cim:PssWECC.k1", { CGMESProfile::DY, } },
	{ "cim:PssWECC.k2", { CGMESProfile::DY, } },
	{ "cim:PssWECC.t1", { CGMESProfile::DY, } },
	{ "cim:PssWECC.t10", { CGMESProfile::DY, } },
	{ "cim:PssWECC.t2", { CGMESProfile::DY, } },
	{ "cim:PssWECC.t3", { CGMESProfile::DY, } },
	{ "cim:PssWECC.t4", { CGMESProfile::DY, } },
	{ "cim:PssWECC.t5", { CGMESProfile::DY, } },
	{ "cim:PssWECC.t6", { CGMESProfile::DY, } },
	{ "cim:PssWECC.t7", { CGMESProfile::DY, } },
	{ "cim:PssWECC.t8", { CGMESProfile::DY, } },
	{ "cim:PssWECC.t9", { CGMESProfile::DY, } },
	{ "cim:PssWECC.vcl", { CGMESProfile::DY, } },
	{ "cim:PssWECC.vcu", { CGMESProfile::DY, } },
	{ "cim:PssWECC.vsmax", { CGMESProfile::DY, } },
	{ "cim:PssWECC.vsmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PssWECC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PssWECC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemStabilizerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_PssWECC_inputSignal1Type(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_inputSignal2Type(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_vcl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_vcu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_vsmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_vsmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_inputSignal1Type(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_inputSignal2Type(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_vcl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_vcu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_vsmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_vsmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

const char PssWECC::debugName[] = "PssWECC";
const char* PssWECC::debugString() const
{
	return PssWECC::debugName;
}

void PssWECC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PssWECC", &PssWECC_factory);
}

void PssWECC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:PssWECC.inputSignal1Type", &assign_PssWECC_inputSignal1Type);
	assign_map.emplace("cim:PssWECC.inputSignal2Type", &assign_PssWECC_inputSignal2Type);
	assign_map.emplace("cim:PssWECC.k1", &assign_PssWECC_k1);
	assign_map.emplace("cim:PssWECC.k2", &assign_PssWECC_k2);
	assign_map.emplace("cim:PssWECC.t1", &assign_PssWECC_t1);
	assign_map.emplace("cim:PssWECC.t10", &assign_PssWECC_t10);
	assign_map.emplace("cim:PssWECC.t2", &assign_PssWECC_t2);
	assign_map.emplace("cim:PssWECC.t3", &assign_PssWECC_t3);
	assign_map.emplace("cim:PssWECC.t4", &assign_PssWECC_t4);
	assign_map.emplace("cim:PssWECC.t5", &assign_PssWECC_t5);
	assign_map.emplace("cim:PssWECC.t6", &assign_PssWECC_t6);
	assign_map.emplace("cim:PssWECC.t7", &assign_PssWECC_t7);
	assign_map.emplace("cim:PssWECC.t8", &assign_PssWECC_t8);
	assign_map.emplace("cim:PssWECC.t9", &assign_PssWECC_t9);
	assign_map.emplace("cim:PssWECC.vcl", &assign_PssWECC_vcl);
	assign_map.emplace("cim:PssWECC.vcu", &assign_PssWECC_vcu);
	assign_map.emplace("cim:PssWECC.vsmax", &assign_PssWECC_vsmax);
	assign_map.emplace("cim:PssWECC.vsmin", &assign_PssWECC_vsmin);
}

void PssWECC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssWECC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PssWECC.k1", &get_PssWECC_k1);
	get_map.emplace("cim:PssWECC.k2", &get_PssWECC_k2);
	get_map.emplace("cim:PssWECC.t1", &get_PssWECC_t1);
	get_map.emplace("cim:PssWECC.t10", &get_PssWECC_t10);
	get_map.emplace("cim:PssWECC.t2", &get_PssWECC_t2);
	get_map.emplace("cim:PssWECC.t3", &get_PssWECC_t3);
	get_map.emplace("cim:PssWECC.t4", &get_PssWECC_t4);
	get_map.emplace("cim:PssWECC.t5", &get_PssWECC_t5);
	get_map.emplace("cim:PssWECC.t6", &get_PssWECC_t6);
	get_map.emplace("cim:PssWECC.t7", &get_PssWECC_t7);
	get_map.emplace("cim:PssWECC.t8", &get_PssWECC_t8);
	get_map.emplace("cim:PssWECC.t9", &get_PssWECC_t9);
	get_map.emplace("cim:PssWECC.vcl", &get_PssWECC_vcl);
	get_map.emplace("cim:PssWECC.vcu", &get_PssWECC_vcu);
	get_map.emplace("cim:PssWECC.vsmax", &get_PssWECC_vsmax);
	get_map.emplace("cim:PssWECC.vsmin", &get_PssWECC_vsmin);
}

void PssWECC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssWECC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:PssWECC.inputSignal1Type", &get_PssWECC_inputSignal1Type);
	get_map.emplace("cim:PssWECC.inputSignal2Type", &get_PssWECC_inputSignal2Type);
}

const BaseClassDefiner PssWECC::declare()
{
	return BaseClassDefiner(PssWECC::addConstructToMap, PssWECC::addPrimitiveAssignFnsToMap, PssWECC::addClassAssignFnsToMap, PssWECC::debugName);
}

namespace CIMPP
{
	BaseClass* PssWECC_factory()
	{
		return new PssWECC;
	}
}
