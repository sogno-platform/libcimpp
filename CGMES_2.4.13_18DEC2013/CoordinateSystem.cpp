/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CoordinateSystem.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Location.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		CoordinateSystem(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::GL,
		},
		CGMESProfile::GL
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "CoordinateSystem.Location", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::GL, } } },
		{ "CoordinateSystem.crsUrn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::GL, } } },
	};
    return ClassAttrDetailsMap;
}

CoordinateSystem::CoordinateSystem() {}
CoordinateSystem::~CoordinateSystem() {}

const std::list<std::string>& CoordinateSystem::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& CoordinateSystem::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& CoordinateSystem::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& CoordinateSystem::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& CoordinateSystem::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& CoordinateSystem::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& CoordinateSystem::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_Location_CoordinateSystem(BaseClass*, BaseClass*);
bool assign_CoordinateSystem_Location(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CoordinateSystem* element = dynamic_cast<CoordinateSystem*>(BaseClass_ptr1);
	Location* element2 = dynamic_cast<Location*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Location.begin(), element->Location.end(), element2) == element->Location.end())
		{
			element->Location.push_back(element2);
			return assign_Location_CoordinateSystem(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_CoordinateSystem_crsUrn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CoordinateSystem* element = dynamic_cast<CoordinateSystem*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->crsUrn = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_CoordinateSystem_crsUrn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CoordinateSystem* element = dynamic_cast<const CoordinateSystem*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->crsUrn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char CoordinateSystem::debugName[] = "CoordinateSystem";
const char* CoordinateSystem::debugString() const
{
	return CoordinateSystem::debugName;
}

void CoordinateSystem::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("CoordinateSystem", &CoordinateSystem_factory);
}

void CoordinateSystem::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("CoordinateSystem.crsUrn", &assign_CoordinateSystem_crsUrn);
}

void CoordinateSystem::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("CoordinateSystem.Location", &assign_CoordinateSystem_Location);
}

void CoordinateSystem::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("CoordinateSystem.crsUrn", &get_CoordinateSystem_crsUrn);
}

void CoordinateSystem::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void CoordinateSystem::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool CoordinateSystem::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "CoordinateSystem" &&
		dynamic_cast<CoordinateSystem*>(otherObject) != nullptr;
}

const BaseClassDefiner CoordinateSystem::declare()
{
	return BaseClassDefiner(CoordinateSystem::addConstructToMap, CoordinateSystem::addPrimitiveAssignFnsToMap, CoordinateSystem::addClassAssignFnsToMap, CoordinateSystem::debugName);
}

std::map<std::string, AttrDetails> CoordinateSystem::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* CoordinateSystem_factory()
	{
		return new CoordinateSystem;
	}
}
