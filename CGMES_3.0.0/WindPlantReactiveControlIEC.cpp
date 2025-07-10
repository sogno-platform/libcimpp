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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindPlantReactiveControlIEC(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "WindPlantReactiveControlIEC.WindDynamicsLookupTable", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.WindPlantIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.dxrefmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.dxrefmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.kiwpx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.kiwpxmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.kiwpxmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.kpwpx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.kwpqref", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.kwpqu", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.tuqfilt", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.twppfiltq", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.twpqfiltq", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.twpufiltq", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.txft", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.txfv", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.uwpqdip", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.windPlantQcontrolModesType", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.xrefmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.xrefmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindPlantReactiveControlIEC::WindPlantReactiveControlIEC() : WindPlantIEC(nullptr) {}
WindPlantReactiveControlIEC::~WindPlantReactiveControlIEC() {}

const std::list<std::string>& WindPlantReactiveControlIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindPlantReactiveControlIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindPlantReactiveControlIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindPlantReactiveControlIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindPlantReactiveControlIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindPlantReactiveControlIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindPlantReactiveControlIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("WindPlantReactiveControlIEC", &WindPlantReactiveControlIEC_factory);
}

void WindPlantReactiveControlIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindPlantReactiveControlIEC.dxrefmax", &assign_WindPlantReactiveControlIEC_dxrefmax);
	assign_map.emplace("WindPlantReactiveControlIEC.dxrefmin", &assign_WindPlantReactiveControlIEC_dxrefmin);
	assign_map.emplace("WindPlantReactiveControlIEC.kiwpx", &assign_WindPlantReactiveControlIEC_kiwpx);
	assign_map.emplace("WindPlantReactiveControlIEC.kiwpxmax", &assign_WindPlantReactiveControlIEC_kiwpxmax);
	assign_map.emplace("WindPlantReactiveControlIEC.kiwpxmin", &assign_WindPlantReactiveControlIEC_kiwpxmin);
	assign_map.emplace("WindPlantReactiveControlIEC.kpwpx", &assign_WindPlantReactiveControlIEC_kpwpx);
	assign_map.emplace("WindPlantReactiveControlIEC.kwpqref", &assign_WindPlantReactiveControlIEC_kwpqref);
	assign_map.emplace("WindPlantReactiveControlIEC.kwpqu", &assign_WindPlantReactiveControlIEC_kwpqu);
	assign_map.emplace("WindPlantReactiveControlIEC.tuqfilt", &assign_WindPlantReactiveControlIEC_tuqfilt);
	assign_map.emplace("WindPlantReactiveControlIEC.twppfiltq", &assign_WindPlantReactiveControlIEC_twppfiltq);
	assign_map.emplace("WindPlantReactiveControlIEC.twpqfiltq", &assign_WindPlantReactiveControlIEC_twpqfiltq);
	assign_map.emplace("WindPlantReactiveControlIEC.twpufiltq", &assign_WindPlantReactiveControlIEC_twpufiltq);
	assign_map.emplace("WindPlantReactiveControlIEC.txft", &assign_WindPlantReactiveControlIEC_txft);
	assign_map.emplace("WindPlantReactiveControlIEC.txfv", &assign_WindPlantReactiveControlIEC_txfv);
	assign_map.emplace("WindPlantReactiveControlIEC.uwpqdip", &assign_WindPlantReactiveControlIEC_uwpqdip);
	assign_map.emplace("WindPlantReactiveControlIEC.windPlantQcontrolModesType", &assign_WindPlantReactiveControlIEC_windPlantQcontrolModesType);
	assign_map.emplace("WindPlantReactiveControlIEC.xrefmax", &assign_WindPlantReactiveControlIEC_xrefmax);
	assign_map.emplace("WindPlantReactiveControlIEC.xrefmin", &assign_WindPlantReactiveControlIEC_xrefmin);
}

void WindPlantReactiveControlIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindPlantReactiveControlIEC.WindDynamicsLookupTable", &assign_WindPlantReactiveControlIEC_WindDynamicsLookupTable);
	assign_map.emplace("WindPlantReactiveControlIEC.WindPlantIEC", &assign_WindPlantReactiveControlIEC_WindPlantIEC);
}

void WindPlantReactiveControlIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindPlantReactiveControlIEC.dxrefmax", &get_WindPlantReactiveControlIEC_dxrefmax);
	get_map.emplace("WindPlantReactiveControlIEC.dxrefmin", &get_WindPlantReactiveControlIEC_dxrefmin);
	get_map.emplace("WindPlantReactiveControlIEC.kiwpx", &get_WindPlantReactiveControlIEC_kiwpx);
	get_map.emplace("WindPlantReactiveControlIEC.kiwpxmax", &get_WindPlantReactiveControlIEC_kiwpxmax);
	get_map.emplace("WindPlantReactiveControlIEC.kiwpxmin", &get_WindPlantReactiveControlIEC_kiwpxmin);
	get_map.emplace("WindPlantReactiveControlIEC.kpwpx", &get_WindPlantReactiveControlIEC_kpwpx);
	get_map.emplace("WindPlantReactiveControlIEC.kwpqref", &get_WindPlantReactiveControlIEC_kwpqref);
	get_map.emplace("WindPlantReactiveControlIEC.kwpqu", &get_WindPlantReactiveControlIEC_kwpqu);
	get_map.emplace("WindPlantReactiveControlIEC.tuqfilt", &get_WindPlantReactiveControlIEC_tuqfilt);
	get_map.emplace("WindPlantReactiveControlIEC.twppfiltq", &get_WindPlantReactiveControlIEC_twppfiltq);
	get_map.emplace("WindPlantReactiveControlIEC.twpqfiltq", &get_WindPlantReactiveControlIEC_twpqfiltq);
	get_map.emplace("WindPlantReactiveControlIEC.twpufiltq", &get_WindPlantReactiveControlIEC_twpufiltq);
	get_map.emplace("WindPlantReactiveControlIEC.txft", &get_WindPlantReactiveControlIEC_txft);
	get_map.emplace("WindPlantReactiveControlIEC.txfv", &get_WindPlantReactiveControlIEC_txfv);
	get_map.emplace("WindPlantReactiveControlIEC.uwpqdip", &get_WindPlantReactiveControlIEC_uwpqdip);
	get_map.emplace("WindPlantReactiveControlIEC.xrefmax", &get_WindPlantReactiveControlIEC_xrefmax);
	get_map.emplace("WindPlantReactiveControlIEC.xrefmin", &get_WindPlantReactiveControlIEC_xrefmin);
}

void WindPlantReactiveControlIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindPlantReactiveControlIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("WindPlantReactiveControlIEC.windPlantQcontrolModesType", &get_WindPlantReactiveControlIEC_windPlantQcontrolModesType);
}

bool WindPlantReactiveControlIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindPlantReactiveControlIEC" &&
		dynamic_cast<WindPlantReactiveControlIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindPlantReactiveControlIEC::declare()
{
	return BaseClassDefiner(WindPlantReactiveControlIEC::addConstructToMap, WindPlantReactiveControlIEC::addPrimitiveAssignFnsToMap, WindPlantReactiveControlIEC::addClassAssignFnsToMap, WindPlantReactiveControlIEC::debugName);
}

std::map<std::string, AttrDetails> WindPlantReactiveControlIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindPlantReactiveControlIEC_factory()
	{
		return new WindPlantReactiveControlIEC;
	}
}
