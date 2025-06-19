/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TurbLCFB1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

TurbLCFB1::TurbLCFB1() {}
TurbLCFB1::~TurbLCFB1() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:TurbLCFB1.db", { CGMESProfile::DY, } },
	{ "cim:TurbLCFB1.emax", { CGMESProfile::DY, } },
	{ "cim:TurbLCFB1.fb", { CGMESProfile::DY, } },
	{ "cim:TurbLCFB1.fbf", { CGMESProfile::DY, } },
	{ "cim:TurbLCFB1.irmax", { CGMESProfile::DY, } },
	{ "cim:TurbLCFB1.ki", { CGMESProfile::DY, } },
	{ "cim:TurbLCFB1.kp", { CGMESProfile::DY, } },
	{ "cim:TurbLCFB1.mwbase", { CGMESProfile::DY, } },
	{ "cim:TurbLCFB1.pbf", { CGMESProfile::DY, } },
	{ "cim:TurbLCFB1.pmwset", { CGMESProfile::DY, } },
	{ "cim:TurbLCFB1.speedReferenceGovernor", { CGMESProfile::DY, } },
	{ "cim:TurbLCFB1.tpelec", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
TurbLCFB1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
TurbLCFB1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineLoadControllerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_TurbLCFB1_db(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->db;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_emax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
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

bool assign_TurbLCFB1_fb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_fbf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fbf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_irmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->irmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
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

bool assign_TurbLCFB1_pbf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pbf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_pmwset(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmwset;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_speedReferenceGovernor(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->speedReferenceGovernor;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_tpelec(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpelec;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_TurbLCFB1_db(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->db;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_emax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
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

bool get_TurbLCFB1_fb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_fbf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fbf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_irmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->irmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_TurbLCFB1_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_TurbLCFB1_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
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

bool get_TurbLCFB1_pbf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pbf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_pmwset(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmwset;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_speedReferenceGovernor(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->speedReferenceGovernor;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_tpelec(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpelec;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char TurbLCFB1::debugName[] = "TurbLCFB1";
const char* TurbLCFB1::debugString() const
{
	return TurbLCFB1::debugName;
}

void TurbLCFB1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:TurbLCFB1", &TurbLCFB1_factory);
}

void TurbLCFB1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:TurbLCFB1.db", &assign_TurbLCFB1_db);
	assign_map.emplace("cim:TurbLCFB1.emax", &assign_TurbLCFB1_emax);
	assign_map.emplace("cim:TurbLCFB1.fb", &assign_TurbLCFB1_fb);
	assign_map.emplace("cim:TurbLCFB1.fbf", &assign_TurbLCFB1_fbf);
	assign_map.emplace("cim:TurbLCFB1.irmax", &assign_TurbLCFB1_irmax);
	assign_map.emplace("cim:TurbLCFB1.ki", &assign_TurbLCFB1_ki);
	assign_map.emplace("cim:TurbLCFB1.kp", &assign_TurbLCFB1_kp);
	assign_map.emplace("cim:TurbLCFB1.mwbase", &assign_TurbLCFB1_mwbase);
	assign_map.emplace("cim:TurbLCFB1.pbf", &assign_TurbLCFB1_pbf);
	assign_map.emplace("cim:TurbLCFB1.pmwset", &assign_TurbLCFB1_pmwset);
	assign_map.emplace("cim:TurbLCFB1.speedReferenceGovernor", &assign_TurbLCFB1_speedReferenceGovernor);
	assign_map.emplace("cim:TurbLCFB1.tpelec", &assign_TurbLCFB1_tpelec);
}

void TurbLCFB1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void TurbLCFB1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineLoadControllerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:TurbLCFB1.db", &get_TurbLCFB1_db);
	get_map.emplace("cim:TurbLCFB1.emax", &get_TurbLCFB1_emax);
	get_map.emplace("cim:TurbLCFB1.fb", &get_TurbLCFB1_fb);
	get_map.emplace("cim:TurbLCFB1.fbf", &get_TurbLCFB1_fbf);
	get_map.emplace("cim:TurbLCFB1.irmax", &get_TurbLCFB1_irmax);
	get_map.emplace("cim:TurbLCFB1.ki", &get_TurbLCFB1_ki);
	get_map.emplace("cim:TurbLCFB1.kp", &get_TurbLCFB1_kp);
	get_map.emplace("cim:TurbLCFB1.mwbase", &get_TurbLCFB1_mwbase);
	get_map.emplace("cim:TurbLCFB1.pbf", &get_TurbLCFB1_pbf);
	get_map.emplace("cim:TurbLCFB1.pmwset", &get_TurbLCFB1_pmwset);
	get_map.emplace("cim:TurbLCFB1.speedReferenceGovernor", &get_TurbLCFB1_speedReferenceGovernor);
	get_map.emplace("cim:TurbLCFB1.tpelec", &get_TurbLCFB1_tpelec);
}

void TurbLCFB1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineLoadControllerDynamics::addClassGetFnsToMap(get_map);
}

void TurbLCFB1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineLoadControllerDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner TurbLCFB1::declare()
{
	return BaseClassDefiner(TurbLCFB1::addConstructToMap, TurbLCFB1::addPrimitiveAssignFnsToMap, TurbLCFB1::addClassAssignFnsToMap, TurbLCFB1::debugName);
}

namespace CIMPP
{
	BaseClass* TurbLCFB1_factory()
	{
		return new TurbLCFB1;
	}
}
