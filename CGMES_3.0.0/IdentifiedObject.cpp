/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "IdentifiedObject.hpp"

#include <algorithm>
#include <sstream>

#include "DiagramObject.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

IdentifiedObject::IdentifiedObject() {};
IdentifiedObject::~IdentifiedObject() {};



bool assign_IdentifiedObject_description(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (IdentifiedObject* element = dynamic_cast<IdentifiedObject*>(BaseClass_ptr1))
	{
		element->description = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_IdentifiedObject_energyIdentCodeEic(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (IdentifiedObject* element = dynamic_cast<IdentifiedObject*>(BaseClass_ptr1))
	{
		element->energyIdentCodeEic = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_IdentifiedObject_mRID(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (IdentifiedObject* element = dynamic_cast<IdentifiedObject*>(BaseClass_ptr1))
	{
		element->mRID = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_IdentifiedObject_name(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (IdentifiedObject* element = dynamic_cast<IdentifiedObject*>(BaseClass_ptr1))
	{
		element->name = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_IdentifiedObject_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (IdentifiedObject* element = dynamic_cast<IdentifiedObject*>(BaseClass_ptr1))
	{
		element->shortName = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_DiagramObject_IdentifiedObject(BaseClass*, BaseClass*);
bool assign_IdentifiedObject_DiagramObjects(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	IdentifiedObject* element = dynamic_cast<IdentifiedObject*>(BaseClass_ptr1);
	DiagramObject* element2 = dynamic_cast<DiagramObject*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DiagramObjects.begin(), element->DiagramObjects.end(), element2) == element->DiagramObjects.end())
		{
			element->DiagramObjects.push_back(element2);
			return assign_DiagramObject_IdentifiedObject(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}






const char IdentifiedObject::debugName[] = "IdentifiedObject";
const char* IdentifiedObject::debugString() const
{
	return IdentifiedObject::debugName;
}

void IdentifiedObject::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:IdentifiedObject"), &IdentifiedObject_factory));
}

void IdentifiedObject::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:IdentifiedObject.description"), &assign_IdentifiedObject_description));
	assign_map.insert(std::make_pair(std::string("cim:IdentifiedObject.energyIdentCodeEic"), &assign_IdentifiedObject_energyIdentCodeEic));
	assign_map.insert(std::make_pair(std::string("cim:IdentifiedObject.mRID"), &assign_IdentifiedObject_mRID));
	assign_map.insert(std::make_pair(std::string("cim:IdentifiedObject.name"), &assign_IdentifiedObject_name));
	assign_map.insert(std::make_pair(std::string("cim:IdentifiedObject.shortName"), &assign_IdentifiedObject_shortName));
}

void IdentifiedObject::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:IdentifiedObject.DiagramObjects"), &assign_IdentifiedObject_DiagramObjects));
}

const BaseClassDefiner IdentifiedObject::declare()
{
	return BaseClassDefiner(IdentifiedObject::addConstructToMap, IdentifiedObject::addPrimitiveAssignFnsToMap, IdentifiedObject::addClassAssignFnsToMap, IdentifiedObject::debugName);
}

namespace CIMPP
{
	BaseClass* IdentifiedObject_factory()
	{
		return new IdentifiedObject;
	}
}
