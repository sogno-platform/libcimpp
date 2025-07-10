/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ServiceLocation.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ServiceLocation(),
		"http://iec.ch/TC57/CIM100#",
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
	};
    return ClassAttrDetailsMap;
}

ServiceLocation::ServiceLocation() {}
ServiceLocation::~ServiceLocation() {}

const std::list<std::string>& ServiceLocation::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ServiceLocation::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ServiceLocation::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ServiceLocation::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ServiceLocation::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ServiceLocation::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ServiceLocation::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char ServiceLocation::debugName[] = "ServiceLocation";
const char* ServiceLocation::debugString() const
{
	return ServiceLocation::debugName;
}

void ServiceLocation::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ServiceLocation", &ServiceLocation_factory);
}

void ServiceLocation::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ServiceLocation::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ServiceLocation::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WorkLocation::addPrimitiveGetFnsToMap(get_map);
}

void ServiceLocation::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WorkLocation::addClassGetFnsToMap(get_map);
}

void ServiceLocation::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WorkLocation::addEnumGetFnsToMap(get_map);
}

bool ServiceLocation::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ServiceLocation" &&
		dynamic_cast<ServiceLocation*>(otherObject) != nullptr;
}

const BaseClassDefiner ServiceLocation::declare()
{
	return BaseClassDefiner(ServiceLocation::addConstructToMap, ServiceLocation::addPrimitiveAssignFnsToMap, ServiceLocation::addClassAssignFnsToMap, ServiceLocation::debugName);
}

std::map<std::string, AttrDetails> ServiceLocation::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WorkLocation::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ServiceLocation_factory()
	{
		return new ServiceLocation;
	}
}
