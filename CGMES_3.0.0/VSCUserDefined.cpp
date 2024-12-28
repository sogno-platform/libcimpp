/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VSCUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

VSCUserDefined::VSCUserDefined() {};
VSCUserDefined::~VSCUserDefined() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:VSCUserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:VSCUserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
VSCUserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
VSCUserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = VSCDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_VSCUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VSCUserDefined* element = dynamic_cast<VSCUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_VSCUserDefined(BaseClass*, BaseClass*);
bool assign_VSCUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VSCUserDefined* element = dynamic_cast<VSCUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_VSCUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_VSCUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VSCUserDefined* element = dynamic_cast<const VSCUserDefined*>(BaseClass_ptr1))
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



const char VSCUserDefined::debugName[] = "VSCUserDefined";
const char* VSCUserDefined::debugString() const
{
	return VSCUserDefined::debugName;
}

void VSCUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VSCUserDefined"), &VSCUserDefined_factory));
}

void VSCUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VSCUserDefined.proprietary"), &assign_VSCUserDefined_proprietary));
}

void VSCUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VSCUserDefined.ProprietaryParameterDynamics"), &assign_VSCUserDefined_ProprietaryParameterDynamics));
}

void VSCUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VSCDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:VSCUserDefined.proprietary", &get_VSCUserDefined_proprietary);
}

void VSCUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	VSCDynamics::addClassGetFnsToMap(get_map);
}

void VSCUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VSCDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner VSCUserDefined::declare()
{
	return BaseClassDefiner(VSCUserDefined::addConstructToMap, VSCUserDefined::addPrimitiveAssignFnsToMap, VSCUserDefined::addClassAssignFnsToMap, VSCUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* VSCUserDefined_factory()
	{
		return new VSCUserDefined;
	}
}
