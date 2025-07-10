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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ACDCConverter(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SV,
			CGMESProfile::SSH,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "ACDCConverter.DCTerminals", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACDCConverter.PccTerminal", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACDCConverter.baseS", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACDCConverter.idc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
		{ "ACDCConverter.idleLoss", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACDCConverter.maxUdc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACDCConverter.minUdc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACDCConverter.nomUdc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACDCConverter.numberOfValves", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACDCConverter.p", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "ACDCConverter.poleLossP", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
		{ "ACDCConverter.q", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "ACDCConverter.ratedUdc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACDCConverter.resistiveLoss", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACDCConverter.switchingLoss", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ACDCConverter.targetPpcc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "ACDCConverter.targetUdc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "ACDCConverter.uc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
		{ "ACDCConverter.udc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
		{ "ACDCConverter.valveU0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ACDCConverter::ACDCConverter() : PccTerminal(nullptr) {}
ACDCConverter::~ACDCConverter() {}

const std::list<std::string>& ACDCConverter::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ACDCConverter::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ACDCConverter::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ACDCConverter::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ACDCConverter::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ACDCConverter::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ACDCConverter::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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

bool assign_ACDCConverter_nomUdc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ACDCConverter* element = dynamic_cast<ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->nomUdc;
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

bool get_ACDCConverter_nomUdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ACDCConverter* element = dynamic_cast<const ACDCConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->nomUdc;
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
	factory_map.emplace("ACDCConverter", &ACDCConverter_factory);
}

void ACDCConverter::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ACDCConverter.baseS", &assign_ACDCConverter_baseS);
	assign_map.emplace("ACDCConverter.idc", &assign_ACDCConverter_idc);
	assign_map.emplace("ACDCConverter.idleLoss", &assign_ACDCConverter_idleLoss);
	assign_map.emplace("ACDCConverter.maxUdc", &assign_ACDCConverter_maxUdc);
	assign_map.emplace("ACDCConverter.minUdc", &assign_ACDCConverter_minUdc);
	assign_map.emplace("ACDCConverter.nomUdc", &assign_ACDCConverter_nomUdc);
	assign_map.emplace("ACDCConverter.numberOfValves", &assign_ACDCConverter_numberOfValves);
	assign_map.emplace("ACDCConverter.p", &assign_ACDCConverter_p);
	assign_map.emplace("ACDCConverter.poleLossP", &assign_ACDCConverter_poleLossP);
	assign_map.emplace("ACDCConverter.q", &assign_ACDCConverter_q);
	assign_map.emplace("ACDCConverter.ratedUdc", &assign_ACDCConverter_ratedUdc);
	assign_map.emplace("ACDCConverter.resistiveLoss", &assign_ACDCConverter_resistiveLoss);
	assign_map.emplace("ACDCConverter.switchingLoss", &assign_ACDCConverter_switchingLoss);
	assign_map.emplace("ACDCConverter.targetPpcc", &assign_ACDCConverter_targetPpcc);
	assign_map.emplace("ACDCConverter.targetUdc", &assign_ACDCConverter_targetUdc);
	assign_map.emplace("ACDCConverter.uc", &assign_ACDCConverter_uc);
	assign_map.emplace("ACDCConverter.udc", &assign_ACDCConverter_udc);
	assign_map.emplace("ACDCConverter.valveU0", &assign_ACDCConverter_valveU0);
}

void ACDCConverter::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ACDCConverter.DCTerminals", &assign_ACDCConverter_DCTerminals);
	assign_map.emplace("ACDCConverter.PccTerminal", &assign_ACDCConverter_PccTerminal);
}

void ACDCConverter::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ACDCConverter.baseS", &get_ACDCConverter_baseS);
	get_map.emplace("ACDCConverter.idc", &get_ACDCConverter_idc);
	get_map.emplace("ACDCConverter.idleLoss", &get_ACDCConverter_idleLoss);
	get_map.emplace("ACDCConverter.maxUdc", &get_ACDCConverter_maxUdc);
	get_map.emplace("ACDCConverter.minUdc", &get_ACDCConverter_minUdc);
	get_map.emplace("ACDCConverter.nomUdc", &get_ACDCConverter_nomUdc);
	get_map.emplace("ACDCConverter.numberOfValves", &get_ACDCConverter_numberOfValves);
	get_map.emplace("ACDCConverter.p", &get_ACDCConverter_p);
	get_map.emplace("ACDCConverter.poleLossP", &get_ACDCConverter_poleLossP);
	get_map.emplace("ACDCConverter.q", &get_ACDCConverter_q);
	get_map.emplace("ACDCConverter.ratedUdc", &get_ACDCConverter_ratedUdc);
	get_map.emplace("ACDCConverter.resistiveLoss", &get_ACDCConverter_resistiveLoss);
	get_map.emplace("ACDCConverter.switchingLoss", &get_ACDCConverter_switchingLoss);
	get_map.emplace("ACDCConverter.targetPpcc", &get_ACDCConverter_targetPpcc);
	get_map.emplace("ACDCConverter.targetUdc", &get_ACDCConverter_targetUdc);
	get_map.emplace("ACDCConverter.uc", &get_ACDCConverter_uc);
	get_map.emplace("ACDCConverter.udc", &get_ACDCConverter_udc);
	get_map.emplace("ACDCConverter.valveU0", &get_ACDCConverter_valveU0);
}

void ACDCConverter::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
	get_map.emplace("ACDCConverter.PccTerminal", &get_ACDCConverter_PccTerminal);
}

void ACDCConverter::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool ACDCConverter::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ACDCConverter" &&
		dynamic_cast<ACDCConverter*>(otherObject) != nullptr;
}

const BaseClassDefiner ACDCConverter::declare()
{
	return BaseClassDefiner(ACDCConverter::addConstructToMap, ACDCConverter::addPrimitiveAssignFnsToMap, ACDCConverter::addClassAssignFnsToMap, ACDCConverter::debugName);
}

std::map<std::string, AttrDetails> ACDCConverter::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ACDCConverter_factory()
	{
		return new ACDCConverter;
	}
}
