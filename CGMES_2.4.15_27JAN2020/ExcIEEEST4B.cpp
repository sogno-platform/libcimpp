/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEST4B.hpp"

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
#include "Seconds.hpp"
#include "AngleDegrees.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcIEEEST4B::ExcIEEEST4B() {};
ExcIEEEST4B::~ExcIEEEST4B() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcIEEEST4B.kc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.kg", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.ki", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.kim", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.kir", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.kp", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.kpm", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.kpr", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.ta", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.thetap", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.vbmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.vmmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.vmmin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.vrmin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST4B.xl", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcIEEEST4B::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcIEEEST4B::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcIEEEST4B_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->kc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->kg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_kim(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->kim;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_kir(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->kir;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_kpm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->kpm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_kpr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->kpr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_thetap(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->thetap;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_vbmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->vbmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_vmmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->vmmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_vmmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->vmmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEST4B_xl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer >> element->xl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcIEEEST4B_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer << element->kc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer << element->kg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST4B_kim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer << element->kim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_kir(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer << element->kir;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer << element->kp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_kpm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer << element->kpm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_kpr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer << element->kpr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST4B_thetap(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer << element->thetap;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_vbmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer << element->vbmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_vmmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer << element->vmmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_vmmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer << element->vmmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST4B_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
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

bool get_ExcIEEEST4B_xl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1))
	{
		buffer << element->xl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char ExcIEEEST4B::debugName[] = "ExcIEEEST4B";
const char* ExcIEEEST4B::debugString() const
{
	return ExcIEEEST4B::debugName;
}

void ExcIEEEST4B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B"), &ExcIEEEST4B_factory));
}

void ExcIEEEST4B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.kc"), &assign_ExcIEEEST4B_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.kg"), &assign_ExcIEEEST4B_kg));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.ki"), &assign_ExcIEEEST4B_ki));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.kim"), &assign_ExcIEEEST4B_kim));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.kir"), &assign_ExcIEEEST4B_kir));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.kp"), &assign_ExcIEEEST4B_kp));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.kpm"), &assign_ExcIEEEST4B_kpm));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.kpr"), &assign_ExcIEEEST4B_kpr));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.ta"), &assign_ExcIEEEST4B_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.thetap"), &assign_ExcIEEEST4B_thetap));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.vbmax"), &assign_ExcIEEEST4B_vbmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.vmmax"), &assign_ExcIEEEST4B_vmmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.vmmin"), &assign_ExcIEEEST4B_vmmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.vrmax"), &assign_ExcIEEEST4B_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.vrmin"), &assign_ExcIEEEST4B_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST4B.xl"), &assign_ExcIEEEST4B_xl));
}

void ExcIEEEST4B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEST4B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEST4B.kc", &get_ExcIEEEST4B_kc);
	get_map.emplace("cim:ExcIEEEST4B.kg", &get_ExcIEEEST4B_kg);
	get_map.emplace("cim:ExcIEEEST4B.ki", &get_ExcIEEEST4B_ki);
	get_map.emplace("cim:ExcIEEEST4B.kim", &get_ExcIEEEST4B_kim);
	get_map.emplace("cim:ExcIEEEST4B.kir", &get_ExcIEEEST4B_kir);
	get_map.emplace("cim:ExcIEEEST4B.kp", &get_ExcIEEEST4B_kp);
	get_map.emplace("cim:ExcIEEEST4B.kpm", &get_ExcIEEEST4B_kpm);
	get_map.emplace("cim:ExcIEEEST4B.kpr", &get_ExcIEEEST4B_kpr);
	get_map.emplace("cim:ExcIEEEST4B.ta", &get_ExcIEEEST4B_ta);
	get_map.emplace("cim:ExcIEEEST4B.thetap", &get_ExcIEEEST4B_thetap);
	get_map.emplace("cim:ExcIEEEST4B.vbmax", &get_ExcIEEEST4B_vbmax);
	get_map.emplace("cim:ExcIEEEST4B.vmmax", &get_ExcIEEEST4B_vmmax);
	get_map.emplace("cim:ExcIEEEST4B.vmmin", &get_ExcIEEEST4B_vmmin);
	get_map.emplace("cim:ExcIEEEST4B.vrmax", &get_ExcIEEEST4B_vrmax);
	get_map.emplace("cim:ExcIEEEST4B.vrmin", &get_ExcIEEEST4B_vrmin);
	get_map.emplace("cim:ExcIEEEST4B.xl", &get_ExcIEEEST4B_xl);
}

void ExcIEEEST4B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEST4B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcIEEEST4B::declare()
{
	return BaseClassDefiner(ExcIEEEST4B::addConstructToMap, ExcIEEEST4B::addPrimitiveAssignFnsToMap, ExcIEEEST4B::addClassAssignFnsToMap, ExcIEEEST4B::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEST4B_factory()
	{
		return new ExcIEEEST4B;
	}
}
