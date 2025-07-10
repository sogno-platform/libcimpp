/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContCurrLimIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindTurbineType3or4IEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindContCurrLimIEC(),
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
		{ "WindContCurrLimIEC.WindDynamicsLookupTable", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContCurrLimIEC.WindTurbineType3or4IEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContCurrLimIEC.imax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContCurrLimIEC.imaxdip", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContCurrLimIEC.kpqu", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContCurrLimIEC.mdfslim", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContCurrLimIEC.mqpri", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContCurrLimIEC.tufiltcl", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContCurrLimIEC.upqumax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindContCurrLimIEC::WindContCurrLimIEC() : WindTurbineType3or4IEC(nullptr) {}
WindContCurrLimIEC::~WindContCurrLimIEC() {}

const std::list<std::string>& WindContCurrLimIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindContCurrLimIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindContCurrLimIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindContCurrLimIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindContCurrLimIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindContCurrLimIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindContCurrLimIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindDynamicsLookupTable_WindContCurrLimIEC(BaseClass*, BaseClass*);
bool assign_WindContCurrLimIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindContCurrLimIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3or4IEC_WindContCurrLimIEC(BaseClass*, BaseClass*);
bool assign_WindContCurrLimIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1);
	WindTurbineType3or4IEC* element2 = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4IEC != element2)
		{
			element->WindTurbineType3or4IEC = element2;
			return assign_WindTurbineType3or4IEC_WindContCurrLimIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContCurrLimIEC_imax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->imax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContCurrLimIEC_imaxdip(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->imaxdip;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContCurrLimIEC_kpqu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpqu;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContCurrLimIEC_mdfslim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mdfslim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContCurrLimIEC_mqpri(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mqpri;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContCurrLimIEC_tufiltcl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tufiltcl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContCurrLimIEC_upqumax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContCurrLimIEC* element = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->upqumax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}



bool get_WindContCurrLimIEC_imax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContCurrLimIEC* element = dynamic_cast<const WindContCurrLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->imax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContCurrLimIEC_imaxdip(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContCurrLimIEC* element = dynamic_cast<const WindContCurrLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->imaxdip;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContCurrLimIEC_kpqu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContCurrLimIEC* element = dynamic_cast<const WindContCurrLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpqu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContCurrLimIEC_mdfslim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContCurrLimIEC* element = dynamic_cast<const WindContCurrLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mdfslim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContCurrLimIEC_mqpri(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContCurrLimIEC* element = dynamic_cast<const WindContCurrLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mqpri;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContCurrLimIEC_tufiltcl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContCurrLimIEC* element = dynamic_cast<const WindContCurrLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tufiltcl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContCurrLimIEC_upqumax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContCurrLimIEC* element = dynamic_cast<const WindContCurrLimIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->upqumax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindContCurrLimIEC::debugName[] = "WindContCurrLimIEC";
const char* WindContCurrLimIEC::debugString() const
{
	return WindContCurrLimIEC::debugName;
}

void WindContCurrLimIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindContCurrLimIEC", &WindContCurrLimIEC_factory);
}

void WindContCurrLimIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindContCurrLimIEC.imax", &assign_WindContCurrLimIEC_imax);
	assign_map.emplace("WindContCurrLimIEC.imaxdip", &assign_WindContCurrLimIEC_imaxdip);
	assign_map.emplace("WindContCurrLimIEC.kpqu", &assign_WindContCurrLimIEC_kpqu);
	assign_map.emplace("WindContCurrLimIEC.mdfslim", &assign_WindContCurrLimIEC_mdfslim);
	assign_map.emplace("WindContCurrLimIEC.mqpri", &assign_WindContCurrLimIEC_mqpri);
	assign_map.emplace("WindContCurrLimIEC.tufiltcl", &assign_WindContCurrLimIEC_tufiltcl);
	assign_map.emplace("WindContCurrLimIEC.upqumax", &assign_WindContCurrLimIEC_upqumax);
}

void WindContCurrLimIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindContCurrLimIEC.WindDynamicsLookupTable", &assign_WindContCurrLimIEC_WindDynamicsLookupTable);
	assign_map.emplace("WindContCurrLimIEC.WindTurbineType3or4IEC", &assign_WindContCurrLimIEC_WindTurbineType3or4IEC);
}

void WindContCurrLimIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindContCurrLimIEC.imax", &get_WindContCurrLimIEC_imax);
	get_map.emplace("WindContCurrLimIEC.imaxdip", &get_WindContCurrLimIEC_imaxdip);
	get_map.emplace("WindContCurrLimIEC.kpqu", &get_WindContCurrLimIEC_kpqu);
	get_map.emplace("WindContCurrLimIEC.mdfslim", &get_WindContCurrLimIEC_mdfslim);
	get_map.emplace("WindContCurrLimIEC.mqpri", &get_WindContCurrLimIEC_mqpri);
	get_map.emplace("WindContCurrLimIEC.tufiltcl", &get_WindContCurrLimIEC_tufiltcl);
	get_map.emplace("WindContCurrLimIEC.upqumax", &get_WindContCurrLimIEC_upqumax);
}

void WindContCurrLimIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindContCurrLimIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindContCurrLimIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindContCurrLimIEC" &&
		dynamic_cast<WindContCurrLimIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindContCurrLimIEC::declare()
{
	return BaseClassDefiner(WindContCurrLimIEC::addConstructToMap, WindContCurrLimIEC::addPrimitiveAssignFnsToMap, WindContCurrLimIEC::addClassAssignFnsToMap, WindContCurrLimIEC::debugName);
}

std::map<std::string, AttrDetails> WindContCurrLimIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindContCurrLimIEC_factory()
	{
		return new WindContCurrLimIEC;
	}
}
