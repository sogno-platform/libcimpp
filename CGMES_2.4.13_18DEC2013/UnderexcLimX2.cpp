/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnderexcLimX2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

UnderexcLimX2::UnderexcLimX2() {}
UnderexcLimX2::~UnderexcLimX2() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:UnderexcLimX2.kf2", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimX2.km", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimX2.melmax", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimX2.qo", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimX2.r", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimX2.tf2", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimX2.tm", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
UnderexcLimX2::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
UnderexcLimX2::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = UnderexcitationLimiterDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_UnderexcLimX2_kf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1);
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

bool assign_UnderexcLimX2_km(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1);
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

bool assign_UnderexcLimX2_melmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1);
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

bool assign_UnderexcLimX2_qo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qo;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimX2_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimX2_tf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1);
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

bool assign_UnderexcLimX2_tm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimX2* element = dynamic_cast<UnderexcLimX2*>(BaseClass_ptr1);
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

bool get_UnderexcLimX2_kf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX2* element = dynamic_cast<const UnderexcLimX2*>(BaseClass_ptr1);
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

bool get_UnderexcLimX2_km(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX2* element = dynamic_cast<const UnderexcLimX2*>(BaseClass_ptr1);
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

bool get_UnderexcLimX2_melmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX2* element = dynamic_cast<const UnderexcLimX2*>(BaseClass_ptr1);
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

bool get_UnderexcLimX2_qo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX2* element = dynamic_cast<const UnderexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimX2_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX2* element = dynamic_cast<const UnderexcLimX2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_UnderexcLimX2_tf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX2* element = dynamic_cast<const UnderexcLimX2*>(BaseClass_ptr1);
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

bool get_UnderexcLimX2_tm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimX2* element = dynamic_cast<const UnderexcLimX2*>(BaseClass_ptr1);
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

const char UnderexcLimX2::debugName[] = "UnderexcLimX2";
const char* UnderexcLimX2::debugString() const
{
	return UnderexcLimX2::debugName;
}

void UnderexcLimX2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:UnderexcLimX2", &UnderexcLimX2_factory);
}

void UnderexcLimX2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:UnderexcLimX2.kf2", &assign_UnderexcLimX2_kf2);
	assign_map.emplace("cim:UnderexcLimX2.km", &assign_UnderexcLimX2_km);
	assign_map.emplace("cim:UnderexcLimX2.melmax", &assign_UnderexcLimX2_melmax);
	assign_map.emplace("cim:UnderexcLimX2.qo", &assign_UnderexcLimX2_qo);
	assign_map.emplace("cim:UnderexcLimX2.r", &assign_UnderexcLimX2_r);
	assign_map.emplace("cim:UnderexcLimX2.tf2", &assign_UnderexcLimX2_tf2);
	assign_map.emplace("cim:UnderexcLimX2.tm", &assign_UnderexcLimX2_tm);
}

void UnderexcLimX2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void UnderexcLimX2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:UnderexcLimX2.kf2", &get_UnderexcLimX2_kf2);
	get_map.emplace("cim:UnderexcLimX2.km", &get_UnderexcLimX2_km);
	get_map.emplace("cim:UnderexcLimX2.melmax", &get_UnderexcLimX2_melmax);
	get_map.emplace("cim:UnderexcLimX2.qo", &get_UnderexcLimX2_qo);
	get_map.emplace("cim:UnderexcLimX2.r", &get_UnderexcLimX2_r);
	get_map.emplace("cim:UnderexcLimX2.tf2", &get_UnderexcLimX2_tf2);
	get_map.emplace("cim:UnderexcLimX2.tm", &get_UnderexcLimX2_tm);
}

void UnderexcLimX2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void UnderexcLimX2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner UnderexcLimX2::declare()
{
	return BaseClassDefiner(UnderexcLimX2::addConstructToMap, UnderexcLimX2::addPrimitiveAssignFnsToMap, UnderexcLimX2::addClassAssignFnsToMap, UnderexcLimX2::debugName);
}

namespace CIMPP
{
	BaseClass* UnderexcLimX2_factory()
	{
		return new UnderexcLimX2;
	}
}
