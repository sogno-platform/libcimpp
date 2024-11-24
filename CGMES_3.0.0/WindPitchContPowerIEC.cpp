/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPitchContPowerIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindGenTurbineType1bIEC.hpp"
#include "WindGenTurbineType2IEC.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

using namespace CIMPP;

WindPitchContPowerIEC::WindPitchContPowerIEC() : WindGenTurbineType1bIEC(nullptr), WindGenTurbineType2IEC(nullptr) {};
WindPitchContPowerIEC::~WindPitchContPowerIEC() {};





bool assign_WindPitchContPowerIEC_dpmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dpmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPitchContPowerIEC_dpmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dpmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPitchContPowerIEC_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1))
	{
		buffer >> element->pmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPitchContPowerIEC_pset(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1))
	{
		buffer >> element->pset;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPitchContPowerIEC_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPitchContPowerIEC_tr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPitchContPowerIEC_uuvrt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1))
	{
		buffer >> element->uuvrt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindDynamicsLookupTable_WindPitchContPowerIEC(BaseClass*, BaseClass*);
bool assign_WindPitchContPowerIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindPitchContPowerIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGenTurbineType1bIEC_WindPitchContPowerIEC(BaseClass*, BaseClass*);
bool assign_WindPitchContPowerIEC_WindGenTurbineType1bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1);
	WindGenTurbineType1bIEC* element2 = dynamic_cast<WindGenTurbineType1bIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType1bIEC != element2)
		{
			element->WindGenTurbineType1bIEC = element2;
			return assign_WindGenTurbineType1bIEC_WindPitchContPowerIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGenTurbineType2IEC_WindPitchContPowerIEC(BaseClass*, BaseClass*);
bool assign_WindPitchContPowerIEC_WindGenTurbineType2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPitchContPowerIEC* element = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr1);
	WindGenTurbineType2IEC* element2 = dynamic_cast<WindGenTurbineType2IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType2IEC != element2)
		{
			element->WindGenTurbineType2IEC = element2;
			return assign_WindGenTurbineType2IEC_WindPitchContPowerIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}








const char WindPitchContPowerIEC::debugName[] = "WindPitchContPowerIEC";
const char* WindPitchContPowerIEC::debugString() const
{
	return WindPitchContPowerIEC::debugName;
}

void WindPitchContPowerIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindPitchContPowerIEC"), &WindPitchContPowerIEC_factory));
}

void WindPitchContPowerIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContPowerIEC.dpmax"), &assign_WindPitchContPowerIEC_dpmax));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContPowerIEC.dpmin"), &assign_WindPitchContPowerIEC_dpmin));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContPowerIEC.pmin"), &assign_WindPitchContPowerIEC_pmin));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContPowerIEC.pset"), &assign_WindPitchContPowerIEC_pset));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContPowerIEC.t1"), &assign_WindPitchContPowerIEC_t1));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContPowerIEC.tr"), &assign_WindPitchContPowerIEC_tr));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContPowerIEC.uuvrt"), &assign_WindPitchContPowerIEC_uuvrt));
}

void WindPitchContPowerIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContPowerIEC.WindDynamicsLookupTable"), &assign_WindPitchContPowerIEC_WindDynamicsLookupTable));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContPowerIEC.WindGenTurbineType1bIEC"), &assign_WindPitchContPowerIEC_WindGenTurbineType1bIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindPitchContPowerIEC.WindGenTurbineType2IEC"), &assign_WindPitchContPowerIEC_WindGenTurbineType2IEC));
}

const BaseClassDefiner WindPitchContPowerIEC::declare()
{
	return BaseClassDefiner(WindPitchContPowerIEC::addConstructToMap, WindPitchContPowerIEC::addPrimitiveAssignFnsToMap, WindPitchContPowerIEC::addClassAssignFnsToMap, WindPitchContPowerIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindPitchContPowerIEC_factory()
	{
		return new WindPitchContPowerIEC;
	}
}
