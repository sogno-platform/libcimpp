/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TurbineGovernorUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

TurbineGovernorUserDefined::TurbineGovernorUserDefined() {};
TurbineGovernorUserDefined::~TurbineGovernorUserDefined() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:TurbineGovernorUserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:TurbineGovernorUserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
TurbineGovernorUserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
TurbineGovernorUserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_TurbineGovernorUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TurbineGovernorUserDefined* element = dynamic_cast<TurbineGovernorUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_TurbineGovernorUserDefined(BaseClass*, BaseClass*);
bool assign_TurbineGovernorUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TurbineGovernorUserDefined* element = dynamic_cast<TurbineGovernorUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_TurbineGovernorUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_TurbineGovernorUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TurbineGovernorUserDefined* element = dynamic_cast<const TurbineGovernorUserDefined*>(BaseClass_ptr1))
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



const char TurbineGovernorUserDefined::debugName[] = "TurbineGovernorUserDefined";
const char* TurbineGovernorUserDefined::debugString() const
{
	return TurbineGovernorUserDefined::debugName;
}

void TurbineGovernorUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TurbineGovernorUserDefined"), &TurbineGovernorUserDefined_factory));
}

void TurbineGovernorUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TurbineGovernorUserDefined.proprietary"), &assign_TurbineGovernorUserDefined_proprietary));
}

void TurbineGovernorUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TurbineGovernorUserDefined.ProprietaryParameterDynamics"), &assign_TurbineGovernorUserDefined_ProprietaryParameterDynamics));
}

void TurbineGovernorUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:TurbineGovernorUserDefined.proprietary", &get_TurbineGovernorUserDefined_proprietary);
}

void TurbineGovernorUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void TurbineGovernorUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner TurbineGovernorUserDefined::declare()
{
	return BaseClassDefiner(TurbineGovernorUserDefined::addConstructToMap, TurbineGovernorUserDefined::addPrimitiveAssignFnsToMap, TurbineGovernorUserDefined::addClassAssignFnsToMap, TurbineGovernorUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* TurbineGovernorUserDefined_factory()
	{
		return new TurbineGovernorUserDefined;
	}
}
