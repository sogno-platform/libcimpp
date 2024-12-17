/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StreetAddress.hpp"

#include <algorithm>
#include <sstream>

#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "Status.hpp"
#include "StreetDetail.hpp"
#include "TownDetail.hpp"

using namespace CIMPP;

StreetAddress::StreetAddress() : status(nullptr), streetDetail(nullptr), townDetail(nullptr) {};
StreetAddress::~StreetAddress() {};


bool assign_StreetAddress_language(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetAddress* element = dynamic_cast<StreetAddress*>(BaseClass_ptr1))
	{
		element->language = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StreetAddress_poBox(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetAddress* element = dynamic_cast<StreetAddress*>(BaseClass_ptr1))
	{
		element->poBox = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StreetAddress_postalCode(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetAddress* element = dynamic_cast<StreetAddress*>(BaseClass_ptr1))
	{
		element->postalCode = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}








bool assign_StreetAddress_status(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	if(StreetAddress* element = dynamic_cast<StreetAddress*>(BaseClass_ptr1))
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
	if(StreetAddress* element = dynamic_cast<StreetAddress*>(BaseClass_ptr1))
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
	if(StreetAddress* element = dynamic_cast<StreetAddress*>(BaseClass_ptr1))
	{
		element->townDetail = dynamic_cast<TownDetail*>(BaseClass_ptr2);
		if (element->townDetail != nullptr)
		{
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
	factory_map.insert(std::make_pair(std::string("cim:StreetAddress"), &StreetAddress_factory));
}

void StreetAddress::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:StreetAddress.language"), &assign_StreetAddress_language));
	assign_map.insert(std::make_pair(std::string("cim:StreetAddress.poBox"), &assign_StreetAddress_poBox));
	assign_map.insert(std::make_pair(std::string("cim:StreetAddress.postalCode"), &assign_StreetAddress_postalCode));
}

void StreetAddress::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:StreetAddress.status"), &assign_StreetAddress_status));
	assign_map.insert(std::make_pair(std::string("cim:StreetAddress.streetDetail"), &assign_StreetAddress_streetDetail));
	assign_map.insert(std::make_pair(std::string("cim:StreetAddress.townDetail"), &assign_StreetAddress_townDetail));
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
