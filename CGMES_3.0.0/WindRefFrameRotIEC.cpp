/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindRefFrameRotIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindTurbineType3or4IEC.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

WindRefFrameRotIEC::WindRefFrameRotIEC() : WindTurbineType3or4IEC(nullptr) {};
WindRefFrameRotIEC::~WindRefFrameRotIEC() {};



bool assign_WindRefFrameRotIEC_tpll(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindRefFrameRotIEC* element = dynamic_cast<WindRefFrameRotIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tpll;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindRefFrameRotIEC_upll1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindRefFrameRotIEC* element = dynamic_cast<WindRefFrameRotIEC*>(BaseClass_ptr1))
	{
		buffer >> element->upll1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindRefFrameRotIEC_upll2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindRefFrameRotIEC* element = dynamic_cast<WindRefFrameRotIEC*>(BaseClass_ptr1))
	{
		buffer >> element->upll2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindTurbineType3or4IEC_WindRefFrameRotIEC(BaseClass*, BaseClass*);
bool assign_WindRefFrameRotIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindRefFrameRotIEC* element = dynamic_cast<WindRefFrameRotIEC*>(BaseClass_ptr1);
	WindTurbineType3or4IEC* element2 = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4IEC != element2)
		{
			element->WindTurbineType3or4IEC = element2;
			return assign_WindTurbineType3or4IEC_WindRefFrameRotIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}




const char WindRefFrameRotIEC::debugName[] = "WindRefFrameRotIEC";
const char* WindRefFrameRotIEC::debugString() const
{
	return WindRefFrameRotIEC::debugName;
}

void WindRefFrameRotIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindRefFrameRotIEC"), &WindRefFrameRotIEC_factory));
}

void WindRefFrameRotIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindRefFrameRotIEC.tpll"), &assign_WindRefFrameRotIEC_tpll));
	assign_map.insert(std::make_pair(std::string("cim:WindRefFrameRotIEC.upll1"), &assign_WindRefFrameRotIEC_upll1));
	assign_map.insert(std::make_pair(std::string("cim:WindRefFrameRotIEC.upll2"), &assign_WindRefFrameRotIEC_upll2));
}

void WindRefFrameRotIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindRefFrameRotIEC.WindTurbineType3or4IEC"), &assign_WindRefFrameRotIEC_WindTurbineType3or4IEC));
}

const BaseClassDefiner WindRefFrameRotIEC::declare()
{
	return BaseClassDefiner(WindRefFrameRotIEC::addConstructToMap, WindRefFrameRotIEC::addPrimitiveAssignFnsToMap, WindRefFrameRotIEC::addClassAssignFnsToMap, WindRefFrameRotIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindRefFrameRotIEC_factory()
	{
		return new WindRefFrameRotIEC;
	}
}
