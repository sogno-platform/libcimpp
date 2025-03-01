/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Cut.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ACLineSegment.hpp"

using namespace CIMPP;

Cut::Cut() : ACLineSegment(nullptr) {}
Cut::~Cut() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Cut.ACLineSegment", { CGMESProfile::EQ, } },
	{ "cim:Cut.lengthFromTerminal1", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
Cut::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Cut::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Switch::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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

bool assign_Cut_lengthFromTerminal1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Cut* element = dynamic_cast<Cut*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lengthFromTerminal1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_Cut_ACLineSegment(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Cut* element = dynamic_cast<const Cut*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ACLineSegment != 0)
		{
			BaseClass_list.push_back(element->ACLineSegment);
			return true;
		}
	}
	return false;
}

bool get_Cut_lengthFromTerminal1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Cut* element = dynamic_cast<const Cut*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lengthFromTerminal1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Cut::debugName[] = "Cut";
const char* Cut::debugString() const
{
	return Cut::debugName;
}

void Cut::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Cut", &Cut_factory);
}

void Cut::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:Cut.lengthFromTerminal1", &assign_Cut_lengthFromTerminal1);
}

void Cut::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:Cut.ACLineSegment", &assign_Cut_ACLineSegment);
}

void Cut::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:Cut.lengthFromTerminal1", &get_Cut_lengthFromTerminal1);
}

void Cut::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Switch::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:Cut.ACLineSegment", &get_Cut_ACLineSegment);
}

void Cut::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addEnumGetFnsToMap(get_map);
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
