/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContQLimIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindTurbineType3or4IEC.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

WindContQLimIEC::WindContQLimIEC() : WindTurbineType3or4IEC(nullptr) {};
WindContQLimIEC::~WindContQLimIEC() {};



bool assign_WindContQLimIEC_qmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContQLimIEC* element = dynamic_cast<WindContQLimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->qmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContQLimIEC_qmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContQLimIEC* element = dynamic_cast<WindContQLimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->qmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindTurbineType3or4IEC_WindContQLimIEC(BaseClass*, BaseClass*);
bool assign_WindContQLimIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContQLimIEC* element = dynamic_cast<WindContQLimIEC*>(BaseClass_ptr1);
	WindTurbineType3or4IEC* element2 = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4IEC != element2)
		{
			element->WindTurbineType3or4IEC = element2;
			return assign_WindTurbineType3or4IEC_WindContQLimIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char WindContQLimIEC::debugName[] = "WindContQLimIEC";
const char* WindContQLimIEC::debugString() const
{
	return WindContQLimIEC::debugName;
}

void WindContQLimIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindContQLimIEC"), &WindContQLimIEC_factory));
}

void WindContQLimIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContQLimIEC.qmax"), &assign_WindContQLimIEC_qmax));
	assign_map.insert(std::make_pair(std::string("cim:WindContQLimIEC.qmin"), &assign_WindContQLimIEC_qmin));
}

void WindContQLimIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContQLimIEC.WindTurbineType3or4IEC"), &assign_WindContQLimIEC_WindTurbineType3or4IEC));
}

const BaseClassDefiner WindContQLimIEC::declare()
{
	return BaseClassDefiner(WindContQLimIEC::addConstructToMap, WindContQLimIEC::addPrimitiveAssignFnsToMap, WindContQLimIEC::addClassAssignFnsToMap, WindContQLimIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindContQLimIEC_factory()
	{
		return new WindContQLimIEC;
	}
}
