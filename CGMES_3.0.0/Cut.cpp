/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Cut.hpp"

#include <algorithm>
#include <sstream>

#include "ACLineSegment.hpp"
#include "Length.hpp"

using namespace CIMPP;

Cut::Cut() : ACLineSegment(nullptr) {};
Cut::~Cut() {};



bool assign_Cut_lengthFromTerminal1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Cut* element = dynamic_cast<Cut*>(BaseClass_ptr1))
	{
		buffer >> element->lengthFromTerminal1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ACLineSegment_Cut(BaseClass*, BaseClass*);
bool assign_Cut_ACLineSegment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Cut* element = dynamic_cast<Cut*>(BaseClass_ptr1);
	ACLineSegment* element2 = dynamic_cast<ACLineSegment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ACLineSegment != element2)
		{
			element->ACLineSegment = element2;
			return assign_ACLineSegment_Cut(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char Cut::debugName[] = "Cut";
const char* Cut::debugString() const
{
	return Cut::debugName;
}

void Cut::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Cut"), &Cut_factory));
}

void Cut::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Cut.lengthFromTerminal1"), &assign_Cut_lengthFromTerminal1));
}

void Cut::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Cut.ACLineSegment"), &assign_Cut_ACLineSegment));
}

const BaseClassDefiner Cut::declare()
{
	return BaseClassDefiner(Cut::addConstructToMap, Cut::addPrimitiveAssignFnsToMap, Cut::addClassAssignFnsToMap, Cut::debugName);
}

namespace CIMPP
{
	BaseClass* Cut_factory()
	{
		return new Cut;
	}
}
