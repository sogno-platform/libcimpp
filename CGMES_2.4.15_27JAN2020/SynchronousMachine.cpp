/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachine.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ReactiveCapabilityCurve.hpp"
#include "SynchronousMachineDynamics.hpp"

using namespace CIMPP;

SynchronousMachine::SynchronousMachine() : InitialReactiveCapabilityCurve(nullptr), SynchronousMachineDynamics(nullptr) {}
SynchronousMachine::~SynchronousMachine() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SynchronousMachine.InitialReactiveCapabilityCurve", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.SynchronousMachineDynamics", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachine.earthing", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.earthingStarPointR", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.earthingStarPointX", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.ikk", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.maxQ", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.minQ", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.mu", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.operatingMode", { CGMESProfile::SSH, } },
	{ "cim:SynchronousMachine.qPercent", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.r", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.r0", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.r2", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.referencePriority", { CGMESProfile::SSH, } },
	{ "cim:SynchronousMachine.satDirectSubtransX", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.satDirectSyncX", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.satDirectTransX", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.shortCircuitRotorType", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.type", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.voltageRegulationRange", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.x0", { CGMESProfile::EQ, } },
	{ "cim:SynchronousMachine.x2", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
SynchronousMachine::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SynchronousMachine::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = RotatingMachine::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines(BaseClass*, BaseClass*);
bool assign_SynchronousMachine_InitialReactiveCapabilityCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	ReactiveCapabilityCurve* element2 = dynamic_cast<ReactiveCapabilityCurve*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->InitialReactiveCapabilityCurve != element2)
		{
			element->InitialReactiveCapabilityCurve = element2;
			return assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachineDynamics_SynchronousMachine(BaseClass*, BaseClass*);
bool assign_SynchronousMachine_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	SynchronousMachineDynamics* element2 = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SynchronousMachineDynamics != element2)
		{
			element->SynchronousMachineDynamics = element2;
			return assign_SynchronousMachineDynamics_SynchronousMachine(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachine_earthing(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->earthing;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_earthingStarPointR(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->earthingStarPointR;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_earthingStarPointX(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->earthingStarPointX;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_ikk(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ikk;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_maxQ(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxQ;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_minQ(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minQ;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_mu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mu;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_operatingMode(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->operatingMode;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_qPercent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qPercent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_r0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_r2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_referencePriority(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->referencePriority;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_satDirectSubtransX(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->satDirectSubtransX;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_satDirectSyncX(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->satDirectSyncX;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_satDirectTransX(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->satDirectTransX;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_shortCircuitRotorType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->shortCircuitRotorType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_type(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->type;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_voltageRegulationRange(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->voltageRegulationRange;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_x0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachine_x2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachine* element = dynamic_cast<SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_SynchronousMachine_InitialReactiveCapabilityCurve(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->InitialReactiveCapabilityCurve != 0)
		{
			BaseClass_list.push_back(element->InitialReactiveCapabilityCurve);
			return true;
		}
	}
	return false;
}


bool get_SynchronousMachine_earthing(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->earthing;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_earthingStarPointR(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->earthingStarPointR;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_earthingStarPointX(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->earthingStarPointX;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_ikk(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ikk;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_maxQ(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxQ;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_minQ(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minQ;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_mu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_operatingMode(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->operatingMode;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_qPercent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qPercent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_r0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_r2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_referencePriority(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->referencePriority;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_satDirectSubtransX(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->satDirectSubtransX;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_satDirectSyncX(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->satDirectSyncX;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_satDirectTransX(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->satDirectTransX;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_shortCircuitRotorType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->shortCircuitRotorType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_type(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->type;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_voltageRegulationRange(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->voltageRegulationRange;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_x0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachine_x2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachine* element = dynamic_cast<const SynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char SynchronousMachine::debugName[] = "SynchronousMachine";
const char* SynchronousMachine::debugString() const
{
	return SynchronousMachine::debugName;
}

void SynchronousMachine::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:SynchronousMachine", &SynchronousMachine_factory);
}

void SynchronousMachine::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:SynchronousMachine.earthing", &assign_SynchronousMachine_earthing);
	assign_map.emplace("cim:SynchronousMachine.earthingStarPointR", &assign_SynchronousMachine_earthingStarPointR);
	assign_map.emplace("cim:SynchronousMachine.earthingStarPointX", &assign_SynchronousMachine_earthingStarPointX);
	assign_map.emplace("cim:SynchronousMachine.ikk", &assign_SynchronousMachine_ikk);
	assign_map.emplace("cim:SynchronousMachine.maxQ", &assign_SynchronousMachine_maxQ);
	assign_map.emplace("cim:SynchronousMachine.minQ", &assign_SynchronousMachine_minQ);
	assign_map.emplace("cim:SynchronousMachine.mu", &assign_SynchronousMachine_mu);
	assign_map.emplace("cim:SynchronousMachine.operatingMode", &assign_SynchronousMachine_operatingMode);
	assign_map.emplace("cim:SynchronousMachine.qPercent", &assign_SynchronousMachine_qPercent);
	assign_map.emplace("cim:SynchronousMachine.r", &assign_SynchronousMachine_r);
	assign_map.emplace("cim:SynchronousMachine.r0", &assign_SynchronousMachine_r0);
	assign_map.emplace("cim:SynchronousMachine.r2", &assign_SynchronousMachine_r2);
	assign_map.emplace("cim:SynchronousMachine.referencePriority", &assign_SynchronousMachine_referencePriority);
	assign_map.emplace("cim:SynchronousMachine.satDirectSubtransX", &assign_SynchronousMachine_satDirectSubtransX);
	assign_map.emplace("cim:SynchronousMachine.satDirectSyncX", &assign_SynchronousMachine_satDirectSyncX);
	assign_map.emplace("cim:SynchronousMachine.satDirectTransX", &assign_SynchronousMachine_satDirectTransX);
	assign_map.emplace("cim:SynchronousMachine.shortCircuitRotorType", &assign_SynchronousMachine_shortCircuitRotorType);
	assign_map.emplace("cim:SynchronousMachine.type", &assign_SynchronousMachine_type);
	assign_map.emplace("cim:SynchronousMachine.voltageRegulationRange", &assign_SynchronousMachine_voltageRegulationRange);
	assign_map.emplace("cim:SynchronousMachine.x0", &assign_SynchronousMachine_x0);
	assign_map.emplace("cim:SynchronousMachine.x2", &assign_SynchronousMachine_x2);
}

void SynchronousMachine::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:SynchronousMachine.InitialReactiveCapabilityCurve", &assign_SynchronousMachine_InitialReactiveCapabilityCurve);
	assign_map.emplace("cim:SynchronousMachine.SynchronousMachineDynamics", &assign_SynchronousMachine_SynchronousMachineDynamics);
}

void SynchronousMachine::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RotatingMachine::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:SynchronousMachine.earthing", &get_SynchronousMachine_earthing);
	get_map.emplace("cim:SynchronousMachine.earthingStarPointR", &get_SynchronousMachine_earthingStarPointR);
	get_map.emplace("cim:SynchronousMachine.earthingStarPointX", &get_SynchronousMachine_earthingStarPointX);
	get_map.emplace("cim:SynchronousMachine.ikk", &get_SynchronousMachine_ikk);
	get_map.emplace("cim:SynchronousMachine.maxQ", &get_SynchronousMachine_maxQ);
	get_map.emplace("cim:SynchronousMachine.minQ", &get_SynchronousMachine_minQ);
	get_map.emplace("cim:SynchronousMachine.mu", &get_SynchronousMachine_mu);
	get_map.emplace("cim:SynchronousMachine.qPercent", &get_SynchronousMachine_qPercent);
	get_map.emplace("cim:SynchronousMachine.r", &get_SynchronousMachine_r);
	get_map.emplace("cim:SynchronousMachine.r0", &get_SynchronousMachine_r0);
	get_map.emplace("cim:SynchronousMachine.r2", &get_SynchronousMachine_r2);
	get_map.emplace("cim:SynchronousMachine.referencePriority", &get_SynchronousMachine_referencePriority);
	get_map.emplace("cim:SynchronousMachine.satDirectSubtransX", &get_SynchronousMachine_satDirectSubtransX);
	get_map.emplace("cim:SynchronousMachine.satDirectSyncX", &get_SynchronousMachine_satDirectSyncX);
	get_map.emplace("cim:SynchronousMachine.satDirectTransX", &get_SynchronousMachine_satDirectTransX);
	get_map.emplace("cim:SynchronousMachine.voltageRegulationRange", &get_SynchronousMachine_voltageRegulationRange);
	get_map.emplace("cim:SynchronousMachine.x0", &get_SynchronousMachine_x0);
	get_map.emplace("cim:SynchronousMachine.x2", &get_SynchronousMachine_x2);
}

void SynchronousMachine::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RotatingMachine::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:SynchronousMachine.InitialReactiveCapabilityCurve", &get_SynchronousMachine_InitialReactiveCapabilityCurve);
}

void SynchronousMachine::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RotatingMachine::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:SynchronousMachine.operatingMode", &get_SynchronousMachine_operatingMode);
	get_map.emplace("cim:SynchronousMachine.shortCircuitRotorType", &get_SynchronousMachine_shortCircuitRotorType);
	get_map.emplace("cim:SynchronousMachine.type", &get_SynchronousMachine_type);
}

const BaseClassDefiner SynchronousMachine::declare()
{
	return BaseClassDefiner(SynchronousMachine::addConstructToMap, SynchronousMachine::addPrimitiveAssignFnsToMap, SynchronousMachine::addClassAssignFnsToMap, SynchronousMachine::debugName);
}

namespace CIMPP
{
	BaseClass* SynchronousMachine_factory()
	{
		return new SynchronousMachine;
	}
}
