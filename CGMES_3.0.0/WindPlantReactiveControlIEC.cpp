/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantReactiveControlIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindPlantIEC.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "WindPlantQcontrolModeKind.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

WindPlantReactiveControlIEC::WindPlantReactiveControlIEC() : WindPlantIEC(nullptr) {};
WindPlantReactiveControlIEC::~WindPlantReactiveControlIEC() {};




bool assign_WindPlantReactiveControlIEC_dxrefmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dxrefmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_dxrefmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dxrefmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kiwpx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kiwpx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kiwpxmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kiwpxmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kiwpxmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kiwpxmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kpwpx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kpwpx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kwpqref(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kwpqref;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kwpqu(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kwpqu;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_tuqfilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tuqfilt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_twppfiltq(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->twppfiltq;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_twpqfiltq(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->twpqfiltq;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_twpufiltq(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->twpufiltq;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_txft(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->txft;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_txfv(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->txfv;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_uwpqdip(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->uwpqdip;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_windPlantQcontrolModesType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->windPlantQcontrolModesType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_xrefmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->xrefmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_xrefmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1))
	{
		buffer >> element->xrefmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindDynamicsLookupTable_WindPlantReactiveControlIEC(BaseClass*, BaseClass*);
bool assign_WindPlantReactiveControlIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindPlantReactiveControlIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPlantIEC_WindPlantReactiveControlIEC(BaseClass*, BaseClass*);
bool assign_WindPlantReactiveControlIEC_WindPlantIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	WindPlantIEC* element2 = dynamic_cast<WindPlantIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantIEC != element2)
		{
			element->WindPlantIEC = element2;
			return assign_WindPlantIEC_WindPlantReactiveControlIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



















const char WindPlantReactiveControlIEC::debugName[] = "WindPlantReactiveControlIEC";
const char* WindPlantReactiveControlIEC::debugString() const
{
	return WindPlantReactiveControlIEC::debugName;
}

void WindPlantReactiveControlIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC"), &WindPlantReactiveControlIEC_factory));
}

void WindPlantReactiveControlIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.dxrefmax"), &assign_WindPlantReactiveControlIEC_dxrefmax));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.dxrefmin"), &assign_WindPlantReactiveControlIEC_dxrefmin));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.kiwpx"), &assign_WindPlantReactiveControlIEC_kiwpx));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.kiwpxmax"), &assign_WindPlantReactiveControlIEC_kiwpxmax));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.kiwpxmin"), &assign_WindPlantReactiveControlIEC_kiwpxmin));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.kpwpx"), &assign_WindPlantReactiveControlIEC_kpwpx));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.kwpqref"), &assign_WindPlantReactiveControlIEC_kwpqref));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.kwpqu"), &assign_WindPlantReactiveControlIEC_kwpqu));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.tuqfilt"), &assign_WindPlantReactiveControlIEC_tuqfilt));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.twppfiltq"), &assign_WindPlantReactiveControlIEC_twppfiltq));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.twpqfiltq"), &assign_WindPlantReactiveControlIEC_twpqfiltq));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.twpufiltq"), &assign_WindPlantReactiveControlIEC_twpufiltq));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.txft"), &assign_WindPlantReactiveControlIEC_txft));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.txfv"), &assign_WindPlantReactiveControlIEC_txfv));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.uwpqdip"), &assign_WindPlantReactiveControlIEC_uwpqdip));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.windPlantQcontrolModesType"), &assign_WindPlantReactiveControlIEC_windPlantQcontrolModesType));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.xrefmax"), &assign_WindPlantReactiveControlIEC_xrefmax));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.xrefmin"), &assign_WindPlantReactiveControlIEC_xrefmin));
}

void WindPlantReactiveControlIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.WindDynamicsLookupTable"), &assign_WindPlantReactiveControlIEC_WindDynamicsLookupTable));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantReactiveControlIEC.WindPlantIEC"), &assign_WindPlantReactiveControlIEC_WindPlantIEC));
}

const BaseClassDefiner WindPlantReactiveControlIEC::declare()
{
	return BaseClassDefiner(WindPlantReactiveControlIEC::addConstructToMap, WindPlantReactiveControlIEC::addPrimitiveAssignFnsToMap, WindPlantReactiveControlIEC::addClassAssignFnsToMap, WindPlantReactiveControlIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindPlantReactiveControlIEC_factory()
	{
		return new WindPlantReactiveControlIEC;
	}
}
