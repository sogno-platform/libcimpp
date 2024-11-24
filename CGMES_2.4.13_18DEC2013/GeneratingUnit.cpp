/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GeneratingUnit.hpp"

#include <algorithm>
#include <sstream>

#include "ControlAreaGeneratingUnit.hpp"
#include "GrossToNetActivePowerCurve.hpp"
#include "RotatingMachine.hpp"
#include "GeneratorControlSource.hpp"
#include "PerCent.hpp"
#include "ActivePower.hpp"
#include "Simple_Float.hpp"
#include "ActivePower.hpp"
#include "ActivePower.hpp"
#include "ActivePower.hpp"
#include "ActivePower.hpp"
#include "Simple_Float.hpp"
#include "ActivePower.hpp"
#include "ActivePower.hpp"
#include "ActivePower.hpp"
#include "Simple_Float.hpp"
#include "Money.hpp"
#include "PerCent.hpp"
#include "Money.hpp"

using namespace CIMPP;

GeneratingUnit::GeneratingUnit() {};
GeneratingUnit::~GeneratingUnit() {};





bool assign_GeneratingUnit_genControlSource(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->genControlSource;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_governorSCD(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->governorSCD;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_initialP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->initialP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_longPF(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->longPF;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_maxOperatingP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->maxOperatingP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_maximumAllowableSpinningReserve(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->maximumAllowableSpinningReserve;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_minOperatingP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->minOperatingP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_nominalP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->nominalP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_normalPF(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->normalPF;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_ratedGrossMaxP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->ratedGrossMaxP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_ratedGrossMinP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->ratedGrossMinP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_ratedNetMaxP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->ratedNetMaxP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_shortPF(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->shortPF;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_startupCost(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->startupCost;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_totalEfficiency(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->totalEfficiency;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GeneratingUnit_variableCost(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GeneratingUnit* element = dynamic_cast<GeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->variableCost;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
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

















const char GeneratingUnit::debugName[] = "GeneratingUnit";
const char* GeneratingUnit::debugString() const
{
	return GeneratingUnit::debugName;
}

void GeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GeneratingUnit"), &GeneratingUnit_factory));
}

void GeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.genControlSource"), &assign_GeneratingUnit_genControlSource));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.governorSCD"), &assign_GeneratingUnit_governorSCD));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.initialP"), &assign_GeneratingUnit_initialP));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.longPF"), &assign_GeneratingUnit_longPF));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.maxOperatingP"), &assign_GeneratingUnit_maxOperatingP));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.maximumAllowableSpinningReserve"), &assign_GeneratingUnit_maximumAllowableSpinningReserve));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.minOperatingP"), &assign_GeneratingUnit_minOperatingP));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.nominalP"), &assign_GeneratingUnit_nominalP));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.normalPF"), &assign_GeneratingUnit_normalPF));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.ratedGrossMaxP"), &assign_GeneratingUnit_ratedGrossMaxP));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.ratedGrossMinP"), &assign_GeneratingUnit_ratedGrossMinP));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.ratedNetMaxP"), &assign_GeneratingUnit_ratedNetMaxP));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.shortPF"), &assign_GeneratingUnit_shortPF));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.startupCost"), &assign_GeneratingUnit_startupCost));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.totalEfficiency"), &assign_GeneratingUnit_totalEfficiency));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.variableCost"), &assign_GeneratingUnit_variableCost));
}

void GeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.ControlAreaGeneratingUnit"), &assign_GeneratingUnit_ControlAreaGeneratingUnit));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.GrossToNetActivePowerCurves"), &assign_GeneratingUnit_GrossToNetActivePowerCurves));
	assign_map.insert(std::make_pair(std::string("cim:GeneratingUnit.RotatingMachine"), &assign_GeneratingUnit_RotatingMachine));
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
