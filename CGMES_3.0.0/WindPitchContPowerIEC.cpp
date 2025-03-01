/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPitchContPowerIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindGenTurbineType1bIEC.hpp"
#include "WindGenTurbineType2IEC.hpp"

using namespace CIMPP;

WindPitchContPowerIEC::WindPitchContPowerIEC() : WindGenTurbineType1bIEC(nullptr), WindGenTurbineType2IEC(nullptr) {}
WindPitchContPowerIEC::~WindPitchContPowerIEC() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindPitchContPowerIEC.WindDynamicsLookupTable", { CGMESProfile::DY, } },
	{ "cim:WindPitchContPowerIEC.WindGenTurbineType1bIEC", { CGMESProfile::DY, } },
	{ "cim:WindPitchContPowerIEC.WindGenTurbineType2IEC", { CGMESProfile::DY, } },
	{ "cim:WindPitchContPowerIEC.dpmax", { CGMESProfile::DY, } },
	{ "cim:WindPitchContPowerIEC.dpmin", { CGMESProfile::DY, } },
	{ "cim:WindPitchContPowerIEC.pmin", { CGMESProfile::DY, } },
	{ "cim:WindPitchContPowerIEC.pset", { CGMESProfile::DY, } },
	{ "cim:WindPitchContPowerIEC.t1", { CGMESProfile::DY, } },
	{ "cim:WindPitchContPowerIEC.tr", { CGMESProfile::DY, } },
	{ "cim:WindPitchContPowerIEC.uuvrt", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindPitchContPowerIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindPitchContPowerIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_WindDynamicsLookupTable_WindPitchContPowerIEC(BaseClass*, BaseClass*);
bool assign_WindPitchContPowerIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindPitchContPowerIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGenTurbineType1bIEC_WindPitchContPowerIEC(BaseClass*, BaseClass*);
bool assign_WindPitchContPowerIEC_WindGenTurbineType1bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1);
	WindGenTurbineType1bIEC* element2 = dynamic_cast<WindGenTurbineType1bIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType1bIEC != element2)
		{
			element->WindGenTurbineType1bIEC = element2;
			return assign_WindGenTurbineType1bIEC_WindPitchContPowerIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGenTurbineType2IEC_WindPitchContPowerIEC(BaseClass*, BaseClass*);
bool assign_WindPitchContPowerIEC_WindGenTurbineType2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1);
	WindGenTurbineType2IEC* element2 = dynamic_cast<WindGenTurbineType2IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType2IEC != element2)
		{
			element->WindGenTurbineType2IEC = element2;
			return assign_WindGenTurbineType2IEC_WindPitchContPowerIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPitchContPowerIEC_dpmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dpmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContPowerIEC_dpmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dpmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContPowerIEC_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContPowerIEC_pset(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pset;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContPowerIEC_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContPowerIEC_tr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContPowerIEC_uuvrt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uuvrt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}




bool get_WindPitchContPowerIEC_dpmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContPowerIEC* element = dynamic_cast<const WindPitchContPowerIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dpmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContPowerIEC_dpmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContPowerIEC* element = dynamic_cast<const WindPitchContPowerIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dpmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContPowerIEC_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContPowerIEC* element = dynamic_cast<const WindPitchContPowerIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContPowerIEC_pset(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContPowerIEC* element = dynamic_cast<const WindPitchContPowerIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pset;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContPowerIEC_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContPowerIEC* element = dynamic_cast<const WindPitchContPowerIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContPowerIEC_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContPowerIEC* element = dynamic_cast<const WindPitchContPowerIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContPowerIEC_uuvrt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContPowerIEC* element = dynamic_cast<const WindPitchContPowerIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uuvrt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindPitchContPowerIEC::debugName[] = "WindPitchContPowerIEC";
const char* WindPitchContPowerIEC::debugString() const
{
	return WindPitchContPowerIEC::debugName;
}

void WindPitchContPowerIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:WindPitchContPowerIEC", &WindPitchContPowerIEC_factory);
}

void WindPitchContPowerIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:WindPitchContPowerIEC.dpmax", &assign_WindPitchContPowerIEC_dpmax);
	assign_map.emplace("cim:WindPitchContPowerIEC.dpmin", &assign_WindPitchContPowerIEC_dpmin);
	assign_map.emplace("cim:WindPitchContPowerIEC.pmin", &assign_WindPitchContPowerIEC_pmin);
	assign_map.emplace("cim:WindPitchContPowerIEC.pset", &assign_WindPitchContPowerIEC_pset);
	assign_map.emplace("cim:WindPitchContPowerIEC.t1", &assign_WindPitchContPowerIEC_t1);
	assign_map.emplace("cim:WindPitchContPowerIEC.tr", &assign_WindPitchContPowerIEC_tr);
	assign_map.emplace("cim:WindPitchContPowerIEC.uuvrt", &assign_WindPitchContPowerIEC_uuvrt);
}

void WindPitchContPowerIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:WindPitchContPowerIEC.WindDynamicsLookupTable", &assign_WindPitchContPowerIEC_WindDynamicsLookupTable);
	assign_map.emplace("cim:WindPitchContPowerIEC.WindGenTurbineType1bIEC", &assign_WindPitchContPowerIEC_WindGenTurbineType1bIEC);
	assign_map.emplace("cim:WindPitchContPowerIEC.WindGenTurbineType2IEC", &assign_WindPitchContPowerIEC_WindGenTurbineType2IEC);
}

void WindPitchContPowerIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindPitchContPowerIEC.dpmax", &get_WindPitchContPowerIEC_dpmax);
	get_map.emplace("cim:WindPitchContPowerIEC.dpmin", &get_WindPitchContPowerIEC_dpmin);
	get_map.emplace("cim:WindPitchContPowerIEC.pmin", &get_WindPitchContPowerIEC_pmin);
	get_map.emplace("cim:WindPitchContPowerIEC.pset", &get_WindPitchContPowerIEC_pset);
	get_map.emplace("cim:WindPitchContPowerIEC.t1", &get_WindPitchContPowerIEC_t1);
	get_map.emplace("cim:WindPitchContPowerIEC.tr", &get_WindPitchContPowerIEC_tr);
	get_map.emplace("cim:WindPitchContPowerIEC.uuvrt", &get_WindPitchContPowerIEC_uuvrt);
}

void WindPitchContPowerIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindPitchContPowerIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindPitchContPowerIEC::declare()
{
	return BaseClassDefiner(WindPitchContPowerIEC::addConstructToMap, WindPitchContPowerIEC::addPrimitiveAssignFnsToMap, WindPitchContPowerIEC::addClassAssignFnsToMap, WindPitchContPowerIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindPitchContPowerIEC_factory()
	{
		return new WindPitchContPowerIEC;
	}
}
