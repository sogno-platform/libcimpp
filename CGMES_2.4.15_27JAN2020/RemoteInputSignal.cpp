/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RemoteInputSignal.hpp"

#include <algorithm>
#include <sstream>

#include "DiscontinuousExcitationControlDynamics.hpp"
#include "PFVArControllerType1Dynamics.hpp"
#include "PowerSystemStabilizerDynamics.hpp"
#include "Terminal.hpp"
#include "UnderexcitationLimiterDynamics.hpp"
#include "VoltageCompensatorDynamics.hpp"
#include "WindPlantDynamics.hpp"
#include "WindTurbineType1or2Dynamics.hpp"
#include "WindTurbineType3or4Dynamics.hpp"
#include "RemoteSignalKind.hpp"

using namespace CIMPP;

RemoteInputSignal::RemoteInputSignal() : DiscontinuousExcitationControlDynamics(nullptr), PFVArControllerType1Dynamics(nullptr), PowerSystemStabilizerDynamics(nullptr), Terminal(nullptr), UnderexcitationLimiterDynamics(nullptr), VoltageCompensatorDynamics(nullptr), WindPlantDynamics(nullptr), WindTurbineType1or2Dynamics(nullptr), WindTurbineType3or4Dynamics(nullptr) {};
RemoteInputSignal::~RemoteInputSignal() {};











bool assign_RemoteInputSignal_remoteSignalType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1))
	{
		buffer >> element->remoteSignalType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_DiscontinuousExcitationControlDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1);
	DiscontinuousExcitationControlDynamics* element2 = dynamic_cast<DiscontinuousExcitationControlDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DiscontinuousExcitationControlDynamics != element2)
		{
			element->DiscontinuousExcitationControlDynamics = element2;
			return assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PFVArControllerType1Dynamics_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_PFVArControllerType1Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1);
	PFVArControllerType1Dynamics* element2 = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PFVArControllerType1Dynamics != element2)
		{
			element->PFVArControllerType1Dynamics = element2;
			return assign_PFVArControllerType1Dynamics_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PowerSystemStabilizerDynamics_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_PowerSystemStabilizerDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1);
	PowerSystemStabilizerDynamics* element2 = dynamic_cast<PowerSystemStabilizerDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PowerSystemStabilizerDynamics != element2)
		{
			element->PowerSystemStabilizerDynamics = element2;
			return assign_PowerSystemStabilizerDynamics_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Terminal_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Terminal != element2)
		{
			element->Terminal = element2;
			return assign_Terminal_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_UnderexcitationLimiterDynamics_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_UnderexcitationLimiterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1);
	UnderexcitationLimiterDynamics* element2 = dynamic_cast<UnderexcitationLimiterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->UnderexcitationLimiterDynamics != element2)
		{
			element->UnderexcitationLimiterDynamics = element2;
			return assign_UnderexcitationLimiterDynamics_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VoltageCompensatorDynamics_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_VoltageCompensatorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1);
	VoltageCompensatorDynamics* element2 = dynamic_cast<VoltageCompensatorDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VoltageCompensatorDynamics != element2)
		{
			element->VoltageCompensatorDynamics = element2;
			return assign_VoltageCompensatorDynamics_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPlantDynamics_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_WindPlantDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1);
	WindPlantDynamics* element2 = dynamic_cast<WindPlantDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantDynamics != element2)
		{
			element->WindPlantDynamics = element2;
			return assign_WindPlantDynamics_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType1or2Dynamics_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_WindTurbineType1or2Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1);
	WindTurbineType1or2Dynamics* element2 = dynamic_cast<WindTurbineType1or2Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType1or2Dynamics != element2)
		{
			element->WindTurbineType1or2Dynamics = element2;
			return assign_WindTurbineType1or2Dynamics_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3or4Dynamics_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_WindTurbineType3or4Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1);
	WindTurbineType3or4Dynamics* element2 = dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4Dynamics != element2)
		{
			element->WindTurbineType3or4Dynamics = element2;
			return assign_WindTurbineType3or4Dynamics_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char RemoteInputSignal::debugName[] = "RemoteInputSignal";
const char* RemoteInputSignal::debugString() const
{
	return RemoteInputSignal::debugName;
}

void RemoteInputSignal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:RemoteInputSignal"), &RemoteInputSignal_factory));
}

void RemoteInputSignal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.remoteSignalType"), &assign_RemoteInputSignal_remoteSignalType));
}

void RemoteInputSignal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.DiscontinuousExcitationControlDynamics"), &assign_RemoteInputSignal_DiscontinuousExcitationControlDynamics));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.PFVArControllerType1Dynamics"), &assign_RemoteInputSignal_PFVArControllerType1Dynamics));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.PowerSystemStabilizerDynamics"), &assign_RemoteInputSignal_PowerSystemStabilizerDynamics));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.Terminal"), &assign_RemoteInputSignal_Terminal));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.UnderexcitationLimiterDynamics"), &assign_RemoteInputSignal_UnderexcitationLimiterDynamics));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.VoltageCompensatorDynamics"), &assign_RemoteInputSignal_VoltageCompensatorDynamics));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.WindPlantDynamics"), &assign_RemoteInputSignal_WindPlantDynamics));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.WindTurbineType1or2Dynamics"), &assign_RemoteInputSignal_WindTurbineType1or2Dynamics));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.WindTurbineType3or4Dynamics"), &assign_RemoteInputSignal_WindTurbineType3or4Dynamics));
}

const BaseClassDefiner RemoteInputSignal::declare()
{
	return BaseClassDefiner(RemoteInputSignal::addConstructToMap, RemoteInputSignal::addPrimitiveAssignFnsToMap, RemoteInputSignal::addClassAssignFnsToMap, RemoteInputSignal::debugName);
}

namespace CIMPP
{
	BaseClass* RemoteInputSignal_factory()
	{
		return new RemoteInputSignal;
	}
}
