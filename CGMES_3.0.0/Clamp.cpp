/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Clamp.hpp"

#include <algorithm>
#include <sstream>

#include "ACLineSegment.hpp"
#include "Length.hpp"

using namespace CIMPP;

Clamp::Clamp() : ACLineSegment(nullptr) {};
Clamp::~Clamp() {};



bool assign_Clamp_lengthFromTerminal1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Clamp* element = dynamic_cast<Clamp*>(BaseClass_ptr1))
	{
		buffer >> element->lengthFromTerminal1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ACLineSegment_Clamp(BaseClass*, BaseClass*);
bool assign_Clamp_ACLineSegment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Clamp* element = dynamic_cast<Clamp*>(BaseClass_ptr1);
	ACLineSegment* element2 = dynamic_cast<ACLineSegment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ACLineSegment != element2)
		{
			element->ACLineSegment = element2;
			return assign_ACLineSegment_Clamp(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char Clamp::debugName[] = "Clamp";
const char* Clamp::debugString() const
{
	return Clamp::debugName;
}

void Clamp::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Clamp"), &Clamp_factory));
}

void Clamp::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Clamp.lengthFromTerminal1"), &assign_Clamp_lengthFromTerminal1));
}

void Clamp::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Clamp.ACLineSegment"), &assign_Clamp_ACLineSegment));
}

const BaseClassDefiner Clamp::declare()
{
	return BaseClassDefiner(Clamp::addConstructToMap, Clamp::addPrimitiveAssignFnsToMap, Clamp::addClassAssignFnsToMap, Clamp::debugName);
}

namespace CIMPP
{
	BaseClass* Clamp_factory()
	{
		return new Clamp;
	}
}
