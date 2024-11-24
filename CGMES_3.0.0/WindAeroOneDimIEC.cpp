/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindAeroOneDimIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindTurbineType3IEC.hpp"
#include "Float.hpp"
#include "AngleDegrees.hpp"

using namespace CIMPP;

WindAeroOneDimIEC::WindAeroOneDimIEC() : WindTurbineType3IEC(nullptr) {};
WindAeroOneDimIEC::~WindAeroOneDimIEC() {};



bool assign_WindAeroOneDimIEC_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindAeroOneDimIEC* element = dynamic_cast<WindAeroOneDimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindAeroOneDimIEC_thetaomega(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindAeroOneDimIEC* element = dynamic_cast<WindAeroOneDimIEC*>(BaseClass_ptr1))
	{
		buffer >> element->thetaomega;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindTurbineType3IEC_WindAeroOneDimIEC(BaseClass*, BaseClass*);
bool assign_WindAeroOneDimIEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindAeroOneDimIEC* element = dynamic_cast<WindAeroOneDimIEC*>(BaseClass_ptr1);
	WindTurbineType3IEC* element2 = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3IEC != element2)
		{
			element->WindTurbineType3IEC = element2;
			return assign_WindTurbineType3IEC_WindAeroOneDimIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char WindAeroOneDimIEC::debugName[] = "WindAeroOneDimIEC";
const char* WindAeroOneDimIEC::debugString() const
{
	return WindAeroOneDimIEC::debugName;
}

void WindAeroOneDimIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindAeroOneDimIEC"), &WindAeroOneDimIEC_factory));
}

void WindAeroOneDimIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindAeroOneDimIEC.ka"), &assign_WindAeroOneDimIEC_ka));
	assign_map.insert(std::make_pair(std::string("cim:WindAeroOneDimIEC.thetaomega"), &assign_WindAeroOneDimIEC_thetaomega));
}

void WindAeroOneDimIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindAeroOneDimIEC.WindTurbineType3IEC"), &assign_WindAeroOneDimIEC_WindTurbineType3IEC));
}

const BaseClassDefiner WindAeroOneDimIEC::declare()
{
	return BaseClassDefiner(WindAeroOneDimIEC::addConstructToMap, WindAeroOneDimIEC::addPrimitiveAssignFnsToMap, WindAeroOneDimIEC::addClassAssignFnsToMap, WindAeroOneDimIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindAeroOneDimIEC_factory()
	{
		return new WindAeroOneDimIEC;
	}
}
