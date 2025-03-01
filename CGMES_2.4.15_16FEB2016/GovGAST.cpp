/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovGAST.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GovGAST::GovGAST() {}
GovGAST::~GovGAST() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovGAST.at", { CGMESProfile::DY, } },
	{ "cim:GovGAST.dturb", { CGMESProfile::DY, } },
	{ "cim:GovGAST.kt", { CGMESProfile::DY, } },
	{ "cim:GovGAST.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovGAST.r", { CGMESProfile::DY, } },
	{ "cim:GovGAST.t1", { CGMESProfile::DY, } },
	{ "cim:GovGAST.t2", { CGMESProfile::DY, } },
	{ "cim:GovGAST.t3", { CGMESProfile::DY, } },
	{ "cim:GovGAST.vmax", { CGMESProfile::DY, } },
	{ "cim:GovGAST.vmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovGAST::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovGAST::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GovGAST_at(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->at;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST_dturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dturb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST_kt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mwbase;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
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

bool assign_GovGAST_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST_vmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST_vmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovGAST_at(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->at;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST_dturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dturb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST_kt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mwbase;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
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

bool get_GovGAST_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST_vmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST_vmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovGAST::debugName[] = "GovGAST";
const char* GovGAST::debugString() const
{
	return GovGAST::debugName;
}

void GovGAST::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GovGAST", &GovGAST_factory);
}

void GovGAST::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GovGAST.at", &assign_GovGAST_at);
	assign_map.emplace("cim:GovGAST.dturb", &assign_GovGAST_dturb);
	assign_map.emplace("cim:GovGAST.kt", &assign_GovGAST_kt);
	assign_map.emplace("cim:GovGAST.mwbase", &assign_GovGAST_mwbase);
	assign_map.emplace("cim:GovGAST.r", &assign_GovGAST_r);
	assign_map.emplace("cim:GovGAST.t1", &assign_GovGAST_t1);
	assign_map.emplace("cim:GovGAST.t2", &assign_GovGAST_t2);
	assign_map.emplace("cim:GovGAST.t3", &assign_GovGAST_t3);
	assign_map.emplace("cim:GovGAST.vmax", &assign_GovGAST_vmax);
	assign_map.emplace("cim:GovGAST.vmin", &assign_GovGAST_vmin);
}

void GovGAST::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovGAST::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovGAST.at", &get_GovGAST_at);
	get_map.emplace("cim:GovGAST.dturb", &get_GovGAST_dturb);
	get_map.emplace("cim:GovGAST.kt", &get_GovGAST_kt);
	get_map.emplace("cim:GovGAST.mwbase", &get_GovGAST_mwbase);
	get_map.emplace("cim:GovGAST.r", &get_GovGAST_r);
	get_map.emplace("cim:GovGAST.t1", &get_GovGAST_t1);
	get_map.emplace("cim:GovGAST.t2", &get_GovGAST_t2);
	get_map.emplace("cim:GovGAST.t3", &get_GovGAST_t3);
	get_map.emplace("cim:GovGAST.vmax", &get_GovGAST_vmax);
	get_map.emplace("cim:GovGAST.vmin", &get_GovGAST_vmin);
}

void GovGAST::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovGAST::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovGAST::declare()
{
	return BaseClassDefiner(GovGAST::addConstructToMap, GovGAST::addPrimitiveAssignFnsToMap, GovGAST::addClassAssignFnsToMap, GovGAST::debugName);
}

namespace CIMPP
{
	BaseClass* GovGAST_factory()
	{
		return new GovGAST;
	}
}
