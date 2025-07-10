/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArType2IEEEPFController.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PFVArType2IEEEPFController(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "PFVArType2IEEEPFController.exlon", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType2IEEEPFController.ki", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType2IEEEPFController.kp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType2IEEEPFController.pfref", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType2IEEEPFController.vclmt", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType2IEEEPFController.vref", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType2IEEEPFController.vs", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PFVArType2IEEEPFController::PFVArType2IEEEPFController() {}
PFVArType2IEEEPFController::~PFVArType2IEEEPFController() {}

const std::list<std::string>& PFVArType2IEEEPFController::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PFVArType2IEEEPFController::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PFVArType2IEEEPFController::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PFVArType2IEEEPFController::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PFVArType2IEEEPFController::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PFVArType2IEEEPFController::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PFVArType2IEEEPFController::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PFVArType2IEEEPFController_exlon(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->exlon;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_pfref(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pfref;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_vclmt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vclmt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_vref(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vref;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_vs(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vs;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PFVArType2IEEEPFController_exlon(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2IEEEPFController* element = dynamic_cast<const PFVArType2IEEEPFController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->exlon;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType2IEEEPFController_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2IEEEPFController* element = dynamic_cast<const PFVArType2IEEEPFController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType2IEEEPFController_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2IEEEPFController* element = dynamic_cast<const PFVArType2IEEEPFController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType2IEEEPFController_pfref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2IEEEPFController* element = dynamic_cast<const PFVArType2IEEEPFController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pfref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType2IEEEPFController_vclmt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2IEEEPFController* element = dynamic_cast<const PFVArType2IEEEPFController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vclmt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType2IEEEPFController_vref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2IEEEPFController* element = dynamic_cast<const PFVArType2IEEEPFController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType2IEEEPFController_vs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2IEEEPFController* element = dynamic_cast<const PFVArType2IEEEPFController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PFVArType2IEEEPFController::debugName[] = "PFVArType2IEEEPFController";
const char* PFVArType2IEEEPFController::debugString() const
{
	return PFVArType2IEEEPFController::debugName;
}

void PFVArType2IEEEPFController::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PFVArType2IEEEPFController", &PFVArType2IEEEPFController_factory);
}

void PFVArType2IEEEPFController::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PFVArType2IEEEPFController.exlon", &assign_PFVArType2IEEEPFController_exlon);
	assign_map.emplace("PFVArType2IEEEPFController.ki", &assign_PFVArType2IEEEPFController_ki);
	assign_map.emplace("PFVArType2IEEEPFController.kp", &assign_PFVArType2IEEEPFController_kp);
	assign_map.emplace("PFVArType2IEEEPFController.pfref", &assign_PFVArType2IEEEPFController_pfref);
	assign_map.emplace("PFVArType2IEEEPFController.vclmt", &assign_PFVArType2IEEEPFController_vclmt);
	assign_map.emplace("PFVArType2IEEEPFController.vref", &assign_PFVArType2IEEEPFController_vref);
	assign_map.emplace("PFVArType2IEEEPFController.vs", &assign_PFVArType2IEEEPFController_vs);
}

void PFVArType2IEEEPFController::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PFVArType2IEEEPFController::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PFVArType2IEEEPFController.exlon", &get_PFVArType2IEEEPFController_exlon);
	get_map.emplace("PFVArType2IEEEPFController.ki", &get_PFVArType2IEEEPFController_ki);
	get_map.emplace("PFVArType2IEEEPFController.kp", &get_PFVArType2IEEEPFController_kp);
	get_map.emplace("PFVArType2IEEEPFController.pfref", &get_PFVArType2IEEEPFController_pfref);
	get_map.emplace("PFVArType2IEEEPFController.vclmt", &get_PFVArType2IEEEPFController_vclmt);
	get_map.emplace("PFVArType2IEEEPFController.vref", &get_PFVArType2IEEEPFController_vref);
	get_map.emplace("PFVArType2IEEEPFController.vs", &get_PFVArType2IEEEPFController_vs);
}

void PFVArType2IEEEPFController::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addClassGetFnsToMap(get_map);
}

void PFVArType2IEEEPFController::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addEnumGetFnsToMap(get_map);
}

bool PFVArType2IEEEPFController::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PFVArType2IEEEPFController" &&
		dynamic_cast<PFVArType2IEEEPFController*>(otherObject) != nullptr;
}

const BaseClassDefiner PFVArType2IEEEPFController::declare()
{
	return BaseClassDefiner(PFVArType2IEEEPFController::addConstructToMap, PFVArType2IEEEPFController::addPrimitiveAssignFnsToMap, PFVArType2IEEEPFController::addClassAssignFnsToMap, PFVArType2IEEEPFController::debugName);
}

std::map<std::string, AttrDetails> PFVArType2IEEEPFController::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PFVArControllerType2Dynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PFVArType2IEEEPFController_factory()
	{
		return new PFVArType2IEEEPFController;
	}
}
