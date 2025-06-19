/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcSEXS.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcSEXS::ExcSEXS() {}
ExcSEXS::~ExcSEXS() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcSEXS.efdmax", { CGMESProfile::DY, } },
	{ "cim:ExcSEXS.efdmin", { CGMESProfile::DY, } },
	{ "cim:ExcSEXS.emax", { CGMESProfile::DY, } },
	{ "cim:ExcSEXS.emin", { CGMESProfile::DY, } },
	{ "cim:ExcSEXS.k", { CGMESProfile::DY, } },
	{ "cim:ExcSEXS.kc", { CGMESProfile::DY, } },
	{ "cim:ExcSEXS.tatb", { CGMESProfile::DY, } },
	{ "cim:ExcSEXS.tb", { CGMESProfile::DY, } },
	{ "cim:ExcSEXS.tc", { CGMESProfile::DY, } },
	{ "cim:ExcSEXS.te", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcSEXS::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcSEXS::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcSEXS_efdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSEXS_efdmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSEXS_emax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->emax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSEXS_emin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->emin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSEXS_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
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

bool assign_ExcSEXS_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSEXS_tatb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tatb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSEXS_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSEXS_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
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

bool assign_ExcSEXS_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSEXS* element = dynamic_cast<ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->te;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcSEXS_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSEXS_efdmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSEXS_emax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->emax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSEXS_emin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->emin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSEXS_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
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

bool get_ExcSEXS_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcSEXS_tatb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tatb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSEXS_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSEXS_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
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

bool get_ExcSEXS_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSEXS* element = dynamic_cast<const ExcSEXS*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char ExcSEXS::debugName[] = "ExcSEXS";
const char* ExcSEXS::debugString() const
{
	return ExcSEXS::debugName;
}

void ExcSEXS::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcSEXS", &ExcSEXS_factory);
}

void ExcSEXS::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcSEXS.efdmax", &assign_ExcSEXS_efdmax);
	assign_map.emplace("cim:ExcSEXS.efdmin", &assign_ExcSEXS_efdmin);
	assign_map.emplace("cim:ExcSEXS.emax", &assign_ExcSEXS_emax);
	assign_map.emplace("cim:ExcSEXS.emin", &assign_ExcSEXS_emin);
	assign_map.emplace("cim:ExcSEXS.k", &assign_ExcSEXS_k);
	assign_map.emplace("cim:ExcSEXS.kc", &assign_ExcSEXS_kc);
	assign_map.emplace("cim:ExcSEXS.tatb", &assign_ExcSEXS_tatb);
	assign_map.emplace("cim:ExcSEXS.tb", &assign_ExcSEXS_tb);
	assign_map.emplace("cim:ExcSEXS.tc", &assign_ExcSEXS_tc);
	assign_map.emplace("cim:ExcSEXS.te", &assign_ExcSEXS_te);
}

void ExcSEXS::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcSEXS::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcSEXS.efdmax", &get_ExcSEXS_efdmax);
	get_map.emplace("cim:ExcSEXS.efdmin", &get_ExcSEXS_efdmin);
	get_map.emplace("cim:ExcSEXS.emax", &get_ExcSEXS_emax);
	get_map.emplace("cim:ExcSEXS.emin", &get_ExcSEXS_emin);
	get_map.emplace("cim:ExcSEXS.k", &get_ExcSEXS_k);
	get_map.emplace("cim:ExcSEXS.kc", &get_ExcSEXS_kc);
	get_map.emplace("cim:ExcSEXS.tatb", &get_ExcSEXS_tatb);
	get_map.emplace("cim:ExcSEXS.tb", &get_ExcSEXS_tb);
	get_map.emplace("cim:ExcSEXS.tc", &get_ExcSEXS_tc);
	get_map.emplace("cim:ExcSEXS.te", &get_ExcSEXS_te);
}

void ExcSEXS::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcSEXS::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcSEXS::declare()
{
	return BaseClassDefiner(ExcSEXS::addConstructToMap, ExcSEXS::addPrimitiveAssignFnsToMap, ExcSEXS::addClassAssignFnsToMap, ExcSEXS::debugName);
}

namespace CIMPP
{
	BaseClass* ExcSEXS_factory()
	{
		return new ExcSEXS;
	}
}
