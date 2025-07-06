/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContPType4aIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindTurbineType4aIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindContPType4aIEC(),
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
		{ "WindContPType4aIEC.WindTurbineType4aIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType4aIEC.dpmaxp4a", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType4aIEC.tpordp4a", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType4aIEC.tufiltp4a", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindContPType4aIEC::WindContPType4aIEC() : WindTurbineType4aIEC(nullptr) {}
WindContPType4aIEC::~WindContPType4aIEC() {}

const std::list<std::string>& WindContPType4aIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindContPType4aIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindContPType4aIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindContPType4aIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindContPType4aIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindContPType4aIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindContPType4aIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindTurbineType4aIEC_WindContPType4aIEC(BaseClass*, BaseClass*);
bool assign_WindContPType4aIEC_WindTurbineType4aIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1);
	WindTurbineType4aIEC* element2 = dynamic_cast<WindTurbineType4aIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType4aIEC != element2)
		{
			element->WindTurbineType4aIEC = element2;
			return assign_WindTurbineType4aIEC_WindContPType4aIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPType4aIEC_dpmaxp4a(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dpmaxp4a;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType4aIEC_tpordp4a(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpordp4a;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType4aIEC_tufiltp4a(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType4aIEC* element = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tufiltp4a;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_WindContPType4aIEC_dpmaxp4a(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType4aIEC* element = dynamic_cast<const WindContPType4aIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dpmaxp4a;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType4aIEC_tpordp4a(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType4aIEC* element = dynamic_cast<const WindContPType4aIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpordp4a;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType4aIEC_tufiltp4a(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType4aIEC* element = dynamic_cast<const WindContPType4aIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tufiltp4a;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindContPType4aIEC::debugName[] = "WindContPType4aIEC";
const char* WindContPType4aIEC::debugString() const
{
	return WindContPType4aIEC::debugName;
}

void WindContPType4aIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindContPType4aIEC", &WindContPType4aIEC_factory);
}

void WindContPType4aIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindContPType4aIEC.dpmaxp4a", &assign_WindContPType4aIEC_dpmaxp4a);
	assign_map.emplace("WindContPType4aIEC.tpordp4a", &assign_WindContPType4aIEC_tpordp4a);
	assign_map.emplace("WindContPType4aIEC.tufiltp4a", &assign_WindContPType4aIEC_tufiltp4a);
}

void WindContPType4aIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindContPType4aIEC.WindTurbineType4aIEC", &assign_WindContPType4aIEC_WindTurbineType4aIEC);
}

void WindContPType4aIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindContPType4aIEC.dpmaxp4a", &get_WindContPType4aIEC_dpmaxp4a);
	get_map.emplace("WindContPType4aIEC.tpordp4a", &get_WindContPType4aIEC_tpordp4a);
	get_map.emplace("WindContPType4aIEC.tufiltp4a", &get_WindContPType4aIEC_tufiltp4a);
}

void WindContPType4aIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindContPType4aIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindContPType4aIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindContPType4aIEC" &&
		dynamic_cast<WindContPType4aIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindContPType4aIEC::declare()
{
	return BaseClassDefiner(WindContPType4aIEC::addConstructToMap, WindContPType4aIEC::addPrimitiveAssignFnsToMap, WindContPType4aIEC::addClassAssignFnsToMap, WindContPType4aIEC::debugName);
}

std::map<std::string, AttrDetails> WindContPType4aIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindContPType4aIEC_factory()
	{
		return new WindContPType4aIEC;
	}
}
