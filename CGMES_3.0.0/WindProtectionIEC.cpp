/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindProtectionIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindTurbineType1or2IEC.hpp"
#include "WindTurbineType3or4IEC.hpp"

using namespace CIMPP;

WindProtectionIEC::WindProtectionIEC() : WindTurbineType1or2IEC(nullptr), WindTurbineType3or4IEC(nullptr) {}
WindProtectionIEC::~WindProtectionIEC() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindProtectionIEC.WindDynamicsLookupTable", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.WindTurbineType1or2IEC", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.WindTurbineType3or4IEC", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.dfimax", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.fover", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.funder", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.mzc", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.tfma", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.uover", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.uunder", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindProtectionIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindProtectionIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_WindDynamicsLookupTable_WindProtectionIEC(BaseClass*, BaseClass*);
bool assign_WindProtectionIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindProtectionIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType1or2IEC_WindProtectionIEC(BaseClass*, BaseClass*);
bool assign_WindProtectionIEC_WindTurbineType1or2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	WindTurbineType1or2IEC* element2 = dynamic_cast<WindTurbineType1or2IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType1or2IEC != element2)
		{
			element->WindTurbineType1or2IEC = element2;
			return assign_WindTurbineType1or2IEC_WindProtectionIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3or4IEC_WindProtectionIEC(BaseClass*, BaseClass*);
bool assign_WindProtectionIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	WindTurbineType3or4IEC* element2 = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4IEC != element2)
		{
			element->WindTurbineType3or4IEC = element2;
			return assign_WindTurbineType3or4IEC_WindProtectionIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindProtectionIEC_dfimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dfimax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_fover(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fover;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_funder(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->funder;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_mzc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mzc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_tfma(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tfma;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_uover(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uover;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_uunder(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uunder;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}




bool get_WindProtectionIEC_dfimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dfimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_fover(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fover;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_funder(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->funder;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_mzc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mzc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_tfma(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tfma;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_uover(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uover;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_uunder(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uunder;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindProtectionIEC::debugName[] = "WindProtectionIEC";
const char* WindProtectionIEC::debugString() const
{
	return WindProtectionIEC::debugName;
}

void WindProtectionIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:WindProtectionIEC", &WindProtectionIEC_factory);
}

void WindProtectionIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:WindProtectionIEC.dfimax", &assign_WindProtectionIEC_dfimax);
	assign_map.emplace("cim:WindProtectionIEC.fover", &assign_WindProtectionIEC_fover);
	assign_map.emplace("cim:WindProtectionIEC.funder", &assign_WindProtectionIEC_funder);
	assign_map.emplace("cim:WindProtectionIEC.mzc", &assign_WindProtectionIEC_mzc);
	assign_map.emplace("cim:WindProtectionIEC.tfma", &assign_WindProtectionIEC_tfma);
	assign_map.emplace("cim:WindProtectionIEC.uover", &assign_WindProtectionIEC_uover);
	assign_map.emplace("cim:WindProtectionIEC.uunder", &assign_WindProtectionIEC_uunder);
}

void WindProtectionIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:WindProtectionIEC.WindDynamicsLookupTable", &assign_WindProtectionIEC_WindDynamicsLookupTable);
	assign_map.emplace("cim:WindProtectionIEC.WindTurbineType1or2IEC", &assign_WindProtectionIEC_WindTurbineType1or2IEC);
	assign_map.emplace("cim:WindProtectionIEC.WindTurbineType3or4IEC", &assign_WindProtectionIEC_WindTurbineType3or4IEC);
}

void WindProtectionIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindProtectionIEC.dfimax", &get_WindProtectionIEC_dfimax);
	get_map.emplace("cim:WindProtectionIEC.fover", &get_WindProtectionIEC_fover);
	get_map.emplace("cim:WindProtectionIEC.funder", &get_WindProtectionIEC_funder);
	get_map.emplace("cim:WindProtectionIEC.mzc", &get_WindProtectionIEC_mzc);
	get_map.emplace("cim:WindProtectionIEC.tfma", &get_WindProtectionIEC_tfma);
	get_map.emplace("cim:WindProtectionIEC.uover", &get_WindProtectionIEC_uover);
	get_map.emplace("cim:WindProtectionIEC.uunder", &get_WindProtectionIEC_uunder);
}

void WindProtectionIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindProtectionIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindProtectionIEC::declare()
{
	return BaseClassDefiner(WindProtectionIEC::addConstructToMap, WindProtectionIEC::addPrimitiveAssignFnsToMap, WindProtectionIEC::addClassAssignFnsToMap, WindProtectionIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindProtectionIEC_factory()
	{
		return new WindProtectionIEC;
	}
}
