/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StreetDetail.hpp"

#include <algorithm>
#include <sstream>

#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

StreetDetail::StreetDetail() {};
StreetDetail::~StreetDetail() {};


bool assign_StreetDetail_addressGeneral(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1))
	{
		element->addressGeneral = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StreetDetail_addressGeneral2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1))
	{
		element->addressGeneral2 = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StreetDetail_addressGeneral3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1))
	{
		element->addressGeneral3 = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StreetDetail_buildingName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1))
	{
		element->buildingName = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StreetDetail_code(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1))
	{
		element->code = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StreetDetail_floorIdentification(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1))
	{
		element->floorIdentification = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StreetDetail_name(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1))
	{
		element->name = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StreetDetail_number(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1))
	{
		element->number = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StreetDetail_prefix(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1))
	{
		element->prefix = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StreetDetail_suffix(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1))
	{
		element->suffix = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StreetDetail_suiteNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1))
	{
		element->suiteNumber = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StreetDetail_type(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1))
	{
		element->type = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StreetDetail_withinTownLimits(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1))
	{
		buffer >> element->withinTownLimits;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}















const char StreetDetail::debugName[] = "StreetDetail";
const char* StreetDetail::debugString() const
{
	return StreetDetail::debugName;
}

void StreetDetail::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:StreetDetail"), &StreetDetail_factory));
}

void StreetDetail::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:StreetDetail.addressGeneral"), &assign_StreetDetail_addressGeneral));
	assign_map.insert(std::make_pair(std::string("cim:StreetDetail.addressGeneral2"), &assign_StreetDetail_addressGeneral2));
	assign_map.insert(std::make_pair(std::string("cim:StreetDetail.addressGeneral3"), &assign_StreetDetail_addressGeneral3));
	assign_map.insert(std::make_pair(std::string("cim:StreetDetail.buildingName"), &assign_StreetDetail_buildingName));
	assign_map.insert(std::make_pair(std::string("cim:StreetDetail.code"), &assign_StreetDetail_code));
	assign_map.insert(std::make_pair(std::string("cim:StreetDetail.floorIdentification"), &assign_StreetDetail_floorIdentification));
	assign_map.insert(std::make_pair(std::string("cim:StreetDetail.name"), &assign_StreetDetail_name));
	assign_map.insert(std::make_pair(std::string("cim:StreetDetail.number"), &assign_StreetDetail_number));
	assign_map.insert(std::make_pair(std::string("cim:StreetDetail.prefix"), &assign_StreetDetail_prefix));
	assign_map.insert(std::make_pair(std::string("cim:StreetDetail.suffix"), &assign_StreetDetail_suffix));
	assign_map.insert(std::make_pair(std::string("cim:StreetDetail.suiteNumber"), &assign_StreetDetail_suiteNumber));
	assign_map.insert(std::make_pair(std::string("cim:StreetDetail.type"), &assign_StreetDetail_type));
	assign_map.insert(std::make_pair(std::string("cim:StreetDetail.withinTownLimits"), &assign_StreetDetail_withinTownLimits));
}

void StreetDetail::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner StreetDetail::declare()
{
	return BaseClassDefiner(StreetDetail::addConstructToMap, StreetDetail::addPrimitiveAssignFnsToMap, StreetDetail::addClassAssignFnsToMap, StreetDetail::debugName);
}

namespace CIMPP
{
	BaseClass* StreetDetail_factory()
	{
		return new StreetDetail;
	}
}
