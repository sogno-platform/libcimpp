/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenType4IEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindGenType4IEC(),
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
		{ "WindGenType4IEC.dipmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindGenType4IEC.diqmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindGenType4IEC.diqmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindGenType4IEC.tg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindGenType4IEC::WindGenType4IEC() {}
WindGenType4IEC::~WindGenType4IEC() {}

const std::list<std::string>& WindGenType4IEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindGenType4IEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindGenType4IEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindGenType4IEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindGenType4IEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindGenType4IEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindGenType4IEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindGenType4IEC_dipmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dipmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindGenType4IEC_diqmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->diqmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindGenType4IEC_diqmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->diqmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindGenType4IEC_tg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenType4IEC* element = dynamic_cast<WindGenType4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_WindGenType4IEC_dipmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenType4IEC* element = dynamic_cast<const WindGenType4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dipmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenType4IEC_diqmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenType4IEC* element = dynamic_cast<const WindGenType4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->diqmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenType4IEC_diqmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenType4IEC* element = dynamic_cast<const WindGenType4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->diqmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenType4IEC_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenType4IEC* element = dynamic_cast<const WindGenType4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindGenType4IEC::debugName[] = "WindGenType4IEC";
const char* WindGenType4IEC::debugString() const
{
	return WindGenType4IEC::debugName;
}

void WindGenType4IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindGenType4IEC", &WindGenType4IEC_factory);
}

void WindGenType4IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindGenType4IEC.dipmax", &assign_WindGenType4IEC_dipmax);
	assign_map.emplace("WindGenType4IEC.diqmax", &assign_WindGenType4IEC_diqmax);
	assign_map.emplace("WindGenType4IEC.diqmin", &assign_WindGenType4IEC_diqmin);
	assign_map.emplace("WindGenType4IEC.tg", &assign_WindGenType4IEC_tg);
}

void WindGenType4IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void WindGenType4IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4IEC::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindGenType4IEC.dipmax", &get_WindGenType4IEC_dipmax);
	get_map.emplace("WindGenType4IEC.diqmax", &get_WindGenType4IEC_diqmax);
	get_map.emplace("WindGenType4IEC.diqmin", &get_WindGenType4IEC_diqmin);
	get_map.emplace("WindGenType4IEC.tg", &get_WindGenType4IEC_tg);
}

void WindGenType4IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType3or4IEC::addClassGetFnsToMap(get_map);
}

void WindGenType4IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4IEC::addEnumGetFnsToMap(get_map);
}

bool WindGenType4IEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindGenType4IEC" &&
		dynamic_cast<WindGenType4IEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindGenType4IEC::declare()
{
	return BaseClassDefiner(WindGenType4IEC::addConstructToMap, WindGenType4IEC::addPrimitiveAssignFnsToMap, WindGenType4IEC::addClassAssignFnsToMap, WindGenType4IEC::debugName);
}

std::map<std::string, AttrDetails> WindGenType4IEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindTurbineType3or4IEC::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindGenType4IEC_factory()
	{
		return new WindGenType4IEC;
	}
}
