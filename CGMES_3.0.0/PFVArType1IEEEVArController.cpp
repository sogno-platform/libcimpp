/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArType1IEEEVArController.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Seconds.hpp"
#include "PU.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

PFVArType1IEEEVArController::PFVArType1IEEEVArController() {};
PFVArType1IEEEVArController::~PFVArType1IEEEVArController() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PFVArType1IEEEVArController.tvarc", { CGMESProfile::DY, } },
	{ "cim:PFVArType1IEEEVArController.vvar", { CGMESProfile::DY, } },
	{ "cim:PFVArType1IEEEVArController.vvarcbw", { CGMESProfile::DY, } },
	{ "cim:PFVArType1IEEEVArController.vvarref", { CGMESProfile::DY, } },
	{ "cim:PFVArType1IEEEVArController.vvtmax", { CGMESProfile::DY, } },
	{ "cim:PFVArType1IEEEVArController.vvtmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PFVArType1IEEEVArController::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PFVArType1IEEEVArController::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PFVArControllerType1Dynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_PFVArType1IEEEVArController_tvarc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1))
	{
		buffer >> element->tvarc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEVArController_vvar(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1))
	{
		buffer >> element->vvar;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEVArController_vvarcbw(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1))
	{
		buffer >> element->vvarcbw;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEVArController_vvarref(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1))
	{
		buffer >> element->vvarref;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEVArController_vvtmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1))
	{
		buffer >> element->vvtmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEVArController_vvtmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1))
	{
		buffer >> element->vvtmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_PFVArType1IEEEVArController_tvarc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType1IEEEVArController* element = dynamic_cast<const PFVArType1IEEEVArController*>(BaseClass_ptr1))
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
	if (const PFVArType1IEEEVArController* element = dynamic_cast<const PFVArType1IEEEVArController*>(BaseClass_ptr1))
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
	if (const PFVArType1IEEEVArController* element = dynamic_cast<const PFVArType1IEEEVArController*>(BaseClass_ptr1))
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
	if (const PFVArType1IEEEVArController* element = dynamic_cast<const PFVArType1IEEEVArController*>(BaseClass_ptr1))
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
	if (const PFVArType1IEEEVArController* element = dynamic_cast<const PFVArType1IEEEVArController*>(BaseClass_ptr1))
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
	if (const PFVArType1IEEEVArController* element = dynamic_cast<const PFVArType1IEEEVArController*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEVArController"), &PFVArType1IEEEVArController_factory));
}

void PFVArType1IEEEVArController::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEVArController.tvarc"), &assign_PFVArType1IEEEVArController_tvarc));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEVArController.vvar"), &assign_PFVArType1IEEEVArController_vvar));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEVArController.vvarcbw"), &assign_PFVArType1IEEEVArController_vvarcbw));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEVArController.vvarref"), &assign_PFVArType1IEEEVArController_vvarref));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEVArController.vvtmax"), &assign_PFVArType1IEEEVArController_vvtmax));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEVArController.vvtmin"), &assign_PFVArType1IEEEVArController_vvtmin));
}

void PFVArType1IEEEVArController::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PFVArType1IEEEVArController::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PFVArType1IEEEVArController.tvarc", &get_PFVArType1IEEEVArController_tvarc);
	get_map.emplace("cim:PFVArType1IEEEVArController.vvar", &get_PFVArType1IEEEVArController_vvar);
	get_map.emplace("cim:PFVArType1IEEEVArController.vvarcbw", &get_PFVArType1IEEEVArController_vvarcbw);
	get_map.emplace("cim:PFVArType1IEEEVArController.vvarref", &get_PFVArType1IEEEVArController_vvarref);
	get_map.emplace("cim:PFVArType1IEEEVArController.vvtmax", &get_PFVArType1IEEEVArController_vvtmax);
	get_map.emplace("cim:PFVArType1IEEEVArController.vvtmin", &get_PFVArType1IEEEVArController_vvtmin);
}

void PFVArType1IEEEVArController::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addClassGetFnsToMap(get_map);
}

void PFVArType1IEEEVArController::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PFVArType1IEEEVArController::declare()
{
	return BaseClassDefiner(PFVArType1IEEEVArController::addConstructToMap, PFVArType1IEEEVArController::addPrimitiveAssignFnsToMap, PFVArType1IEEEVArController::addClassAssignFnsToMap, PFVArType1IEEEVArController::debugName);
}

namespace CIMPP
{
	BaseClass* PFVArType1IEEEVArController_factory()
	{
		return new PFVArType1IEEEVArController;
	}
}
