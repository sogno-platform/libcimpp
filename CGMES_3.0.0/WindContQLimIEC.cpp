/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContQLimIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindTurbineType3or4IEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindContQLimIEC(),
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
		{ "WindContQLimIEC.WindTurbineType3or4IEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContQLimIEC.qmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContQLimIEC.qmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindContQLimIEC::WindContQLimIEC() : WindTurbineType3or4IEC(nullptr) {}
WindContQLimIEC::~WindContQLimIEC() {}

const std::list<std::string>& WindContQLimIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindContQLimIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindContQLimIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindContQLimIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindContQLimIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindContQLimIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindContQLimIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindTurbineType3or4IEC_WindContQLimIEC(BaseClass*, BaseClass*);
bool assign_WindContQLimIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContQLimIEC* element = dynamic_cast<WindContQLimIEC*>(BaseClass_ptr1);
	WindTurbineType3or4IEC* element2 = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4IEC != element2)
		{
			element->WindTurbineType3or4IEC = element2;
			return assign_WindTurbineType3or4IEC_WindContQLimIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContQLimIEC_qmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQLimIEC* element = dynamic_cast<WindContQLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQLimIEC_qmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQLimIEC* element = dynamic_cast<WindContQLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_WindContQLimIEC_qmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQLimIEC* element = dynamic_cast<const WindContQLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQLimIEC_qmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQLimIEC* element = dynamic_cast<const WindContQLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindContQLimIEC::debugName[] = "WindContQLimIEC";
const char* WindContQLimIEC::debugString() const
{
	return WindContQLimIEC::debugName;
}

void WindContQLimIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindContQLimIEC", &WindContQLimIEC_factory);
}

void WindContQLimIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindContQLimIEC.qmax", &assign_WindContQLimIEC_qmax);
	assign_map.emplace("WindContQLimIEC.qmin", &assign_WindContQLimIEC_qmin);
}

void WindContQLimIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindContQLimIEC.WindTurbineType3or4IEC", &assign_WindContQLimIEC_WindTurbineType3or4IEC);
}

void WindContQLimIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindContQLimIEC.qmax", &get_WindContQLimIEC_qmax);
	get_map.emplace("WindContQLimIEC.qmin", &get_WindContQLimIEC_qmin);
}

void WindContQLimIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindContQLimIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindContQLimIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindContQLimIEC" &&
		dynamic_cast<WindContQLimIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindContQLimIEC::declare()
{
	return BaseClassDefiner(WindContQLimIEC::addConstructToMap, WindContQLimIEC::addPrimitiveAssignFnsToMap, WindContQLimIEC::addClassAssignFnsToMap, WindContQLimIEC::debugName);
}

std::map<std::string, AttrDetails> WindContQLimIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindContQLimIEC_factory()
	{
		return new WindContQLimIEC;
	}
}
