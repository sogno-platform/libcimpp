/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VAdjIEEE.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		VAdjIEEE(),
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
		{ "VAdjIEEE.adjslew", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "VAdjIEEE.taoff", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "VAdjIEEE.taon", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "VAdjIEEE.vadjf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "VAdjIEEE.vadjmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "VAdjIEEE.vadjmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

VAdjIEEE::VAdjIEEE() {}
VAdjIEEE::~VAdjIEEE() {}

const std::list<std::string>& VAdjIEEE::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& VAdjIEEE::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& VAdjIEEE::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& VAdjIEEE::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& VAdjIEEE::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& VAdjIEEE::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& VAdjIEEE::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_VAdjIEEE_adjslew(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->adjslew;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VAdjIEEE_taoff(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->taoff;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VAdjIEEE_taon(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->taon;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VAdjIEEE_vadjf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vadjf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VAdjIEEE_vadjmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vadjmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_VAdjIEEE_vadjmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VAdjIEEE* element = dynamic_cast<VAdjIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vadjmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_VAdjIEEE_adjslew(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VAdjIEEE* element = dynamic_cast<const VAdjIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->adjslew;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VAdjIEEE_taoff(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VAdjIEEE* element = dynamic_cast<const VAdjIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->taoff;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VAdjIEEE_taon(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VAdjIEEE* element = dynamic_cast<const VAdjIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->taon;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VAdjIEEE_vadjf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VAdjIEEE* element = dynamic_cast<const VAdjIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vadjf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VAdjIEEE_vadjmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VAdjIEEE* element = dynamic_cast<const VAdjIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vadjmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VAdjIEEE_vadjmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VAdjIEEE* element = dynamic_cast<const VAdjIEEE*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vadjmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char VAdjIEEE::debugName[] = "VAdjIEEE";
const char* VAdjIEEE::debugString() const
{
	return VAdjIEEE::debugName;
}

void VAdjIEEE::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("VAdjIEEE", &VAdjIEEE_factory);
}

void VAdjIEEE::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("VAdjIEEE.adjslew", &assign_VAdjIEEE_adjslew);
	assign_map.emplace("VAdjIEEE.taoff", &assign_VAdjIEEE_taoff);
	assign_map.emplace("VAdjIEEE.taon", &assign_VAdjIEEE_taon);
	assign_map.emplace("VAdjIEEE.vadjf", &assign_VAdjIEEE_vadjf);
	assign_map.emplace("VAdjIEEE.vadjmax", &assign_VAdjIEEE_vadjmax);
	assign_map.emplace("VAdjIEEE.vadjmin", &assign_VAdjIEEE_vadjmin);
}

void VAdjIEEE::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void VAdjIEEE::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageAdjusterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("VAdjIEEE.adjslew", &get_VAdjIEEE_adjslew);
	get_map.emplace("VAdjIEEE.taoff", &get_VAdjIEEE_taoff);
	get_map.emplace("VAdjIEEE.taon", &get_VAdjIEEE_taon);
	get_map.emplace("VAdjIEEE.vadjf", &get_VAdjIEEE_vadjf);
	get_map.emplace("VAdjIEEE.vadjmax", &get_VAdjIEEE_vadjmax);
	get_map.emplace("VAdjIEEE.vadjmin", &get_VAdjIEEE_vadjmin);
}

void VAdjIEEE::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	VoltageAdjusterDynamics::addClassGetFnsToMap(get_map);
}

void VAdjIEEE::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageAdjusterDynamics::addEnumGetFnsToMap(get_map);
}

bool VAdjIEEE::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "VAdjIEEE" &&
		dynamic_cast<VAdjIEEE*>(otherObject) != nullptr;
}

const BaseClassDefiner VAdjIEEE::declare()
{
	return BaseClassDefiner(VAdjIEEE::addConstructToMap, VAdjIEEE::addPrimitiveAssignFnsToMap, VAdjIEEE::addClassAssignFnsToMap, VAdjIEEE::debugName);
}

std::map<std::string, AttrDetails> VAdjIEEE::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = VoltageAdjusterDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* VAdjIEEE_factory()
	{
		return new VAdjIEEE;
	}
}
