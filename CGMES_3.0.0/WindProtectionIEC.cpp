/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindProtectionIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindTurbineType1or2IEC.hpp"
#include "WindTurbineType3or4IEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindProtectionIEC(),
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
		{ "WindProtectionIEC.WindDynamicsLookupTable", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindProtectionIEC.WindTurbineType1or2IEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindProtectionIEC.WindTurbineType3or4IEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindProtectionIEC.dfimax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindProtectionIEC.fover", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindProtectionIEC.funder", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindProtectionIEC.mzc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindProtectionIEC.tfma", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindProtectionIEC.uover", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindProtectionIEC.uunder", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindProtectionIEC::WindProtectionIEC() : WindTurbineType1or2IEC(nullptr), WindTurbineType3or4IEC(nullptr) {}
WindProtectionIEC::~WindProtectionIEC() {}

const std::list<std::string>& WindProtectionIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindProtectionIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindProtectionIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindProtectionIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindProtectionIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindProtectionIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindProtectionIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindDynamicsLookupTable_WindProtectionIEC(BaseClass*, BaseClass*);
bool assign_WindProtectionIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindProtectionIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType1or2IEC_WindProtectionIEC(BaseClass*, BaseClass*);
bool assign_WindProtectionIEC_WindTurbineType1or2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	WindTurbineType1or2IEC* element2 = dynamic_cast<WindTurbineType1or2IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType1or2IEC != element2)
		{
			element->WindTurbineType1or2IEC = element2;
			return assign_WindTurbineType1or2IEC_WindProtectionIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3or4IEC_WindProtectionIEC(BaseClass*, BaseClass*);
bool assign_WindProtectionIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	WindTurbineType3or4IEC* element2 = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4IEC != element2)
		{
			element->WindTurbineType3or4IEC = element2;
			return assign_WindTurbineType3or4IEC_WindProtectionIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindProtectionIEC_dfimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dfimax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_fover(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fover;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_funder(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->funder;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_mzc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mzc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_tfma(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tfma;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_uover(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uover;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_uunder(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uunder;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}




bool get_WindProtectionIEC_dfimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dfimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_fover(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fover;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_funder(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->funder;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_mzc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mzc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_tfma(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tfma;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_uover(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uover;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_uunder(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uunder;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindProtectionIEC::debugName[] = "WindProtectionIEC";
const char* WindProtectionIEC::debugString() const
{
	return WindProtectionIEC::debugName;
}

void WindProtectionIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindProtectionIEC", &WindProtectionIEC_factory);
}

void WindProtectionIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindProtectionIEC.dfimax", &assign_WindProtectionIEC_dfimax);
	assign_map.emplace("WindProtectionIEC.fover", &assign_WindProtectionIEC_fover);
	assign_map.emplace("WindProtectionIEC.funder", &assign_WindProtectionIEC_funder);
	assign_map.emplace("WindProtectionIEC.mzc", &assign_WindProtectionIEC_mzc);
	assign_map.emplace("WindProtectionIEC.tfma", &assign_WindProtectionIEC_tfma);
	assign_map.emplace("WindProtectionIEC.uover", &assign_WindProtectionIEC_uover);
	assign_map.emplace("WindProtectionIEC.uunder", &assign_WindProtectionIEC_uunder);
}

void WindProtectionIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindProtectionIEC.WindDynamicsLookupTable", &assign_WindProtectionIEC_WindDynamicsLookupTable);
	assign_map.emplace("WindProtectionIEC.WindTurbineType1or2IEC", &assign_WindProtectionIEC_WindTurbineType1or2IEC);
	assign_map.emplace("WindProtectionIEC.WindTurbineType3or4IEC", &assign_WindProtectionIEC_WindTurbineType3or4IEC);
}

void WindProtectionIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindProtectionIEC.dfimax", &get_WindProtectionIEC_dfimax);
	get_map.emplace("WindProtectionIEC.fover", &get_WindProtectionIEC_fover);
	get_map.emplace("WindProtectionIEC.funder", &get_WindProtectionIEC_funder);
	get_map.emplace("WindProtectionIEC.mzc", &get_WindProtectionIEC_mzc);
	get_map.emplace("WindProtectionIEC.tfma", &get_WindProtectionIEC_tfma);
	get_map.emplace("WindProtectionIEC.uover", &get_WindProtectionIEC_uover);
	get_map.emplace("WindProtectionIEC.uunder", &get_WindProtectionIEC_uunder);
}

void WindProtectionIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindProtectionIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindProtectionIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindProtectionIEC" &&
		dynamic_cast<WindProtectionIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindProtectionIEC::declare()
{
	return BaseClassDefiner(WindProtectionIEC::addConstructToMap, WindProtectionIEC::addPrimitiveAssignFnsToMap, WindProtectionIEC::addClassAssignFnsToMap, WindProtectionIEC::debugName);
}

std::map<std::string, AttrDetails> WindProtectionIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindProtectionIEC_factory()
	{
		return new WindProtectionIEC;
	}
}
