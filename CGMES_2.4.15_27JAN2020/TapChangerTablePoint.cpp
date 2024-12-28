/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TapChangerTablePoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PerCent.hpp"
#include "PerCent.hpp"
#include "PerCent.hpp"
#include "Simple_Float.hpp"
#include "Integer.hpp"
#include "PerCent.hpp"

using namespace CIMPP;

TapChangerTablePoint::TapChangerTablePoint() {};
TapChangerTablePoint::~TapChangerTablePoint() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:TapChangerTablePoint.b", { CGMESProfile::EQ, } },
	{ "cim:TapChangerTablePoint.g", { CGMESProfile::EQ, } },
	{ "cim:TapChangerTablePoint.r", { CGMESProfile::EQ, } },
	{ "cim:TapChangerTablePoint.ratio", { CGMESProfile::EQ, } },
	{ "cim:TapChangerTablePoint.step", { CGMESProfile::EQ, } },
	{ "cim:TapChangerTablePoint.x", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
TapChangerTablePoint::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
TapChangerTablePoint::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_TapChangerTablePoint_b(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer >> element->b;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TapChangerTablePoint_g(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer >> element->g;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TapChangerTablePoint_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TapChangerTablePoint_ratio(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer >> element->ratio;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TapChangerTablePoint_step(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer >> element->step;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TapChangerTablePoint_x(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer >> element->x;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_TapChangerTablePoint_b(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TapChangerTablePoint* element = dynamic_cast<const TapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer << element->b;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChangerTablePoint_g(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TapChangerTablePoint* element = dynamic_cast<const TapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer << element->g;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChangerTablePoint_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TapChangerTablePoint* element = dynamic_cast<const TapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer << element->r;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChangerTablePoint_ratio(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TapChangerTablePoint* element = dynamic_cast<const TapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer << element->ratio;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChangerTablePoint_step(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TapChangerTablePoint* element = dynamic_cast<const TapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer << element->step;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChangerTablePoint_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TapChangerTablePoint* element = dynamic_cast<const TapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer << element->x;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char TapChangerTablePoint::debugName[] = "TapChangerTablePoint";
const char* TapChangerTablePoint::debugString() const
{
	return TapChangerTablePoint::debugName;
}

void TapChangerTablePoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TapChangerTablePoint"), &TapChangerTablePoint_factory));
}

void TapChangerTablePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TapChangerTablePoint.b"), &assign_TapChangerTablePoint_b));
	assign_map.insert(std::make_pair(std::string("cim:TapChangerTablePoint.g"), &assign_TapChangerTablePoint_g));
	assign_map.insert(std::make_pair(std::string("cim:TapChangerTablePoint.r"), &assign_TapChangerTablePoint_r));
	assign_map.insert(std::make_pair(std::string("cim:TapChangerTablePoint.ratio"), &assign_TapChangerTablePoint_ratio));
	assign_map.insert(std::make_pair(std::string("cim:TapChangerTablePoint.step"), &assign_TapChangerTablePoint_step));
	assign_map.insert(std::make_pair(std::string("cim:TapChangerTablePoint.x"), &assign_TapChangerTablePoint_x));
}

void TapChangerTablePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void TapChangerTablePoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:TapChangerTablePoint.b", &get_TapChangerTablePoint_b);
	get_map.emplace("cim:TapChangerTablePoint.g", &get_TapChangerTablePoint_g);
	get_map.emplace("cim:TapChangerTablePoint.r", &get_TapChangerTablePoint_r);
	get_map.emplace("cim:TapChangerTablePoint.ratio", &get_TapChangerTablePoint_ratio);
	get_map.emplace("cim:TapChangerTablePoint.step", &get_TapChangerTablePoint_step);
	get_map.emplace("cim:TapChangerTablePoint.x", &get_TapChangerTablePoint_x);
}

void TapChangerTablePoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void TapChangerTablePoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner TapChangerTablePoint::declare()
{
	return BaseClassDefiner(TapChangerTablePoint::addConstructToMap, TapChangerTablePoint::addPrimitiveAssignFnsToMap, TapChangerTablePoint::addClassAssignFnsToMap, TapChangerTablePoint::debugName);
}

namespace CIMPP
{
	BaseClass* TapChangerTablePoint_factory()
	{
		return new TapChangerTablePoint;
	}
}
