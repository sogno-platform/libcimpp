/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SVCUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

SVCUserDefined::SVCUserDefined() {}
SVCUserDefined::~SVCUserDefined() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SVCUserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:SVCUserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
SVCUserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SVCUserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = StaticVarCompensatorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ProprietaryParameterDynamics_SVCUserDefined(BaseClass*, BaseClass*);
bool assign_SVCUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SVCUserDefined* element = dynamic_cast<SVCUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_SVCUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SVCUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SVCUserDefined* element = dynamic_cast<SVCUserDefined*>(BaseClass_ptr1);
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


bool get_SVCUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SVCUserDefined* element = dynamic_cast<const SVCUserDefined*>(BaseClass_ptr1);
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

const char SVCUserDefined::debugName[] = "SVCUserDefined";
const char* SVCUserDefined::debugString() const
{
	return SVCUserDefined::debugName;
}

void SVCUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:SVCUserDefined", &SVCUserDefined_factory);
}

void SVCUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:SVCUserDefined.proprietary", &assign_SVCUserDefined_proprietary);
}

void SVCUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:SVCUserDefined.ProprietaryParameterDynamics", &assign_SVCUserDefined_ProprietaryParameterDynamics);
}

void SVCUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	StaticVarCompensatorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:SVCUserDefined.proprietary", &get_SVCUserDefined_proprietary);
}

void SVCUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	StaticVarCompensatorDynamics::addClassGetFnsToMap(get_map);
}

void SVCUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	StaticVarCompensatorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SVCUserDefined::declare()
{
	return BaseClassDefiner(SVCUserDefined::addConstructToMap, SVCUserDefined::addPrimitiveAssignFnsToMap, SVCUserDefined::addClassAssignFnsToMap, SVCUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* SVCUserDefined_factory()
	{
		return new SVCUserDefined;
	}
}
