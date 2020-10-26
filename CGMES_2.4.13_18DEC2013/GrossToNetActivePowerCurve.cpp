#include <sstream>
#include "Curve.hpp"
#include "GrossToNetActivePowerCurve.hpp"

#include "GeneratingUnit.hpp"

using namespace CIMPP;

GrossToNetActivePowerCurve::GrossToNetActivePowerCurve(): GeneratingUnit(nullptr) {};

GrossToNetActivePowerCurve::~GrossToNetActivePowerCurve() {};


bool assign_GeneratingUnit_GrossToNetActivePowerCurves(BaseClass*, BaseClass*);
bool assign_GrossToNetActivePowerCurve_GeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(GrossToNetActivePowerCurve* element = dynamic_cast<GrossToNetActivePowerCurve*>(BaseClass_ptr1)) {
                element->GeneratingUnit = dynamic_cast<GeneratingUnit*>(BaseClass_ptr2);
                if(element->GeneratingUnit != nullptr)
                        return assign_GeneratingUnit_GrossToNetActivePowerCurves(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* GrossToNetActivePowerCurve_factory() {
		return new GrossToNetActivePowerCurve;
	}
}

void GrossToNetActivePowerCurve::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GrossToNetActivePowerCurve"), &GrossToNetActivePowerCurve_factory));
}

void GrossToNetActivePowerCurve::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void GrossToNetActivePowerCurve::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GrossToNetActivePowerCurve.GeneratingUnit"), &assign_GrossToNetActivePowerCurve_GeneratingUnit));
}

const char GrossToNetActivePowerCurve::debugName[] = "GrossToNetActivePowerCurve";
const char* GrossToNetActivePowerCurve::debugString()
{
	return GrossToNetActivePowerCurve::debugName;
}

const BaseClassDefiner GrossToNetActivePowerCurve::declare()
{
	return BaseClassDefiner(GrossToNetActivePowerCurve::addConstructToMap, GrossToNetActivePowerCurve::addPrimitiveAssignFnsToMap, GrossToNetActivePowerCurve::addClassAssignFnsToMap, GrossToNetActivePowerCurve::debugName);
}


