/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcCZ.hpp"

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
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcCZ::ExcCZ() {};
ExcCZ::~ExcCZ() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcCZ.efdmax", { CGMESProfile::DY, } },
	{ "cim:ExcCZ.efdmin", { CGMESProfile::DY, } },
	{ "cim:ExcCZ.ka", { CGMESProfile::DY, } },
	{ "cim:ExcCZ.ke", { CGMESProfile::DY, } },
	{ "cim:ExcCZ.kp", { CGMESProfile::DY, } },
	{ "cim:ExcCZ.ta", { CGMESProfile::DY, } },
	{ "cim:ExcCZ.tc", { CGMESProfile::DY, } },
	{ "cim:ExcCZ.te", { CGMESProfile::DY, } },
	{ "cim:ExcCZ.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcCZ.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcCZ::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcCZ::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcCZ_efdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1))
	{
		buffer >> element->efdmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcCZ_efdmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1))
	{
		buffer >> element->efdmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcCZ_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcCZ_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcCZ_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcCZ_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcCZ_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcCZ_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcCZ_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcCZ_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcCZ_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1))
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

bool get_ExcCZ_efdmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1))
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

bool get_ExcCZ_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1))
	{
		buffer << element->ka;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcCZ_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1))
	{
		buffer << element->ke;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcCZ_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1))
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

bool get_ExcCZ_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1))
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

bool get_ExcCZ_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1))
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

bool get_ExcCZ_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1))
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

bool get_ExcCZ_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1))
	{
		buffer << element->vrmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcCZ_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1))
	{
		buffer << element->vrmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char ExcCZ::debugName[] = "ExcCZ";
const char* ExcCZ::debugString() const
{
	return ExcCZ::debugName;
}

void ExcCZ::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcCZ"), &ExcCZ_factory));
}

void ExcCZ::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.efdmax"), &assign_ExcCZ_efdmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.efdmin"), &assign_ExcCZ_efdmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.ka"), &assign_ExcCZ_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.ke"), &assign_ExcCZ_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.kp"), &assign_ExcCZ_kp));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.ta"), &assign_ExcCZ_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.tc"), &assign_ExcCZ_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.te"), &assign_ExcCZ_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.vrmax"), &assign_ExcCZ_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcCZ.vrmin"), &assign_ExcCZ_vrmin));
}

void ExcCZ::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcCZ::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcCZ.efdmax", &get_ExcCZ_efdmax);
	get_map.emplace("cim:ExcCZ.efdmin", &get_ExcCZ_efdmin);
	get_map.emplace("cim:ExcCZ.ka", &get_ExcCZ_ka);
	get_map.emplace("cim:ExcCZ.ke", &get_ExcCZ_ke);
	get_map.emplace("cim:ExcCZ.kp", &get_ExcCZ_kp);
	get_map.emplace("cim:ExcCZ.ta", &get_ExcCZ_ta);
	get_map.emplace("cim:ExcCZ.tc", &get_ExcCZ_tc);
	get_map.emplace("cim:ExcCZ.te", &get_ExcCZ_te);
	get_map.emplace("cim:ExcCZ.vrmax", &get_ExcCZ_vrmax);
	get_map.emplace("cim:ExcCZ.vrmin", &get_ExcCZ_vrmin);
}

void ExcCZ::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcCZ::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcCZ::declare()
{
	return BaseClassDefiner(ExcCZ::addConstructToMap, ExcCZ::addPrimitiveAssignFnsToMap, ExcCZ::addClassAssignFnsToMap, ExcCZ::debugName);
}

namespace CIMPP
{
	BaseClass* ExcCZ_factory()
	{
		return new ExcCZ;
	}
}
