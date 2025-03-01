/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Pss5.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

Pss5::Pss5() {}
Pss5::~Pss5() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Pss5.ctw2", { CGMESProfile::DY, } },
	{ "cim:Pss5.deadband", { CGMESProfile::DY, } },
	{ "cim:Pss5.isfreq", { CGMESProfile::DY, } },
	{ "cim:Pss5.kf", { CGMESProfile::DY, } },
	{ "cim:Pss5.kpe", { CGMESProfile::DY, } },
	{ "cim:Pss5.kpss", { CGMESProfile::DY, } },
	{ "cim:Pss5.pmm", { CGMESProfile::DY, } },
	{ "cim:Pss5.tl1", { CGMESProfile::DY, } },
	{ "cim:Pss5.tl2", { CGMESProfile::DY, } },
	{ "cim:Pss5.tl3", { CGMESProfile::DY, } },
	{ "cim:Pss5.tl4", { CGMESProfile::DY, } },
	{ "cim:Pss5.tpe", { CGMESProfile::DY, } },
	{ "cim:Pss5.tw1", { CGMESProfile::DY, } },
	{ "cim:Pss5.tw2", { CGMESProfile::DY, } },
	{ "cim:Pss5.vadat", { CGMESProfile::DY, } },
	{ "cim:Pss5.vsmn", { CGMESProfile::DY, } },
	{ "cim:Pss5.vsmx", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
Pss5::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Pss5::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemStabilizerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_Pss5_ctw2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ctw2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_deadband(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->deadband;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_isfreq(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->isfreq;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_kpe(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpe;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_kpss(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpss;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_pmm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_tl1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_tl2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_tl3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_tl4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_tpe(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpe;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_tw1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_tw2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_vadat(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vadat;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_vsmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vsmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss5_vsmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss5* element = dynamic_cast<Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vsmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_Pss5_ctw2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ctw2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss5_deadband(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->deadband;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss5_isfreq(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->isfreq;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss5_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss5_kpe(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpe;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss5_kpss(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpss;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss5_pmm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss5_tl1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss5_tl2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss5_tl3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss5_tl4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss5_tpe(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpe;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss5_tw1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_Pss5_tw2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_Pss5_vadat(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vadat;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss5_vsmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vsmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss5_vsmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss5* element = dynamic_cast<const Pss5*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vsmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Pss5::debugName[] = "Pss5";
const char* Pss5::debugString() const
{
	return Pss5::debugName;
}

void Pss5::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Pss5", &Pss5_factory);
}

void Pss5::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:Pss5.ctw2", &assign_Pss5_ctw2);
	assign_map.emplace("cim:Pss5.deadband", &assign_Pss5_deadband);
	assign_map.emplace("cim:Pss5.isfreq", &assign_Pss5_isfreq);
	assign_map.emplace("cim:Pss5.kf", &assign_Pss5_kf);
	assign_map.emplace("cim:Pss5.kpe", &assign_Pss5_kpe);
	assign_map.emplace("cim:Pss5.kpss", &assign_Pss5_kpss);
	assign_map.emplace("cim:Pss5.pmm", &assign_Pss5_pmm);
	assign_map.emplace("cim:Pss5.tl1", &assign_Pss5_tl1);
	assign_map.emplace("cim:Pss5.tl2", &assign_Pss5_tl2);
	assign_map.emplace("cim:Pss5.tl3", &assign_Pss5_tl3);
	assign_map.emplace("cim:Pss5.tl4", &assign_Pss5_tl4);
	assign_map.emplace("cim:Pss5.tpe", &assign_Pss5_tpe);
	assign_map.emplace("cim:Pss5.tw1", &assign_Pss5_tw1);
	assign_map.emplace("cim:Pss5.tw2", &assign_Pss5_tw2);
	assign_map.emplace("cim:Pss5.vadat", &assign_Pss5_vadat);
	assign_map.emplace("cim:Pss5.vsmn", &assign_Pss5_vsmn);
	assign_map.emplace("cim:Pss5.vsmx", &assign_Pss5_vsmx);
}

void Pss5::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Pss5::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:Pss5.ctw2", &get_Pss5_ctw2);
	get_map.emplace("cim:Pss5.deadband", &get_Pss5_deadband);
	get_map.emplace("cim:Pss5.isfreq", &get_Pss5_isfreq);
	get_map.emplace("cim:Pss5.kf", &get_Pss5_kf);
	get_map.emplace("cim:Pss5.kpe", &get_Pss5_kpe);
	get_map.emplace("cim:Pss5.kpss", &get_Pss5_kpss);
	get_map.emplace("cim:Pss5.pmm", &get_Pss5_pmm);
	get_map.emplace("cim:Pss5.tl1", &get_Pss5_tl1);
	get_map.emplace("cim:Pss5.tl2", &get_Pss5_tl2);
	get_map.emplace("cim:Pss5.tl3", &get_Pss5_tl3);
	get_map.emplace("cim:Pss5.tl4", &get_Pss5_tl4);
	get_map.emplace("cim:Pss5.tpe", &get_Pss5_tpe);
	get_map.emplace("cim:Pss5.tw1", &get_Pss5_tw1);
	get_map.emplace("cim:Pss5.tw2", &get_Pss5_tw2);
	get_map.emplace("cim:Pss5.vadat", &get_Pss5_vadat);
	get_map.emplace("cim:Pss5.vsmn", &get_Pss5_vsmn);
	get_map.emplace("cim:Pss5.vsmx", &get_Pss5_vsmx);
}

void Pss5::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void Pss5::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Pss5::declare()
{
	return BaseClassDefiner(Pss5::addConstructToMap, Pss5::addPrimitiveAssignFnsToMap, Pss5::addClassAssignFnsToMap, Pss5::debugName);
}

namespace CIMPP
{
	BaseClass* Pss5_factory()
	{
		return new Pss5;
	}
}
