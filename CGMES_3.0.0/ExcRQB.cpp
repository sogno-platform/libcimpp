/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcRQB.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"
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

ExcRQB::ExcRQB() {};
ExcRQB::~ExcRQB() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcRQB.ki0", { CGMESProfile::DY, } },
	{ "cim:ExcRQB.ki1", { CGMESProfile::DY, } },
	{ "cim:ExcRQB.klir", { CGMESProfile::DY, } },
	{ "cim:ExcRQB.klus", { CGMESProfile::DY, } },
	{ "cim:ExcRQB.lsat", { CGMESProfile::DY, } },
	{ "cim:ExcRQB.lus", { CGMESProfile::DY, } },
	{ "cim:ExcRQB.mesu", { CGMESProfile::DY, } },
	{ "cim:ExcRQB.t4m", { CGMESProfile::DY, } },
	{ "cim:ExcRQB.tc", { CGMESProfile::DY, } },
	{ "cim:ExcRQB.te", { CGMESProfile::DY, } },
	{ "cim:ExcRQB.tf", { CGMESProfile::DY, } },
	{ "cim:ExcRQB.ucmax", { CGMESProfile::DY, } },
	{ "cim:ExcRQB.ucmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcRQB::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcRQB::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcRQB_ki0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->ki0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_ki1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->ki1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_klir(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->klir;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_klus(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->klus;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_lsat(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->lsat;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_lus(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->lus;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_mesu(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->mesu;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_t4m(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->t4m;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_ucmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->ucmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_ucmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->ucmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcRQB_ki0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1))
	{
		buffer << element->ki0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_ki1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1))
	{
		buffer << element->ki1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_klir(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1))
	{
		buffer << element->klir;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_klus(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1))
	{
		buffer << element->klus;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_lsat(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1))
	{
		buffer << element->lsat;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_lus(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1))
	{
		buffer << element->lus;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_mesu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1))
	{
		buffer << element->mesu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_t4m(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1))
	{
		buffer << element->t4m;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1))
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

bool get_ExcRQB_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1))
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

bool get_ExcRQB_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1))
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

bool get_ExcRQB_ucmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1))
	{
		buffer << element->ucmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_ucmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1))
	{
		buffer << element->ucmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char ExcRQB::debugName[] = "ExcRQB";
const char* ExcRQB::debugString() const
{
	return ExcRQB::debugName;
}

void ExcRQB::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcRQB"), &ExcRQB_factory));
}

void ExcRQB::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.ki0"), &assign_ExcRQB_ki0));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.ki1"), &assign_ExcRQB_ki1));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.klir"), &assign_ExcRQB_klir));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.klus"), &assign_ExcRQB_klus));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.lsat"), &assign_ExcRQB_lsat));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.lus"), &assign_ExcRQB_lus));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.mesu"), &assign_ExcRQB_mesu));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.t4m"), &assign_ExcRQB_t4m));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.tc"), &assign_ExcRQB_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.te"), &assign_ExcRQB_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.tf"), &assign_ExcRQB_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.ucmax"), &assign_ExcRQB_ucmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.ucmin"), &assign_ExcRQB_ucmin));
}

void ExcRQB::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcRQB::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcRQB.ki0", &get_ExcRQB_ki0);
	get_map.emplace("cim:ExcRQB.ki1", &get_ExcRQB_ki1);
	get_map.emplace("cim:ExcRQB.klir", &get_ExcRQB_klir);
	get_map.emplace("cim:ExcRQB.klus", &get_ExcRQB_klus);
	get_map.emplace("cim:ExcRQB.lsat", &get_ExcRQB_lsat);
	get_map.emplace("cim:ExcRQB.lus", &get_ExcRQB_lus);
	get_map.emplace("cim:ExcRQB.mesu", &get_ExcRQB_mesu);
	get_map.emplace("cim:ExcRQB.t4m", &get_ExcRQB_t4m);
	get_map.emplace("cim:ExcRQB.tc", &get_ExcRQB_tc);
	get_map.emplace("cim:ExcRQB.te", &get_ExcRQB_te);
	get_map.emplace("cim:ExcRQB.tf", &get_ExcRQB_tf);
	get_map.emplace("cim:ExcRQB.ucmax", &get_ExcRQB_ucmax);
	get_map.emplace("cim:ExcRQB.ucmin", &get_ExcRQB_ucmin);
}

void ExcRQB::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcRQB::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcRQB::declare()
{
	return BaseClassDefiner(ExcRQB::addConstructToMap, ExcRQB::addPrimitiveAssignFnsToMap, ExcRQB::addClassAssignFnsToMap, ExcRQB::debugName);
}

namespace CIMPP
{
	BaseClass* ExcRQB_factory()
	{
		return new ExcRQB;
	}
}
