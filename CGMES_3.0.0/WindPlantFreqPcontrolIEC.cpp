/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantFreqPcontrolIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
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

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindPlantFreqPcontrolIEC.WindDynamicsLookupTable", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.WindPlantIEC", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.dprefmax", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.dprefmin", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.dpwprefmax", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.dpwprefmin", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.kiwpp", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.kiwppmax", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.kiwppmin", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.kpwpp", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.kwppref", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.prefmax", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.prefmin", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.tpft", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.tpfv", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.twpffiltp", { CGMESProfile::DY, } },
	{ "cim:WindPlantFreqPcontrolIEC.twppfiltp", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindPlantFreqPcontrolIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindPlantFreqPcontrolIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


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

bool get_WindPlantFreqPcontrolIEC_dprefmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->dprefmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_dprefmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->dprefmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_dpwprefmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->dpwprefmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_dpwprefmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->dpwprefmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_kiwpp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->kiwpp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_kiwppmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->kiwppmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_kiwppmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->kiwppmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_kpwpp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->kpwpp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_kwppref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->kwppref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_prefmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->prefmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_prefmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->prefmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_tpft(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->tpft;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_tpfv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->tpfv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_twpffiltp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->twpffiltp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_twppfiltp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1))
	{
		buffer << element->twppfiltp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
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

void WindPlantFreqPcontrolIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.dprefmax", &get_WindPlantFreqPcontrolIEC_dprefmax);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.dprefmin", &get_WindPlantFreqPcontrolIEC_dprefmin);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.dpwprefmax", &get_WindPlantFreqPcontrolIEC_dpwprefmax);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.dpwprefmin", &get_WindPlantFreqPcontrolIEC_dpwprefmin);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.kiwpp", &get_WindPlantFreqPcontrolIEC_kiwpp);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.kiwppmax", &get_WindPlantFreqPcontrolIEC_kiwppmax);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.kiwppmin", &get_WindPlantFreqPcontrolIEC_kiwppmin);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.kpwpp", &get_WindPlantFreqPcontrolIEC_kpwpp);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.kwppref", &get_WindPlantFreqPcontrolIEC_kwppref);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.prefmax", &get_WindPlantFreqPcontrolIEC_prefmax);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.prefmin", &get_WindPlantFreqPcontrolIEC_prefmin);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.tpft", &get_WindPlantFreqPcontrolIEC_tpft);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.tpfv", &get_WindPlantFreqPcontrolIEC_tpfv);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.twpffiltp", &get_WindPlantFreqPcontrolIEC_twpffiltp);
	get_map.emplace("cim:WindPlantFreqPcontrolIEC.twppfiltp", &get_WindPlantFreqPcontrolIEC_twppfiltp);
}

void WindPlantFreqPcontrolIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindPlantFreqPcontrolIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
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
