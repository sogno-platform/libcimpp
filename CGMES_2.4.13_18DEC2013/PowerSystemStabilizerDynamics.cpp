/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerSystemStabilizerDynamics.hpp"

#include <algorithm>
#include <sstream>

#include "ExcitationSystemDynamics.hpp"
#include "RemoteInputSignal.hpp"

using namespace CIMPP;

PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics() : ExcitationSystemDynamics(nullptr) {};
PowerSystemStabilizerDynamics::~PowerSystemStabilizerDynamics() {};





bool assign_ExcitationSystemDynamics_PowerSystemStabilizerDynamics(BaseClass*, BaseClass*);
bool assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerSystemStabilizerDynamics* element = dynamic_cast<PowerSystemStabilizerDynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_PowerSystemStabilizerDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RemoteInputSignal_PowerSystemStabilizerDynamics(BaseClass*, BaseClass*);
bool assign_PowerSystemStabilizerDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerSystemStabilizerDynamics* element = dynamic_cast<PowerSystemStabilizerDynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->RemoteInputSignal.begin(), element->RemoteInputSignal.end(), element2) == element->RemoteInputSignal.end())
		{
			element->RemoteInputSignal.push_back(element2);
			return assign_RemoteInputSignal_PowerSystemStabilizerDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char PowerSystemStabilizerDynamics::debugName[] = "PowerSystemStabilizerDynamics";
const char* PowerSystemStabilizerDynamics::debugString() const
{
	return PowerSystemStabilizerDynamics::debugName;
}

void PowerSystemStabilizerDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PowerSystemStabilizerDynamics"), &PowerSystemStabilizerDynamics_factory));
}

void PowerSystemStabilizerDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PowerSystemStabilizerDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics"), &assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics));
	assign_map.insert(std::make_pair(std::string("cim:PowerSystemStabilizerDynamics.RemoteInputSignal"), &assign_PowerSystemStabilizerDynamics_RemoteInputSignal));
}

const BaseClassDefiner PowerSystemStabilizerDynamics::declare()
{
	return BaseClassDefiner(PowerSystemStabilizerDynamics::addConstructToMap, PowerSystemStabilizerDynamics::addPrimitiveAssignFnsToMap, PowerSystemStabilizerDynamics::addClassAssignFnsToMap, PowerSystemStabilizerDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* PowerSystemStabilizerDynamics_factory()
	{
		return new PowerSystemStabilizerDynamics;
	}
}
