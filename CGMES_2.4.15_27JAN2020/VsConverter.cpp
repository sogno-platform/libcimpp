/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VsConverter.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "VsCapabilityCurve.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		VsConverter(),
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
		{ "VsConverter.CapabilityCurve", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "VsConverter.delta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
		{ "VsConverter.droop", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "VsConverter.droopCompensation", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "VsConverter.maxModulationIndex", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "VsConverter.maxValveCurrent", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "VsConverter.pPccControl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "VsConverter.qPccControl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "VsConverter.qShare", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "VsConverter.targetQpcc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "VsConverter.targetUpcc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "VsConverter.uf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
	};
    return ClassAttrDetailsMap;
}

VsConverter::VsConverter() : CapabilityCurve(nullptr) {}
VsConverter::~VsConverter() {}

const std::list<std::string>& VsConverter::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& VsConverter::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& VsConverter::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& VsConverter::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& VsConverter::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& VsConverter::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& VsConverter::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_VsCapabilityCurve_VsConverterDCSides(BaseClass*, BaseClass*);
bool assign_VsConverter_CapabilityCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	VsCapabilityCurve* element2 = dynamic_cast<VsCapabilityCurve*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CapabilityCurve != element2)
		{
			element->CapabilityCurve = element2;
			return assign_VsCapabilityCurve_VsConverterDCSides(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VsConverter_delta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->delta;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VsConverter_droop(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->droop;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VsConverter_droopCompensation(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->droopCompensation;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VsConverter_maxModulationIndex(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxModulationIndex;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VsConverter_maxValveCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxValveCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VsConverter_pPccControl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pPccControl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VsConverter_qPccControl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qPccControl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VsConverter_qShare(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qShare;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VsConverter_targetQpcc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->targetQpcc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VsConverter_targetUpcc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->targetUpcc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VsConverter_uf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_VsConverter_CapabilityCurve(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->CapabilityCurve != 0)
		{
			BaseClass_list.push_back(element->CapabilityCurve);
			return true;
		}
	}
	return false;
}

bool get_VsConverter_delta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->delta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_droop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->droop;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_droopCompensation(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->droopCompensation;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_maxModulationIndex(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxModulationIndex;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_maxValveCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxValveCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_pPccControl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pPccControl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_qPccControl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qPccControl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_qShare(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qShare;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_targetQpcc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->targetQpcc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_targetUpcc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->targetUpcc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_uf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char VsConverter::debugName[] = "VsConverter";
const char* VsConverter::debugString() const
{
	return VsConverter::debugName;
}

void VsConverter::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("VsConverter", &VsConverter_factory);
}

void VsConverter::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("VsConverter.delta", &assign_VsConverter_delta);
	assign_map.emplace("VsConverter.droop", &assign_VsConverter_droop);
	assign_map.emplace("VsConverter.droopCompensation", &assign_VsConverter_droopCompensation);
	assign_map.emplace("VsConverter.maxModulationIndex", &assign_VsConverter_maxModulationIndex);
	assign_map.emplace("VsConverter.maxValveCurrent", &assign_VsConverter_maxValveCurrent);
	assign_map.emplace("VsConverter.pPccControl", &assign_VsConverter_pPccControl);
	assign_map.emplace("VsConverter.qPccControl", &assign_VsConverter_qPccControl);
	assign_map.emplace("VsConverter.qShare", &assign_VsConverter_qShare);
	assign_map.emplace("VsConverter.targetQpcc", &assign_VsConverter_targetQpcc);
	assign_map.emplace("VsConverter.targetUpcc", &assign_VsConverter_targetUpcc);
	assign_map.emplace("VsConverter.uf", &assign_VsConverter_uf);
}

void VsConverter::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("VsConverter.CapabilityCurve", &assign_VsConverter_CapabilityCurve);
}

void VsConverter::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ACDCConverter::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("VsConverter.delta", &get_VsConverter_delta);
	get_map.emplace("VsConverter.droop", &get_VsConverter_droop);
	get_map.emplace("VsConverter.droopCompensation", &get_VsConverter_droopCompensation);
	get_map.emplace("VsConverter.maxModulationIndex", &get_VsConverter_maxModulationIndex);
	get_map.emplace("VsConverter.maxValveCurrent", &get_VsConverter_maxValveCurrent);
	get_map.emplace("VsConverter.qShare", &get_VsConverter_qShare);
	get_map.emplace("VsConverter.targetQpcc", &get_VsConverter_targetQpcc);
	get_map.emplace("VsConverter.targetUpcc", &get_VsConverter_targetUpcc);
	get_map.emplace("VsConverter.uf", &get_VsConverter_uf);
}

void VsConverter::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ACDCConverter::addClassGetFnsToMap(get_map);
	get_map.emplace("VsConverter.CapabilityCurve", &get_VsConverter_CapabilityCurve);
}

void VsConverter::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ACDCConverter::addEnumGetFnsToMap(get_map);
	get_map.emplace("VsConverter.pPccControl", &get_VsConverter_pPccControl);
	get_map.emplace("VsConverter.qPccControl", &get_VsConverter_qPccControl);
}

bool VsConverter::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "VsConverter" &&
		dynamic_cast<VsConverter*>(otherObject) != nullptr;
}

const BaseClassDefiner VsConverter::declare()
{
	return BaseClassDefiner(VsConverter::addConstructToMap, VsConverter::addPrimitiveAssignFnsToMap, VsConverter::addClassAssignFnsToMap, VsConverter::debugName);
}

std::map<std::string, AttrDetails> VsConverter::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ACDCConverter::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* VsConverter_factory()
	{
		return new VsConverter;
	}
}
