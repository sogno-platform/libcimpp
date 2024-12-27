/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Status.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DateTime.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

Status::Status() {};
Status::~Status() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::GL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Status.dateTime", { CGMESProfile::GL, } },
	{ "cim:Status.reason", { CGMESProfile::GL, } },
	{ "cim:Status.remark", { CGMESProfile::GL, } },
	{ "cim:Status.value", { CGMESProfile::GL, } },
};

std::list<CGMESProfile>
Status::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Status::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_Status_dateTime(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Status* element = dynamic_cast<Status*>(BaseClass_ptr1))
	{
		element->dateTime = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Status_reason(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Status* element = dynamic_cast<Status*>(BaseClass_ptr1))
	{
		element->reason = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Status_remark(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Status* element = dynamic_cast<Status*>(BaseClass_ptr1))
	{
		element->remark = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Status_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Status* element = dynamic_cast<Status*>(BaseClass_ptr1))
	{
		element->value = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_Status_dateTime(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const Status* element = dynamic_cast<const Status*>(BaseClass_ptr1))
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
	if (const Status* element = dynamic_cast<const Status*>(BaseClass_ptr1))
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
	if (const Status* element = dynamic_cast<const Status*>(BaseClass_ptr1))
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
	if (const Status* element = dynamic_cast<const Status*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:Status"), &Status_factory));
}

void Status::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Status.dateTime"), &assign_Status_dateTime));
	assign_map.insert(std::make_pair(std::string("cim:Status.reason"), &assign_Status_reason));
	assign_map.insert(std::make_pair(std::string("cim:Status.remark"), &assign_Status_remark));
	assign_map.insert(std::make_pair(std::string("cim:Status.value"), &assign_Status_value));
}

void Status::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Status::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:Status.dateTime", &get_Status_dateTime);
	get_map.emplace("cim:Status.reason", &get_Status_reason);
	get_map.emplace("cim:Status.remark", &get_Status_remark);
	get_map.emplace("cim:Status.value", &get_Status_value);
}

void Status::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void Status::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Status::declare()
{
	return BaseClassDefiner(Status::addConstructToMap, Status::addPrimitiveAssignFnsToMap, Status::addClassAssignFnsToMap, Status::debugName);
}

namespace CIMPP
{
	BaseClass* Status_factory()
	{
		return new Status;
	}
}
