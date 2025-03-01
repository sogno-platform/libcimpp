/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RemoteInputSignal.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
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

using namespace CIMPP;

RemoteInputSignal::RemoteInputSignal() : DiscontinuousExcitationControlDynamics(nullptr), PFVArControllerType1Dynamics(nullptr), PowerSystemStabilizerDynamics(nullptr), Terminal(nullptr), UnderexcitationLimiterDynamics(nullptr), VoltageCompensatorDynamics(nullptr), WindPlantDynamics(nullptr), WindTurbineType1or2Dynamics(nullptr), WindTurbineType3or4Dynamics(nullptr) {}
RemoteInputSignal::~RemoteInputSignal() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:RemoteInputSignal.DiscontinuousExcitationControlDynamics", { CGMESProfile::DY, } },
	{ "cim:RemoteInputSignal.PFVArControllerType1Dynamics", { CGMESProfile::DY, } },
	{ "cim:RemoteInputSignal.PowerSystemStabilizerDynamics", { CGMESProfile::DY, } },
	{ "cim:RemoteInputSignal.Terminal", { CGMESProfile::DY, } },
	{ "cim:RemoteInputSignal.UnderexcitationLimiterDynamics", { CGMESProfile::DY, } },
	{ "cim:RemoteInputSignal.VoltageCompensatorDynamics", { CGMESProfile::DY, } },
	{ "cim:RemoteInputSignal.WindPlantDynamics", { CGMESProfile::DY, } },
	{ "cim:RemoteInputSignal.WindTurbineType1or2Dynamics", { CGMESProfile::DY, } },
	{ "cim:RemoteInputSignal.WindTurbineType3or4Dynamics", { CGMESProfile::DY, } },
	{ "cim:RemoteInputSignal.remoteSignalType", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
RemoteInputSignal::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
RemoteInputSignal::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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

bool assign_RemoteInputSignal_remoteSignalType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->remoteSignalType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_RemoteInputSignal_DiscontinuousExcitationControlDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const RemoteInputSignal* element = dynamic_cast<const RemoteInputSignal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->DiscontinuousExcitationControlDynamics != 0)
		{
			BaseClass_list.push_back(element->DiscontinuousExcitationControlDynamics);
			return true;
		}
	}
	return false;
}

bool get_RemoteInputSignal_PFVArControllerType1Dynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const RemoteInputSignal* element = dynamic_cast<const RemoteInputSignal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->PFVArControllerType1Dynamics != 0)
		{
			BaseClass_list.push_back(element->PFVArControllerType1Dynamics);
			return true;
		}
	}
	return false;
}

bool get_RemoteInputSignal_PowerSystemStabilizerDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const RemoteInputSignal* element = dynamic_cast<const RemoteInputSignal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->PowerSystemStabilizerDynamics != 0)
		{
			BaseClass_list.push_back(element->PowerSystemStabilizerDynamics);
			return true;
		}
	}
	return false;
}

bool get_RemoteInputSignal_Terminal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const RemoteInputSignal* element = dynamic_cast<const RemoteInputSignal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Terminal != 0)
		{
			BaseClass_list.push_back(element->Terminal);
			return true;
		}
	}
	return false;
}

bool get_RemoteInputSignal_UnderexcitationLimiterDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const RemoteInputSignal* element = dynamic_cast<const RemoteInputSignal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->UnderexcitationLimiterDynamics != 0)
		{
			BaseClass_list.push_back(element->UnderexcitationLimiterDynamics);
			return true;
		}
	}
	return false;
}

bool get_RemoteInputSignal_VoltageCompensatorDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const RemoteInputSignal* element = dynamic_cast<const RemoteInputSignal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->VoltageCompensatorDynamics != 0)
		{
			BaseClass_list.push_back(element->VoltageCompensatorDynamics);
			return true;
		}
	}
	return false;
}




bool get_RemoteInputSignal_remoteSignalType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RemoteInputSignal* element = dynamic_cast<const RemoteInputSignal*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->remoteSignalType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char RemoteInputSignal::debugName[] = "RemoteInputSignal";
const char* RemoteInputSignal::debugString() const
{
	return RemoteInputSignal::debugName;
}

void RemoteInputSignal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:RemoteInputSignal", &RemoteInputSignal_factory);
}

void RemoteInputSignal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:RemoteInputSignal.remoteSignalType", &assign_RemoteInputSignal_remoteSignalType);
}

void RemoteInputSignal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:RemoteInputSignal.DiscontinuousExcitationControlDynamics", &assign_RemoteInputSignal_DiscontinuousExcitationControlDynamics);
	assign_map.emplace("cim:RemoteInputSignal.PFVArControllerType1Dynamics", &assign_RemoteInputSignal_PFVArControllerType1Dynamics);
	assign_map.emplace("cim:RemoteInputSignal.PowerSystemStabilizerDynamics", &assign_RemoteInputSignal_PowerSystemStabilizerDynamics);
	assign_map.emplace("cim:RemoteInputSignal.Terminal", &assign_RemoteInputSignal_Terminal);
	assign_map.emplace("cim:RemoteInputSignal.UnderexcitationLimiterDynamics", &assign_RemoteInputSignal_UnderexcitationLimiterDynamics);
	assign_map.emplace("cim:RemoteInputSignal.VoltageCompensatorDynamics", &assign_RemoteInputSignal_VoltageCompensatorDynamics);
	assign_map.emplace("cim:RemoteInputSignal.WindPlantDynamics", &assign_RemoteInputSignal_WindPlantDynamics);
	assign_map.emplace("cim:RemoteInputSignal.WindTurbineType1or2Dynamics", &assign_RemoteInputSignal_WindTurbineType1or2Dynamics);
	assign_map.emplace("cim:RemoteInputSignal.WindTurbineType3or4Dynamics", &assign_RemoteInputSignal_WindTurbineType3or4Dynamics);
}

void RemoteInputSignal::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void RemoteInputSignal::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:RemoteInputSignal.DiscontinuousExcitationControlDynamics", &get_RemoteInputSignal_DiscontinuousExcitationControlDynamics);
	get_map.emplace("cim:RemoteInputSignal.PFVArControllerType1Dynamics", &get_RemoteInputSignal_PFVArControllerType1Dynamics);
	get_map.emplace("cim:RemoteInputSignal.PowerSystemStabilizerDynamics", &get_RemoteInputSignal_PowerSystemStabilizerDynamics);
	get_map.emplace("cim:RemoteInputSignal.Terminal", &get_RemoteInputSignal_Terminal);
	get_map.emplace("cim:RemoteInputSignal.UnderexcitationLimiterDynamics", &get_RemoteInputSignal_UnderexcitationLimiterDynamics);
	get_map.emplace("cim:RemoteInputSignal.VoltageCompensatorDynamics", &get_RemoteInputSignal_VoltageCompensatorDynamics);
}

void RemoteInputSignal::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:RemoteInputSignal.remoteSignalType", &get_RemoteInputSignal_remoteSignalType);
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
