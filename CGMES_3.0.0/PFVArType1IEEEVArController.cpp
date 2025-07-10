/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArType1IEEEVArController.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PFVArType1IEEEVArController(),
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
		{ "PFVArType1IEEEVArController.tvarc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType1IEEEVArController.vvar", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType1IEEEVArController.vvarcbw", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType1IEEEVArController.vvarref", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType1IEEEVArController.vvtmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType1IEEEVArController.vvtmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PFVArType1IEEEVArController::PFVArType1IEEEVArController() {}
PFVArType1IEEEVArController::~PFVArType1IEEEVArController() {}

const std::list<std::string>& PFVArType1IEEEVArController::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PFVArType1IEEEVArController::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PFVArType1IEEEVArController::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PFVArType1IEEEVArController::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PFVArType1IEEEVArController::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PFVArType1IEEEVArController::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PFVArType1IEEEVArController::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PFVArType1IEEEVArController_tvarc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tvarc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType1IEEEVArController_vvar(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vvar;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType1IEEEVArController_vvarcbw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vvarcbw;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType1IEEEVArController_vvarref(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vvarref;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType1IEEEVArController_vvtmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vvtmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType1IEEEVArController_vvtmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vvtmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PFVArType1IEEEVArController_tvarc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType1IEEEVArController* element = dynamic_cast<const PFVArType1IEEEVArController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tvarc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType1IEEEVArController_vvar(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType1IEEEVArController* element = dynamic_cast<const PFVArType1IEEEVArController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vvar;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType1IEEEVArController_vvarcbw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType1IEEEVArController* element = dynamic_cast<const PFVArType1IEEEVArController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vvarcbw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType1IEEEVArController_vvarref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType1IEEEVArController* element = dynamic_cast<const PFVArType1IEEEVArController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vvarref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType1IEEEVArController_vvtmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType1IEEEVArController* element = dynamic_cast<const PFVArType1IEEEVArController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vvtmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType1IEEEVArController_vvtmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType1IEEEVArController* element = dynamic_cast<const PFVArType1IEEEVArController*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vvtmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PFVArType1IEEEVArController::debugName[] = "PFVArType1IEEEVArController";
const char* PFVArType1IEEEVArController::debugString() const
{
	return PFVArType1IEEEVArController::debugName;
}

void PFVArType1IEEEVArController::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PFVArType1IEEEVArController", &PFVArType1IEEEVArController_factory);
}

void PFVArType1IEEEVArController::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PFVArType1IEEEVArController.tvarc", &assign_PFVArType1IEEEVArController_tvarc);
	assign_map.emplace("PFVArType1IEEEVArController.vvar", &assign_PFVArType1IEEEVArController_vvar);
	assign_map.emplace("PFVArType1IEEEVArController.vvarcbw", &assign_PFVArType1IEEEVArController_vvarcbw);
	assign_map.emplace("PFVArType1IEEEVArController.vvarref", &assign_PFVArType1IEEEVArController_vvarref);
	assign_map.emplace("PFVArType1IEEEVArController.vvtmax", &assign_PFVArType1IEEEVArController_vvtmax);
	assign_map.emplace("PFVArType1IEEEVArController.vvtmin", &assign_PFVArType1IEEEVArController_vvtmin);
}

void PFVArType1IEEEVArController::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PFVArType1IEEEVArController::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PFVArType1IEEEVArController.tvarc", &get_PFVArType1IEEEVArController_tvarc);
	get_map.emplace("PFVArType1IEEEVArController.vvar", &get_PFVArType1IEEEVArController_vvar);
	get_map.emplace("PFVArType1IEEEVArController.vvarcbw", &get_PFVArType1IEEEVArController_vvarcbw);
	get_map.emplace("PFVArType1IEEEVArController.vvarref", &get_PFVArType1IEEEVArController_vvarref);
	get_map.emplace("PFVArType1IEEEVArController.vvtmax", &get_PFVArType1IEEEVArController_vvtmax);
	get_map.emplace("PFVArType1IEEEVArController.vvtmin", &get_PFVArType1IEEEVArController_vvtmin);
}

void PFVArType1IEEEVArController::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addClassGetFnsToMap(get_map);
}

void PFVArType1IEEEVArController::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addEnumGetFnsToMap(get_map);
}

bool PFVArType1IEEEVArController::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PFVArType1IEEEVArController" &&
		dynamic_cast<PFVArType1IEEEVArController*>(otherObject) != nullptr;
}

const BaseClassDefiner PFVArType1IEEEVArController::declare()
{
	return BaseClassDefiner(PFVArType1IEEEVArController::addConstructToMap, PFVArType1IEEEVArController::addPrimitiveAssignFnsToMap, PFVArType1IEEEVArController::addClassAssignFnsToMap, PFVArType1IEEEVArController::debugName);
}

std::map<std::string, AttrDetails> PFVArType1IEEEVArController::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PFVArControllerType1Dynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PFVArType1IEEEVArController_factory()
	{
		return new PFVArType1IEEEVArController;
	}
}
