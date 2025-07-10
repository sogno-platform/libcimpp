/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PetersenCoil.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PetersenCoil(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SC,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "PetersenCoil.mode", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "PetersenCoil.nominalU", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "PetersenCoil.offsetCurrent", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "PetersenCoil.positionCurrent", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "PetersenCoil.xGroundMax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "PetersenCoil.xGroundMin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "PetersenCoil.xGroundNominal", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
	};
    return ClassAttrDetailsMap;
}

PetersenCoil::PetersenCoil() {}
PetersenCoil::~PetersenCoil() {}

const std::list<std::string>& PetersenCoil::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PetersenCoil::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PetersenCoil::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PetersenCoil::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PetersenCoil::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PetersenCoil::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PetersenCoil::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PetersenCoil_mode(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mode;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PetersenCoil_nominalU(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->nominalU;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PetersenCoil_offsetCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->offsetCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PetersenCoil_positionCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->positionCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PetersenCoil_xGroundMax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xGroundMax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PetersenCoil_xGroundMin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xGroundMin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PetersenCoil_xGroundNominal(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PetersenCoil* element = dynamic_cast<PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xGroundNominal;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PetersenCoil_mode(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PetersenCoil* element = dynamic_cast<const PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mode;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PetersenCoil_nominalU(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PetersenCoil* element = dynamic_cast<const PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->nominalU;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PetersenCoil_offsetCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PetersenCoil* element = dynamic_cast<const PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->offsetCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PetersenCoil_positionCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PetersenCoil* element = dynamic_cast<const PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->positionCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PetersenCoil_xGroundMax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PetersenCoil* element = dynamic_cast<const PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xGroundMax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PetersenCoil_xGroundMin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PetersenCoil* element = dynamic_cast<const PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xGroundMin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PetersenCoil_xGroundNominal(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PetersenCoil* element = dynamic_cast<const PetersenCoil*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xGroundNominal;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PetersenCoil::debugName[] = "PetersenCoil";
const char* PetersenCoil::debugString() const
{
	return PetersenCoil::debugName;
}

void PetersenCoil::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PetersenCoil", &PetersenCoil_factory);
}

void PetersenCoil::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PetersenCoil.mode", &assign_PetersenCoil_mode);
	assign_map.emplace("PetersenCoil.nominalU", &assign_PetersenCoil_nominalU);
	assign_map.emplace("PetersenCoil.offsetCurrent", &assign_PetersenCoil_offsetCurrent);
	assign_map.emplace("PetersenCoil.positionCurrent", &assign_PetersenCoil_positionCurrent);
	assign_map.emplace("PetersenCoil.xGroundMax", &assign_PetersenCoil_xGroundMax);
	assign_map.emplace("PetersenCoil.xGroundMin", &assign_PetersenCoil_xGroundMin);
	assign_map.emplace("PetersenCoil.xGroundNominal", &assign_PetersenCoil_xGroundNominal);
}

void PetersenCoil::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PetersenCoil::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EarthFaultCompensator::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PetersenCoil.nominalU", &get_PetersenCoil_nominalU);
	get_map.emplace("PetersenCoil.offsetCurrent", &get_PetersenCoil_offsetCurrent);
	get_map.emplace("PetersenCoil.positionCurrent", &get_PetersenCoil_positionCurrent);
	get_map.emplace("PetersenCoil.xGroundMax", &get_PetersenCoil_xGroundMax);
	get_map.emplace("PetersenCoil.xGroundMin", &get_PetersenCoil_xGroundMin);
	get_map.emplace("PetersenCoil.xGroundNominal", &get_PetersenCoil_xGroundNominal);
}

void PetersenCoil::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EarthFaultCompensator::addClassGetFnsToMap(get_map);
}

void PetersenCoil::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EarthFaultCompensator::addEnumGetFnsToMap(get_map);
	get_map.emplace("PetersenCoil.mode", &get_PetersenCoil_mode);
}

bool PetersenCoil::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PetersenCoil" &&
		dynamic_cast<PetersenCoil*>(otherObject) != nullptr;
}

const BaseClassDefiner PetersenCoil::declare()
{
	return BaseClassDefiner(PetersenCoil::addConstructToMap, PetersenCoil::addPrimitiveAssignFnsToMap, PetersenCoil::addClassAssignFnsToMap, PetersenCoil::debugName);
}

std::map<std::string, AttrDetails> PetersenCoil::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EarthFaultCompensator::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PetersenCoil_factory()
	{
		return new PetersenCoil;
	}
}
