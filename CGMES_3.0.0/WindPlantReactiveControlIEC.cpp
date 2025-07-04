/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantReactiveControlIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindPlantIEC.hpp"

using namespace CIMPP;

WindPlantReactiveControlIEC::WindPlantReactiveControlIEC() : WindPlantIEC(nullptr) {}
WindPlantReactiveControlIEC::~WindPlantReactiveControlIEC() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindPlantReactiveControlIEC.WindDynamicsLookupTable", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.WindPlantIEC", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.dxrefmax", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.dxrefmin", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.kiwpx", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.kiwpxmax", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.kiwpxmin", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.kpwpx", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.kwpqref", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.kwpqu", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.tuqfilt", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.twppfiltq", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.twpqfiltq", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.twpufiltq", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.txft", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.txfv", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.uwpqdip", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.windPlantQcontrolModesType", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.xrefmax", { CGMESProfile::DY, } },
	{ "cim:WindPlantReactiveControlIEC.xrefmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindPlantReactiveControlIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindPlantReactiveControlIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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

bool assign_WindPlantReactiveControlIEC_dxrefmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dxrefmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_dxrefmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dxrefmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kiwpx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kiwpx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kiwpxmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kiwpxmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kiwpxmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kiwpxmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kpwpx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpwpx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kwpqref(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kwpqref;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kwpqu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kwpqu;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_tuqfilt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tuqfilt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_twppfiltq(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->twppfiltq;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_twpqfiltq(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->twpqfiltq;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_twpufiltq(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->twpufiltq;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_txft(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->txft;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_txfv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->txfv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_uwpqdip(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uwpqdip;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_windPlantQcontrolModesType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->windPlantQcontrolModesType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_xrefmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xrefmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_xrefmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xrefmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}



bool get_WindPlantReactiveControlIEC_dxrefmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dxrefmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_dxrefmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dxrefmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_kiwpx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kiwpx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_kiwpxmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kiwpxmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_kiwpxmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kiwpxmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_kpwpx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpwpx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_kwpqref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kwpqref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_kwpqu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kwpqu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_tuqfilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tuqfilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_twppfiltq(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->twppfiltq;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_twpqfiltq(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->twpqfiltq;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_twpufiltq(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->twpufiltq;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_txft(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->txft;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_txfv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->txfv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_uwpqdip(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uwpqdip;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_windPlantQcontrolModesType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->windPlantQcontrolModesType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_xrefmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xrefmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_xrefmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xrefmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindPlantReactiveControlIEC::debugName[] = "WindPlantReactiveControlIEC";
const char* WindPlantReactiveControlIEC::debugString() const
{
	return WindPlantReactiveControlIEC::debugName;
}

void WindPlantReactiveControlIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:WindPlantReactiveControlIEC", &WindPlantReactiveControlIEC_factory);
}

void WindPlantReactiveControlIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:WindPlantReactiveControlIEC.dxrefmax", &assign_WindPlantReactiveControlIEC_dxrefmax);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.dxrefmin", &assign_WindPlantReactiveControlIEC_dxrefmin);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.kiwpx", &assign_WindPlantReactiveControlIEC_kiwpx);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.kiwpxmax", &assign_WindPlantReactiveControlIEC_kiwpxmax);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.kiwpxmin", &assign_WindPlantReactiveControlIEC_kiwpxmin);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.kpwpx", &assign_WindPlantReactiveControlIEC_kpwpx);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.kwpqref", &assign_WindPlantReactiveControlIEC_kwpqref);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.kwpqu", &assign_WindPlantReactiveControlIEC_kwpqu);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.tuqfilt", &assign_WindPlantReactiveControlIEC_tuqfilt);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.twppfiltq", &assign_WindPlantReactiveControlIEC_twppfiltq);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.twpqfiltq", &assign_WindPlantReactiveControlIEC_twpqfiltq);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.twpufiltq", &assign_WindPlantReactiveControlIEC_twpufiltq);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.txft", &assign_WindPlantReactiveControlIEC_txft);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.txfv", &assign_WindPlantReactiveControlIEC_txfv);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.uwpqdip", &assign_WindPlantReactiveControlIEC_uwpqdip);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.windPlantQcontrolModesType", &assign_WindPlantReactiveControlIEC_windPlantQcontrolModesType);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.xrefmax", &assign_WindPlantReactiveControlIEC_xrefmax);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.xrefmin", &assign_WindPlantReactiveControlIEC_xrefmin);
}

void WindPlantReactiveControlIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:WindPlantReactiveControlIEC.WindDynamicsLookupTable", &assign_WindPlantReactiveControlIEC_WindDynamicsLookupTable);
	assign_map.emplace("cim:WindPlantReactiveControlIEC.WindPlantIEC", &assign_WindPlantReactiveControlIEC_WindPlantIEC);
}

void WindPlantReactiveControlIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindPlantReactiveControlIEC.dxrefmax", &get_WindPlantReactiveControlIEC_dxrefmax);
	get_map.emplace("cim:WindPlantReactiveControlIEC.dxrefmin", &get_WindPlantReactiveControlIEC_dxrefmin);
	get_map.emplace("cim:WindPlantReactiveControlIEC.kiwpx", &get_WindPlantReactiveControlIEC_kiwpx);
	get_map.emplace("cim:WindPlantReactiveControlIEC.kiwpxmax", &get_WindPlantReactiveControlIEC_kiwpxmax);
	get_map.emplace("cim:WindPlantReactiveControlIEC.kiwpxmin", &get_WindPlantReactiveControlIEC_kiwpxmin);
	get_map.emplace("cim:WindPlantReactiveControlIEC.kpwpx", &get_WindPlantReactiveControlIEC_kpwpx);
	get_map.emplace("cim:WindPlantReactiveControlIEC.kwpqref", &get_WindPlantReactiveControlIEC_kwpqref);
	get_map.emplace("cim:WindPlantReactiveControlIEC.kwpqu", &get_WindPlantReactiveControlIEC_kwpqu);
	get_map.emplace("cim:WindPlantReactiveControlIEC.tuqfilt", &get_WindPlantReactiveControlIEC_tuqfilt);
	get_map.emplace("cim:WindPlantReactiveControlIEC.twppfiltq", &get_WindPlantReactiveControlIEC_twppfiltq);
	get_map.emplace("cim:WindPlantReactiveControlIEC.twpqfiltq", &get_WindPlantReactiveControlIEC_twpqfiltq);
	get_map.emplace("cim:WindPlantReactiveControlIEC.twpufiltq", &get_WindPlantReactiveControlIEC_twpufiltq);
	get_map.emplace("cim:WindPlantReactiveControlIEC.txft", &get_WindPlantReactiveControlIEC_txft);
	get_map.emplace("cim:WindPlantReactiveControlIEC.txfv", &get_WindPlantReactiveControlIEC_txfv);
	get_map.emplace("cim:WindPlantReactiveControlIEC.uwpqdip", &get_WindPlantReactiveControlIEC_uwpqdip);
	get_map.emplace("cim:WindPlantReactiveControlIEC.xrefmax", &get_WindPlantReactiveControlIEC_xrefmax);
	get_map.emplace("cim:WindPlantReactiveControlIEC.xrefmin", &get_WindPlantReactiveControlIEC_xrefmin);
}

void WindPlantReactiveControlIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindPlantReactiveControlIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:WindPlantReactiveControlIEC.windPlantQcontrolModesType", &get_WindPlantReactiveControlIEC_windPlantQcontrolModesType);
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
