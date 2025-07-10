/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenType3IEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindTurbineType3IEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindGenType3IEC(),
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
		{ "WindGenType3IEC.WindTurbineType3IEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindGenType3IEC.dipmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindGenType3IEC.diqmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindGenType3IEC.xs", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindGenType3IEC::WindGenType3IEC() : WindTurbineType3IEC(nullptr) {}
WindGenType3IEC::~WindGenType3IEC() {}

const std::list<std::string>& WindGenType3IEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindGenType3IEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindGenType3IEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindGenType3IEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindGenType3IEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindGenType3IEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindGenType3IEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindTurbineType3IEC_WindGenType3IEC(BaseClass*, BaseClass*);
bool assign_WindGenType3IEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenType3IEC* element = dynamic_cast<WindGenType3IEC*>(BaseClass_ptr1);
	WindTurbineType3IEC* element2 = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3IEC != element2)
		{
			element->WindTurbineType3IEC = element2;
			return assign_WindTurbineType3IEC_WindGenType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGenType3IEC_dipmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenType3IEC* element = dynamic_cast<WindGenType3IEC*>(BaseClass_ptr1);
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

bool assign_WindGenType3IEC_diqmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenType3IEC* element = dynamic_cast<WindGenType3IEC*>(BaseClass_ptr1);
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

bool assign_WindGenType3IEC_xs(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenType3IEC* element = dynamic_cast<WindGenType3IEC*>(BaseClass_ptr1);
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


bool get_WindGenType3IEC_dipmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenType3IEC* element = dynamic_cast<const WindGenType3IEC*>(BaseClass_ptr1);
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

bool get_WindGenType3IEC_diqmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenType3IEC* element = dynamic_cast<const WindGenType3IEC*>(BaseClass_ptr1);
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

bool get_WindGenType3IEC_xs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenType3IEC* element = dynamic_cast<const WindGenType3IEC*>(BaseClass_ptr1);
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

const char WindGenType3IEC::debugName[] = "WindGenType3IEC";
const char* WindGenType3IEC::debugString() const
{
	return WindGenType3IEC::debugName;
}

void WindGenType3IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindGenType3IEC", &WindGenType3IEC_factory);
}

void WindGenType3IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindGenType3IEC.dipmax", &assign_WindGenType3IEC_dipmax);
	assign_map.emplace("WindGenType3IEC.diqmax", &assign_WindGenType3IEC_diqmax);
	assign_map.emplace("WindGenType3IEC.xs", &assign_WindGenType3IEC_xs);
}

void WindGenType3IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindGenType3IEC.WindTurbineType3IEC", &assign_WindGenType3IEC_WindTurbineType3IEC);
}

void WindGenType3IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindGenType3IEC.dipmax", &get_WindGenType3IEC_dipmax);
	get_map.emplace("WindGenType3IEC.diqmax", &get_WindGenType3IEC_diqmax);
	get_map.emplace("WindGenType3IEC.xs", &get_WindGenType3IEC_xs);
}

void WindGenType3IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindGenType3IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindGenType3IEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindGenType3IEC" &&
		dynamic_cast<WindGenType3IEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindGenType3IEC::declare()
{
	return BaseClassDefiner(WindGenType3IEC::addConstructToMap, WindGenType3IEC::addPrimitiveAssignFnsToMap, WindGenType3IEC::addClassAssignFnsToMap, WindGenType3IEC::debugName);
}

std::map<std::string, AttrDetails> WindGenType3IEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindGenType3IEC_factory()
	{
		return new WindGenType3IEC;
	}
}
