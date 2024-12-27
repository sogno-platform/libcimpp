/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindDynamicsLookupTable.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindContCurrLimIEC.hpp"
#include "WindContPType3IEC.hpp"
#include "WindContRotorRIEC.hpp"
#include "WindPlantFreqPcontrolIEC.hpp"
#include "Simple_Float.hpp"
#include "WindLookupTableFunctionKind.hpp"
#include "Simple_Float.hpp"
#include "Integer.hpp"

using namespace CIMPP;

WindDynamicsLookupTable::WindDynamicsLookupTable() : WindContCurrLimIEC(nullptr), WindContPType3IEC(nullptr), WindContRotorRIEC(nullptr), WindPlantFreqPcontrolIEC(nullptr) {};
WindDynamicsLookupTable::~WindDynamicsLookupTable() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindDynamicsLookupTable.WindContCurrLimIEC", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.WindContPType3IEC", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.WindContRotorRIEC", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.WindPlantFreqPcontrolIEC", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.input", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.lookupTableFunctionType", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.output", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.sequence", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindDynamicsLookupTable::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindDynamicsLookupTable::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_WindDynamicsLookupTable_input(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		buffer >> element->input;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_lookupTableFunctionType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		buffer >> element->lookupTableFunctionType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_output(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		buffer >> element->output;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_sequence(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		buffer >> element->sequence;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindContCurrLimIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindContCurrLimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindContCurrLimIEC* element2 = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContCurrLimIEC != element2)
		{
			element->WindContCurrLimIEC = element2;
			return assign_WindContCurrLimIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_WindContPType3IEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindContPType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindContPType3IEC* element2 = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPType3IEC != element2)
		{
			element->WindContPType3IEC = element2;
			return assign_WindContPType3IEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_WindContRotorRIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindContRotorRIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindContRotorRIEC* element2 = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContRotorRIEC != element2)
		{
			element->WindContRotorRIEC = element2;
			return assign_WindContRotorRIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_WindPlantFreqPcontrolIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindPlantFreqPcontrolIEC* element2 = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantFreqPcontrolIEC != element2)
		{
			element->WindPlantFreqPcontrolIEC = element2;
			return assign_WindPlantFreqPcontrolIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindDynamicsLookupTable_input(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		buffer << element->input;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindDynamicsLookupTable_output(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		buffer << element->output;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindDynamicsLookupTable_sequence(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		buffer << element->sequence;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_WindDynamicsLookupTable_WindContCurrLimIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		if (element->WindContCurrLimIEC != 0)
		{
			BaseClass_list.push_back(element->WindContCurrLimIEC);
			return true;
		}
	}
	return false;
}

bool get_WindDynamicsLookupTable_WindContPType3IEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		if (element->WindContPType3IEC != 0)
		{
			BaseClass_list.push_back(element->WindContPType3IEC);
			return true;
		}
	}
	return false;
}

bool get_WindDynamicsLookupTable_WindContRotorRIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		if (element->WindContRotorRIEC != 0)
		{
			BaseClass_list.push_back(element->WindContRotorRIEC);
			return true;
		}
	}
	return false;
}

bool get_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		if (element->WindPlantFreqPcontrolIEC != 0)
		{
			BaseClass_list.push_back(element->WindPlantFreqPcontrolIEC);
			return true;
		}
	}
	return false;
}


bool get_WindDynamicsLookupTable_lookupTableFunctionType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1))
	{
		buffer << element->lookupTableFunctionType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindDynamicsLookupTable::debugName[] = "WindDynamicsLookupTable";
const char* WindDynamicsLookupTable::debugString() const
{
	return WindDynamicsLookupTable::debugName;
}

void WindDynamicsLookupTable::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable"), &WindDynamicsLookupTable_factory));
}

void WindDynamicsLookupTable::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.input"), &assign_WindDynamicsLookupTable_input));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.lookupTableFunctionType"), &assign_WindDynamicsLookupTable_lookupTableFunctionType));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.output"), &assign_WindDynamicsLookupTable_output));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.sequence"), &assign_WindDynamicsLookupTable_sequence));
}

void WindDynamicsLookupTable::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.WindContCurrLimIEC"), &assign_WindDynamicsLookupTable_WindContCurrLimIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.WindContPType3IEC"), &assign_WindDynamicsLookupTable_WindContPType3IEC));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.WindContRotorRIEC"), &assign_WindDynamicsLookupTable_WindContRotorRIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindDynamicsLookupTable.WindPlantFreqPcontrolIEC"), &assign_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC));
}

void WindDynamicsLookupTable::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindDynamicsLookupTable.input", &get_WindDynamicsLookupTable_input);
	get_map.emplace("cim:WindDynamicsLookupTable.output", &get_WindDynamicsLookupTable_output);
	get_map.emplace("cim:WindDynamicsLookupTable.sequence", &get_WindDynamicsLookupTable_sequence);
}

void WindDynamicsLookupTable::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:WindDynamicsLookupTable.WindContCurrLimIEC", &get_WindDynamicsLookupTable_WindContCurrLimIEC);
	get_map.emplace("cim:WindDynamicsLookupTable.WindContPType3IEC", &get_WindDynamicsLookupTable_WindContPType3IEC);
	get_map.emplace("cim:WindDynamicsLookupTable.WindContRotorRIEC", &get_WindDynamicsLookupTable_WindContRotorRIEC);
	get_map.emplace("cim:WindDynamicsLookupTable.WindPlantFreqPcontrolIEC", &get_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC);
}

void WindDynamicsLookupTable::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:WindDynamicsLookupTable.lookupTableFunctionType", &get_WindDynamicsLookupTable_lookupTableFunctionType);
}

const BaseClassDefiner WindDynamicsLookupTable::declare()
{
	return BaseClassDefiner(WindDynamicsLookupTable::addConstructToMap, WindDynamicsLookupTable::addPrimitiveAssignFnsToMap, WindDynamicsLookupTable::addClassAssignFnsToMap, WindDynamicsLookupTable::debugName);
}

namespace CIMPP
{
	BaseClass* WindDynamicsLookupTable_factory()
	{
		return new WindDynamicsLookupTable;
	}
}
