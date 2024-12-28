/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquivalentInjection.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ReactiveCapabilityCurve.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Voltage.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

EquivalentInjection::EquivalentInjection() : ReactiveCapabilityCurve(nullptr) {};
EquivalentInjection::~EquivalentInjection() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:EquivalentInjection.ReactiveCapabilityCurve", { CGMESProfile::EQ, } },
	{ "cim:EquivalentInjection.maxP", { CGMESProfile::EQ, } },
	{ "cim:EquivalentInjection.maxQ", { CGMESProfile::EQ, } },
	{ "cim:EquivalentInjection.minP", { CGMESProfile::EQ, } },
	{ "cim:EquivalentInjection.minQ", { CGMESProfile::EQ, } },
	{ "cim:EquivalentInjection.p", { CGMESProfile::SSH, } },
	{ "cim:EquivalentInjection.q", { CGMESProfile::SSH, } },
	{ "cim:EquivalentInjection.r", { CGMESProfile::EQ, } },
	{ "cim:EquivalentInjection.r0", { CGMESProfile::EQ, } },
	{ "cim:EquivalentInjection.r2", { CGMESProfile::EQ, } },
	{ "cim:EquivalentInjection.regulationCapability", { CGMESProfile::EQ, } },
	{ "cim:EquivalentInjection.regulationStatus", { CGMESProfile::SSH, } },
	{ "cim:EquivalentInjection.regulationTarget", { CGMESProfile::SSH, } },
	{ "cim:EquivalentInjection.x", { CGMESProfile::EQ, } },
	{ "cim:EquivalentInjection.x0", { CGMESProfile::EQ, } },
	{ "cim:EquivalentInjection.x2", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
EquivalentInjection::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
EquivalentInjection::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EquivalentEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_EquivalentInjection_maxP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->maxP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_maxQ(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->maxQ;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_minP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->minP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_minQ(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->minQ;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_p(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->p;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_r0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->r0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_r2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->r2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_regulationCapability(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->regulationCapability;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_regulationStatus(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->regulationStatus;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_regulationTarget(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->regulationTarget;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_x(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->x;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_x0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->x0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_EquivalentInjection_x2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer >> element->x2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ReactiveCapabilityCurve_EquivalentInjection(BaseClass*, BaseClass*);
bool assign_EquivalentInjection_ReactiveCapabilityCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	ReactiveCapabilityCurve* element2 = dynamic_cast<ReactiveCapabilityCurve*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ReactiveCapabilityCurve != element2)
		{
			element->ReactiveCapabilityCurve = element2;
			return assign_ReactiveCapabilityCurve_EquivalentInjection(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_EquivalentInjection_maxP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
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

bool get_EquivalentInjection_maxQ(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer << element->maxQ;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_minP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
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

bool get_EquivalentInjection_minQ(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer << element->minQ;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_p(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
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

bool get_EquivalentInjection_q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
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

bool get_EquivalentInjection_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer << element->r;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_r0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer << element->r0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_r2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer << element->r2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_regulationCapability(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer << element->regulationCapability;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_regulationStatus(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer << element->regulationStatus;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_regulationTarget(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer << element->regulationTarget;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer << element->x;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_x0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer << element->x0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_x2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
	{
		buffer << element->x2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_EquivalentInjection_ReactiveCapabilityCurve(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1))
	{
		if (element->ReactiveCapabilityCurve != 0)
		{
			BaseClass_list.push_back(element->ReactiveCapabilityCurve);
			return true;
		}
	}
	return false;
}


const char EquivalentInjection::debugName[] = "EquivalentInjection";
const char* EquivalentInjection::debugString() const
{
	return EquivalentInjection::debugName;
}

void EquivalentInjection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:EquivalentInjection"), &EquivalentInjection_factory));
}

void EquivalentInjection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.maxP"), &assign_EquivalentInjection_maxP));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.maxQ"), &assign_EquivalentInjection_maxQ));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.minP"), &assign_EquivalentInjection_minP));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.minQ"), &assign_EquivalentInjection_minQ));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.p"), &assign_EquivalentInjection_p));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.q"), &assign_EquivalentInjection_q));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.r"), &assign_EquivalentInjection_r));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.r0"), &assign_EquivalentInjection_r0));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.r2"), &assign_EquivalentInjection_r2));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.regulationCapability"), &assign_EquivalentInjection_regulationCapability));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.regulationStatus"), &assign_EquivalentInjection_regulationStatus));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.regulationTarget"), &assign_EquivalentInjection_regulationTarget));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.x"), &assign_EquivalentInjection_x));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.x0"), &assign_EquivalentInjection_x0));
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.x2"), &assign_EquivalentInjection_x2));
}

void EquivalentInjection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EquivalentInjection.ReactiveCapabilityCurve"), &assign_EquivalentInjection_ReactiveCapabilityCurve));
}

void EquivalentInjection::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquivalentEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:EquivalentInjection.maxP", &get_EquivalentInjection_maxP);
	get_map.emplace("cim:EquivalentInjection.maxQ", &get_EquivalentInjection_maxQ);
	get_map.emplace("cim:EquivalentInjection.minP", &get_EquivalentInjection_minP);
	get_map.emplace("cim:EquivalentInjection.minQ", &get_EquivalentInjection_minQ);
	get_map.emplace("cim:EquivalentInjection.p", &get_EquivalentInjection_p);
	get_map.emplace("cim:EquivalentInjection.q", &get_EquivalentInjection_q);
	get_map.emplace("cim:EquivalentInjection.r", &get_EquivalentInjection_r);
	get_map.emplace("cim:EquivalentInjection.r0", &get_EquivalentInjection_r0);
	get_map.emplace("cim:EquivalentInjection.r2", &get_EquivalentInjection_r2);
	get_map.emplace("cim:EquivalentInjection.regulationCapability", &get_EquivalentInjection_regulationCapability);
	get_map.emplace("cim:EquivalentInjection.regulationStatus", &get_EquivalentInjection_regulationStatus);
	get_map.emplace("cim:EquivalentInjection.regulationTarget", &get_EquivalentInjection_regulationTarget);
	get_map.emplace("cim:EquivalentInjection.x", &get_EquivalentInjection_x);
	get_map.emplace("cim:EquivalentInjection.x0", &get_EquivalentInjection_x0);
	get_map.emplace("cim:EquivalentInjection.x2", &get_EquivalentInjection_x2);
}

void EquivalentInjection::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquivalentEquipment::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:EquivalentInjection.ReactiveCapabilityCurve", &get_EquivalentInjection_ReactiveCapabilityCurve);
}

void EquivalentInjection::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquivalentEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner EquivalentInjection::declare()
{
	return BaseClassDefiner(EquivalentInjection::addConstructToMap, EquivalentInjection::addPrimitiveAssignFnsToMap, EquivalentInjection::addClassAssignFnsToMap, EquivalentInjection::debugName);
}

namespace CIMPP
{
	BaseClass* EquivalentInjection_factory()
	{
		return new EquivalentInjection;
	}
}
