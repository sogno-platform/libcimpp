/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ACDCConverter.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ACDCConverterDCTerminal.hpp"
#include "Terminal.hpp"

using namespace CIMPP;

ACDCConverter::ACDCConverter() : PccTerminal(nullptr) {}
ACDCConverter::~ACDCConverter() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
	CGMESProfile::EQ,
	CGMESProfile::SSH,
	CGMESProfile::SV,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ACDCConverter.DCTerminals", { CGMESProfile::EQ, } },
	{ "cim:ACDCConverter.PccTerminal", { CGMESProfile::EQ, } },
	{ "cim:ACDCConverter.baseS", { CGMESProfile::EQ, } },
	{ "cim:ACDCConverter.idc", { CGMESProfile::SV, } },
	{ "cim:ACDCConverter.idleLoss", { CGMESProfile::EQ, } },
	{ "cim:ACDCConverter.maxP", { CGMESProfile::EQ, } },
	{ "cim:ACDCConverter.maxUdc", { CGMESProfile::EQ, } },
	{ "cim:ACDCConverter.minP", { CGMESProfile::EQ, } },
	{ "cim:ACDCConverter.minUdc", { CGMESProfile::EQ, } },
	{ "cim:ACDCConverter.numberOfValves", { CGMESProfile::EQ, } },
	{ "cim:ACDCConverter.p", { CGMESProfile::SSH, } },
	{ "cim:ACDCConverter.poleLossP", { CGMESProfile::SV, } },
	{ "cim:ACDCConverter.q", { CGMESProfile::SSH, } },
	{ "cim:ACDCConverter.ratedUdc", { CGMESProfile::EQ, } },
	{ "cim:ACDCConverter.resistiveLoss", { CGMESProfile::EQ, } },
	{ "cim:ACDCConverter.switchingLoss", { CGMESProfile::EQ, } },
	{ "cim:ACDCConverter.targetPpcc", { CGMESProfile::SSH, } },
	{ "cim:ACDCConverter.targetUdc", { CGMESProfile::SSH, } },
	{ "cim:ACDCConverter.uc", { CGMESProfile::SV, } },
	{ "cim:ACDCConverter.udc", { CGMESProfile::SV, } },
	{ "cim:ACDCConverter.valveU0", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
ACDCConverter::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ACDCConverter::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ConductingEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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

bool assign_ACDCConverter_baseS(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->baseS;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_idc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->idc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_idleLoss(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->idleLoss;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_maxP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_maxUdc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxUdc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_minP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_minUdc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minUdc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_numberOfValves(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->numberOfValves;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_p(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_poleLossP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->poleLossP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_q(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_ratedUdc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedUdc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_resistiveLoss(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->resistiveLoss;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_switchingLoss(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->switchingLoss;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_targetPpcc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->targetPpcc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_targetUdc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->targetUdc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_uc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_udc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->udc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ACDCConverter_valveU0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->valveU0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_ACDCConverter_PccTerminal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->PccTerminal != 0)
		{
			BaseClass_list.push_back(element->PccTerminal);
			return true;
		}
	}
	return false;
}

bool get_ACDCConverter_baseS(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->baseS;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_idc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->idc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_idleLoss(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->idleLoss;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_maxP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_maxUdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxUdc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_minP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_minUdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minUdc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_numberOfValves(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->numberOfValves;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_p(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_poleLossP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->poleLossP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_ratedUdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedUdc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_resistiveLoss(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->resistiveLoss;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_switchingLoss(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->switchingLoss;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_targetPpcc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->targetPpcc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_targetUdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->targetUdc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_uc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_udc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->udc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ACDCConverter_valveU0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->valveU0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ACDCConverter::debugName[] = "ACDCConverter";
const char* ACDCConverter::debugString() const
{
	return ACDCConverter::debugName;
}

void ACDCConverter::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ACDCConverter", &ACDCConverter_factory);
}

void ACDCConverter::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ACDCConverter.baseS", &assign_ACDCConverter_baseS);
	assign_map.emplace("cim:ACDCConverter.idc", &assign_ACDCConverter_idc);
	assign_map.emplace("cim:ACDCConverter.idleLoss", &assign_ACDCConverter_idleLoss);
	assign_map.emplace("cim:ACDCConverter.maxP", &assign_ACDCConverter_maxP);
	assign_map.emplace("cim:ACDCConverter.maxUdc", &assign_ACDCConverter_maxUdc);
	assign_map.emplace("cim:ACDCConverter.minP", &assign_ACDCConverter_minP);
	assign_map.emplace("cim:ACDCConverter.minUdc", &assign_ACDCConverter_minUdc);
	assign_map.emplace("cim:ACDCConverter.numberOfValves", &assign_ACDCConverter_numberOfValves);
	assign_map.emplace("cim:ACDCConverter.p", &assign_ACDCConverter_p);
	assign_map.emplace("cim:ACDCConverter.poleLossP", &assign_ACDCConverter_poleLossP);
	assign_map.emplace("cim:ACDCConverter.q", &assign_ACDCConverter_q);
	assign_map.emplace("cim:ACDCConverter.ratedUdc", &assign_ACDCConverter_ratedUdc);
	assign_map.emplace("cim:ACDCConverter.resistiveLoss", &assign_ACDCConverter_resistiveLoss);
	assign_map.emplace("cim:ACDCConverter.switchingLoss", &assign_ACDCConverter_switchingLoss);
	assign_map.emplace("cim:ACDCConverter.targetPpcc", &assign_ACDCConverter_targetPpcc);
	assign_map.emplace("cim:ACDCConverter.targetUdc", &assign_ACDCConverter_targetUdc);
	assign_map.emplace("cim:ACDCConverter.uc", &assign_ACDCConverter_uc);
	assign_map.emplace("cim:ACDCConverter.udc", &assign_ACDCConverter_udc);
	assign_map.emplace("cim:ACDCConverter.valveU0", &assign_ACDCConverter_valveU0);
}

void ACDCConverter::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:ACDCConverter.DCTerminals", &assign_ACDCConverter_DCTerminals);
	assign_map.emplace("cim:ACDCConverter.PccTerminal", &assign_ACDCConverter_PccTerminal);
}

void ACDCConverter::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ACDCConverter.baseS", &get_ACDCConverter_baseS);
	get_map.emplace("cim:ACDCConverter.idc", &get_ACDCConverter_idc);
	get_map.emplace("cim:ACDCConverter.idleLoss", &get_ACDCConverter_idleLoss);
	get_map.emplace("cim:ACDCConverter.maxP", &get_ACDCConverter_maxP);
	get_map.emplace("cim:ACDCConverter.maxUdc", &get_ACDCConverter_maxUdc);
	get_map.emplace("cim:ACDCConverter.minP", &get_ACDCConverter_minP);
	get_map.emplace("cim:ACDCConverter.minUdc", &get_ACDCConverter_minUdc);
	get_map.emplace("cim:ACDCConverter.numberOfValves", &get_ACDCConverter_numberOfValves);
	get_map.emplace("cim:ACDCConverter.p", &get_ACDCConverter_p);
	get_map.emplace("cim:ACDCConverter.poleLossP", &get_ACDCConverter_poleLossP);
	get_map.emplace("cim:ACDCConverter.q", &get_ACDCConverter_q);
	get_map.emplace("cim:ACDCConverter.ratedUdc", &get_ACDCConverter_ratedUdc);
	get_map.emplace("cim:ACDCConverter.resistiveLoss", &get_ACDCConverter_resistiveLoss);
	get_map.emplace("cim:ACDCConverter.switchingLoss", &get_ACDCConverter_switchingLoss);
	get_map.emplace("cim:ACDCConverter.targetPpcc", &get_ACDCConverter_targetPpcc);
	get_map.emplace("cim:ACDCConverter.targetUdc", &get_ACDCConverter_targetUdc);
	get_map.emplace("cim:ACDCConverter.uc", &get_ACDCConverter_uc);
	get_map.emplace("cim:ACDCConverter.udc", &get_ACDCConverter_udc);
	get_map.emplace("cim:ACDCConverter.valveU0", &get_ACDCConverter_valveU0);
}

void ACDCConverter::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:ACDCConverter.PccTerminal", &get_ACDCConverter_PccTerminal);
}

void ACDCConverter::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
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
