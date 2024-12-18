/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindMechIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindGenTurbineType3IEC.hpp"
#include "WindTurbineType1or2IEC.hpp"
#include "WindTurbineType4bIEC.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

using namespace CIMPP;

WindMechIEC::WindMechIEC() : WindGenTurbineType3IEC(nullptr), WindTurbineType1or2IEC(nullptr), WindTurbineType4bIEC(nullptr) {};
WindMechIEC::~WindMechIEC() {};





bool assign_WindMechIEC_cdrt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1))
	{
		buffer >> element->cdrt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindMechIEC_hgen(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1))
	{
		buffer >> element->hgen;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindMechIEC_hwtr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1))
	{
		buffer >> element->hwtr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindMechIEC_kdrt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kdrt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindGenTurbineType3IEC_WindMechIEC(BaseClass*, BaseClass*);
bool assign_WindMechIEC_WindGenTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1);
	WindGenTurbineType3IEC* element2 = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType3IEC != element2)
		{
			element->WindGenTurbineType3IEC = element2;
			return assign_WindGenTurbineType3IEC_WindMechIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType1or2IEC_WindMechIEC(BaseClass*, BaseClass*);
bool assign_WindMechIEC_WindTurbineType1or2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1);
	WindTurbineType1or2IEC* element2 = dynamic_cast<WindTurbineType1or2IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType1or2IEC != element2)
		{
			element->WindTurbineType1or2IEC = element2;
			return assign_WindTurbineType1or2IEC_WindMechIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType4bIEC_WindMechIEC(BaseClass*, BaseClass*);
bool assign_WindMechIEC_WindTurbineType4bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1);
	WindTurbineType4bIEC* element2 = dynamic_cast<WindTurbineType4bIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType4bIEC != element2)
		{
			element->WindTurbineType4bIEC = element2;
			return assign_WindTurbineType4bIEC_WindMechIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}





const char WindMechIEC::debugName[] = "WindMechIEC";
const char* WindMechIEC::debugString() const
{
	return WindMechIEC::debugName;
}

void WindMechIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindMechIEC"), &WindMechIEC_factory));
}

void WindMechIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindMechIEC.cdrt"), &assign_WindMechIEC_cdrt));
	assign_map.insert(std::make_pair(std::string("cim:WindMechIEC.hgen"), &assign_WindMechIEC_hgen));
	assign_map.insert(std::make_pair(std::string("cim:WindMechIEC.hwtr"), &assign_WindMechIEC_hwtr));
	assign_map.insert(std::make_pair(std::string("cim:WindMechIEC.kdrt"), &assign_WindMechIEC_kdrt));
}

void WindMechIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindMechIEC.WindGenTurbineType3IEC"), &assign_WindMechIEC_WindGenTurbineType3IEC));
	assign_map.insert(std::make_pair(std::string("cim:WindMechIEC.WindTurbineType1or2IEC"), &assign_WindMechIEC_WindTurbineType1or2IEC));
	assign_map.insert(std::make_pair(std::string("cim:WindMechIEC.WindTurbineType4bIEC"), &assign_WindMechIEC_WindTurbineType4bIEC));
}

const BaseClassDefiner WindMechIEC::declare()
{
	return BaseClassDefiner(WindMechIEC::addConstructToMap, WindMechIEC::addPrimitiveAssignFnsToMap, WindMechIEC::addClassAssignFnsToMap, WindMechIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindMechIEC_factory()
	{
		return new WindMechIEC;
	}
}
