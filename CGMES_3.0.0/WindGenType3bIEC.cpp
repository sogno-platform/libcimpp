/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenType3bIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindGenType3bIEC::WindGenType3bIEC() {};
WindGenType3bIEC::~WindGenType3bIEC() {};



bool assign_WindGenType3bIEC_mwtcwp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType3bIEC* element = dynamic_cast<WindGenType3bIEC*>(BaseClass_ptr1))
	{
		buffer >> element->mwtcwp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenType3bIEC_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType3bIEC* element = dynamic_cast<WindGenType3bIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenType3bIEC_two(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType3bIEC* element = dynamic_cast<WindGenType3bIEC*>(BaseClass_ptr1))
	{
		buffer >> element->two;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindDynamicsLookupTable_WindGenType3bIEC(BaseClass*, BaseClass*);
bool assign_WindGenType3bIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenType3bIEC* element = dynamic_cast<WindGenType3bIEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindGenType3bIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}




const char WindGenType3bIEC::debugName[] = "WindGenType3bIEC";
const char* WindGenType3bIEC::debugString() const
{
	return WindGenType3bIEC::debugName;
}

void WindGenType3bIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindGenType3bIEC"), &WindGenType3bIEC_factory));
}

void WindGenType3bIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3bIEC.mwtcwp"), &assign_WindGenType3bIEC_mwtcwp));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3bIEC.tg"), &assign_WindGenType3bIEC_tg));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3bIEC.two"), &assign_WindGenType3bIEC_two));
}

void WindGenType3bIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3bIEC.WindDynamicsLookupTable"), &assign_WindGenType3bIEC_WindDynamicsLookupTable));
}

const BaseClassDefiner WindGenType3bIEC::declare()
{
	return BaseClassDefiner(WindGenType3bIEC::addConstructToMap, WindGenType3bIEC::addPrimitiveAssignFnsToMap, WindGenType3bIEC::addClassAssignFnsToMap, WindGenType3bIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindGenType3bIEC_factory()
	{
		return new WindGenType3bIEC;
	}
}
