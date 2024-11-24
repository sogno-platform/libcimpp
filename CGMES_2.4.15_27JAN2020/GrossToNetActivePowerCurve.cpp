/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GrossToNetActivePowerCurve.hpp"

#include <algorithm>
#include <sstream>

#include "GeneratingUnit.hpp"

using namespace CIMPP;

GrossToNetActivePowerCurve::GrossToNetActivePowerCurve() : GeneratingUnit(nullptr) {};
GrossToNetActivePowerCurve::~GrossToNetActivePowerCurve() {};




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

const char GrossToNetActivePowerCurve::debugName[] = "GrossToNetActivePowerCurve";
const char* GrossToNetActivePowerCurve::debugString() const
{
	return GrossToNetActivePowerCurve::debugName;
}

void GrossToNetActivePowerCurve::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GrossToNetActivePowerCurve"), &GrossToNetActivePowerCurve_factory));
}

void GrossToNetActivePowerCurve::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void GrossToNetActivePowerCurve::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GrossToNetActivePowerCurve.GeneratingUnit"), &assign_GrossToNetActivePowerCurve_GeneratingUnit));
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
