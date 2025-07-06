/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContPType4bIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindTurbineType4bIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindContPType4bIEC(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "WindContPType4bIEC.WindTurbineType4bIEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindContPType4bIEC.dpmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindContPType4bIEC.tpaero", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindContPType4bIEC.tpord", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindContPType4bIEC.tufilt", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindContPType4bIEC::WindContPType4bIEC() : WindTurbineType4bIEC(nullptr) {}
WindContPType4bIEC::~WindContPType4bIEC() {}

const std::list<std::string>& WindContPType4bIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindContPType4bIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindContPType4bIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindContPType4bIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindContPType4bIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindContPType4bIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindContPType4bIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindTurbineType4bIEC_WindContPType4bIEC(BaseClass*, BaseClass*);
bool assign_WindContPType4bIEC_WindTurbineType4bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1);
	WindTurbineType4bIEC* element2 = dynamic_cast<WindTurbineType4bIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType4bIEC != element2)
		{
			element->WindTurbineType4bIEC = element2;
			return assign_WindTurbineType4bIEC_WindContPType4bIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPType4bIEC_dpmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dpmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType4bIEC_tpaero(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpaero;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType4bIEC_tpord(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpord;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType4bIEC_tufilt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType4bIEC* element = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tufilt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_WindContPType4bIEC_dpmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType4bIEC* element = dynamic_cast<const WindContPType4bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_WindContPType4bIEC_tpaero(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType4bIEC* element = dynamic_cast<const WindContPType4bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpaero;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType4bIEC_tpord(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType4bIEC* element = dynamic_cast<const WindContPType4bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_WindContPType4bIEC_tufilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType4bIEC* element = dynamic_cast<const WindContPType4bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char WindContPType4bIEC::debugName[] = "WindContPType4bIEC";
const char* WindContPType4bIEC::debugString() const
{
	return WindContPType4bIEC::debugName;
}

void WindContPType4bIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindContPType4bIEC", &WindContPType4bIEC_factory);
}

void WindContPType4bIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindContPType4bIEC.dpmax", &assign_WindContPType4bIEC_dpmax);
	assign_map.emplace("WindContPType4bIEC.tpaero", &assign_WindContPType4bIEC_tpaero);
	assign_map.emplace("WindContPType4bIEC.tpord", &assign_WindContPType4bIEC_tpord);
	assign_map.emplace("WindContPType4bIEC.tufilt", &assign_WindContPType4bIEC_tufilt);
}

void WindContPType4bIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindContPType4bIEC.WindTurbineType4bIEC", &assign_WindContPType4bIEC_WindTurbineType4bIEC);
}

void WindContPType4bIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindContPType4bIEC.dpmax", &get_WindContPType4bIEC_dpmax);
	get_map.emplace("WindContPType4bIEC.tpaero", &get_WindContPType4bIEC_tpaero);
	get_map.emplace("WindContPType4bIEC.tpord", &get_WindContPType4bIEC_tpord);
	get_map.emplace("WindContPType4bIEC.tufilt", &get_WindContPType4bIEC_tufilt);
}

void WindContPType4bIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindContPType4bIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindContPType4bIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindContPType4bIEC" &&
		dynamic_cast<WindContPType4bIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindContPType4bIEC::declare()
{
	return BaseClassDefiner(WindContPType4bIEC::addConstructToMap, WindContPType4bIEC::addPrimitiveAssignFnsToMap, WindContPType4bIEC::addClassAssignFnsToMap, WindContPType4bIEC::debugName);
}

std::map<std::string, AttrDetails> WindContPType4bIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindContPType4bIEC_factory()
	{
		return new WindContPType4bIEC;
	}
}
