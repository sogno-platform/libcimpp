/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnderexcLimX1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

UnderexcLimX1::UnderexcLimX1() {}
UnderexcLimX1::~UnderexcLimX1() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:UnderexcLimX1.k", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimX1.kf2", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimX1.km", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimX1.melmax", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimX1.tf2", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimX1.tm", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
UnderexcLimX1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
UnderexcLimX1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = UnderexcitationLimiterDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_UnderexcLimX1_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1);
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

bool assign_UnderexcLimX1_kf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimX1_km(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->km;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimX1_melmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->melmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimX1_tf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimX1_tm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX1* element = dynamic_cast<UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_UnderexcLimX1_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX1* element = dynamic_cast<const UnderexcLimX1*>(BaseClass_ptr1);
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

bool get_UnderexcLimX1_kf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX1* element = dynamic_cast<const UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimX1_km(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX1* element = dynamic_cast<const UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->km;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimX1_melmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX1* element = dynamic_cast<const UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->melmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimX1_tf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX1* element = dynamic_cast<const UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimX1_tm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX1* element = dynamic_cast<const UnderexcLimX1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char UnderexcLimX1::debugName[] = "UnderexcLimX1";
const char* UnderexcLimX1::debugString() const
{
	return UnderexcLimX1::debugName;
}

void UnderexcLimX1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:UnderexcLimX1", &UnderexcLimX1_factory);
}

void UnderexcLimX1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:UnderexcLimX1.k", &assign_UnderexcLimX1_k);
	assign_map.emplace("cim:UnderexcLimX1.kf2", &assign_UnderexcLimX1_kf2);
	assign_map.emplace("cim:UnderexcLimX1.km", &assign_UnderexcLimX1_km);
	assign_map.emplace("cim:UnderexcLimX1.melmax", &assign_UnderexcLimX1_melmax);
	assign_map.emplace("cim:UnderexcLimX1.tf2", &assign_UnderexcLimX1_tf2);
	assign_map.emplace("cim:UnderexcLimX1.tm", &assign_UnderexcLimX1_tm);
}

void UnderexcLimX1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void UnderexcLimX1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:UnderexcLimX1.k", &get_UnderexcLimX1_k);
	get_map.emplace("cim:UnderexcLimX1.kf2", &get_UnderexcLimX1_kf2);
	get_map.emplace("cim:UnderexcLimX1.km", &get_UnderexcLimX1_km);
	get_map.emplace("cim:UnderexcLimX1.melmax", &get_UnderexcLimX1_melmax);
	get_map.emplace("cim:UnderexcLimX1.tf2", &get_UnderexcLimX1_tf2);
	get_map.emplace("cim:UnderexcLimX1.tm", &get_UnderexcLimX1_tm);
}

void UnderexcLimX1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void UnderexcLimX1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner UnderexcLimX1::declare()
{
	return BaseClassDefiner(UnderexcLimX1::addConstructToMap, UnderexcLimX1::addPrimitiveAssignFnsToMap, UnderexcLimX1::addClassAssignFnsToMap, UnderexcLimX1::debugName);
}

namespace CIMPP
{
	BaseClass* UnderexcLimX1_factory()
	{
		return new UnderexcLimX1;
	}
}
