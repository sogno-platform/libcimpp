/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContPType3IEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindGenTurbineType3IEC.hpp"
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
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

WindContPType3IEC::WindContPType3IEC() : WindGenTurbineType3IEC(nullptr) {};
WindContPType3IEC::~WindContPType3IEC() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindContPType3IEC.WindDynamicsLookupTable", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.WindGenTurbineType3IEC", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.dpmax", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.dtrisemaxlvrt", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.kdtd", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.kip", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.kpp", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.mplvrt", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.omegaoffset", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.pdtdmax", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.rramp", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.tdvs", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.temin", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.tomegafilt", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.tpfilt", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.tpord", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.tufilt", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.tuscale", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.twref", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.udvs", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.updip", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.wdtd", { CGMESProfile::DY, } },
	{ "cim:WindContPType3IEC.zeta", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindContPType3IEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindContPType3IEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


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

bool assign_WindContPType3IEC_dtrisemaxlvrt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->dtrisemaxlvrt;
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

bool assign_WindContPType3IEC_mplvrt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->mplvrt;
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

bool assign_WindContPType3IEC_rramp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->rramp;
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

bool assign_WindContPType3IEC_temin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->temin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_tomegafilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->tomegafilt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_tpfilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->tpfilt;
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

bool assign_WindContPType3IEC_tufilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->tufilt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_tuscale(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->tuscale;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPType3IEC_twref(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->twref;
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

bool assign_WindContPType3IEC_wdtd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer >> element->wdtd;
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
bool assign_WindGenTurbineType3IEC_WindContPType3IEC(BaseClass*, BaseClass*);
bool assign_WindContPType3IEC_WindGenTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	WindGenTurbineType3IEC* element2 = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType3IEC != element2)
		{
			element->WindGenTurbineType3IEC = element2;
			return assign_WindGenTurbineType3IEC_WindContPType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindContPType3IEC_dpmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->dpmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_dtrisemaxlvrt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->dtrisemaxlvrt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_kdtd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->kdtd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_kip(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->kip;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_kpp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->kpp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_mplvrt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->mplvrt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_omegaoffset(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->omegaoffset;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_pdtdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->pdtdmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_rramp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->rramp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_tdvs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->tdvs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_temin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->temin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_tomegafilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->tomegafilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_tpfilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->tpfilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_tpord(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->tpord;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_tufilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->tufilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_tuscale(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->tuscale;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_twref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->twref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_udvs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->udvs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_updip(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->updip;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_wdtd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->wdtd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_zeta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1))
	{
		buffer << element->zeta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
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
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.dtrisemaxlvrt"), &assign_WindContPType3IEC_dtrisemaxlvrt));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.kdtd"), &assign_WindContPType3IEC_kdtd));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.kip"), &assign_WindContPType3IEC_kip));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.kpp"), &assign_WindContPType3IEC_kpp));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.mplvrt"), &assign_WindContPType3IEC_mplvrt));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.omegaoffset"), &assign_WindContPType3IEC_omegaoffset));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.pdtdmax"), &assign_WindContPType3IEC_pdtdmax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.rramp"), &assign_WindContPType3IEC_rramp));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tdvs"), &assign_WindContPType3IEC_tdvs));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.temin"), &assign_WindContPType3IEC_temin));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tomegafilt"), &assign_WindContPType3IEC_tomegafilt));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tpfilt"), &assign_WindContPType3IEC_tpfilt));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tpord"), &assign_WindContPType3IEC_tpord));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tufilt"), &assign_WindContPType3IEC_tufilt));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.tuscale"), &assign_WindContPType3IEC_tuscale));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.twref"), &assign_WindContPType3IEC_twref));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.udvs"), &assign_WindContPType3IEC_udvs));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.updip"), &assign_WindContPType3IEC_updip));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.wdtd"), &assign_WindContPType3IEC_wdtd));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.zeta"), &assign_WindContPType3IEC_zeta));
}

void WindContPType3IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.WindDynamicsLookupTable"), &assign_WindContPType3IEC_WindDynamicsLookupTable));
	assign_map.insert(std::make_pair(std::string("cim:WindContPType3IEC.WindGenTurbineType3IEC"), &assign_WindContPType3IEC_WindGenTurbineType3IEC));
}

void WindContPType3IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindContPType3IEC.dpmax", &get_WindContPType3IEC_dpmax);
	get_map.emplace("cim:WindContPType3IEC.dtrisemaxlvrt", &get_WindContPType3IEC_dtrisemaxlvrt);
	get_map.emplace("cim:WindContPType3IEC.kdtd", &get_WindContPType3IEC_kdtd);
	get_map.emplace("cim:WindContPType3IEC.kip", &get_WindContPType3IEC_kip);
	get_map.emplace("cim:WindContPType3IEC.kpp", &get_WindContPType3IEC_kpp);
	get_map.emplace("cim:WindContPType3IEC.mplvrt", &get_WindContPType3IEC_mplvrt);
	get_map.emplace("cim:WindContPType3IEC.omegaoffset", &get_WindContPType3IEC_omegaoffset);
	get_map.emplace("cim:WindContPType3IEC.pdtdmax", &get_WindContPType3IEC_pdtdmax);
	get_map.emplace("cim:WindContPType3IEC.rramp", &get_WindContPType3IEC_rramp);
	get_map.emplace("cim:WindContPType3IEC.tdvs", &get_WindContPType3IEC_tdvs);
	get_map.emplace("cim:WindContPType3IEC.temin", &get_WindContPType3IEC_temin);
	get_map.emplace("cim:WindContPType3IEC.tomegafilt", &get_WindContPType3IEC_tomegafilt);
	get_map.emplace("cim:WindContPType3IEC.tpfilt", &get_WindContPType3IEC_tpfilt);
	get_map.emplace("cim:WindContPType3IEC.tpord", &get_WindContPType3IEC_tpord);
	get_map.emplace("cim:WindContPType3IEC.tufilt", &get_WindContPType3IEC_tufilt);
	get_map.emplace("cim:WindContPType3IEC.tuscale", &get_WindContPType3IEC_tuscale);
	get_map.emplace("cim:WindContPType3IEC.twref", &get_WindContPType3IEC_twref);
	get_map.emplace("cim:WindContPType3IEC.udvs", &get_WindContPType3IEC_udvs);
	get_map.emplace("cim:WindContPType3IEC.updip", &get_WindContPType3IEC_updip);
	get_map.emplace("cim:WindContPType3IEC.wdtd", &get_WindContPType3IEC_wdtd);
	get_map.emplace("cim:WindContPType3IEC.zeta", &get_WindContPType3IEC_zeta);
}

void WindContPType3IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindContPType3IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
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
