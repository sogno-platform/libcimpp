/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType3bIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindGenTurbineType3bIEC(),
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
		{ "WindGenTurbineType3bIEC.fducw", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindGenTurbineType3bIEC.mwtcwp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindGenTurbineType3bIEC.tg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindGenTurbineType3bIEC.two", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindGenTurbineType3bIEC.xs", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindGenTurbineType3bIEC::WindGenTurbineType3bIEC() {}
WindGenTurbineType3bIEC::~WindGenTurbineType3bIEC() {}

const std::list<std::string>& WindGenTurbineType3bIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindGenTurbineType3bIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindGenTurbineType3bIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindGenTurbineType3bIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindGenTurbineType3bIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindGenTurbineType3bIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindGenTurbineType3bIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindGenTurbineType3bIEC_fducw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fducw;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindGenTurbineType3bIEC_mwtcwp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mwtcwp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindGenTurbineType3bIEC_tg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1);
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

bool assign_WindGenTurbineType3bIEC_two(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->two;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindGenTurbineType3bIEC_xs(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3bIEC* element = dynamic_cast<WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xs;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_WindGenTurbineType3bIEC_fducw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3bIEC* element = dynamic_cast<const WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fducw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenTurbineType3bIEC_mwtcwp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3bIEC* element = dynamic_cast<const WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mwtcwp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenTurbineType3bIEC_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3bIEC* element = dynamic_cast<const WindGenTurbineType3bIEC*>(BaseClass_ptr1);
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

bool get_WindGenTurbineType3bIEC_two(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3bIEC* element = dynamic_cast<const WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->two;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenTurbineType3bIEC_xs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3bIEC* element = dynamic_cast<const WindGenTurbineType3bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindGenTurbineType3bIEC::debugName[] = "WindGenTurbineType3bIEC";
const char* WindGenTurbineType3bIEC::debugString() const
{
	return WindGenTurbineType3bIEC::debugName;
}

void WindGenTurbineType3bIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindGenTurbineType3bIEC", &WindGenTurbineType3bIEC_factory);
}

void WindGenTurbineType3bIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindGenTurbineType3bIEC.fducw", &assign_WindGenTurbineType3bIEC_fducw);
	assign_map.emplace("WindGenTurbineType3bIEC.mwtcwp", &assign_WindGenTurbineType3bIEC_mwtcwp);
	assign_map.emplace("WindGenTurbineType3bIEC.tg", &assign_WindGenTurbineType3bIEC_tg);
	assign_map.emplace("WindGenTurbineType3bIEC.two", &assign_WindGenTurbineType3bIEC_two);
	assign_map.emplace("WindGenTurbineType3bIEC.xs", &assign_WindGenTurbineType3bIEC_xs);
}

void WindGenTurbineType3bIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void WindGenTurbineType3bIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenTurbineType3IEC::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindGenTurbineType3bIEC.fducw", &get_WindGenTurbineType3bIEC_fducw);
	get_map.emplace("WindGenTurbineType3bIEC.mwtcwp", &get_WindGenTurbineType3bIEC_mwtcwp);
	get_map.emplace("WindGenTurbineType3bIEC.tg", &get_WindGenTurbineType3bIEC_tg);
	get_map.emplace("WindGenTurbineType3bIEC.two", &get_WindGenTurbineType3bIEC_two);
	get_map.emplace("WindGenTurbineType3bIEC.xs", &get_WindGenTurbineType3bIEC_xs);
}

void WindGenTurbineType3bIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindGenTurbineType3IEC::addClassGetFnsToMap(get_map);
}

void WindGenTurbineType3bIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenTurbineType3IEC::addEnumGetFnsToMap(get_map);
}

bool WindGenTurbineType3bIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindGenTurbineType3bIEC" &&
		dynamic_cast<WindGenTurbineType3bIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindGenTurbineType3bIEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType3bIEC::addConstructToMap, WindGenTurbineType3bIEC::addPrimitiveAssignFnsToMap, WindGenTurbineType3bIEC::addClassAssignFnsToMap, WindGenTurbineType3bIEC::debugName);
}

std::map<std::string, AttrDetails> WindGenTurbineType3bIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindGenTurbineType3IEC::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindGenTurbineType3bIEC_factory()
	{
		return new WindGenTurbineType3bIEC;
	}
}
