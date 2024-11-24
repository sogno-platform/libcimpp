/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Status.hpp"

#include <algorithm>
#include <sstream>

#include "DateTime.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

Status::Status() {};
Status::~Status() {};


bool assign_Status_dateTime(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Status* element = dynamic_cast<Status*>(BaseClass_ptr1))
	{
		buffer >> element->dateTime;
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
		buffer >> element->reason;
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
		buffer >> element->remark;
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
		buffer >> element->value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
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
