#include <sstream>
#include "Curve.hpp"
#include "VsCapabilityCurve.hpp"

#include "VsConverter.hpp"

using namespace CIMPP;

VsCapabilityCurve::VsCapabilityCurve() {};

VsCapabilityCurve::~VsCapabilityCurve() {};


bool assign_VsCapabilityCurve_VsConverterDCSides(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(VsCapabilityCurve* element = dynamic_cast<VsCapabilityCurve*>(BaseClass_ptr1)) {
		if(dynamic_cast<VsConverter*>(BaseClass_ptr2) != nullptr) {
                        element->VsConverterDCSides.push_back(dynamic_cast<VsConverter*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}



namespace CIMPP {
	BaseClass* VsCapabilityCurve_factory() {
		return new VsCapabilityCurve;
	}
}

void VsCapabilityCurve::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:VsCapabilityCurve"), &VsCapabilityCurve_factory));
}

void VsCapabilityCurve::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void VsCapabilityCurve::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:VsCapabilityCurve.VsConverterDCSides"), &assign_VsCapabilityCurve_VsConverterDCSides));
}

const char VsCapabilityCurve::debugName[] = "VsCapabilityCurve";
const char* VsCapabilityCurve::debugString()
{
	return VsCapabilityCurve::debugName;
}

const BaseClassDefiner VsCapabilityCurve::declare()
{
	return BaseClassDefiner(VsCapabilityCurve::addConstructToMap, VsCapabilityCurve::addPrimitiveAssignFnsToMap, VsCapabilityCurve::addClassAssignFnsToMap, VsCapabilityCurve::debugName);
}


