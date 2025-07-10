/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindAeroLinearIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindGenTurbineType3IEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindAeroLinearIEC(),
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
		{ "WindAeroLinearIEC.WindGenTurbineType3IEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindAeroLinearIEC.dpomega", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindAeroLinearIEC.dptheta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindAeroLinearIEC.omegazero", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindAeroLinearIEC.pavail", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindAeroLinearIEC.thetazero", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindAeroLinearIEC::WindAeroLinearIEC() : WindGenTurbineType3IEC(nullptr) {}
WindAeroLinearIEC::~WindAeroLinearIEC() {}

const std::list<std::string>& WindAeroLinearIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindAeroLinearIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindAeroLinearIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindAeroLinearIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindAeroLinearIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindAeroLinearIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindAeroLinearIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindGenTurbineType3IEC_WindAeroLinearIEC(BaseClass*, BaseClass*);
bool assign_WindAeroLinearIEC_WindGenTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindAeroLinearIEC* element = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr1);
	WindGenTurbineType3IEC* element2 = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType3IEC != element2)
		{
			element->WindGenTurbineType3IEC = element2;
			return assign_WindGenTurbineType3IEC_WindAeroLinearIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindAeroLinearIEC_dpomega(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindAeroLinearIEC* element = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dpomega;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindAeroLinearIEC_dptheta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindAeroLinearIEC* element = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dptheta;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindAeroLinearIEC_omegazero(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindAeroLinearIEC* element = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->omegazero;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindAeroLinearIEC_pavail(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindAeroLinearIEC* element = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pavail;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindAeroLinearIEC_thetazero(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindAeroLinearIEC* element = dynamic_cast<WindAeroLinearIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->thetazero;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_WindAeroLinearIEC_dpomega(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindAeroLinearIEC* element = dynamic_cast<const WindAeroLinearIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dpomega;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindAeroLinearIEC_dptheta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindAeroLinearIEC* element = dynamic_cast<const WindAeroLinearIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dptheta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindAeroLinearIEC_omegazero(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindAeroLinearIEC* element = dynamic_cast<const WindAeroLinearIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->omegazero;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindAeroLinearIEC_pavail(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindAeroLinearIEC* element = dynamic_cast<const WindAeroLinearIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pavail;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindAeroLinearIEC_thetazero(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindAeroLinearIEC* element = dynamic_cast<const WindAeroLinearIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->thetazero;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindAeroLinearIEC::debugName[] = "WindAeroLinearIEC";
const char* WindAeroLinearIEC::debugString() const
{
	return WindAeroLinearIEC::debugName;
}

void WindAeroLinearIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindAeroLinearIEC", &WindAeroLinearIEC_factory);
}

void WindAeroLinearIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindAeroLinearIEC.dpomega", &assign_WindAeroLinearIEC_dpomega);
	assign_map.emplace("WindAeroLinearIEC.dptheta", &assign_WindAeroLinearIEC_dptheta);
	assign_map.emplace("WindAeroLinearIEC.omegazero", &assign_WindAeroLinearIEC_omegazero);
	assign_map.emplace("WindAeroLinearIEC.pavail", &assign_WindAeroLinearIEC_pavail);
	assign_map.emplace("WindAeroLinearIEC.thetazero", &assign_WindAeroLinearIEC_thetazero);
}

void WindAeroLinearIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindAeroLinearIEC.WindGenTurbineType3IEC", &assign_WindAeroLinearIEC_WindGenTurbineType3IEC);
}

void WindAeroLinearIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindAeroLinearIEC.dpomega", &get_WindAeroLinearIEC_dpomega);
	get_map.emplace("WindAeroLinearIEC.dptheta", &get_WindAeroLinearIEC_dptheta);
	get_map.emplace("WindAeroLinearIEC.omegazero", &get_WindAeroLinearIEC_omegazero);
	get_map.emplace("WindAeroLinearIEC.pavail", &get_WindAeroLinearIEC_pavail);
	get_map.emplace("WindAeroLinearIEC.thetazero", &get_WindAeroLinearIEC_thetazero);
}

void WindAeroLinearIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindAeroLinearIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindAeroLinearIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindAeroLinearIEC" &&
		dynamic_cast<WindAeroLinearIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindAeroLinearIEC::declare()
{
	return BaseClassDefiner(WindAeroLinearIEC::addConstructToMap, WindAeroLinearIEC::addPrimitiveAssignFnsToMap, WindAeroLinearIEC::addClassAssignFnsToMap, WindAeroLinearIEC::debugName);
}

std::map<std::string, AttrDetails> WindAeroLinearIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindAeroLinearIEC_factory()
	{
		return new WindAeroLinearIEC;
	}
}
