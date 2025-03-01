/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TurbineLoadControllerUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

TurbineLoadControllerUserDefined::TurbineLoadControllerUserDefined() {}
TurbineLoadControllerUserDefined::~TurbineLoadControllerUserDefined() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:TurbineLoadControllerUserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:TurbineLoadControllerUserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
TurbineLoadControllerUserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
TurbineLoadControllerUserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineLoadControllerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined(BaseClass*, BaseClass*);
bool assign_TurbineLoadControllerUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TurbineLoadControllerUserDefined* element = dynamic_cast<TurbineLoadControllerUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TurbineLoadControllerUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbineLoadControllerUserDefined* element = dynamic_cast<TurbineLoadControllerUserDefined*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->proprietary;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_TurbineLoadControllerUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbineLoadControllerUserDefined* element = dynamic_cast<const TurbineLoadControllerUserDefined*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char TurbineLoadControllerUserDefined::debugName[] = "TurbineLoadControllerUserDefined";
const char* TurbineLoadControllerUserDefined::debugString() const
{
	return TurbineLoadControllerUserDefined::debugName;
}

void TurbineLoadControllerUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:TurbineLoadControllerUserDefined", &TurbineLoadControllerUserDefined_factory);
}

void TurbineLoadControllerUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:TurbineLoadControllerUserDefined.proprietary", &assign_TurbineLoadControllerUserDefined_proprietary);
}

void TurbineLoadControllerUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:TurbineLoadControllerUserDefined.ProprietaryParameterDynamics", &assign_TurbineLoadControllerUserDefined_ProprietaryParameterDynamics);
}

void TurbineLoadControllerUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineLoadControllerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:TurbineLoadControllerUserDefined.proprietary", &get_TurbineLoadControllerUserDefined_proprietary);
}

void TurbineLoadControllerUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineLoadControllerDynamics::addClassGetFnsToMap(get_map);
}

void TurbineLoadControllerUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineLoadControllerDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner TurbineLoadControllerUserDefined::declare()
{
	return BaseClassDefiner(TurbineLoadControllerUserDefined::addConstructToMap, TurbineLoadControllerUserDefined::addPrimitiveAssignFnsToMap, TurbineLoadControllerUserDefined::addClassAssignFnsToMap, TurbineLoadControllerUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* TurbineLoadControllerUserDefined_factory()
	{
		return new TurbineLoadControllerUserDefined;
	}
}
