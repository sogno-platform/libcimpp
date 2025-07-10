/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContRotorRIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindGenTurbineType2IEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindContRotorRIEC(),
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
		{ "WindContRotorRIEC.WindDynamicsLookupTable", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContRotorRIEC.WindGenTurbineType2IEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContRotorRIEC.kirr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContRotorRIEC.komegafilt", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContRotorRIEC.kpfilt", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContRotorRIEC.kprr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContRotorRIEC.rmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContRotorRIEC.rmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContRotorRIEC.tomegafiltrr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContRotorRIEC.tpfiltrr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindContRotorRIEC::WindContRotorRIEC() : WindGenTurbineType2IEC(nullptr) {}
WindContRotorRIEC::~WindContRotorRIEC() {}

const std::list<std::string>& WindContRotorRIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindContRotorRIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindContRotorRIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindContRotorRIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindContRotorRIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindContRotorRIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindContRotorRIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindDynamicsLookupTable_WindContRotorRIEC(BaseClass*, BaseClass*);
bool assign_WindContRotorRIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindContRotorRIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGenTurbineType2IEC_WindContRotorRIEC(BaseClass*, BaseClass*);
bool assign_WindContRotorRIEC_WindGenTurbineType2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1);
	WindGenTurbineType2IEC* element2 = dynamic_cast<WindGenTurbineType2IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType2IEC != element2)
		{
			element->WindGenTurbineType2IEC = element2;
			return assign_WindGenTurbineType2IEC_WindContRotorRIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContRotorRIEC_kirr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kirr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContRotorRIEC_komegafilt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->komegafilt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContRotorRIEC_kpfilt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpfilt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContRotorRIEC_kprr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kprr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContRotorRIEC_rmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContRotorRIEC_rmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContRotorRIEC_tomegafiltrr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tomegafiltrr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContRotorRIEC_tpfiltrr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpfiltrr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}



bool get_WindContRotorRIEC_kirr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kirr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContRotorRIEC_komegafilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->komegafilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContRotorRIEC_kpfilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpfilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContRotorRIEC_kprr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kprr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContRotorRIEC_rmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContRotorRIEC_rmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContRotorRIEC_tomegafiltrr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tomegafiltrr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContRotorRIEC_tpfiltrr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpfiltrr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindContRotorRIEC::debugName[] = "WindContRotorRIEC";
const char* WindContRotorRIEC::debugString() const
{
	return WindContRotorRIEC::debugName;
}

void WindContRotorRIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindContRotorRIEC", &WindContRotorRIEC_factory);
}

void WindContRotorRIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindContRotorRIEC.kirr", &assign_WindContRotorRIEC_kirr);
	assign_map.emplace("WindContRotorRIEC.komegafilt", &assign_WindContRotorRIEC_komegafilt);
	assign_map.emplace("WindContRotorRIEC.kpfilt", &assign_WindContRotorRIEC_kpfilt);
	assign_map.emplace("WindContRotorRIEC.kprr", &assign_WindContRotorRIEC_kprr);
	assign_map.emplace("WindContRotorRIEC.rmax", &assign_WindContRotorRIEC_rmax);
	assign_map.emplace("WindContRotorRIEC.rmin", &assign_WindContRotorRIEC_rmin);
	assign_map.emplace("WindContRotorRIEC.tomegafiltrr", &assign_WindContRotorRIEC_tomegafiltrr);
	assign_map.emplace("WindContRotorRIEC.tpfiltrr", &assign_WindContRotorRIEC_tpfiltrr);
}

void WindContRotorRIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindContRotorRIEC.WindDynamicsLookupTable", &assign_WindContRotorRIEC_WindDynamicsLookupTable);
	assign_map.emplace("WindContRotorRIEC.WindGenTurbineType2IEC", &assign_WindContRotorRIEC_WindGenTurbineType2IEC);
}

void WindContRotorRIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindContRotorRIEC.kirr", &get_WindContRotorRIEC_kirr);
	get_map.emplace("WindContRotorRIEC.komegafilt", &get_WindContRotorRIEC_komegafilt);
	get_map.emplace("WindContRotorRIEC.kpfilt", &get_WindContRotorRIEC_kpfilt);
	get_map.emplace("WindContRotorRIEC.kprr", &get_WindContRotorRIEC_kprr);
	get_map.emplace("WindContRotorRIEC.rmax", &get_WindContRotorRIEC_rmax);
	get_map.emplace("WindContRotorRIEC.rmin", &get_WindContRotorRIEC_rmin);
	get_map.emplace("WindContRotorRIEC.tomegafiltrr", &get_WindContRotorRIEC_tomegafiltrr);
	get_map.emplace("WindContRotorRIEC.tpfiltrr", &get_WindContRotorRIEC_tpfiltrr);
}

void WindContRotorRIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindContRotorRIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindContRotorRIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindContRotorRIEC" &&
		dynamic_cast<WindContRotorRIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindContRotorRIEC::declare()
{
	return BaseClassDefiner(WindContRotorRIEC::addConstructToMap, WindContRotorRIEC::addPrimitiveAssignFnsToMap, WindContRotorRIEC::addClassAssignFnsToMap, WindContRotorRIEC::debugName);
}

std::map<std::string, AttrDetails> WindContRotorRIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindContRotorRIEC_factory()
	{
		return new WindContRotorRIEC;
	}
}
