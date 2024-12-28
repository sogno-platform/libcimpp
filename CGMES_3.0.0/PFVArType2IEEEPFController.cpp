/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArType2IEEEPFController.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"

using namespace CIMPP;

PFVArType2IEEEPFController::PFVArType2IEEEPFController() {};
PFVArType2IEEEPFController::~PFVArType2IEEEPFController() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PFVArType2IEEEPFController.exlon", { CGMESProfile::DY, } },
	{ "cim:PFVArType2IEEEPFController.ki", { CGMESProfile::DY, } },
	{ "cim:PFVArType2IEEEPFController.kp", { CGMESProfile::DY, } },
	{ "cim:PFVArType2IEEEPFController.pfref", { CGMESProfile::DY, } },
	{ "cim:PFVArType2IEEEPFController.vclmt", { CGMESProfile::DY, } },
	{ "cim:PFVArType2IEEEPFController.vref", { CGMESProfile::DY, } },
	{ "cim:PFVArType2IEEEPFController.vs", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PFVArType2IEEEPFController::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PFVArType2IEEEPFController::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PFVArControllerType2Dynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_PFVArType2IEEEPFController_exlon(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->exlon;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_pfref(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->pfref;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_vclmt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vclmt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_vref(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vref;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEPFController_vs(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEPFController* element = dynamic_cast<PFVArType2IEEEPFController*>(BaseClass_ptr1))
	{
		buffer >> element->vs;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_PFVArType2IEEEPFController_exlon(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType2IEEEPFController* element = dynamic_cast<const PFVArType2IEEEPFController*>(BaseClass_ptr1))
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
	if (const PFVArType2IEEEPFController* element = dynamic_cast<const PFVArType2IEEEPFController*>(BaseClass_ptr1))
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
	if (const PFVArType2IEEEPFController* element = dynamic_cast<const PFVArType2IEEEPFController*>(BaseClass_ptr1))
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
	if (const PFVArType2IEEEPFController* element = dynamic_cast<const PFVArType2IEEEPFController*>(BaseClass_ptr1))
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
	if (const PFVArType2IEEEPFController* element = dynamic_cast<const PFVArType2IEEEPFController*>(BaseClass_ptr1))
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
	if (const PFVArType2IEEEPFController* element = dynamic_cast<const PFVArType2IEEEPFController*>(BaseClass_ptr1))
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
	if (const PFVArType2IEEEPFController* element = dynamic_cast<const PFVArType2IEEEPFController*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController"), &PFVArType2IEEEPFController_factory));
}

void PFVArType2IEEEPFController::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController.exlon"), &assign_PFVArType2IEEEPFController_exlon));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController.ki"), &assign_PFVArType2IEEEPFController_ki));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController.kp"), &assign_PFVArType2IEEEPFController_kp));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController.pfref"), &assign_PFVArType2IEEEPFController_pfref));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController.vclmt"), &assign_PFVArType2IEEEPFController_vclmt));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController.vref"), &assign_PFVArType2IEEEPFController_vref));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEPFController.vs"), &assign_PFVArType2IEEEPFController_vs));
}

void PFVArType2IEEEPFController::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PFVArType2IEEEPFController::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PFVArType2IEEEPFController.exlon", &get_PFVArType2IEEEPFController_exlon);
	get_map.emplace("cim:PFVArType2IEEEPFController.ki", &get_PFVArType2IEEEPFController_ki);
	get_map.emplace("cim:PFVArType2IEEEPFController.kp", &get_PFVArType2IEEEPFController_kp);
	get_map.emplace("cim:PFVArType2IEEEPFController.pfref", &get_PFVArType2IEEEPFController_pfref);
	get_map.emplace("cim:PFVArType2IEEEPFController.vclmt", &get_PFVArType2IEEEPFController_vclmt);
	get_map.emplace("cim:PFVArType2IEEEPFController.vref", &get_PFVArType2IEEEPFController_vref);
	get_map.emplace("cim:PFVArType2IEEEPFController.vs", &get_PFVArType2IEEEPFController_vs);
}

void PFVArType2IEEEPFController::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addClassGetFnsToMap(get_map);
}

void PFVArType2IEEEPFController::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PFVArType2IEEEPFController::declare()
{
	return BaseClassDefiner(PFVArType2IEEEPFController::addConstructToMap, PFVArType2IEEEPFController::addPrimitiveAssignFnsToMap, PFVArType2IEEEPFController::addClassAssignFnsToMap, PFVArType2IEEEPFController::debugName);
}

namespace CIMPP
{
	BaseClass* PFVArType2IEEEPFController_factory()
	{
		return new PFVArType2IEEEPFController;
	}
}
