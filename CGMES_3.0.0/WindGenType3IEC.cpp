/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenType3IEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindTurbineType3IEC.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

WindGenType3IEC::WindGenType3IEC() : WindTurbineType3IEC(nullptr) {};
WindGenType3IEC::~WindGenType3IEC() {};



bool assign_WindGenType3IEC_dipmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType3IEC* element = dynamic_cast<WindGenType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->dipmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenType3IEC_diqmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType3IEC* element = dynamic_cast<WindGenType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->diqmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenType3IEC_xs(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenType3IEC* element = dynamic_cast<WindGenType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->xs;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindTurbineType3IEC_WindGenType3IEC(BaseClass*, BaseClass*);
bool assign_WindGenType3IEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenType3IEC* element = dynamic_cast<WindGenType3IEC*>(BaseClass_ptr1);
	WindTurbineType3IEC* element2 = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3IEC != element2)
		{
			element->WindTurbineType3IEC = element2;
			return assign_WindTurbineType3IEC_WindGenType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}




const char WindGenType3IEC::debugName[] = "WindGenType3IEC";
const char* WindGenType3IEC::debugString() const
{
	return WindGenType3IEC::debugName;
}

void WindGenType3IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindGenType3IEC"), &WindGenType3IEC_factory));
}

void WindGenType3IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3IEC.dipmax"), &assign_WindGenType3IEC_dipmax));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3IEC.diqmax"), &assign_WindGenType3IEC_diqmax));
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3IEC.xs"), &assign_WindGenType3IEC_xs));
}

void WindGenType3IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenType3IEC.WindTurbineType3IEC"), &assign_WindGenType3IEC_WindTurbineType3IEC));
}

const BaseClassDefiner WindGenType3IEC::declare()
{
	return BaseClassDefiner(WindGenType3IEC::addConstructToMap, WindGenType3IEC::addPrimitiveAssignFnsToMap, WindGenType3IEC::addClassAssignFnsToMap, WindGenType3IEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindGenType3IEC_factory()
	{
		return new WindGenType3IEC;
	}
}
