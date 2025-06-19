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

StreetAddress::StreetAddress() : status(nullptr), streetDetail(nullptr), townDetail(nullptr) {}
StreetAddress::~StreetAddress() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::GL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:StreetAddress.language", { CGMESProfile::GL, } },
	{ "cim:StreetAddress.poBox", { CGMESProfile::GL, } },
	{ "cim:StreetAddress.postalCode", { CGMESProfile::GL, } },
	{ "cim:StreetAddress.status", { CGMESProfile::GL, } },
	{ "cim:StreetAddress.streetDetail", { CGMESProfile::GL, } },
	{ "cim:StreetAddress.townDetail", { CGMESProfile::GL, } },
};

std::list<CGMESProfile>
StreetAddress::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
StreetAddress::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:StreetAddress", &StreetAddress_factory);
}

void StreetAddress::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:StreetAddress.language", &assign_StreetAddress_language);
	assign_map.emplace("cim:StreetAddress.poBox", &assign_StreetAddress_poBox);
	assign_map.emplace("cim:StreetAddress.postalCode", &assign_StreetAddress_postalCode);
}

void StreetAddress::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:StreetAddress.status", &assign_StreetAddress_status);
	assign_map.emplace("cim:StreetAddress.streetDetail", &assign_StreetAddress_streetDetail);
	assign_map.emplace("cim:StreetAddress.townDetail", &assign_StreetAddress_townDetail);
}

void StreetAddress::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:StreetAddress.language", &get_StreetAddress_language);
	get_map.emplace("cim:StreetAddress.poBox", &get_StreetAddress_poBox);
	get_map.emplace("cim:StreetAddress.postalCode", &get_StreetAddress_postalCode);
}

void StreetAddress::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:StreetAddress.status", &get_StreetAddress_status);
	get_map.emplace("cim:StreetAddress.streetDetail", &get_StreetAddress_streetDetail);
	get_map.emplace("cim:StreetAddress.townDetail", &get_StreetAddress_townDetail);
}

void StreetAddress::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner StreetAddress::declare()
{
	return BaseClassDefiner(StreetAddress::addConstructToMap, StreetAddress::addPrimitiveAssignFnsToMap, StreetAddress::addClassAssignFnsToMap, StreetAddress::debugName);
}

namespace CIMPP
{
	BaseClass* StreetAddress_factory()
	{
		return new StreetAddress;
	}
}
