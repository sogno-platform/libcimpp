/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType3IEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindAeroLinearIEC.hpp"
#include "WindContPType3IEC.hpp"
#include "WindContPitchAngleIEC.hpp"
#include "WindMechIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindGenTurbineType3IEC(),
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
		{ "WindGenTurbineType3IEC.WindAeroLinearIEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindGenTurbineType3IEC.WindContPType3IEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindGenTurbineType3IEC.WindContPitchAngleIEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindGenTurbineType3IEC.WindMechIEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindGenTurbineType3IEC.dipmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindGenTurbineType3IEC.diqmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindGenTurbineType3IEC::WindGenTurbineType3IEC() : WindAeroLinearIEC(nullptr), WindContPType3IEC(nullptr), WindContPitchAngleIEC(nullptr), WindMechIEC(nullptr) {}
WindGenTurbineType3IEC::~WindGenTurbineType3IEC() {}

const std::list<std::string>& WindGenTurbineType3IEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindGenTurbineType3IEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindGenTurbineType3IEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindGenTurbineType3IEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindGenTurbineType3IEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindGenTurbineType3IEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindGenTurbineType3IEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindAeroLinearIEC_WindGenTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType3IEC_WindAeroLinearIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1);
	WindAeroLinearIEC* element2 = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindAeroLinearIEC != element2)
		{
			element->WindAeroLinearIEC = element2;
			return assign_WindAeroLinearIEC_WindGenTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPType3IEC_WindGenTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType3IEC_WindContPType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1);
	WindContPType3IEC* element2 = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPType3IEC != element2)
		{
			element->WindContPType3IEC = element2;
			return assign_WindContPType3IEC_WindGenTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_WindGenTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType3IEC_WindContPitchAngleIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1);
	WindContPitchAngleIEC* element2 = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPitchAngleIEC != element2)
		{
			element->WindContPitchAngleIEC = element2;
			return assign_WindContPitchAngleIEC_WindGenTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindMechIEC_WindGenTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType3IEC_WindMechIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1);
	WindMechIEC* element2 = dynamic_cast<WindMechIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindMechIEC != element2)
		{
			element->WindMechIEC = element2;
			return assign_WindMechIEC_WindGenTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGenTurbineType3IEC_dipmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1);
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

bool assign_WindGenTurbineType3IEC_diqmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3IEC* element = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr1);
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

bool get_WindGenTurbineType3IEC_WindAeroLinearIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindGenTurbineType3IEC* element = dynamic_cast<const WindGenTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindAeroLinearIEC != 0)
		{
			BaseClass_list.push_back(element->WindAeroLinearIEC);
			return true;
		}
	}
	return false;
}

bool get_WindGenTurbineType3IEC_WindContPType3IEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindGenTurbineType3IEC* element = dynamic_cast<const WindGenTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContPType3IEC != 0)
		{
			BaseClass_list.push_back(element->WindContPType3IEC);
			return true;
		}
	}
	return false;
}

bool get_WindGenTurbineType3IEC_WindContPitchAngleIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindGenTurbineType3IEC* element = dynamic_cast<const WindGenTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContPitchAngleIEC != 0)
		{
			BaseClass_list.push_back(element->WindContPitchAngleIEC);
			return true;
		}
	}
	return false;
}

bool get_WindGenTurbineType3IEC_WindMechIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindGenTurbineType3IEC* element = dynamic_cast<const WindGenTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindMechIEC != 0)
		{
			BaseClass_list.push_back(element->WindMechIEC);
			return true;
		}
	}
	return false;
}

bool get_WindGenTurbineType3IEC_dipmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3IEC* element = dynamic_cast<const WindGenTurbineType3IEC*>(BaseClass_ptr1);
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

bool get_WindGenTurbineType3IEC_diqmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3IEC* element = dynamic_cast<const WindGenTurbineType3IEC*>(BaseClass_ptr1);
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

const char WindGenTurbineType3IEC::debugName[] = "WindGenTurbineType3IEC";
const char* WindGenTurbineType3IEC::debugString() const
{
	return WindGenTurbineType3IEC::debugName;
}

void WindGenTurbineType3IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindGenTurbineType3IEC", &WindGenTurbineType3IEC_factory);
}

void WindGenTurbineType3IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindGenTurbineType3IEC.dipmax", &assign_WindGenTurbineType3IEC_dipmax);
	assign_map.emplace("WindGenTurbineType3IEC.diqmax", &assign_WindGenTurbineType3IEC_diqmax);
}

void WindGenTurbineType3IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindGenTurbineType3IEC.WindAeroLinearIEC", &assign_WindGenTurbineType3IEC_WindAeroLinearIEC);
	assign_map.emplace("WindGenTurbineType3IEC.WindContPType3IEC", &assign_WindGenTurbineType3IEC_WindContPType3IEC);
	assign_map.emplace("WindGenTurbineType3IEC.WindContPitchAngleIEC", &assign_WindGenTurbineType3IEC_WindContPitchAngleIEC);
	assign_map.emplace("WindGenTurbineType3IEC.WindMechIEC", &assign_WindGenTurbineType3IEC_WindMechIEC);
}

void WindGenTurbineType3IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4IEC::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindGenTurbineType3IEC.dipmax", &get_WindGenTurbineType3IEC_dipmax);
	get_map.emplace("WindGenTurbineType3IEC.diqmax", &get_WindGenTurbineType3IEC_diqmax);
}

void WindGenTurbineType3IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType3or4IEC::addClassGetFnsToMap(get_map);
	get_map.emplace("WindGenTurbineType3IEC.WindAeroLinearIEC", &get_WindGenTurbineType3IEC_WindAeroLinearIEC);
	get_map.emplace("WindGenTurbineType3IEC.WindContPType3IEC", &get_WindGenTurbineType3IEC_WindContPType3IEC);
	get_map.emplace("WindGenTurbineType3IEC.WindContPitchAngleIEC", &get_WindGenTurbineType3IEC_WindContPitchAngleIEC);
	get_map.emplace("WindGenTurbineType3IEC.WindMechIEC", &get_WindGenTurbineType3IEC_WindMechIEC);
}

void WindGenTurbineType3IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4IEC::addEnumGetFnsToMap(get_map);
}

bool WindGenTurbineType3IEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindGenTurbineType3IEC" &&
		dynamic_cast<WindGenTurbineType3IEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindGenTurbineType3IEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType3IEC::addConstructToMap, WindGenTurbineType3IEC::addPrimitiveAssignFnsToMap, WindGenTurbineType3IEC::addClassAssignFnsToMap, WindGenTurbineType3IEC::debugName);
}

std::map<std::string, AttrDetails> WindGenTurbineType3IEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindTurbineType3or4IEC::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindGenTurbineType3IEC_factory()
	{
		return new WindGenTurbineType3IEC;
	}
}
