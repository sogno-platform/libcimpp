/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Junction.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

Junction::Junction() {};
Junction::~Junction() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::EQBD,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
Junction::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Junction::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Connector::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}






const char Junction::debugName[] = "Junction";
const char* Junction::debugString() const
{
	return Junction::debugName;
}

void Junction::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Junction"), &Junction_factory));
}

void Junction::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Junction::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Junction::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Connector::addPrimitiveGetFnsToMap(get_map);
}

void Junction::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Connector::addClassGetFnsToMap(get_map);
}

void Junction::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Connector::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Junction::declare()
{
	return BaseClassDefiner(Junction::addConstructToMap, Junction::addPrimitiveAssignFnsToMap, Junction::addClassAssignFnsToMap, Junction::debugName);
}

namespace CIMPP
{
	BaseClass* Junction_factory()
	{
		return new Junction;
	}
}
