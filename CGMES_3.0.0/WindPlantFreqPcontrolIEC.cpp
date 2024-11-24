/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantFreqPcontrolIEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindPlantIEC.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindPlantFreqPcontrolIEC::WindPlantFreqPcontrolIEC() : WindPlantIEC(nullptr) {};
WindPlantFreqPcontrolIEC::~WindPlantFreqPcontrolIEC() {};




bool assign_WindPlantFreqPcontrolIEC_dprefmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dprefmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_dprefmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dprefmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_dpwprefmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dpwprefmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_dpwprefmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dpwprefmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_kiwpp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kiwpp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_kiwppmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kiwppmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_kiwppmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kiwppmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_kpwpp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kpwpp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_kwppref(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kwppref;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_prefmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->prefmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_prefmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->prefmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_tpft(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tpft;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_tpfv(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tpfv;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_twpffiltp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->twpffiltp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_twppfiltp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer >> element->twppfiltp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC(BaseClass*, BaseClass*);
bool assign_WindPlantFreqPcontrolIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPlantIEC_WindPlantFreqPcontrolIEC(BaseClass*, BaseClass*);
bool assign_WindPlantFreqPcontrolIEC_WindPlantIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	WindPlantIEC* element2 = dynamic_cast<WindPlantIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantIEC != element2)
		{
			element->WindPlantIEC = element2;
			return assign_WindPlantIEC_WindPlantFreqPcontrolIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
















const char WindPlantFreqPcontrolIEC::debugName[] = "WindPlantFreqPcontrolIEC";
const char* WindPlantFreqPcontrolIEC::debugString() const
{
	return WindPlantFreqPcontrolIEC::debugName;
}

void WindPlantFreqPcontrolIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC"), &WindPlantFreqPcontrolIEC_factory));
}

void WindPlantFreqPcontrolIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.dprefmax"), &assign_WindPlantFreqPcontrolIEC_dprefmax));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.dprefmin"), &assign_WindPlantFreqPcontrolIEC_dprefmin));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.dpwprefmax"), &assign_WindPlantFreqPcontrolIEC_dpwprefmax));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.dpwprefmin"), &assign_WindPlantFreqPcontrolIEC_dpwprefmin));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.kiwpp"), &assign_WindPlantFreqPcontrolIEC_kiwpp));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.kiwppmax"), &assign_WindPlantFreqPcontrolIEC_kiwppmax));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.kiwppmin"), &assign_WindPlantFreqPcontrolIEC_kiwppmin));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.kpwpp"), &assign_WindPlantFreqPcontrolIEC_kpwpp));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.kwppref"), &assign_WindPlantFreqPcontrolIEC_kwppref));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.prefmax"), &assign_WindPlantFreqPcontrolIEC_prefmax));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.prefmin"), &assign_WindPlantFreqPcontrolIEC_prefmin));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.tpft"), &assign_WindPlantFreqPcontrolIEC_tpft));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.tpfv"), &assign_WindPlantFreqPcontrolIEC_tpfv));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.twpffiltp"), &assign_WindPlantFreqPcontrolIEC_twpffiltp));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.twppfiltp"), &assign_WindPlantFreqPcontrolIEC_twppfiltp));
}

void WindPlantFreqPcontrolIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.WindDynamicsLookupTable"), &assign_WindPlantFreqPcontrolIEC_WindDynamicsLookupTable));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantFreqPcontrolIEC.WindPlantIEC"), &assign_WindPlantFreqPcontrolIEC_WindPlantIEC));
}

const BaseClassDefiner WindPlantFreqPcontrolIEC::declare()
{
	return BaseClassDefiner(WindPlantFreqPcontrolIEC::addConstructToMap, WindPlantFreqPcontrolIEC::addPrimitiveAssignFnsToMap, WindPlantFreqPcontrolIEC::addClassAssignFnsToMap, WindPlantFreqPcontrolIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindPlantFreqPcontrolIEC_factory()
	{
		return new WindPlantFreqPcontrolIEC;
	}
}
