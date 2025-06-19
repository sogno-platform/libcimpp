/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GeneratingUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ControlAreaGeneratingUnit.hpp"
#include "GrossToNetActivePowerCurve.hpp"
#include "RotatingMachine.hpp"

using namespace CIMPP;

GeneratingUnit::GeneratingUnit() {}
GeneratingUnit::~GeneratingUnit() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GeneratingUnit.ControlAreaGeneratingUnit", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.GrossToNetActivePowerCurves", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.RotatingMachine", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.genControlSource", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.governorSCD", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.initialP", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.longPF", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.maxOperatingP", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.maximumAllowableSpinningReserve", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.minOperatingP", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.nominalP", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.normalPF", { CGMESProfile::SSH, } },
	{ "cim:GeneratingUnit.ratedGrossMaxP", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.ratedGrossMinP", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.ratedNetMaxP", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.shortPF", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.startupCost", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.totalEfficiency", { CGMESProfile::EQ, } },
	{ "cim:GeneratingUnit.variableCost", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
GeneratingUnit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GeneratingUnit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Equipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ControlAreaGeneratingUnit_GeneratingUnit(BaseClass*, BaseClass*);
bool assign_GeneratingUnit_ControlAreaGeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	ControlAreaGeneratingUnit* element2 = dynamic_cast<ControlAreaGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ControlAreaGeneratingUnit.begin(), element->ControlAreaGeneratingUnit.end(), element2) == element->ControlAreaGeneratingUnit.end())
		{
			element->ControlAreaGeneratingUnit.push_back(element2);
			return assign_ControlAreaGeneratingUnit_GeneratingUnit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_GrossToNetActivePowerCurve_GeneratingUnit(BaseClass*, BaseClass*);
bool assign_GeneratingUnit_GrossToNetActivePowerCurves(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	GrossToNetActivePowerCurve* element2 = dynamic_cast<GrossToNetActivePowerCurve*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->GrossToNetActivePowerCurves.begin(), element->GrossToNetActivePowerCurves.end(), element2) == element->GrossToNetActivePowerCurves.end())
		{
			element->GrossToNetActivePowerCurves.push_back(element2);
			return assign_GrossToNetActivePowerCurve_GeneratingUnit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RotatingMachine_GeneratingUnit(BaseClass*, BaseClass*);
bool assign_GeneratingUnit_RotatingMachine(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	RotatingMachine* element2 = dynamic_cast<RotatingMachine*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->RotatingMachine.begin(), element->RotatingMachine.end(), element2) == element->RotatingMachine.end())
		{
			element->RotatingMachine.push_back(element2);
			return assign_RotatingMachine_GeneratingUnit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_GeneratingUnit_genControlSource(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->genControlSource;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_governorSCD(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->governorSCD;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_initialP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->initialP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_longPF(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->longPF;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_maxOperatingP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxOperatingP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_maximumAllowableSpinningReserve(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maximumAllowableSpinningReserve;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_minOperatingP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minOperatingP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_nominalP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->nominalP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_normalPF(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->normalPF;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_ratedGrossMaxP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedGrossMaxP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_ratedGrossMinP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedGrossMinP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_ratedNetMaxP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedNetMaxP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_shortPF(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->shortPF;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_startupCost(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->startupCost;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_totalEfficiency(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->totalEfficiency;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GeneratingUnit_variableCost(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->variableCost;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}




bool get_GeneratingUnit_genControlSource(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->genControlSource;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_governorSCD(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->governorSCD;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_initialP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->initialP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_longPF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->longPF;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_maxOperatingP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxOperatingP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_maximumAllowableSpinningReserve(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maximumAllowableSpinningReserve;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_minOperatingP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minOperatingP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_nominalP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->nominalP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_normalPF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->normalPF;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_ratedGrossMaxP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedGrossMaxP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_ratedGrossMinP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedGrossMinP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_ratedNetMaxP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedNetMaxP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_shortPF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->shortPF;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_startupCost(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->startupCost;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_totalEfficiency(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->totalEfficiency;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GeneratingUnit_variableCost(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GeneratingUnit* element = dynamic_cast<const GeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->variableCost;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GeneratingUnit::debugName[] = "GeneratingUnit";
const char* GeneratingUnit::debugString() const
{
	return GeneratingUnit::debugName;
}

void GeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GeneratingUnit", &GeneratingUnit_factory);
}

void GeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GeneratingUnit.genControlSource", &assign_GeneratingUnit_genControlSource);
	assign_map.emplace("cim:GeneratingUnit.governorSCD", &assign_GeneratingUnit_governorSCD);
	assign_map.emplace("cim:GeneratingUnit.initialP", &assign_GeneratingUnit_initialP);
	assign_map.emplace("cim:GeneratingUnit.longPF", &assign_GeneratingUnit_longPF);
	assign_map.emplace("cim:GeneratingUnit.maxOperatingP", &assign_GeneratingUnit_maxOperatingP);
	assign_map.emplace("cim:GeneratingUnit.maximumAllowableSpinningReserve", &assign_GeneratingUnit_maximumAllowableSpinningReserve);
	assign_map.emplace("cim:GeneratingUnit.minOperatingP", &assign_GeneratingUnit_minOperatingP);
	assign_map.emplace("cim:GeneratingUnit.nominalP", &assign_GeneratingUnit_nominalP);
	assign_map.emplace("cim:GeneratingUnit.normalPF", &assign_GeneratingUnit_normalPF);
	assign_map.emplace("cim:GeneratingUnit.ratedGrossMaxP", &assign_GeneratingUnit_ratedGrossMaxP);
	assign_map.emplace("cim:GeneratingUnit.ratedGrossMinP", &assign_GeneratingUnit_ratedGrossMinP);
	assign_map.emplace("cim:GeneratingUnit.ratedNetMaxP", &assign_GeneratingUnit_ratedNetMaxP);
	assign_map.emplace("cim:GeneratingUnit.shortPF", &assign_GeneratingUnit_shortPF);
	assign_map.emplace("cim:GeneratingUnit.startupCost", &assign_GeneratingUnit_startupCost);
	assign_map.emplace("cim:GeneratingUnit.totalEfficiency", &assign_GeneratingUnit_totalEfficiency);
	assign_map.emplace("cim:GeneratingUnit.variableCost", &assign_GeneratingUnit_variableCost);
}

void GeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:GeneratingUnit.ControlAreaGeneratingUnit", &assign_GeneratingUnit_ControlAreaGeneratingUnit);
	assign_map.emplace("cim:GeneratingUnit.GrossToNetActivePowerCurves", &assign_GeneratingUnit_GrossToNetActivePowerCurves);
	assign_map.emplace("cim:GeneratingUnit.RotatingMachine", &assign_GeneratingUnit_RotatingMachine);
}

void GeneratingUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GeneratingUnit.governorSCD", &get_GeneratingUnit_governorSCD);
	get_map.emplace("cim:GeneratingUnit.initialP", &get_GeneratingUnit_initialP);
	get_map.emplace("cim:GeneratingUnit.longPF", &get_GeneratingUnit_longPF);
	get_map.emplace("cim:GeneratingUnit.maxOperatingP", &get_GeneratingUnit_maxOperatingP);
	get_map.emplace("cim:GeneratingUnit.maximumAllowableSpinningReserve", &get_GeneratingUnit_maximumAllowableSpinningReserve);
	get_map.emplace("cim:GeneratingUnit.minOperatingP", &get_GeneratingUnit_minOperatingP);
	get_map.emplace("cim:GeneratingUnit.nominalP", &get_GeneratingUnit_nominalP);
	get_map.emplace("cim:GeneratingUnit.normalPF", &get_GeneratingUnit_normalPF);
	get_map.emplace("cim:GeneratingUnit.ratedGrossMaxP", &get_GeneratingUnit_ratedGrossMaxP);
	get_map.emplace("cim:GeneratingUnit.ratedGrossMinP", &get_GeneratingUnit_ratedGrossMinP);
	get_map.emplace("cim:GeneratingUnit.ratedNetMaxP", &get_GeneratingUnit_ratedNetMaxP);
	get_map.emplace("cim:GeneratingUnit.shortPF", &get_GeneratingUnit_shortPF);
	get_map.emplace("cim:GeneratingUnit.startupCost", &get_GeneratingUnit_startupCost);
	get_map.emplace("cim:GeneratingUnit.totalEfficiency", &get_GeneratingUnit_totalEfficiency);
	get_map.emplace("cim:GeneratingUnit.variableCost", &get_GeneratingUnit_variableCost);
}

void GeneratingUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Equipment::addClassGetFnsToMap(get_map);
}

void GeneratingUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:GeneratingUnit.genControlSource", &get_GeneratingUnit_genControlSource);
}

const BaseClassDefiner GeneratingUnit::declare()
{
	return BaseClassDefiner(GeneratingUnit::addConstructToMap, GeneratingUnit::addPrimitiveAssignFnsToMap, GeneratingUnit::addClassAssignFnsToMap, GeneratingUnit::debugName);
}

namespace CIMPP
{
	BaseClass* GeneratingUnit_factory()
	{
		return new GeneratingUnit;
	}
}
