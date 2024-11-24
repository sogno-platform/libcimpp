/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RatioTapChangerTablePoint.hpp"

#include <algorithm>
#include <sstream>

#include "RatioTapChangerTable.hpp"

using namespace CIMPP;

RatioTapChangerTablePoint::RatioTapChangerTablePoint() : RatioTapChangerTable(nullptr) {};
RatioTapChangerTablePoint::~RatioTapChangerTablePoint() {};




bool assign_RatioTapChangerTable_RatioTapChangerTablePoint(BaseClass*, BaseClass*);
bool assign_RatioTapChangerTablePoint_RatioTapChangerTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RatioTapChangerTablePoint* element = dynamic_cast<RatioTapChangerTablePoint*>(BaseClass_ptr1);
	RatioTapChangerTable* element2 = dynamic_cast<RatioTapChangerTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RatioTapChangerTable != element2)
		{
			element->RatioTapChangerTable = element2;
			return assign_RatioTapChangerTable_RatioTapChangerTablePoint(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char RatioTapChangerTablePoint::debugName[] = "RatioTapChangerTablePoint";
const char* RatioTapChangerTablePoint::debugString() const
{
	return RatioTapChangerTablePoint::debugName;
}

void RatioTapChangerTablePoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:RatioTapChangerTablePoint"), &RatioTapChangerTablePoint_factory));
}

void RatioTapChangerTablePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void RatioTapChangerTablePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RatioTapChangerTablePoint.RatioTapChangerTable"), &assign_RatioTapChangerTablePoint_RatioTapChangerTable));
}

const BaseClassDefiner RatioTapChangerTablePoint::declare()
{
	return BaseClassDefiner(RatioTapChangerTablePoint::addConstructToMap, RatioTapChangerTablePoint::addPrimitiveAssignFnsToMap, RatioTapChangerTablePoint::addClassAssignFnsToMap, RatioTapChangerTablePoint::debugName);
}

namespace CIMPP
{
	BaseClass* RatioTapChangerTablePoint_factory()
	{
		return new RatioTapChangerTablePoint;
	}
}
