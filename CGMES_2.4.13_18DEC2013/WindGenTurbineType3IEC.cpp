/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType3IEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindAeroLinearIEC.hpp"
#include "WindContPType3IEC.hpp"
#include "WindContPitchAngleIEC.hpp"
#include "WindMechIEC.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

WindGenTurbineType3IEC::WindGenTurbineType3IEC() : WindAeroLinearIEC(nullptr), WindContPType3IEC(nullptr), WindContPitchAngleIEC(nullptr), WindMechIEC(nullptr) {};
WindGenTurbineType3IEC::~WindGenTurbineType3IEC() {};






bool assign_WindGenTurbineType3IEC_dipmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->dipmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindGenTurbineType3IEC_diqmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->diqmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindAeroLinearIEC_WindGenTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType3IEC_WindAeroLinearIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1);
	WindAeroLinearIEC* element2 = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindAeroLinearIEC != element2)
		{
			element->WindAeroLinearIEC = element2;
			return assign_WindAeroLinearIEC_WindGenTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPType3IEC_WindGenTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType3IEC_WindContPType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1);
	WindContPType3IEC* element2 = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPType3IEC != element2)
		{
			element->WindContPType3IEC = element2;
			return assign_WindContPType3IEC_WindGenTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_WindGenTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType3IEC_WindContPitchAngleIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1);
	WindContPitchAngleIEC* element2 = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPitchAngleIEC != element2)
		{
			element->WindContPitchAngleIEC = element2;
			return assign_WindContPitchAngleIEC_WindGenTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindMechIEC_WindGenTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType3IEC_WindMechIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1);
	WindMechIEC* element2 = dynamic_cast<WindMechIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindMechIEC != element2)
		{
			element->WindMechIEC = element2;
			return assign_WindMechIEC_WindGenTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char WindGenTurbineType3IEC::debugName[] = "WindGenTurbineType3IEC";
const char* WindGenTurbineType3IEC::debugString() const
{
	return WindGenTurbineType3IEC::debugName;
}

void WindGenTurbineType3IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3IEC"), &WindGenTurbineType3IEC_factory));
}

void WindGenTurbineType3IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3IEC.dipmax"), &assign_WindGenTurbineType3IEC_dipmax));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3IEC.diqmax"), &assign_WindGenTurbineType3IEC_diqmax));
}

void WindGenTurbineType3IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3IEC.WindAeroLinearIEC"), &assign_WindGenTurbineType3IEC_WindAeroLinearIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3IEC.WindContPType3IEC"), &assign_WindGenTurbineType3IEC_WindContPType3IEC));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3IEC.WindContPitchAngleIEC"), &assign_WindGenTurbineType3IEC_WindContPitchAngleIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType3IEC.WindMechIEC"), &assign_WindGenTurbineType3IEC_WindMechIEC));
}

const BaseClassDefiner WindGenTurbineType3IEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType3IEC::addConstructToMap, WindGenTurbineType3IEC::addPrimitiveAssignFnsToMap, WindGenTurbineType3IEC::addClassAssignFnsToMap, WindGenTurbineType3IEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindGenTurbineType3IEC_factory()
	{
		return new WindGenTurbineType3IEC;
	}
}
