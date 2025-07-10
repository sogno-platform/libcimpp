/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StreetAddress.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Status.hpp"
#include "StreetDetail.hpp"
#include "TownDetail.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		StreetAddress(),
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
		{ "StreetAddress.language", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetAddress.poBox", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetAddress.postalCode", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetAddress.status", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetAddress.streetDetail", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetAddress.townDetail", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
	};
    return ClassAttrDetailsMap;
}

StreetAddress::StreetAddress() : status(nullptr), streetDetail(nullptr), townDetail(nullptr) {}
StreetAddress::~StreetAddress() {}

const std::list<std::string>& StreetAddress::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& StreetAddress::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& StreetAddress::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& StreetAddress::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& StreetAddress::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& StreetAddress::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& StreetAddress::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_StreetAddress_language(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetAddress* element = dynamic_cast<StreetAddress*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->language = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetAddress_poBox(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetAddress* element = dynamic_cast<StreetAddress*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->poBox = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetAddress_postalCode(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetAddress* element = dynamic_cast<StreetAddress*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->postalCode = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetAddress_status(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	StreetAddress* element = dynamic_cast<StreetAddress*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->status = dynamic_cast<Status*>(BaseClass_ptr2);
		if (element->status != nullptr)
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetAddress_streetDetail(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	StreetAddress* element = dynamic_cast<StreetAddress*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->streetDetail = dynamic_cast<StreetDetail*>(BaseClass_ptr2);
		if (element->streetDetail != nullptr)
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetAddress_townDetail(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	StreetAddress* element = dynamic_cast<StreetAddress*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->townDetail = dynamic_cast<TownDetail*>(BaseClass_ptr2);
		if (element->townDetail != nullptr)
		{
			return true;
		}
	}
	return false;
}

bool get_StreetAddress_language(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetAddress* element = dynamic_cast<const StreetAddress*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->language;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetAddress_poBox(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetAddress* element = dynamic_cast<const StreetAddress*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->poBox;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetAddress_postalCode(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetAddress* element = dynamic_cast<const StreetAddress*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->postalCode;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetAddress_status(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const StreetAddress* element = dynamic_cast<const StreetAddress*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->status != 0)
		{
			BaseClass_list.push_back(element->status);
			return true;
		}
	}
	return false;
}

bool get_StreetAddress_streetDetail(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const StreetAddress* element = dynamic_cast<const StreetAddress*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->streetDetail != 0)
		{
			BaseClass_list.push_back(element->streetDetail);
			return true;
		}
	}
	return false;
}

bool get_StreetAddress_townDetail(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const StreetAddress* element = dynamic_cast<const StreetAddress*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->townDetail != 0)
		{
			BaseClass_list.push_back(element->townDetail);
			return true;
		}
	}
	return false;
}

const char StreetAddress::debugName[] = "StreetAddress";
const char* StreetAddress::debugString() const
{
	return StreetAddress::debugName;
}

void StreetAddress::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("StreetAddress", &StreetAddress_factory);
}

void StreetAddress::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("StreetAddress.language", &assign_StreetAddress_language);
	assign_map.emplace("StreetAddress.poBox", &assign_StreetAddress_poBox);
	assign_map.emplace("StreetAddress.postalCode", &assign_StreetAddress_postalCode);
}

void StreetAddress::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("StreetAddress.status", &assign_StreetAddress_status);
	assign_map.emplace("StreetAddress.streetDetail", &assign_StreetAddress_streetDetail);
	assign_map.emplace("StreetAddress.townDetail", &assign_StreetAddress_townDetail);
}

void StreetAddress::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("StreetAddress.language", &get_StreetAddress_language);
	get_map.emplace("StreetAddress.poBox", &get_StreetAddress_poBox);
	get_map.emplace("StreetAddress.postalCode", &get_StreetAddress_postalCode);
}

void StreetAddress::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("StreetAddress.status", &get_StreetAddress_status);
	get_map.emplace("StreetAddress.streetDetail", &get_StreetAddress_streetDetail);
	get_map.emplace("StreetAddress.townDetail", &get_StreetAddress_townDetail);
}

void StreetAddress::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool StreetAddress::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "StreetAddress" &&
		dynamic_cast<StreetAddress*>(otherObject) != nullptr;
}

const BaseClassDefiner StreetAddress::declare()
{
	return BaseClassDefiner(StreetAddress::addConstructToMap, StreetAddress::addPrimitiveAssignFnsToMap, StreetAddress::addClassAssignFnsToMap, StreetAddress::debugName);
}

std::map<std::string, AttrDetails> StreetAddress::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* StreetAddress_factory()
	{
		return new StreetAddress;
	}
}
