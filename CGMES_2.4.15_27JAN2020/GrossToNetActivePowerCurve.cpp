/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GrossToNetActivePowerCurve.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "GeneratingUnit.hpp"

using namespace CIMPP;

GrossToNetActivePowerCurve::GrossToNetActivePowerCurve() : GeneratingUnit(nullptr) {}
GrossToNetActivePowerCurve::~GrossToNetActivePowerCurve() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GrossToNetActivePowerCurve.GeneratingUnit", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
GrossToNetActivePowerCurve::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GrossToNetActivePowerCurve::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Curve::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GeneratingUnit_GrossToNetActivePowerCurves(BaseClass*, BaseClass*);
bool assign_GrossToNetActivePowerCurve_GeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	GrossToNetActivePowerCurve* element = dynamic_cast<GrossToNetActivePowerCurve*>(BaseClass_ptr1);
	GeneratingUnit* element2 = dynamic_cast<GeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->GeneratingUnit != element2)
		{
			element->GeneratingUnit = element2;
			return assign_GeneratingUnit_GrossToNetActivePowerCurves(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_GrossToNetActivePowerCurve_GeneratingUnit(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const GrossToNetActivePowerCurve* element = dynamic_cast<const GrossToNetActivePowerCurve*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->GeneratingUnit != 0)
		{
			BaseClass_list.push_back(element->GeneratingUnit);
			return true;
		}
	}
	return false;
}

const char GrossToNetActivePowerCurve::debugName[] = "GrossToNetActivePowerCurve";
const char* GrossToNetActivePowerCurve::debugString() const
{
	return GrossToNetActivePowerCurve::debugName;
}

void GrossToNetActivePowerCurve::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GrossToNetActivePowerCurve", &GrossToNetActivePowerCurve_factory);
}

void GrossToNetActivePowerCurve::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void GrossToNetActivePowerCurve::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:GrossToNetActivePowerCurve.GeneratingUnit", &assign_GrossToNetActivePowerCurve_GeneratingUnit);
}

void GrossToNetActivePowerCurve::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Curve::addPrimitiveGetFnsToMap(get_map);
}

void GrossToNetActivePowerCurve::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Curve::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:GrossToNetActivePowerCurve.GeneratingUnit", &get_GrossToNetActivePowerCurve_GeneratingUnit);
}

void GrossToNetActivePowerCurve::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Curve::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GrossToNetActivePowerCurve::declare()
{
	return BaseClassDefiner(GrossToNetActivePowerCurve::addConstructToMap, GrossToNetActivePowerCurve::addPrimitiveAssignFnsToMap, GrossToNetActivePowerCurve::addClassAssignFnsToMap, GrossToNetActivePowerCurve::debugName);
}

namespace CIMPP
{
	BaseClass* GrossToNetActivePowerCurve_factory()
	{
		return new GrossToNetActivePowerCurve;
	}
}
