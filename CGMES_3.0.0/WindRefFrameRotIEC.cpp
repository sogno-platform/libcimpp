/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindRefFrameRotIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindTurbineType3or4IEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindRefFrameRotIEC(),
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
		{ "WindRefFrameRotIEC.WindTurbineType3or4IEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindRefFrameRotIEC.tpll", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindRefFrameRotIEC.upll1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindRefFrameRotIEC.upll2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindRefFrameRotIEC::WindRefFrameRotIEC() : WindTurbineType3or4IEC(nullptr) {}
WindRefFrameRotIEC::~WindRefFrameRotIEC() {}

const std::list<std::string>& WindRefFrameRotIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindRefFrameRotIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindRefFrameRotIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindRefFrameRotIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindRefFrameRotIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindRefFrameRotIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindRefFrameRotIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindTurbineType3or4IEC_WindRefFrameRotIEC(BaseClass*, BaseClass*);
bool assign_WindRefFrameRotIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindRefFrameRotIEC* element = dynamic_cast<WindRefFrameRotIEC*>(BaseClass_ptr1);
	WindTurbineType3or4IEC* element2 = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4IEC != element2)
		{
			element->WindTurbineType3or4IEC = element2;
			return assign_WindTurbineType3or4IEC_WindRefFrameRotIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindRefFrameRotIEC_tpll(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindRefFrameRotIEC* element = dynamic_cast<WindRefFrameRotIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpll;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindRefFrameRotIEC_upll1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindRefFrameRotIEC* element = dynamic_cast<WindRefFrameRotIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->upll1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindRefFrameRotIEC_upll2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindRefFrameRotIEC* element = dynamic_cast<WindRefFrameRotIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->upll2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_WindRefFrameRotIEC_tpll(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindRefFrameRotIEC* element = dynamic_cast<const WindRefFrameRotIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpll;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindRefFrameRotIEC_upll1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindRefFrameRotIEC* element = dynamic_cast<const WindRefFrameRotIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->upll1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindRefFrameRotIEC_upll2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindRefFrameRotIEC* element = dynamic_cast<const WindRefFrameRotIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->upll2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindRefFrameRotIEC::debugName[] = "WindRefFrameRotIEC";
const char* WindRefFrameRotIEC::debugString() const
{
	return WindRefFrameRotIEC::debugName;
}

void WindRefFrameRotIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindRefFrameRotIEC", &WindRefFrameRotIEC_factory);
}

void WindRefFrameRotIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindRefFrameRotIEC.tpll", &assign_WindRefFrameRotIEC_tpll);
	assign_map.emplace("WindRefFrameRotIEC.upll1", &assign_WindRefFrameRotIEC_upll1);
	assign_map.emplace("WindRefFrameRotIEC.upll2", &assign_WindRefFrameRotIEC_upll2);
}

void WindRefFrameRotIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindRefFrameRotIEC.WindTurbineType3or4IEC", &assign_WindRefFrameRotIEC_WindTurbineType3or4IEC);
}

void WindRefFrameRotIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindRefFrameRotIEC.tpll", &get_WindRefFrameRotIEC_tpll);
	get_map.emplace("WindRefFrameRotIEC.upll1", &get_WindRefFrameRotIEC_upll1);
	get_map.emplace("WindRefFrameRotIEC.upll2", &get_WindRefFrameRotIEC_upll2);
}

void WindRefFrameRotIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindRefFrameRotIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindRefFrameRotIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindRefFrameRotIEC" &&
		dynamic_cast<WindRefFrameRotIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindRefFrameRotIEC::declare()
{
	return BaseClassDefiner(WindRefFrameRotIEC::addConstructToMap, WindRefFrameRotIEC::addPrimitiveAssignFnsToMap, WindRefFrameRotIEC::addClassAssignFnsToMap, WindRefFrameRotIEC::debugName);
}

std::map<std::string, AttrDetails> WindRefFrameRotIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindRefFrameRotIEC_factory()
	{
		return new WindRefFrameRotIEC;
	}
}
