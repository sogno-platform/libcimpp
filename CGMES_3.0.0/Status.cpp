/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Status.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Status(),
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
		{ "Status.dateTime", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "Status.reason", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "Status.remark", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "Status.value", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
	};
    return ClassAttrDetailsMap;
}

Status::Status() {}
Status::~Status() {}

const std::list<std::string>& Status::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Status::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Status::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Status::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Status::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Status::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Status::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_Status_dateTime(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Status* element = dynamic_cast<Status*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->dateTime = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Status_reason(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Status* element = dynamic_cast<Status*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->reason = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Status_remark(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Status* element = dynamic_cast<Status*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->remark = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Status_value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Status* element = dynamic_cast<Status*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->value = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_Status_dateTime(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Status* element = dynamic_cast<const Status*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dateTime;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Status_reason(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Status* element = dynamic_cast<const Status*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->reason;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Status_remark(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Status* element = dynamic_cast<const Status*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->remark;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Status_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Status* element = dynamic_cast<const Status*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->value;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Status::debugName[] = "Status";
const char* Status::debugString() const
{
	return Status::debugName;
}

void Status::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Status", &Status_factory);
}

void Status::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("Status.dateTime", &assign_Status_dateTime);
	assign_map.emplace("Status.reason", &assign_Status_reason);
	assign_map.emplace("Status.remark", &assign_Status_remark);
	assign_map.emplace("Status.value", &assign_Status_value);
}

void Status::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Status::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("Status.dateTime", &get_Status_dateTime);
	get_map.emplace("Status.reason", &get_Status_reason);
	get_map.emplace("Status.remark", &get_Status_remark);
	get_map.emplace("Status.value", &get_Status_value);
}

void Status::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void Status::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool Status::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Status" &&
		dynamic_cast<Status*>(otherObject) != nullptr;
}

const BaseClassDefiner Status::declare()
{
	return BaseClassDefiner(Status::addConstructToMap, Status::addPrimitiveAssignFnsToMap, Status::addClassAssignFnsToMap, Status::debugName);
}

std::map<std::string, AttrDetails> Status::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Status_factory()
	{
		return new Status;
	}
}
