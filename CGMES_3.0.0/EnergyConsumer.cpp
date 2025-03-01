/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EnergyConsumer.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "LoadDynamics.hpp"
#include "LoadResponseCharacteristic.hpp"

using namespace CIMPP;

EnergyConsumer::EnergyConsumer() : LoadDynamics(nullptr), LoadResponse(nullptr) {}
EnergyConsumer::~EnergyConsumer() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:EnergyConsumer.LoadDynamics", { CGMESProfile::DY, } },
	{ "cim:EnergyConsumer.LoadResponse", { CGMESProfile::EQ, } },
	{ "cim:EnergyConsumer.p", { CGMESProfile::SSH, } },
	{ "cim:EnergyConsumer.pfixed", { CGMESProfile::EQ, } },
	{ "cim:EnergyConsumer.pfixedPct", { CGMESProfile::EQ, } },
	{ "cim:EnergyConsumer.q", { CGMESProfile::SSH, } },
	{ "cim:EnergyConsumer.qfixed", { CGMESProfile::EQ, } },
	{ "cim:EnergyConsumer.qfixedPct", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
EnergyConsumer::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
EnergyConsumer::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EnergyConnection::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_LoadDynamics_EnergyConsumer(BaseClass*, BaseClass*);
bool assign_EnergyConsumer_LoadDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1);
	LoadDynamics* element2 = dynamic_cast<LoadDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadDynamics != element2)
		{
			element->LoadDynamics = element2;
			return assign_LoadDynamics_EnergyConsumer(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_LoadResponseCharacteristic_EnergyConsumer(BaseClass*, BaseClass*);
bool assign_EnergyConsumer_LoadResponse(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1);
	LoadResponseCharacteristic* element2 = dynamic_cast<LoadResponseCharacteristic*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadResponse != element2)
		{
			element->LoadResponse = element2;
			return assign_LoadResponseCharacteristic_EnergyConsumer(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_EnergyConsumer_p(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1);
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

bool assign_EnergyConsumer_pfixed(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pfixed;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EnergyConsumer_pfixedPct(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pfixedPct;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EnergyConsumer_q(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1);
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

bool assign_EnergyConsumer_qfixed(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qfixed;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EnergyConsumer_qfixedPct(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergyConsumer* element = dynamic_cast<EnergyConsumer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qfixedPct;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_EnergyConsumer_LoadDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const EnergyConsumer* element = dynamic_cast<const EnergyConsumer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->LoadDynamics != 0)
		{
			BaseClass_list.push_back(element->LoadDynamics);
			return true;
		}
	}
	return false;
}

bool get_EnergyConsumer_LoadResponse(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const EnergyConsumer* element = dynamic_cast<const EnergyConsumer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->LoadResponse != 0)
		{
			BaseClass_list.push_back(element->LoadResponse);
			return true;
		}
	}
	return false;
}

bool get_EnergyConsumer_p(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergyConsumer* element = dynamic_cast<const EnergyConsumer*>(BaseClass_ptr1);
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

bool get_EnergyConsumer_pfixed(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergyConsumer* element = dynamic_cast<const EnergyConsumer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pfixed;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergyConsumer_pfixedPct(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergyConsumer* element = dynamic_cast<const EnergyConsumer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pfixedPct;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergyConsumer_q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergyConsumer* element = dynamic_cast<const EnergyConsumer*>(BaseClass_ptr1);
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

bool get_EnergyConsumer_qfixed(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergyConsumer* element = dynamic_cast<const EnergyConsumer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qfixed;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergyConsumer_qfixedPct(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergyConsumer* element = dynamic_cast<const EnergyConsumer*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qfixedPct;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char EnergyConsumer::debugName[] = "EnergyConsumer";
const char* EnergyConsumer::debugString() const
{
	return EnergyConsumer::debugName;
}

void EnergyConsumer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:EnergyConsumer", &EnergyConsumer_factory);
}

void EnergyConsumer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:EnergyConsumer.p", &assign_EnergyConsumer_p);
	assign_map.emplace("cim:EnergyConsumer.pfixed", &assign_EnergyConsumer_pfixed);
	assign_map.emplace("cim:EnergyConsumer.pfixedPct", &assign_EnergyConsumer_pfixedPct);
	assign_map.emplace("cim:EnergyConsumer.q", &assign_EnergyConsumer_q);
	assign_map.emplace("cim:EnergyConsumer.qfixed", &assign_EnergyConsumer_qfixed);
	assign_map.emplace("cim:EnergyConsumer.qfixedPct", &assign_EnergyConsumer_qfixedPct);
}

void EnergyConsumer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:EnergyConsumer.LoadDynamics", &assign_EnergyConsumer_LoadDynamics);
	assign_map.emplace("cim:EnergyConsumer.LoadResponse", &assign_EnergyConsumer_LoadResponse);
}

void EnergyConsumer::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConnection::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:EnergyConsumer.p", &get_EnergyConsumer_p);
	get_map.emplace("cim:EnergyConsumer.pfixed", &get_EnergyConsumer_pfixed);
	get_map.emplace("cim:EnergyConsumer.pfixedPct", &get_EnergyConsumer_pfixedPct);
	get_map.emplace("cim:EnergyConsumer.q", &get_EnergyConsumer_q);
	get_map.emplace("cim:EnergyConsumer.qfixed", &get_EnergyConsumer_qfixed);
	get_map.emplace("cim:EnergyConsumer.qfixedPct", &get_EnergyConsumer_qfixedPct);
}

void EnergyConsumer::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EnergyConnection::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:EnergyConsumer.LoadDynamics", &get_EnergyConsumer_LoadDynamics);
	get_map.emplace("cim:EnergyConsumer.LoadResponse", &get_EnergyConsumer_LoadResponse);
}

void EnergyConsumer::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConnection::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner EnergyConsumer::declare()
{
	return BaseClassDefiner(EnergyConsumer::addConstructToMap, EnergyConsumer::addPrimitiveAssignFnsToMap, EnergyConsumer::addClassAssignFnsToMap, EnergyConsumer::debugName);
}

namespace CIMPP
{
	BaseClass* EnergyConsumer_factory()
	{
		return new EnergyConsumer;
	}
}
