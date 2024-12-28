/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnderexcLimIEEE1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

UnderexcLimIEEE1::UnderexcLimIEEE1() {};
UnderexcLimIEEE1::~UnderexcLimIEEE1() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:UnderexcLimIEEE1.kuc", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE1.kuf", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE1.kui", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE1.kul", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE1.kur", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE1.tu1", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE1.tu2", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE1.tu3", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE1.tu4", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE1.vucmax", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE1.vuimax", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE1.vuimin", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE1.vulmax", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE1.vulmin", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE1.vurmax", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
UnderexcLimIEEE1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
UnderexcLimIEEE1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = UnderexcitationLimiterDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_UnderexcLimIEEE1_kuc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->kuc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLimIEEE1_kuf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->kuf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLimIEEE1_kui(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->kui;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLimIEEE1_kul(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->kul;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLimIEEE1_kur(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->kur;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLimIEEE1_tu1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->tu1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLimIEEE1_tu2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->tu2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLimIEEE1_tu3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->tu3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLimIEEE1_tu4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->tu4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLimIEEE1_vucmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->vucmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLimIEEE1_vuimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->vuimax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLimIEEE1_vuimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->vuimin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLimIEEE1_vulmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->vulmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLimIEEE1_vulmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->vulmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_UnderexcLimIEEE1_vurmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcLimIEEE1* element = dynamic_cast<UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer >> element->vurmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_UnderexcLimIEEE1_kuc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->kuc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE1_kuf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->kuf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE1_kui(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->kui;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE1_kul(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->kul;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE1_kur(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->kur;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE1_tu1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->tu1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE1_tu2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->tu2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE1_tu3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->tu3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE1_tu4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->tu4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE1_vucmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->vucmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE1_vuimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->vuimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE1_vuimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->vuimin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE1_vulmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->vulmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE1_vulmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->vulmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE1_vurmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcLimIEEE1* element = dynamic_cast<const UnderexcLimIEEE1*>(BaseClass_ptr1))
	{
		buffer << element->vurmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char UnderexcLimIEEE1::debugName[] = "UnderexcLimIEEE1";
const char* UnderexcLimIEEE1::debugString() const
{
	return UnderexcLimIEEE1::debugName;
}

void UnderexcLimIEEE1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1"), &UnderexcLimIEEE1_factory));
}

void UnderexcLimIEEE1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.kuc"), &assign_UnderexcLimIEEE1_kuc));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.kuf"), &assign_UnderexcLimIEEE1_kuf));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.kui"), &assign_UnderexcLimIEEE1_kui));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.kul"), &assign_UnderexcLimIEEE1_kul));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.kur"), &assign_UnderexcLimIEEE1_kur));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.tu1"), &assign_UnderexcLimIEEE1_tu1));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.tu2"), &assign_UnderexcLimIEEE1_tu2));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.tu3"), &assign_UnderexcLimIEEE1_tu3));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.tu4"), &assign_UnderexcLimIEEE1_tu4));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.vucmax"), &assign_UnderexcLimIEEE1_vucmax));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.vuimax"), &assign_UnderexcLimIEEE1_vuimax));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.vuimin"), &assign_UnderexcLimIEEE1_vuimin));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.vulmax"), &assign_UnderexcLimIEEE1_vulmax));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.vulmin"), &assign_UnderexcLimIEEE1_vulmin));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcLimIEEE1.vurmax"), &assign_UnderexcLimIEEE1_vurmax));
}

void UnderexcLimIEEE1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void UnderexcLimIEEE1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:UnderexcLimIEEE1.kuc", &get_UnderexcLimIEEE1_kuc);
	get_map.emplace("cim:UnderexcLimIEEE1.kuf", &get_UnderexcLimIEEE1_kuf);
	get_map.emplace("cim:UnderexcLimIEEE1.kui", &get_UnderexcLimIEEE1_kui);
	get_map.emplace("cim:UnderexcLimIEEE1.kul", &get_UnderexcLimIEEE1_kul);
	get_map.emplace("cim:UnderexcLimIEEE1.kur", &get_UnderexcLimIEEE1_kur);
	get_map.emplace("cim:UnderexcLimIEEE1.tu1", &get_UnderexcLimIEEE1_tu1);
	get_map.emplace("cim:UnderexcLimIEEE1.tu2", &get_UnderexcLimIEEE1_tu2);
	get_map.emplace("cim:UnderexcLimIEEE1.tu3", &get_UnderexcLimIEEE1_tu3);
	get_map.emplace("cim:UnderexcLimIEEE1.tu4", &get_UnderexcLimIEEE1_tu4);
	get_map.emplace("cim:UnderexcLimIEEE1.vucmax", &get_UnderexcLimIEEE1_vucmax);
	get_map.emplace("cim:UnderexcLimIEEE1.vuimax", &get_UnderexcLimIEEE1_vuimax);
	get_map.emplace("cim:UnderexcLimIEEE1.vuimin", &get_UnderexcLimIEEE1_vuimin);
	get_map.emplace("cim:UnderexcLimIEEE1.vulmax", &get_UnderexcLimIEEE1_vulmax);
	get_map.emplace("cim:UnderexcLimIEEE1.vulmin", &get_UnderexcLimIEEE1_vulmin);
	get_map.emplace("cim:UnderexcLimIEEE1.vurmax", &get_UnderexcLimIEEE1_vurmax);
}

void UnderexcLimIEEE1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void UnderexcLimIEEE1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner UnderexcLimIEEE1::declare()
{
	return BaseClassDefiner(UnderexcLimIEEE1::addConstructToMap, UnderexcLimIEEE1::addPrimitiveAssignFnsToMap, UnderexcLimIEEE1::addClassAssignFnsToMap, UnderexcLimIEEE1::debugName);
}

namespace CIMPP
{
	BaseClass* UnderexcLimIEEE1_factory()
	{
		return new UnderexcLimIEEE1;
	}
}
