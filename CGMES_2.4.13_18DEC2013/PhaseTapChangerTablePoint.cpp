/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerTablePoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PhaseTapChangerTable.hpp"
#include "AngleDegrees.hpp"

using namespace CIMPP;

PhaseTapChangerTablePoint::PhaseTapChangerTablePoint() : PhaseTapChangerTable(nullptr) {};
PhaseTapChangerTablePoint::~PhaseTapChangerTablePoint() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PhaseTapChangerTablePoint.PhaseTapChangerTable", { CGMESProfile::EQ, } },
	{ "cim:PhaseTapChangerTablePoint.angle", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
PhaseTapChangerTablePoint::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PhaseTapChangerTablePoint::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TapChangerTablePoint::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_PhaseTapChangerTablePoint_angle(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PhaseTapChangerTablePoint* element = dynamic_cast<PhaseTapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer >> element->angle;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_PhaseTapChangerTable_PhaseTapChangerTablePoint(BaseClass*, BaseClass*);
bool assign_PhaseTapChangerTablePoint_PhaseTapChangerTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PhaseTapChangerTablePoint* element = dynamic_cast<PhaseTapChangerTablePoint*>(BaseClass_ptr1);
	PhaseTapChangerTable* element2 = dynamic_cast<PhaseTapChangerTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PhaseTapChangerTable != element2)
		{
			element->PhaseTapChangerTable = element2;
			return assign_PhaseTapChangerTable_PhaseTapChangerTablePoint(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_PhaseTapChangerTablePoint_angle(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PhaseTapChangerTablePoint* element = dynamic_cast<const PhaseTapChangerTablePoint*>(BaseClass_ptr1))
	{
		buffer << element->angle;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_PhaseTapChangerTablePoint_PhaseTapChangerTable(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const PhaseTapChangerTablePoint* element = dynamic_cast<const PhaseTapChangerTablePoint*>(BaseClass_ptr1))
	{
		if (element->PhaseTapChangerTable != 0)
		{
			BaseClass_list.push_back(element->PhaseTapChangerTable);
			return true;
		}
	}
	return false;
}


const char PhaseTapChangerTablePoint::debugName[] = "PhaseTapChangerTablePoint";
const char* PhaseTapChangerTablePoint::debugString() const
{
	return PhaseTapChangerTablePoint::debugName;
}

void PhaseTapChangerTablePoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PhaseTapChangerTablePoint"), &PhaseTapChangerTablePoint_factory));
}

void PhaseTapChangerTablePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerTablePoint.angle"), &assign_PhaseTapChangerTablePoint_angle));
}

void PhaseTapChangerTablePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerTablePoint.PhaseTapChangerTable"), &assign_PhaseTapChangerTablePoint_PhaseTapChangerTable));
}

void PhaseTapChangerTablePoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TapChangerTablePoint::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PhaseTapChangerTablePoint.angle", &get_PhaseTapChangerTablePoint_angle);
}

void PhaseTapChangerTablePoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TapChangerTablePoint::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:PhaseTapChangerTablePoint.PhaseTapChangerTable", &get_PhaseTapChangerTablePoint_PhaseTapChangerTable);
}

void PhaseTapChangerTablePoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TapChangerTablePoint::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PhaseTapChangerTablePoint::declare()
{
	return BaseClassDefiner(PhaseTapChangerTablePoint::addConstructToMap, PhaseTapChangerTablePoint::addPrimitiveAssignFnsToMap, PhaseTapChangerTablePoint::addClassAssignFnsToMap, PhaseTapChangerTablePoint::debugName);
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerTablePoint_factory()
	{
		return new PhaseTapChangerTablePoint;
	}
}
