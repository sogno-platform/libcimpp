/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TownDetail.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TownDetail(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::GL,
		},
		CGMESProfile::GL
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "TownDetail.code", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "TownDetail.country", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "TownDetail.name", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "TownDetail.section", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "TownDetail.stateOrProvince", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
	};
    return ClassAttrDetailsMap;
}

TownDetail::TownDetail() {}
TownDetail::~TownDetail() {}

const std::list<std::string>& TownDetail::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TownDetail::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TownDetail::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TownDetail::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TownDetail::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TownDetail::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TownDetail::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_TownDetail_code(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TownDetail* element = dynamic_cast<TownDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->code = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TownDetail_country(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TownDetail* element = dynamic_cast<TownDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->country = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TownDetail_name(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TownDetail* element = dynamic_cast<TownDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->name = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TownDetail_section(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TownDetail* element = dynamic_cast<TownDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->section = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TownDetail_stateOrProvince(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TownDetail* element = dynamic_cast<TownDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->stateOrProvince = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_TownDetail_code(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TownDetail* element = dynamic_cast<const TownDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->code;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TownDetail_country(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TownDetail* element = dynamic_cast<const TownDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->country;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TownDetail_name(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TownDetail* element = dynamic_cast<const TownDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->name;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TownDetail_section(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TownDetail* element = dynamic_cast<const TownDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->section;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TownDetail_stateOrProvince(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TownDetail* element = dynamic_cast<const TownDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->stateOrProvince;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char TownDetail::debugName[] = "TownDetail";
const char* TownDetail::debugString() const
{
	return TownDetail::debugName;
}

void TownDetail::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TownDetail", &TownDetail_factory);
}

void TownDetail::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("TownDetail.code", &assign_TownDetail_code);
	assign_map.emplace("TownDetail.country", &assign_TownDetail_country);
	assign_map.emplace("TownDetail.name", &assign_TownDetail_name);
	assign_map.emplace("TownDetail.section", &assign_TownDetail_section);
	assign_map.emplace("TownDetail.stateOrProvince", &assign_TownDetail_stateOrProvince);
}

void TownDetail::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void TownDetail::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("TownDetail.code", &get_TownDetail_code);
	get_map.emplace("TownDetail.country", &get_TownDetail_country);
	get_map.emplace("TownDetail.name", &get_TownDetail_name);
	get_map.emplace("TownDetail.section", &get_TownDetail_section);
	get_map.emplace("TownDetail.stateOrProvince", &get_TownDetail_stateOrProvince);
}

void TownDetail::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void TownDetail::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool TownDetail::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TownDetail" &&
		dynamic_cast<TownDetail*>(otherObject) != nullptr;
}

const BaseClassDefiner TownDetail::declare()
{
	return BaseClassDefiner(TownDetail::addConstructToMap, TownDetail::addPrimitiveAssignFnsToMap, TownDetail::addClassAssignFnsToMap, TownDetail::debugName);
}

std::map<std::string, AttrDetails> TownDetail::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TownDetail_factory()
	{
		return new TownDetail;
	}
}
