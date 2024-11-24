/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ReactiveCapabilityCurve.hpp"

#include <algorithm>
#include <sstream>

#include "EquivalentInjection.hpp"
#include "SynchronousMachine.hpp"

using namespace CIMPP;

ReactiveCapabilityCurve::ReactiveCapabilityCurve() {};
ReactiveCapabilityCurve::~ReactiveCapabilityCurve() {};





bool assign_EquivalentInjection_ReactiveCapabilityCurve(BaseClass*, BaseClass*);
bool assign_ReactiveCapabilityCurve_EquivalentInjection(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ReactiveCapabilityCurve* element = dynamic_cast<ReactiveCapabilityCurve*>(BaseClass_ptr1);
	EquivalentInjection* element2 = dynamic_cast<EquivalentInjection*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->EquivalentInjection.begin(), element->EquivalentInjection.end(), element2) == element->EquivalentInjection.end())
		{
			element->EquivalentInjection.push_back(element2);
			return assign_EquivalentInjection_ReactiveCapabilityCurve(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachine_InitialReactiveCapabilityCurve(BaseClass*, BaseClass*);
bool assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ReactiveCapabilityCurve* element = dynamic_cast<ReactiveCapabilityCurve*>(BaseClass_ptr1);
	SynchronousMachine* element2 = dynamic_cast<SynchronousMachine*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->InitiallyUsedBySynchronousMachines.begin(), element->InitiallyUsedBySynchronousMachines.end(), element2) == element->InitiallyUsedBySynchronousMachines.end())
		{
			element->InitiallyUsedBySynchronousMachines.push_back(element2);
			return assign_SynchronousMachine_InitialReactiveCapabilityCurve(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char ReactiveCapabilityCurve::debugName[] = "ReactiveCapabilityCurve";
const char* ReactiveCapabilityCurve::debugString() const
{
	return ReactiveCapabilityCurve::debugName;
}

void ReactiveCapabilityCurve::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ReactiveCapabilityCurve"), &ReactiveCapabilityCurve_factory));
}

void ReactiveCapabilityCurve::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ReactiveCapabilityCurve::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ReactiveCapabilityCurve.EquivalentInjection"), &assign_ReactiveCapabilityCurve_EquivalentInjection));
	assign_map.insert(std::make_pair(std::string("cim:ReactiveCapabilityCurve.InitiallyUsedBySynchronousMachines"), &assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines));
}

const BaseClassDefiner ReactiveCapabilityCurve::declare()
{
	return BaseClassDefiner(ReactiveCapabilityCurve::addConstructToMap, ReactiveCapabilityCurve::addPrimitiveAssignFnsToMap, ReactiveCapabilityCurve::addClassAssignFnsToMap, ReactiveCapabilityCurve::debugName);
}

namespace CIMPP
{
	BaseClass* ReactiveCapabilityCurve_factory()
	{
		return new ReactiveCapabilityCurve;
	}
}
