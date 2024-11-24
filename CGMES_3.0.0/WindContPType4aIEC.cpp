/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContPType4aIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindTurbineType4aIEC.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindContPType4aIEC::WindContPType4aIEC() : WindTurbineType4aIEC(nullptr) {};
WindContPType4aIEC::~WindContPType4aIEC() {};



bool assign_WindContPType4aIEC_dpmaxp4a(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dpmaxp4a;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType4aIEC_tpordp4a(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tpordp4a;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType4aIEC_tufiltp4a(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tufiltp4a;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindTurbineType4aIEC_WindContPType4aIEC(BaseClass*, BaseClass*);
bool assign_WindContPType4aIEC_WindTurbineType4aIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1);
	WindTurbineType4aIEC* element2 = dynamic_cast<WindTurbineType4aIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType4aIEC != element2)
		{
			element->WindTurbineType4aIEC = element2;
			return assign_WindTurbineType4aIEC_WindContPType4aIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}




const char WindContPType4aIEC::debugName[] = "WindContPType4aIEC";
const char* WindContPType4aIEC::debugString() const
{
	return WindContPType4aIEC::debugName;
}

void WindContPType4aIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC"), &WindContPType4aIEC_factory));
}

void WindContPType4aIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC.dpmaxp4a"), &assign_WindContPType4aIEC_dpmaxp4a));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC.tpordp4a"), &assign_WindContPType4aIEC_tpordp4a));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC.tufiltp4a"), &assign_WindContPType4aIEC_tufiltp4a));
}

void WindContPType4aIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContPType4aIEC.WindTurbineType4aIEC"), &assign_WindContPType4aIEC_WindTurbineType4aIEC));
}

const BaseClassDefiner WindContPType4aIEC::declare()
{
	return BaseClassDefiner(WindContPType4aIEC::addConstructToMap, WindContPType4aIEC::addPrimitiveAssignFnsToMap, WindContPType4aIEC::addClassAssignFnsToMap, WindContPType4aIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindContPType4aIEC_factory()
	{
		return new WindContPType4aIEC;
	}
}
