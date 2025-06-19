/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BusNameMarker.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ACDCTerminal.hpp"
#include "ReportingGroup.hpp"

using namespace CIMPP;

BusNameMarker::BusNameMarker() : ReportingGroup(nullptr) {}
BusNameMarker::~BusNameMarker() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:BusNameMarker.ReportingGroup", { CGMESProfile::EQ, } },
	{ "cim:BusNameMarker.Terminal", { CGMESProfile::EQ, } },
	{ "cim:BusNameMarker.priority", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
BusNameMarker::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
BusNameMarker::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ReportingGroup_BusNameMarker(BaseClass*, BaseClass*);
bool assign_BusNameMarker_ReportingGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	BusNameMarker* element = dynamic_cast<BusNameMarker*>(BaseClass_ptr1);
	ReportingGroup* element2 = dynamic_cast<ReportingGroup*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ReportingGroup != element2)
		{
			element->ReportingGroup = element2;
			return assign_ReportingGroup_BusNameMarker(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ACDCTerminal_BusNameMarker(BaseClass*, BaseClass*);
bool assign_BusNameMarker_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	BusNameMarker* element = dynamic_cast<BusNameMarker*>(BaseClass_ptr1);
	ACDCTerminal* element2 = dynamic_cast<ACDCTerminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Terminal.begin(), element->Terminal.end(), element2) == element->Terminal.end())
		{
			element->Terminal.push_back(element2);
			return assign_ACDCTerminal_BusNameMarker(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_BusNameMarker_priority(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BusNameMarker* element = dynamic_cast<BusNameMarker*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->priority;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_BusNameMarker_ReportingGroup(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const BusNameMarker* element = dynamic_cast<const BusNameMarker*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ReportingGroup != 0)
		{
			BaseClass_list.push_back(element->ReportingGroup);
			return true;
		}
	}
	return false;
}


bool get_BusNameMarker_priority(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BusNameMarker* element = dynamic_cast<const BusNameMarker*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->priority;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char BusNameMarker::debugName[] = "BusNameMarker";
const char* BusNameMarker::debugString() const
{
	return BusNameMarker::debugName;
}

void BusNameMarker::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:BusNameMarker", &BusNameMarker_factory);
}

void BusNameMarker::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:BusNameMarker.priority", &assign_BusNameMarker_priority);
}

void BusNameMarker::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:BusNameMarker.ReportingGroup", &assign_BusNameMarker_ReportingGroup);
	assign_map.emplace("cim:BusNameMarker.Terminal", &assign_BusNameMarker_Terminal);
}

void BusNameMarker::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:BusNameMarker.priority", &get_BusNameMarker_priority);
}

void BusNameMarker::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:BusNameMarker.ReportingGroup", &get_BusNameMarker_ReportingGroup);
}

void BusNameMarker::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner BusNameMarker::declare()
{
	return BaseClassDefiner(BusNameMarker::addConstructToMap, BusNameMarker::addPrimitiveAssignFnsToMap, BusNameMarker::addClassAssignFnsToMap, BusNameMarker::debugName);
}

namespace CIMPP
{
	BaseClass* BusNameMarker_factory()
	{
		return new BusNameMarker;
	}
}
