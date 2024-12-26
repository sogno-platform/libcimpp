/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenType4IEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindTurbineType4aIEC.hpp"
#include "WindTurbineType4bIEC.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindGenType4IEC::WindGenType4IEC() : WindTurbineType4aIEC(nullptr), WindTurbineType4bIEC(nullptr) {};
WindGenType4IEC::~WindGenType4IEC() {};




bool assign_WindGenType4IEC_dipmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1))
	{
		buffer >> element->dipmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenType4IEC_diqmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1))
	{
		buffer >> element->diqmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenType4IEC_diqmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1))
	{
		buffer >> element->diqmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenType4IEC_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1))
	{
		buffer >> element->tg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindTurbineType4aIEC_WindGenType4IEC(BaseClass*, BaseClass*);
bool assign_WindGenType4IEC_WindTurbineType4aIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1);
	WindTurbineType4aIEC* element2 = dynamic_cast<WindTurbineType4aIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType4aIEC != element2)
		{
			element->WindTurbineType4aIEC = element2;
			return assign_WindTurbineType4aIEC_WindGenType4IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType4bIEC_WindGenType4IEC(BaseClass*, BaseClass*);
bool assign_WindGenType4IEC_WindTurbineType4bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1);
	WindTurbineType4bIEC* element2 = dynamic_cast<WindTurbineType4bIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType4bIEC != element2)
		{
			element->WindTurbineType4bIEC = element2;
			return assign_WindTurbineType4bIEC_WindGenType4IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}





const char WindGenType4IEC::debugName[] = "WindGenType4IEC";
const char* WindGenType4IEC::debugString() const
{
	return WindGenType4IEC::debugName;
}

void WindGenType4IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindGenType4IEC"), &WindGenType4IEC_factory));
}

void WindGenType4IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenType4IEC.dipmax"), &assign_WindGenType4IEC_dipmax));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType4IEC.diqmax"), &assign_WindGenType4IEC_diqmax));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType4IEC.diqmin"), &assign_WindGenType4IEC_diqmin));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType4IEC.tg"), &assign_WindGenType4IEC_tg));
}

void WindGenType4IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenType4IEC.WindTurbineType4aIEC"), &assign_WindGenType4IEC_WindTurbineType4aIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType4IEC.WindTurbineType4bIEC"), &assign_WindGenType4IEC_WindTurbineType4bIEC));
}

const BaseClassDefiner WindGenType4IEC::declare()
{
	return BaseClassDefiner(WindGenType4IEC::addConstructToMap, WindGenType4IEC::addPrimitiveAssignFnsToMap, WindGenType4IEC::addClassAssignFnsToMap, WindGenType4IEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindGenType4IEC_factory()
	{
		return new WindGenType4IEC;
	}
}
