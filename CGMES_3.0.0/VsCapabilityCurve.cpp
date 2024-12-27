/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VsCapabilityCurve.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "VsConverter.hpp"

using namespace CIMPP;

VsCapabilityCurve::VsCapabilityCurve() {};
VsCapabilityCurve::~VsCapabilityCurve() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:VsCapabilityCurve.VsConverterDCSides", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
VsCapabilityCurve::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
VsCapabilityCurve::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Curve::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_VsConverter_CapabilityCurve(BaseClass*, BaseClass*);
bool assign_VsCapabilityCurve_VsConverterDCSides(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VsCapabilityCurve* element = dynamic_cast<VsCapabilityCurve*>(BaseClass_ptr1);
	VsConverter* element2 = dynamic_cast<VsConverter*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->VsConverterDCSides.begin(), element->VsConverterDCSides.end(), element2) == element->VsConverterDCSides.end())
		{
			element->VsConverterDCSides.push_back(element2);
			return assign_VsConverter_CapabilityCurve(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char VsCapabilityCurve::debugName[] = "VsCapabilityCurve";
const char* VsCapabilityCurve::debugString() const
{
	return VsCapabilityCurve::debugName;
}

void VsCapabilityCurve::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VsCapabilityCurve"), &VsCapabilityCurve_factory));
}

void VsCapabilityCurve::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void VsCapabilityCurve::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VsCapabilityCurve.VsConverterDCSides"), &assign_VsCapabilityCurve_VsConverterDCSides));
}

void VsCapabilityCurve::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Curve::addPrimitiveGetFnsToMap(get_map);
}

void VsCapabilityCurve::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Curve::addClassGetFnsToMap(get_map);
}

void VsCapabilityCurve::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Curve::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner VsCapabilityCurve::declare()
{
	return BaseClassDefiner(VsCapabilityCurve::addConstructToMap, VsCapabilityCurve::addPrimitiveAssignFnsToMap, VsCapabilityCurve::addClassAssignFnsToMap, VsCapabilityCurve::debugName);
}

namespace CIMPP
{
	BaseClass* VsCapabilityCurve_factory()
	{
		return new VsCapabilityCurve;
	}
}
