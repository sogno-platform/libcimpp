/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContQPQULimIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindTurbineType3or4IEC.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindContQPQULimIEC::WindContQPQULimIEC() : WindTurbineType3or4IEC(nullptr) {};
WindContQPQULimIEC::~WindContQPQULimIEC() {};




bool assign_WindContQPQULimIEC_tpfiltql(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContQPQULimIEC* element = dynamic_cast<WindContQPQULimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tpfiltql;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContQPQULimIEC_tufiltql(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContQPQULimIEC* element = dynamic_cast<WindContQPQULimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tufiltql;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindDynamicsLookupTable_WindContQPQULimIEC(BaseClass*, BaseClass*);
bool assign_WindContQPQULimIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContQPQULimIEC* element = dynamic_cast<WindContQPQULimIEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindContQPQULimIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3or4IEC_WindContQPQULimIEC(BaseClass*, BaseClass*);
bool assign_WindContQPQULimIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContQPQULimIEC* element = dynamic_cast<WindContQPQULimIEC*>(BaseClass_ptr1);
	WindTurbineType3or4IEC* element2 = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4IEC != element2)
		{
			element->WindTurbineType3or4IEC = element2;
			return assign_WindTurbineType3or4IEC_WindContQPQULimIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char WindContQPQULimIEC::debugName[] = "WindContQPQULimIEC";
const char* WindContQPQULimIEC::debugString() const
{
	return WindContQPQULimIEC::debugName;
}

void WindContQPQULimIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindContQPQULimIEC"), &WindContQPQULimIEC_factory));
}

void WindContQPQULimIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContQPQULimIEC.tpfiltql"), &assign_WindContQPQULimIEC_tpfiltql));
	assign_map.insert(std::make_pair(std::string("cim:WindContQPQULimIEC.tufiltql"), &assign_WindContQPQULimIEC_tufiltql));
}

void WindContQPQULimIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContQPQULimIEC.WindDynamicsLookupTable"), &assign_WindContQPQULimIEC_WindDynamicsLookupTable));
	assign_map.insert(std::make_pair(std::string("cim:WindContQPQULimIEC.WindTurbineType3or4IEC"), &assign_WindContQPQULimIEC_WindTurbineType3or4IEC));
}

const BaseClassDefiner WindContQPQULimIEC::declare()
{
	return BaseClassDefiner(WindContQPQULimIEC::addConstructToMap, WindContQPQULimIEC::addPrimitiveAssignFnsToMap, WindContQPQULimIEC::addClassAssignFnsToMap, WindContQPQULimIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindContQPQULimIEC_factory()
	{
		return new WindContQPQULimIEC;
	}
}
