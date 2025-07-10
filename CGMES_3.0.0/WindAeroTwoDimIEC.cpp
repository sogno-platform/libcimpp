/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindAeroTwoDimIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindTurbineType3IEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindAeroTwoDimIEC(),
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
		{ "WindAeroTwoDimIEC.WindTurbineType3IEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindAeroTwoDimIEC.dpomega", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindAeroTwoDimIEC.dptheta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindAeroTwoDimIEC.dpv1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindAeroTwoDimIEC.omegazero", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindAeroTwoDimIEC.pavail", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindAeroTwoDimIEC.thetav2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindAeroTwoDimIEC.thetazero", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindAeroTwoDimIEC::WindAeroTwoDimIEC() : WindTurbineType3IEC(nullptr) {}
WindAeroTwoDimIEC::~WindAeroTwoDimIEC() {}

const std::list<std::string>& WindAeroTwoDimIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindAeroTwoDimIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindAeroTwoDimIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindAeroTwoDimIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindAeroTwoDimIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindAeroTwoDimIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindAeroTwoDimIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindTurbineType3IEC_WindAeroTwoDimIEC(BaseClass*, BaseClass*);
bool assign_WindAeroTwoDimIEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1);
	WindTurbineType3IEC* element2 = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3IEC != element2)
		{
			element->WindTurbineType3IEC = element2;
			return assign_WindTurbineType3IEC_WindAeroTwoDimIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindAeroTwoDimIEC_dpomega(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1);
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

bool assign_WindAeroTwoDimIEC_dptheta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1);
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

bool assign_WindAeroTwoDimIEC_dpv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dpv1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindAeroTwoDimIEC_omegazero(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1);
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

bool assign_WindAeroTwoDimIEC_pavail(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1);
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

bool assign_WindAeroTwoDimIEC_thetav2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->thetav2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindAeroTwoDimIEC_thetazero(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindAeroTwoDimIEC* element = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr1);
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


bool get_WindAeroTwoDimIEC_dpomega(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindAeroTwoDimIEC* element = dynamic_cast<const WindAeroTwoDimIEC*>(BaseClass_ptr1);
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

bool get_WindAeroTwoDimIEC_dptheta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindAeroTwoDimIEC* element = dynamic_cast<const WindAeroTwoDimIEC*>(BaseClass_ptr1);
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

bool get_WindAeroTwoDimIEC_dpv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindAeroTwoDimIEC* element = dynamic_cast<const WindAeroTwoDimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dpv1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindAeroTwoDimIEC_omegazero(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindAeroTwoDimIEC* element = dynamic_cast<const WindAeroTwoDimIEC*>(BaseClass_ptr1);
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

bool get_WindAeroTwoDimIEC_pavail(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindAeroTwoDimIEC* element = dynamic_cast<const WindAeroTwoDimIEC*>(BaseClass_ptr1);
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

bool get_WindAeroTwoDimIEC_thetav2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindAeroTwoDimIEC* element = dynamic_cast<const WindAeroTwoDimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->thetav2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindAeroTwoDimIEC_thetazero(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindAeroTwoDimIEC* element = dynamic_cast<const WindAeroTwoDimIEC*>(BaseClass_ptr1);
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

const char WindAeroTwoDimIEC::debugName[] = "WindAeroTwoDimIEC";
const char* WindAeroTwoDimIEC::debugString() const
{
	return WindAeroTwoDimIEC::debugName;
}

void WindAeroTwoDimIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindAeroTwoDimIEC", &WindAeroTwoDimIEC_factory);
}

void WindAeroTwoDimIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindAeroTwoDimIEC.dpomega", &assign_WindAeroTwoDimIEC_dpomega);
	assign_map.emplace("WindAeroTwoDimIEC.dptheta", &assign_WindAeroTwoDimIEC_dptheta);
	assign_map.emplace("WindAeroTwoDimIEC.dpv1", &assign_WindAeroTwoDimIEC_dpv1);
	assign_map.emplace("WindAeroTwoDimIEC.omegazero", &assign_WindAeroTwoDimIEC_omegazero);
	assign_map.emplace("WindAeroTwoDimIEC.pavail", &assign_WindAeroTwoDimIEC_pavail);
	assign_map.emplace("WindAeroTwoDimIEC.thetav2", &assign_WindAeroTwoDimIEC_thetav2);
	assign_map.emplace("WindAeroTwoDimIEC.thetazero", &assign_WindAeroTwoDimIEC_thetazero);
}

void WindAeroTwoDimIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindAeroTwoDimIEC.WindTurbineType3IEC", &assign_WindAeroTwoDimIEC_WindTurbineType3IEC);
}

void WindAeroTwoDimIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindAeroTwoDimIEC.dpomega", &get_WindAeroTwoDimIEC_dpomega);
	get_map.emplace("WindAeroTwoDimIEC.dptheta", &get_WindAeroTwoDimIEC_dptheta);
	get_map.emplace("WindAeroTwoDimIEC.dpv1", &get_WindAeroTwoDimIEC_dpv1);
	get_map.emplace("WindAeroTwoDimIEC.omegazero", &get_WindAeroTwoDimIEC_omegazero);
	get_map.emplace("WindAeroTwoDimIEC.pavail", &get_WindAeroTwoDimIEC_pavail);
	get_map.emplace("WindAeroTwoDimIEC.thetav2", &get_WindAeroTwoDimIEC_thetav2);
	get_map.emplace("WindAeroTwoDimIEC.thetazero", &get_WindAeroTwoDimIEC_thetazero);
}

void WindAeroTwoDimIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindAeroTwoDimIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindAeroTwoDimIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindAeroTwoDimIEC" &&
		dynamic_cast<WindAeroTwoDimIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindAeroTwoDimIEC::declare()
{
	return BaseClassDefiner(WindAeroTwoDimIEC::addConstructToMap, WindAeroTwoDimIEC::addPrimitiveAssignFnsToMap, WindAeroTwoDimIEC::addClassAssignFnsToMap, WindAeroTwoDimIEC::debugName);
}

std::map<std::string, AttrDetails> WindAeroTwoDimIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindAeroTwoDimIEC_factory()
	{
		return new WindAeroTwoDimIEC;
	}
}
