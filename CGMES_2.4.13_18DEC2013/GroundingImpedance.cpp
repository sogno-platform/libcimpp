/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GroundingImpedance.hpp"

#include <algorithm>
#include <sstream>

#include "Reactance.hpp"

using namespace CIMPP;

GroundingImpedance::GroundingImpedance() {};
GroundingImpedance::~GroundingImpedance() {};


bool assign_GroundingImpedance_x(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GroundingImpedance* element = dynamic_cast<GroundingImpedance*>(BaseClass_ptr1))
	{
		buffer >> element->x;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



const char GroundingImpedance::debugName[] = "GroundingImpedance";
const char* GroundingImpedance::debugString() const
{
	return GroundingImpedance::debugName;
}

void GroundingImpedance::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GroundingImpedance"), &GroundingImpedance_factory));
}

void GroundingImpedance::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GroundingImpedance.x"), &assign_GroundingImpedance_x));
}

void GroundingImpedance::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner GroundingImpedance::declare()
{
	return BaseClassDefiner(GroundingImpedance::addConstructToMap, GroundingImpedance::addPrimitiveAssignFnsToMap, GroundingImpedance::addClassAssignFnsToMap, GroundingImpedance::debugName);
}

namespace CIMPP
{
	BaseClass* GroundingImpedance_factory()
	{
		return new GroundingImpedance;
	}
}
