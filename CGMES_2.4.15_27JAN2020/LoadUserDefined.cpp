/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

LoadUserDefined::LoadUserDefined() {};
LoadUserDefined::~LoadUserDefined() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:LoadUserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:LoadUserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
LoadUserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
LoadUserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = LoadDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_LoadUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadUserDefined* element = dynamic_cast<LoadUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_LoadUserDefined(BaseClass*, BaseClass*);
bool assign_LoadUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadUserDefined* element = dynamic_cast<LoadUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_LoadUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_LoadUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const LoadUserDefined* element = dynamic_cast<const LoadUserDefined*>(BaseClass_ptr1))
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



const char LoadUserDefined::debugName[] = "LoadUserDefined";
const char* LoadUserDefined::debugString() const
{
	return LoadUserDefined::debugName;
}

void LoadUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:LoadUserDefined"), &LoadUserDefined_factory));
}

void LoadUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:LoadUserDefined.proprietary"), &assign_LoadUserDefined_proprietary));
}

void LoadUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:LoadUserDefined.ProprietaryParameterDynamics"), &assign_LoadUserDefined_ProprietaryParameterDynamics));
}

void LoadUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:LoadUserDefined.proprietary", &get_LoadUserDefined_proprietary);
}

void LoadUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	LoadDynamics::addClassGetFnsToMap(get_map);
}

void LoadUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner LoadUserDefined::declare()
{
	return BaseClassDefiner(LoadUserDefined::addConstructToMap, LoadUserDefined::addPrimitiveAssignFnsToMap, LoadUserDefined::addClassAssignFnsToMap, LoadUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* LoadUserDefined_factory()
	{
		return new LoadUserDefined;
	}
}
