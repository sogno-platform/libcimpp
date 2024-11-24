/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContPType4bIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindTurbineType4bIEC.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindContPType4bIEC::WindContPType4bIEC() : WindTurbineType4bIEC(nullptr) {};
WindContPType4bIEC::~WindContPType4bIEC() {};



bool assign_WindContPType4bIEC_dpmaxp4b(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dpmaxp4b;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType4bIEC_tpaero(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tpaero;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType4bIEC_tpordp4b(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tpordp4b;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType4bIEC_tufiltp4b(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tufiltp4b;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindTurbineType4bIEC_WindContPType4bIEC(BaseClass*, BaseClass*);
bool assign_WindContPType4bIEC_WindTurbineType4bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1);
	WindTurbineType4bIEC* element2 = dynamic_cast<WindTurbineType4bIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType4bIEC != element2)
		{
			element->WindTurbineType4bIEC = element2;
			return assign_WindTurbineType4bIEC_WindContPType4bIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}





const char WindContPType4bIEC::debugName[] = "WindContPType4bIEC";
const char* WindContPType4bIEC::debugString() const
{
	return WindContPType4bIEC::debugName;
}

void WindContPType4bIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindContPType4bIEC"), &WindContPType4bIEC_factory));
}

void WindContPType4bIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4bIEC.dpmaxp4b"), &assign_WindContPType4bIEC_dpmaxp4b));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4bIEC.tpaero"), &assign_WindContPType4bIEC_tpaero));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4bIEC.tpordp4b"), &assign_WindContPType4bIEC_tpordp4b));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4bIEC.tufiltp4b"), &assign_WindContPType4bIEC_tufiltp4b));
}

void WindContPType4bIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4bIEC.WindTurbineType4bIEC"), &assign_WindContPType4bIEC_WindTurbineType4bIEC));
}

const BaseClassDefiner WindContPType4bIEC::declare()
{
	return BaseClassDefiner(WindContPType4bIEC::addConstructToMap, WindContPType4bIEC::addPrimitiveAssignFnsToMap, WindContPType4bIEC::addClassAssignFnsToMap, WindContPType4bIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindContPType4bIEC_factory()
	{
		return new WindContPType4bIEC;
	}
}
