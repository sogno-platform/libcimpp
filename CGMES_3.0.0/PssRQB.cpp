/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssRQB.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

PssRQB::PssRQB() {}
PssRQB::~PssRQB() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PssRQB.kdpm", { CGMESProfile::DY, } },
	{ "cim:PssRQB.ki2", { CGMESProfile::DY, } },
	{ "cim:PssRQB.ki3", { CGMESProfile::DY, } },
	{ "cim:PssRQB.ki4", { CGMESProfile::DY, } },
	{ "cim:PssRQB.sibv", { CGMESProfile::DY, } },
	{ "cim:PssRQB.t4f", { CGMESProfile::DY, } },
	{ "cim:PssRQB.t4m", { CGMESProfile::DY, } },
	{ "cim:PssRQB.t4mom", { CGMESProfile::DY, } },
	{ "cim:PssRQB.tomd", { CGMESProfile::DY, } },
	{ "cim:PssRQB.tomsl", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PssRQB::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PssRQB::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemStabilizerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_PssRQB_kdpm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kdpm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_ki2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_ki3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_ki4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_sibv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->sibv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_t4f(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4f;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_t4m(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4m;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_t4mom(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4mom;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_tomd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tomd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_tomsl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tomsl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PssRQB_kdpm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kdpm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_ki2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_ki3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_ki4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_sibv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->sibv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_t4f(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4f;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_t4m(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_PssRQB_t4mom(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4mom;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_tomd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tomd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_tomsl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tomsl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PssRQB::debugName[] = "PssRQB";
const char* PssRQB::debugString() const
{
	return PssRQB::debugName;
}

void PssRQB::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PssRQB", &PssRQB_factory);
}

void PssRQB::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:PssRQB.kdpm", &assign_PssRQB_kdpm);
	assign_map.emplace("cim:PssRQB.ki2", &assign_PssRQB_ki2);
	assign_map.emplace("cim:PssRQB.ki3", &assign_PssRQB_ki3);
	assign_map.emplace("cim:PssRQB.ki4", &assign_PssRQB_ki4);
	assign_map.emplace("cim:PssRQB.sibv", &assign_PssRQB_sibv);
	assign_map.emplace("cim:PssRQB.t4f", &assign_PssRQB_t4f);
	assign_map.emplace("cim:PssRQB.t4m", &assign_PssRQB_t4m);
	assign_map.emplace("cim:PssRQB.t4mom", &assign_PssRQB_t4mom);
	assign_map.emplace("cim:PssRQB.tomd", &assign_PssRQB_tomd);
	assign_map.emplace("cim:PssRQB.tomsl", &assign_PssRQB_tomsl);
}

void PssRQB::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssRQB::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PssRQB.kdpm", &get_PssRQB_kdpm);
	get_map.emplace("cim:PssRQB.ki2", &get_PssRQB_ki2);
	get_map.emplace("cim:PssRQB.ki3", &get_PssRQB_ki3);
	get_map.emplace("cim:PssRQB.ki4", &get_PssRQB_ki4);
	get_map.emplace("cim:PssRQB.sibv", &get_PssRQB_sibv);
	get_map.emplace("cim:PssRQB.t4f", &get_PssRQB_t4f);
	get_map.emplace("cim:PssRQB.t4m", &get_PssRQB_t4m);
	get_map.emplace("cim:PssRQB.t4mom", &get_PssRQB_t4mom);
	get_map.emplace("cim:PssRQB.tomd", &get_PssRQB_tomd);
	get_map.emplace("cim:PssRQB.tomsl", &get_PssRQB_tomsl);
}

void PssRQB::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssRQB::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PssRQB::declare()
{
	return BaseClassDefiner(PssRQB::addConstructToMap, PssRQB::addPrimitiveAssignFnsToMap, PssRQB::addClassAssignFnsToMap, PssRQB::debugName);
}

namespace CIMPP
{
	BaseClass* PssRQB_factory()
	{
		return new PssRQB;
	}
}
