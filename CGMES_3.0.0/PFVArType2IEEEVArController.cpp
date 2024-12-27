/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArType2IEEEVArController.hpp"

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

PFVArType2IEEEVArController::PFVArType2IEEEVArController() {};
PFVArType2IEEEVArController::~PFVArType2IEEEVArController() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PFVArType2IEEEVArController.exlon", { CGMESProfile::DY, } },
	{ "cim:PFVArType2IEEEVArController.ki", { CGMESProfile::DY, } },
	{ "cim:PFVArType2IEEEVArController.kp", { CGMESProfile::DY, } },
	{ "cim:PFVArType2IEEEVArController.qref", { CGMESProfile::DY, } },
	{ "cim:PFVArType2IEEEVArController.vclmt", { CGMESProfile::DY, } },
	{ "cim:PFVArType2IEEEVArController.vref", { CGMESProfile::DY, } },
	{ "cim:PFVArType2IEEEVArController.vs", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PFVArType2IEEEVArController::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PFVArType2IEEEVArController::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PFVArControllerType2Dynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_PFVArType2IEEEVArController_exlon(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEVArController* element = dynamic_cast<PFVArType2IEEEVArController*>(BaseClass_ptr1))
	{
		buffer >> element->exlon;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEVArController_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEVArController* element = dynamic_cast<PFVArType2IEEEVArController*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEVArController_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEVArController* element = dynamic_cast<PFVArType2IEEEVArController*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEVArController_qref(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEVArController* element = dynamic_cast<PFVArType2IEEEVArController*>(BaseClass_ptr1))
	{
		buffer >> element->qref;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEVArController_vclmt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEVArController* element = dynamic_cast<PFVArType2IEEEVArController*>(BaseClass_ptr1))
	{
		buffer >> element->vclmt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEVArController_vref(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEVArController* element = dynamic_cast<PFVArType2IEEEVArController*>(BaseClass_ptr1))
	{
		buffer >> element->vref;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PFVArType2IEEEVArController_vs(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArType2IEEEVArController* element = dynamic_cast<PFVArType2IEEEVArController*>(BaseClass_ptr1))
	{
		buffer >> element->vs;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_PFVArType2IEEEVArController_exlon(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType2IEEEVArController* element = dynamic_cast<const PFVArType2IEEEVArController*>(BaseClass_ptr1))
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

bool get_PFVArType2IEEEVArController_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType2IEEEVArController* element = dynamic_cast<const PFVArType2IEEEVArController*>(BaseClass_ptr1))
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

bool get_PFVArType2IEEEVArController_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType2IEEEVArController* element = dynamic_cast<const PFVArType2IEEEVArController*>(BaseClass_ptr1))
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

bool get_PFVArType2IEEEVArController_qref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType2IEEEVArController* element = dynamic_cast<const PFVArType2IEEEVArController*>(BaseClass_ptr1))
	{
		buffer << element->qref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType2IEEEVArController_vclmt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType2IEEEVArController* element = dynamic_cast<const PFVArType2IEEEVArController*>(BaseClass_ptr1))
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

bool get_PFVArType2IEEEVArController_vref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType2IEEEVArController* element = dynamic_cast<const PFVArType2IEEEVArController*>(BaseClass_ptr1))
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

bool get_PFVArType2IEEEVArController_vs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PFVArType2IEEEVArController* element = dynamic_cast<const PFVArType2IEEEVArController*>(BaseClass_ptr1))
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



const char PFVArType2IEEEVArController::debugName[] = "PFVArType2IEEEVArController";
const char* PFVArType2IEEEVArController::debugString() const
{
	return PFVArType2IEEEVArController::debugName;
}

void PFVArType2IEEEVArController::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController"), &PFVArType2IEEEVArController_factory));
}

void PFVArType2IEEEVArController::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController.exlon"), &assign_PFVArType2IEEEVArController_exlon));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController.ki"), &assign_PFVArType2IEEEVArController_ki));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController.kp"), &assign_PFVArType2IEEEVArController_kp));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController.qref"), &assign_PFVArType2IEEEVArController_qref));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController.vclmt"), &assign_PFVArType2IEEEVArController_vclmt));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController.vref"), &assign_PFVArType2IEEEVArController_vref));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController.vs"), &assign_PFVArType2IEEEVArController_vs));
}

void PFVArType2IEEEVArController::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PFVArType2IEEEVArController::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PFVArType2IEEEVArController.exlon", &get_PFVArType2IEEEVArController_exlon);
	get_map.emplace("cim:PFVArType2IEEEVArController.ki", &get_PFVArType2IEEEVArController_ki);
	get_map.emplace("cim:PFVArType2IEEEVArController.kp", &get_PFVArType2IEEEVArController_kp);
	get_map.emplace("cim:PFVArType2IEEEVArController.qref", &get_PFVArType2IEEEVArController_qref);
	get_map.emplace("cim:PFVArType2IEEEVArController.vclmt", &get_PFVArType2IEEEVArController_vclmt);
	get_map.emplace("cim:PFVArType2IEEEVArController.vref", &get_PFVArType2IEEEVArController_vref);
	get_map.emplace("cim:PFVArType2IEEEVArController.vs", &get_PFVArType2IEEEVArController_vs);
}

void PFVArType2IEEEVArController::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addClassGetFnsToMap(get_map);
}

void PFVArType2IEEEVArController::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PFVArType2IEEEVArController::declare()
{
	return BaseClassDefiner(PFVArType2IEEEVArController::addConstructToMap, PFVArType2IEEEVArController::addPrimitiveAssignFnsToMap, PFVArType2IEEEVArController::addClassAssignFnsToMap, PFVArType2IEEEVArController::debugName);
}

namespace CIMPP
{
	BaseClass* PFVArType2IEEEVArController_factory()
	{
		return new PFVArType2IEEEVArController;
	}
}
