/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ACDCTerminal.hpp"

#include <algorithm>
#include <sstream>

#include "BusNameMarker.hpp"
#include "Measurement.hpp"
#include "OperationalLimitSet.hpp"
#include "Boolean.hpp"
#include "Integer.hpp"

using namespace CIMPP;

ACDCTerminal::ACDCTerminal() : BusNameMarker(nullptr) {};
ACDCTerminal::~ACDCTerminal() {};





bool assign_ACDCTerminal_connected(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1))
	{
		buffer >> element->connected;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ACDCTerminal_sequenceNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1))
	{
		buffer >> element->sequenceNumber;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_BusNameMarker_Terminal(BaseClass*, BaseClass*);
bool assign_ACDCTerminal_BusNameMarker(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1);
	BusNameMarker* element2 = dynamic_cast<BusNameMarker*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->BusNameMarker != element2)
		{
			element->BusNameMarker = element2;
			return assign_BusNameMarker_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Measurement_Terminal(BaseClass*, BaseClass*);
bool assign_ACDCTerminal_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1);
	Measurement* element2 = dynamic_cast<Measurement*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Measurements.begin(), element->Measurements.end(), element2) == element->Measurements.end())
		{
			element->Measurements.push_back(element2);
			return assign_Measurement_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_OperationalLimitSet_Terminal(BaseClass*, BaseClass*);
bool assign_ACDCTerminal_OperationalLimitSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1);
	OperationalLimitSet* element2 = dynamic_cast<OperationalLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->OperationalLimitSet.begin(), element->OperationalLimitSet.end(), element2) == element->OperationalLimitSet.end())
		{
			element->OperationalLimitSet.push_back(element2);
			return assign_OperationalLimitSet_Terminal(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char ACDCTerminal::debugName[] = "ACDCTerminal";
const char* ACDCTerminal::debugString() const
{
	return ACDCTerminal::debugName;
}

void ACDCTerminal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ACDCTerminal"), &ACDCTerminal_factory));
}

void ACDCTerminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ACDCTerminal.connected"), &assign_ACDCTerminal_connected));
	assign_map.insert(std::make_pair(std::string("cim:ACDCTerminal.sequenceNumber"), &assign_ACDCTerminal_sequenceNumber));
}

void ACDCTerminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ACDCTerminal.BusNameMarker"), &assign_ACDCTerminal_BusNameMarker));
	assign_map.insert(std::make_pair(std::string("cim:ACDCTerminal.Measurements"), &assign_ACDCTerminal_Measurements));
	assign_map.insert(std::make_pair(std::string("cim:ACDCTerminal.OperationalLimitSet"), &assign_ACDCTerminal_OperationalLimitSet));
}

const BaseClassDefiner ACDCTerminal::declare()
{
	return BaseClassDefiner(ACDCTerminal::addConstructToMap, ACDCTerminal::addPrimitiveAssignFnsToMap, ACDCTerminal::addClassAssignFnsToMap, ACDCTerminal::debugName);
}

namespace CIMPP
{
	BaseClass* ACDCTerminal_factory()
	{
		return new ACDCTerminal;
	}
}
