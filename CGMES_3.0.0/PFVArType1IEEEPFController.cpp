/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArType1IEEEPFController.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Boolean.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

PFVArType1IEEEPFController::PFVArType1IEEEPFController() {};
PFVArType1IEEEPFController::~PFVArType1IEEEPFController() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PFVArType1IEEEPFController.ovex", { CGMESProfile::DY, } },
	{ "cim:PFVArType1IEEEPFController.tpfc", { CGMESProfile::DY, } },
	{ "cim:PFVArType1IEEEPFController.vitmin", { CGMESProfile::DY, } },
	{ "cim:PFVArType1IEEEPFController.vpf", { CGMESProfile::DY, } },
	{ "cim:PFVArType1IEEEPFController.vpfcbw", { CGMESProfile::DY, } },
	{ "cim:PFVArType1IEEEPFController.vpfref", { CGMESProfile::DY, } },
	{ "cim:PFVArType1IEEEPFController.vvtmax", { CGMESProfile::DY, } },
	{ "cim:PFVArType1IEEEPFController.vvtmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PFVArType1IEEEPFController::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PFVArType1IEEEPFController::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PFVArControllerType1Dynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_PFVArType1IEEEPFController_ovex(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->ovex;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEPFController_tpfc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->tpfc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEPFController_vitmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vitmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEPFController_vpf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vpf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEPFController_vpfcbw(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vpfcbw;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEPFController_vpfref(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vpfref;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEPFController_vvtmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vvtmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType1IEEEPFController_vvtmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType1IEEEPFController* element = dynamic_cast<PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vvtmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_PFVArType1IEEEPFController_ovex(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType1IEEEPFController* element = dynamic_cast<const PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer << element->ovex;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType1IEEEPFController_tpfc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType1IEEEPFController* element = dynamic_cast<const PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer << element->tpfc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType1IEEEPFController_vitmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType1IEEEPFController* element = dynamic_cast<const PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer << element->vitmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType1IEEEPFController_vpf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType1IEEEPFController* element = dynamic_cast<const PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer << element->vpf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType1IEEEPFController_vpfcbw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType1IEEEPFController* element = dynamic_cast<const PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer << element->vpfcbw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType1IEEEPFController_vpfref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType1IEEEPFController* element = dynamic_cast<const PFVArType1IEEEPFController*>(BaseClass_ptr1))
	{
		buffer << element->vpfref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType1IEEEPFController_vvtmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType1IEEEPFController* element = dynamic_cast<const PFVArType1IEEEPFController*>(BaseClass_ptr1))
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

bool get_PFVArType1IEEEPFController_vvtmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType1IEEEPFController* element = dynamic_cast<const PFVArType1IEEEPFController*>(BaseClass_ptr1))
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



const char PFVArType1IEEEPFController::debugName[] = "PFVArType1IEEEPFController";
const char* PFVArType1IEEEPFController::debugString() const
{
	return PFVArType1IEEEPFController::debugName;
}

void PFVArType1IEEEPFController::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController"), &PFVArType1IEEEPFController_factory));
}

void PFVArType1IEEEPFController::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.ovex"), &assign_PFVArType1IEEEPFController_ovex));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.tpfc"), &assign_PFVArType1IEEEPFController_tpfc));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.vitmin"), &assign_PFVArType1IEEEPFController_vitmin));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.vpf"), &assign_PFVArType1IEEEPFController_vpf));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.vpfcbw"), &assign_PFVArType1IEEEPFController_vpfcbw));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.vpfref"), &assign_PFVArType1IEEEPFController_vpfref));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.vvtmax"), &assign_PFVArType1IEEEPFController_vvtmax));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEPFController.vvtmin"), &assign_PFVArType1IEEEPFController_vvtmin));
}

void PFVArType1IEEEPFController::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PFVArType1IEEEPFController::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PFVArType1IEEEPFController.ovex", &get_PFVArType1IEEEPFController_ovex);
	get_map.emplace("cim:PFVArType1IEEEPFController.tpfc", &get_PFVArType1IEEEPFController_tpfc);
	get_map.emplace("cim:PFVArType1IEEEPFController.vitmin", &get_PFVArType1IEEEPFController_vitmin);
	get_map.emplace("cim:PFVArType1IEEEPFController.vpf", &get_PFVArType1IEEEPFController_vpf);
	get_map.emplace("cim:PFVArType1IEEEPFController.vpfcbw", &get_PFVArType1IEEEPFController_vpfcbw);
	get_map.emplace("cim:PFVArType1IEEEPFController.vpfref", &get_PFVArType1IEEEPFController_vpfref);
	get_map.emplace("cim:PFVArType1IEEEPFController.vvtmax", &get_PFVArType1IEEEPFController_vvtmax);
	get_map.emplace("cim:PFVArType1IEEEPFController.vvtmin", &get_PFVArType1IEEEPFController_vvtmin);
}

void PFVArType1IEEEPFController::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addClassGetFnsToMap(get_map);
}

void PFVArType1IEEEPFController::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PFVArType1IEEEPFController::declare()
{
	return BaseClassDefiner(PFVArType1IEEEPFController::addConstructToMap, PFVArType1IEEEPFController::addPrimitiveAssignFnsToMap, PFVArType1IEEEPFController::addClassAssignFnsToMap, PFVArType1IEEEPFController::debugName);
}

namespace CIMPP
{
	BaseClass* PFVArType1IEEEPFController_factory()
	{
		return new PFVArType1IEEEPFController;
	}
}
