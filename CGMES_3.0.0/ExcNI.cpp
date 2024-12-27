/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcNI.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcNI::ExcNI() {};
ExcNI::~ExcNI() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcNI.busFedSelector", { CGMESProfile::DY, } },
	{ "cim:ExcNI.ka", { CGMESProfile::DY, } },
	{ "cim:ExcNI.kf", { CGMESProfile::DY, } },
	{ "cim:ExcNI.r", { CGMESProfile::DY, } },
	{ "cim:ExcNI.ta", { CGMESProfile::DY, } },
	{ "cim:ExcNI.tf1", { CGMESProfile::DY, } },
	{ "cim:ExcNI.tf2", { CGMESProfile::DY, } },
	{ "cim:ExcNI.tr", { CGMESProfile::DY, } },
	{ "cim:ExcNI.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcNI.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcNI::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcNI::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcNI_busFedSelector(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->busFedSelector;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_tf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->tf1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_tf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->tf2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_tr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->tr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcNI_busFedSelector(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1))
	{
		buffer << element->busFedSelector;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcNI_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1))
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

bool get_ExcNI_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1))
	{
		buffer << element->kf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcNI_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1))
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

bool get_ExcNI_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1))
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

bool get_ExcNI_tf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1))
	{
		buffer << element->tf1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcNI_tf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1))
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

bool get_ExcNI_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1))
	{
		buffer << element->tr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcNI_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1))
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

bool get_ExcNI_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1))
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



const char ExcNI::debugName[] = "ExcNI";
const char* ExcNI::debugString() const
{
	return ExcNI::debugName;
}

void ExcNI::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcNI"), &ExcNI_factory));
}

void ExcNI::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.busFedSelector"), &assign_ExcNI_busFedSelector));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.ka"), &assign_ExcNI_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.kf"), &assign_ExcNI_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.r"), &assign_ExcNI_r));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.ta"), &assign_ExcNI_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.tf1"), &assign_ExcNI_tf1));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.tf2"), &assign_ExcNI_tf2));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.tr"), &assign_ExcNI_tr));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.vrmax"), &assign_ExcNI_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.vrmin"), &assign_ExcNI_vrmin));
}

void ExcNI::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcNI::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcNI.busFedSelector", &get_ExcNI_busFedSelector);
	get_map.emplace("cim:ExcNI.ka", &get_ExcNI_ka);
	get_map.emplace("cim:ExcNI.kf", &get_ExcNI_kf);
	get_map.emplace("cim:ExcNI.r", &get_ExcNI_r);
	get_map.emplace("cim:ExcNI.ta", &get_ExcNI_ta);
	get_map.emplace("cim:ExcNI.tf1", &get_ExcNI_tf1);
	get_map.emplace("cim:ExcNI.tf2", &get_ExcNI_tf2);
	get_map.emplace("cim:ExcNI.tr", &get_ExcNI_tr);
	get_map.emplace("cim:ExcNI.vrmax", &get_ExcNI_vrmax);
	get_map.emplace("cim:ExcNI.vrmin", &get_ExcNI_vrmin);
}

void ExcNI::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcNI::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcNI::declare()
{
	return BaseClassDefiner(ExcNI::addConstructToMap, ExcNI::addPrimitiveAssignFnsToMap, ExcNI::addClassAssignFnsToMap, ExcNI::debugName);
}

namespace CIMPP
{
	BaseClass* ExcNI_factory()
	{
		return new ExcNI;
	}
}
