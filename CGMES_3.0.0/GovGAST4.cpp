/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovGAST4.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GovGAST4::GovGAST4() {}
GovGAST4::~GovGAST4() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovGAST4.bp", { CGMESProfile::DY, } },
	{ "cim:GovGAST4.ktm", { CGMESProfile::DY, } },
	{ "cim:GovGAST4.mnef", { CGMESProfile::DY, } },
	{ "cim:GovGAST4.mxef", { CGMESProfile::DY, } },
	{ "cim:GovGAST4.rymn", { CGMESProfile::DY, } },
	{ "cim:GovGAST4.rymx", { CGMESProfile::DY, } },
	{ "cim:GovGAST4.ta", { CGMESProfile::DY, } },
	{ "cim:GovGAST4.tc", { CGMESProfile::DY, } },
	{ "cim:GovGAST4.tcm", { CGMESProfile::DY, } },
	{ "cim:GovGAST4.tm", { CGMESProfile::DY, } },
	{ "cim:GovGAST4.ty", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovGAST4::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovGAST4::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GovGAST4_bp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST4_ktm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ktm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST4_mnef(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mnef;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST4_mxef(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mxef;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST4_rymn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rymn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST4_rymx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rymx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST4_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ta;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST4_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST4_tcm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tcm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST4_tm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
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

bool assign_GovGAST4_ty(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ty;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovGAST4_bp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->bp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST4_ktm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ktm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST4_mnef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mnef;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST4_mxef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mxef;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST4_rymn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rymn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST4_rymx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rymx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST4_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST4_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST4_tcm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tcm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST4_tm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
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

bool get_GovGAST4_ty(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ty;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovGAST4::debugName[] = "GovGAST4";
const char* GovGAST4::debugString() const
{
	return GovGAST4::debugName;
}

void GovGAST4::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GovGAST4", &GovGAST4_factory);
}

void GovGAST4::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GovGAST4.bp", &assign_GovGAST4_bp);
	assign_map.emplace("cim:GovGAST4.ktm", &assign_GovGAST4_ktm);
	assign_map.emplace("cim:GovGAST4.mnef", &assign_GovGAST4_mnef);
	assign_map.emplace("cim:GovGAST4.mxef", &assign_GovGAST4_mxef);
	assign_map.emplace("cim:GovGAST4.rymn", &assign_GovGAST4_rymn);
	assign_map.emplace("cim:GovGAST4.rymx", &assign_GovGAST4_rymx);
	assign_map.emplace("cim:GovGAST4.ta", &assign_GovGAST4_ta);
	assign_map.emplace("cim:GovGAST4.tc", &assign_GovGAST4_tc);
	assign_map.emplace("cim:GovGAST4.tcm", &assign_GovGAST4_tcm);
	assign_map.emplace("cim:GovGAST4.tm", &assign_GovGAST4_tm);
	assign_map.emplace("cim:GovGAST4.ty", &assign_GovGAST4_ty);
}

void GovGAST4::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovGAST4::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovGAST4.bp", &get_GovGAST4_bp);
	get_map.emplace("cim:GovGAST4.ktm", &get_GovGAST4_ktm);
	get_map.emplace("cim:GovGAST4.mnef", &get_GovGAST4_mnef);
	get_map.emplace("cim:GovGAST4.mxef", &get_GovGAST4_mxef);
	get_map.emplace("cim:GovGAST4.rymn", &get_GovGAST4_rymn);
	get_map.emplace("cim:GovGAST4.rymx", &get_GovGAST4_rymx);
	get_map.emplace("cim:GovGAST4.ta", &get_GovGAST4_ta);
	get_map.emplace("cim:GovGAST4.tc", &get_GovGAST4_tc);
	get_map.emplace("cim:GovGAST4.tcm", &get_GovGAST4_tcm);
	get_map.emplace("cim:GovGAST4.tm", &get_GovGAST4_tm);
	get_map.emplace("cim:GovGAST4.ty", &get_GovGAST4_ty);
}

void GovGAST4::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovGAST4::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovGAST4::declare()
{
	return BaseClassDefiner(GovGAST4::addConstructToMap, GovGAST4::addPrimitiveAssignFnsToMap, GovGAST4::addClassAssignFnsToMap, GovGAST4::debugName);
}

namespace CIMPP
{
	BaseClass* GovGAST4_factory()
	{
		return new GovGAST4;
	}
}
