/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcitationSystemUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

ExcitationSystemUserDefined::ExcitationSystemUserDefined() {};
ExcitationSystemUserDefined::~ExcitationSystemUserDefined() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcitationSystemUserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:ExcitationSystemUserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcitationSystemUserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcitationSystemUserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcitationSystemUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcitationSystemUserDefined* element = dynamic_cast<ExcitationSystemUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_ExcitationSystemUserDefined(BaseClass*, BaseClass*);
bool assign_ExcitationSystemUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ExcitationSystemUserDefined* element = dynamic_cast<ExcitationSystemUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_ExcitationSystemUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_ExcitationSystemUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcitationSystemUserDefined* element = dynamic_cast<const ExcitationSystemUserDefined*>(BaseClass_ptr1))
	{
		buffer << element->proprietary;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char ExcitationSystemUserDefined::debugName[] = "ExcitationSystemUserDefined";
const char* ExcitationSystemUserDefined::debugString() const
{
	return ExcitationSystemUserDefined::debugName;
}

void ExcitationSystemUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcitationSystemUserDefined"), &ExcitationSystemUserDefined_factory));
}

void ExcitationSystemUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcitationSystemUserDefined.proprietary"), &assign_ExcitationSystemUserDefined_proprietary));
}

void ExcitationSystemUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcitationSystemUserDefined.ProprietaryParameterDynamics"), &assign_ExcitationSystemUserDefined_ProprietaryParameterDynamics));
}

void ExcitationSystemUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcitationSystemUserDefined.proprietary", &get_ExcitationSystemUserDefined_proprietary);
}

void ExcitationSystemUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcitationSystemUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcitationSystemUserDefined::declare()
{
	return BaseClassDefiner(ExcitationSystemUserDefined::addConstructToMap, ExcitationSystemUserDefined::addPrimitiveAssignFnsToMap, ExcitationSystemUserDefined::addClassAssignFnsToMap, ExcitationSystemUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* ExcitationSystemUserDefined_factory()
	{
		return new ExcitationSystemUserDefined;
	}
}
