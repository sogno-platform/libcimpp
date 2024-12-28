/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssIEEE3B.hpp"

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
#include "PU.hpp"
#include "InputSignalKind.hpp"
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

PssIEEE3B::PssIEEE3B() {};
PssIEEE3B::~PssIEEE3B() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PssIEEE3B.a1", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.a2", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.a3", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.a4", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.a5", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.a6", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.a7", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.a8", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.inputSignal1Type", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.inputSignal2Type", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.ks1", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.ks2", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.t1", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.t2", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.tw1", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.tw2", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.tw3", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.vstmax", { CGMESProfile::DY, } },
	{ "cim:PssIEEE3B.vstmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PssIEEE3B::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PssIEEE3B::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemStabilizerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_PssIEEE3B_a1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->a1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_a2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->a2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_a3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->a3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_a4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->a4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_a5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->a5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_a6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->a6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_a7(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->a7;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_a8(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->a8;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_inputSignal1Type(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->inputSignal1Type;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_inputSignal2Type(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->inputSignal2Type;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_ks1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->ks1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_ks2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->ks2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_tw1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->tw1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_tw2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->tw2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_tw3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->tw3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_vstmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->vstmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE3B_vstmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer >> element->vstmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_PssIEEE3B_a1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->a1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_a2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->a2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_a3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->a3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_a4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->a4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_a5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->a5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_a6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->a6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_a7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->a7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_a8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->a8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_ks1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->ks1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_ks2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->ks2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
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

bool get_PssIEEE3B_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
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

bool get_PssIEEE3B_tw1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->tw1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_tw2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->tw2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_tw3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->tw3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_vstmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->vstmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_vstmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
	{
		buffer << element->vstmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



bool get_PssIEEE3B_inputSignal1Type(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
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

bool get_PssIEEE3B_inputSignal2Type(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1))
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

const char PssIEEE3B::debugName[] = "PssIEEE3B";
const char* PssIEEE3B::debugString() const
{
	return PssIEEE3B::debugName;
}

void PssIEEE3B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PssIEEE3B"), &PssIEEE3B_factory));
}

void PssIEEE3B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.a1"), &assign_PssIEEE3B_a1));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.a2"), &assign_PssIEEE3B_a2));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.a3"), &assign_PssIEEE3B_a3));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.a4"), &assign_PssIEEE3B_a4));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.a5"), &assign_PssIEEE3B_a5));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.a6"), &assign_PssIEEE3B_a6));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.a7"), &assign_PssIEEE3B_a7));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.a8"), &assign_PssIEEE3B_a8));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.inputSignal1Type"), &assign_PssIEEE3B_inputSignal1Type));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.inputSignal2Type"), &assign_PssIEEE3B_inputSignal2Type));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.ks1"), &assign_PssIEEE3B_ks1));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.ks2"), &assign_PssIEEE3B_ks2));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.t1"), &assign_PssIEEE3B_t1));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.t2"), &assign_PssIEEE3B_t2));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.tw1"), &assign_PssIEEE3B_tw1));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.tw2"), &assign_PssIEEE3B_tw2));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.tw3"), &assign_PssIEEE3B_tw3));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.vstmax"), &assign_PssIEEE3B_vstmax));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE3B.vstmin"), &assign_PssIEEE3B_vstmin));
}

void PssIEEE3B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssIEEE3B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PssIEEE3B.a1", &get_PssIEEE3B_a1);
	get_map.emplace("cim:PssIEEE3B.a2", &get_PssIEEE3B_a2);
	get_map.emplace("cim:PssIEEE3B.a3", &get_PssIEEE3B_a3);
	get_map.emplace("cim:PssIEEE3B.a4", &get_PssIEEE3B_a4);
	get_map.emplace("cim:PssIEEE3B.a5", &get_PssIEEE3B_a5);
	get_map.emplace("cim:PssIEEE3B.a6", &get_PssIEEE3B_a6);
	get_map.emplace("cim:PssIEEE3B.a7", &get_PssIEEE3B_a7);
	get_map.emplace("cim:PssIEEE3B.a8", &get_PssIEEE3B_a8);
	get_map.emplace("cim:PssIEEE3B.ks1", &get_PssIEEE3B_ks1);
	get_map.emplace("cim:PssIEEE3B.ks2", &get_PssIEEE3B_ks2);
	get_map.emplace("cim:PssIEEE3B.t1", &get_PssIEEE3B_t1);
	get_map.emplace("cim:PssIEEE3B.t2", &get_PssIEEE3B_t2);
	get_map.emplace("cim:PssIEEE3B.tw1", &get_PssIEEE3B_tw1);
	get_map.emplace("cim:PssIEEE3B.tw2", &get_PssIEEE3B_tw2);
	get_map.emplace("cim:PssIEEE3B.tw3", &get_PssIEEE3B_tw3);
	get_map.emplace("cim:PssIEEE3B.vstmax", &get_PssIEEE3B_vstmax);
	get_map.emplace("cim:PssIEEE3B.vstmin", &get_PssIEEE3B_vstmin);
}

void PssIEEE3B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssIEEE3B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:PssIEEE3B.inputSignal1Type", &get_PssIEEE3B_inputSignal1Type);
	get_map.emplace("cim:PssIEEE3B.inputSignal2Type", &get_PssIEEE3B_inputSignal2Type);
}

const BaseClassDefiner PssIEEE3B::declare()
{
	return BaseClassDefiner(PssIEEE3B::addConstructToMap, PssIEEE3B::addPrimitiveAssignFnsToMap, PssIEEE3B::addClassAssignFnsToMap, PssIEEE3B::debugName);
}

namespace CIMPP
{
	BaseClass* PssIEEE3B_factory()
	{
		return new PssIEEE3B;
	}
}
