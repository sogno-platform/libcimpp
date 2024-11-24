/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ACDCConverter.hpp"

#include <algorithm>
#include <sstream>

#include "ACDCConverterDCTerminal.hpp"
#include "Terminal.hpp"
#include "ApparentPower.hpp"
#include "CurrentFlow.hpp"
#include "ActivePower.hpp"
#include "ActivePower.hpp"
#include "Voltage.hpp"
#include "ActivePower.hpp"
#include "Voltage.hpp"
#include "Integer.hpp"
#include "ActivePower.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "Voltage.hpp"
#include "Resistance.hpp"
#include "ActivePowerPerCurrentFlow.hpp"
#include "ActivePower.hpp"
#include "Voltage.hpp"
#include "Voltage.hpp"
#include "Voltage.hpp"
#include "Voltage.hpp"

using namespace CIMPP;

ACDCConverter::ACDCConverter() : PccTerminal(nullptr) {};
ACDCConverter::~ACDCConverter() {};




bool assign_ACDCConverter_baseS(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->baseS;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_idc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->idc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_idleLoss(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->idleLoss;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_maxP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->maxP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_maxUdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->maxUdc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_minP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->minP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_minUdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->minUdc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_numberOfValves(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->numberOfValves;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_p(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->p;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_poleLossP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->poleLossP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_ratedUdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->ratedUdc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_resistiveLoss(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->resistiveLoss;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_switchingLoss(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->switchingLoss;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_targetPpcc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->targetPpcc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_targetUdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->targetUdc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_uc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->uc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_udc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->udc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCConverter_valveU0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1))
	{
		buffer >> element->valveU0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ACDCConverterDCTerminal_DCConductingEquipment(BaseClass*, BaseClass*);
bool assign_ACDCConverter_DCTerminals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	ACDCConverterDCTerminal* element2 = dynamic_cast<ACDCConverterDCTerminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCTerminals.begin(), element->DCTerminals.end(), element2) == element->DCTerminals.end())
		{
			element->DCTerminals.push_back(element2);
			return assign_ACDCConverterDCTerminal_DCConductingEquipment(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Terminal_ConverterDCSides(BaseClass*, BaseClass*);
bool assign_ACDCConverter_PccTerminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PccTerminal != element2)
		{
			element->PccTerminal = element2;
			return assign_Terminal_ConverterDCSides(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}




















const char ACDCConverter::debugName[] = "ACDCConverter";
const char* ACDCConverter::debugString() const
{
	return ACDCConverter::debugName;
}

void ACDCConverter::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ACDCConverter"), &ACDCConverter_factory));
}

void ACDCConverter::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.baseS"), &assign_ACDCConverter_baseS));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.idc"), &assign_ACDCConverter_idc));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.idleLoss"), &assign_ACDCConverter_idleLoss));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.maxP"), &assign_ACDCConverter_maxP));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.maxUdc"), &assign_ACDCConverter_maxUdc));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.minP"), &assign_ACDCConverter_minP));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.minUdc"), &assign_ACDCConverter_minUdc));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.numberOfValves"), &assign_ACDCConverter_numberOfValves));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.p"), &assign_ACDCConverter_p));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.poleLossP"), &assign_ACDCConverter_poleLossP));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.q"), &assign_ACDCConverter_q));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.ratedUdc"), &assign_ACDCConverter_ratedUdc));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.resistiveLoss"), &assign_ACDCConverter_resistiveLoss));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.switchingLoss"), &assign_ACDCConverter_switchingLoss));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.targetPpcc"), &assign_ACDCConverter_targetPpcc));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.targetUdc"), &assign_ACDCConverter_targetUdc));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.uc"), &assign_ACDCConverter_uc));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.udc"), &assign_ACDCConverter_udc));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.valveU0"), &assign_ACDCConverter_valveU0));
}

void ACDCConverter::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.DCTerminals"), &assign_ACDCConverter_DCTerminals));
	assign_map.insert(std::make_pair(std::string("cim:ACDCConverter.PccTerminal"), &assign_ACDCConverter_PccTerminal));
}

const BaseClassDefiner ACDCConverter::declare()
{
	return BaseClassDefiner(ACDCConverter::addConstructToMap, ACDCConverter::addPrimitiveAssignFnsToMap, ACDCConverter::addClassAssignFnsToMap, ACDCConverter::debugName);
}

namespace CIMPP
{
	BaseClass* ACDCConverter_factory()
	{
		return new ACDCConverter;
	}
}
