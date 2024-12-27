/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TownDetail.hpp"

#include <algorithm>
#include <sstream>

#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

TownDetail::TownDetail() {};
TownDetail::~TownDetail() {};


bool assign_TownDetail_code(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TownDetail* element = dynamic_cast<TownDetail*>(BaseClass_ptr1))
	{
		element->code = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TownDetail_country(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TownDetail* element = dynamic_cast<TownDetail*>(BaseClass_ptr1))
	{
		element->country = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TownDetail_name(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TownDetail* element = dynamic_cast<TownDetail*>(BaseClass_ptr1))
	{
		element->name = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TownDetail_section(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TownDetail* element = dynamic_cast<TownDetail*>(BaseClass_ptr1))
	{
		element->section = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TownDetail_stateOrProvince(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TownDetail* element = dynamic_cast<TownDetail*>(BaseClass_ptr1))
	{
		element->stateOrProvince = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}







const char TownDetail::debugName[] = "TownDetail";
const char* TownDetail::debugString() const
{
	return TownDetail::debugName;
}

void TownDetail::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TownDetail"), &TownDetail_factory));
}

void TownDetail::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TownDetail.code"), &assign_TownDetail_code));
	assign_map.insert(std::make_pair(std::string("cim:TownDetail.country"), &assign_TownDetail_country));
	assign_map.insert(std::make_pair(std::string("cim:TownDetail.name"), &assign_TownDetail_name));
	assign_map.insert(std::make_pair(std::string("cim:TownDetail.section"), &assign_TownDetail_section));
	assign_map.insert(std::make_pair(std::string("cim:TownDetail.stateOrProvince"), &assign_TownDetail_stateOrProvince));
}

void TownDetail::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner TownDetail::declare()
{
	return BaseClassDefiner(TownDetail::addConstructToMap, TownDetail::addPrimitiveAssignFnsToMap, TownDetail::addClassAssignFnsToMap, TownDetail::debugName);
}

namespace CIMPP
{
	BaseClass* TownDetail_factory()
	{
		return new TownDetail;
	}
}
