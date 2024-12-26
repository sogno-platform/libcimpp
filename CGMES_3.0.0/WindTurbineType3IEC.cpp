/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindTurbineType3IEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindAeroOneDimIEC.hpp"
#include "WindAeroTwoDimIEC.hpp"
#include "WindContPType3IEC.hpp"
#include "WindContPitchAngleIEC.hpp"
#include "WindGenType3IEC.hpp"
#include "WindMechIEC.hpp"

using namespace CIMPP;

WindTurbineType3IEC::WindTurbineType3IEC() : WindAeroOneDimIEC(nullptr), WindAeroTwoDimIEC(nullptr), WindContPType3IEC(nullptr), WindContPitchAngleIEC(nullptr), WindGenType3IEC(nullptr), WindMechIEC(nullptr) {};
WindTurbineType3IEC::~WindTurbineType3IEC() {};









bool assign_WindAeroOneDimIEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindAeroOneDimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindAeroOneDimIEC* element2 = dynamic_cast<WindAeroOneDimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindAeroOneDimIEC != element2)
		{
			element->WindAeroOneDimIEC = element2;
			return assign_WindAeroOneDimIEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindAeroTwoDimIEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindAeroTwoDimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindAeroTwoDimIEC* element2 = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindAeroTwoDimIEC != element2)
		{
			element->WindAeroTwoDimIEC = element2;
			return assign_WindAeroTwoDimIEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPType3IEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindContPType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindContPType3IEC* element2 = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPType3IEC != element2)
		{
			element->WindContPType3IEC = element2;
			return assign_WindContPType3IEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindContPitchAngleIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindContPitchAngleIEC* element2 = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPitchAngleIEC != element2)
		{
			element->WindContPitchAngleIEC = element2;
			return assign_WindContPitchAngleIEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGenType3IEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindGenType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindGenType3IEC* element2 = dynamic_cast<WindGenType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenType3IEC != element2)
		{
			element->WindGenType3IEC = element2;
			return assign_WindGenType3IEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindMechIEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindMechIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindMechIEC* element2 = dynamic_cast<WindMechIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindMechIEC != element2)
		{
			element->WindMechIEC = element2;
			return assign_WindMechIEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char WindTurbineType3IEC::debugName[] = "WindTurbineType3IEC";
const char* WindTurbineType3IEC::debugString() const
{
	return WindTurbineType3IEC::debugName;
}

void WindTurbineType3IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindTurbineType3IEC"), &WindTurbineType3IEC_factory));
}

void WindTurbineType3IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType3IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3IEC.WindAeroOneDimIEC"), &assign_WindTurbineType3IEC_WindAeroOneDimIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3IEC.WindAeroTwoDimIEC"), &assign_WindTurbineType3IEC_WindAeroTwoDimIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3IEC.WindContPType3IEC"), &assign_WindTurbineType3IEC_WindContPType3IEC));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3IEC.WindContPitchAngleIEC"), &assign_WindTurbineType3IEC_WindContPitchAngleIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3IEC.WindGenType3IEC"), &assign_WindTurbineType3IEC_WindGenType3IEC));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3IEC.WindMechIEC"), &assign_WindTurbineType3IEC_WindMechIEC));
}

const BaseClassDefiner WindTurbineType3IEC::declare()
{
	return BaseClassDefiner(WindTurbineType3IEC::addConstructToMap, WindTurbineType3IEC::addPrimitiveAssignFnsToMap, WindTurbineType3IEC::addClassAssignFnsToMap, WindTurbineType3IEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindTurbineType3IEC_factory()
	{
		return new WindTurbineType3IEC;
	}
}
