/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContPType3IEC.hpp"

#include <algorithm>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindTurbineType3IEC.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"

using namespace CIMPP;

WindContPType3IEC::WindContPType3IEC() : WindTurbineType3IEC(nullptr) {};
WindContPType3IEC::~WindContPType3IEC() {};




bool assign_WindContPType3IEC_dpmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->dpmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_dprefmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->dprefmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_dprefmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->dprefmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_dthetamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->dthetamax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_dthetamaxuvrt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->dthetamaxuvrt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_kdtd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->kdtd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_kip(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->kip;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_kpp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->kpp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_mpuvrt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->mpuvrt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_omegadtd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->omegadtd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_omegaoffset(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->omegaoffset;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_pdtdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->pdtdmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_tdvs(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->tdvs;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_thetaemin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->thetaemin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_thetauscale(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->thetauscale;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_tomegafiltp3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->tomegafiltp3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_tomegaref(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->tomegaref;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_tpfiltp3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->tpfiltp3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_tpord(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->tpord;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_tufiltp3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->tufiltp3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_udvs(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->udvs;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_updip(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->updip;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_zeta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->zeta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindDynamicsLookupTable_WindContPType3IEC(BaseClass*, BaseClass*);
bool assign_WindContPType3IEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindContPType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3IEC_WindContPType3IEC(BaseClass*, BaseClass*);
bool assign_WindContPType3IEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	WindTurbineType3IEC* element2 = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3IEC != element2)
		{
			element->WindTurbineType3IEC = element2;
			return assign_WindTurbineType3IEC_WindContPType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
























const char WindContPType3IEC::debugName[] = "WindContPType3IEC";
const char* WindContPType3IEC::debugString() const
{
	return WindContPType3IEC::debugName;
}

void WindContPType3IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindContPType3IEC"), &WindContPType3IEC_factory));
}

void WindContPType3IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.dpmax"), &assign_WindContPType3IEC_dpmax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.dprefmax"), &assign_WindContPType3IEC_dprefmax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.dprefmin"), &assign_WindContPType3IEC_dprefmin));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.dthetamax"), &assign_WindContPType3IEC_dthetamax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.dthetamaxuvrt"), &assign_WindContPType3IEC_dthetamaxuvrt));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.kdtd"), &assign_WindContPType3IEC_kdtd));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.kip"), &assign_WindContPType3IEC_kip));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.kpp"), &assign_WindContPType3IEC_kpp));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.mpuvrt"), &assign_WindContPType3IEC_mpuvrt));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.omegadtd"), &assign_WindContPType3IEC_omegadtd));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.omegaoffset"), &assign_WindContPType3IEC_omegaoffset));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.pdtdmax"), &assign_WindContPType3IEC_pdtdmax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tdvs"), &assign_WindContPType3IEC_tdvs));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.thetaemin"), &assign_WindContPType3IEC_thetaemin));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.thetauscale"), &assign_WindContPType3IEC_thetauscale));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tomegafiltp3"), &assign_WindContPType3IEC_tomegafiltp3));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tomegaref"), &assign_WindContPType3IEC_tomegaref));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tpfiltp3"), &assign_WindContPType3IEC_tpfiltp3));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tpord"), &assign_WindContPType3IEC_tpord));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tufiltp3"), &assign_WindContPType3IEC_tufiltp3));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.udvs"), &assign_WindContPType3IEC_udvs));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.updip"), &assign_WindContPType3IEC_updip));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.zeta"), &assign_WindContPType3IEC_zeta));
}

void WindContPType3IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.WindDynamicsLookupTable"), &assign_WindContPType3IEC_WindDynamicsLookupTable));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.WindTurbineType3IEC"), &assign_WindContPType3IEC_WindTurbineType3IEC));
}

const BaseClassDefiner WindContPType3IEC::declare()
{
	return BaseClassDefiner(WindContPType3IEC::addConstructToMap, WindContPType3IEC::addPrimitiveAssignFnsToMap, WindContPType3IEC::addClassAssignFnsToMap, WindContPType3IEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindContPType3IEC_factory()
	{
		return new WindContPType3IEC;
	}
}
