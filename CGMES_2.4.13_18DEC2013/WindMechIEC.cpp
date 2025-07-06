/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindMechIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindGenTurbineType3IEC.hpp"
#include "WindTurbineType1or2IEC.hpp"
#include "WindTurbineType4bIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindMechIEC(),
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
		{ "WindMechIEC.WindGenTurbineType3IEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindMechIEC.WindTurbineType1or2IEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindMechIEC.WindTurbineType4bIEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindMechIEC.cdrt", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindMechIEC.hgen", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindMechIEC.hwtr", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindMechIEC.kdrt", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindMechIEC::WindMechIEC() : WindGenTurbineType3IEC(nullptr), WindTurbineType1or2IEC(nullptr), WindTurbineType4bIEC(nullptr) {}
WindMechIEC::~WindMechIEC() {}

const std::list<std::string>& WindMechIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindMechIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindMechIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindMechIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindMechIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindMechIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindMechIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindGenTurbineType3IEC_WindMechIEC(BaseClass*, BaseClass*);
bool assign_WindMechIEC_WindGenTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1);
	WindGenTurbineType3IEC* element2 = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType3IEC != element2)
		{
			element->WindGenTurbineType3IEC = element2;
			return assign_WindGenTurbineType3IEC_WindMechIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType1or2IEC_WindMechIEC(BaseClass*, BaseClass*);
bool assign_WindMechIEC_WindTurbineType1or2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1);
	WindTurbineType1or2IEC* element2 = dynamic_cast<WindTurbineType1or2IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType1or2IEC != element2)
		{
			element->WindTurbineType1or2IEC = element2;
			return assign_WindTurbineType1or2IEC_WindMechIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType4bIEC_WindMechIEC(BaseClass*, BaseClass*);
bool assign_WindMechIEC_WindTurbineType4bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1);
	WindTurbineType4bIEC* element2 = dynamic_cast<WindTurbineType4bIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType4bIEC != element2)
		{
			element->WindTurbineType4bIEC = element2;
			return assign_WindTurbineType4bIEC_WindMechIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindMechIEC_cdrt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->cdrt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindMechIEC_hgen(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->hgen;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindMechIEC_hwtr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->hwtr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindMechIEC_kdrt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindMechIEC* element = dynamic_cast<WindMechIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kdrt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}




bool get_WindMechIEC_cdrt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindMechIEC* element = dynamic_cast<const WindMechIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->cdrt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindMechIEC_hgen(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindMechIEC* element = dynamic_cast<const WindMechIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->hgen;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindMechIEC_hwtr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindMechIEC* element = dynamic_cast<const WindMechIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->hwtr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindMechIEC_kdrt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindMechIEC* element = dynamic_cast<const WindMechIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kdrt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindMechIEC::debugName[] = "WindMechIEC";
const char* WindMechIEC::debugString() const
{
	return WindMechIEC::debugName;
}

void WindMechIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindMechIEC", &WindMechIEC_factory);
}

void WindMechIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindMechIEC.cdrt", &assign_WindMechIEC_cdrt);
	assign_map.emplace("WindMechIEC.hgen", &assign_WindMechIEC_hgen);
	assign_map.emplace("WindMechIEC.hwtr", &assign_WindMechIEC_hwtr);
	assign_map.emplace("WindMechIEC.kdrt", &assign_WindMechIEC_kdrt);
}

void WindMechIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindMechIEC.WindGenTurbineType3IEC", &assign_WindMechIEC_WindGenTurbineType3IEC);
	assign_map.emplace("WindMechIEC.WindTurbineType1or2IEC", &assign_WindMechIEC_WindTurbineType1or2IEC);
	assign_map.emplace("WindMechIEC.WindTurbineType4bIEC", &assign_WindMechIEC_WindTurbineType4bIEC);
}

void WindMechIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindMechIEC.cdrt", &get_WindMechIEC_cdrt);
	get_map.emplace("WindMechIEC.hgen", &get_WindMechIEC_hgen);
	get_map.emplace("WindMechIEC.hwtr", &get_WindMechIEC_hwtr);
	get_map.emplace("WindMechIEC.kdrt", &get_WindMechIEC_kdrt);
}

void WindMechIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindMechIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindMechIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindMechIEC" &&
		dynamic_cast<WindMechIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindMechIEC::declare()
{
	return BaseClassDefiner(WindMechIEC::addConstructToMap, WindMechIEC::addPrimitiveAssignFnsToMap, WindMechIEC::addClassAssignFnsToMap, WindMechIEC::debugName);
}

std::map<std::string, AttrDetails> WindMechIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindMechIEC_factory()
	{
		return new WindMechIEC;
	}
}
