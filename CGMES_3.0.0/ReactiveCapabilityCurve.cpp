/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ReactiveCapabilityCurve.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "EquivalentInjection.hpp"
#include "SynchronousMachine.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ReactiveCapabilityCurve(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "ReactiveCapabilityCurve.EquivalentInjection", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "ReactiveCapabilityCurve.InitiallyUsedBySynchronousMachines", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ReactiveCapabilityCurve::ReactiveCapabilityCurve() {}
ReactiveCapabilityCurve::~ReactiveCapabilityCurve() {}

const std::list<std::string>& ReactiveCapabilityCurve::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ReactiveCapabilityCurve::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ReactiveCapabilityCurve::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ReactiveCapabilityCurve::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ReactiveCapabilityCurve::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ReactiveCapabilityCurve::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ReactiveCapabilityCurve::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_EquivalentInjection_ReactiveCapabilityCurve(BaseClass*, BaseClass*);
bool assign_ReactiveCapabilityCurve_EquivalentInjection(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ReactiveCapabilityCurve* element = dynamic_cast<ReactiveCapabilityCurve*>(BaseClass_ptr1);
	EquivalentInjection* element2 = dynamic_cast<EquivalentInjection*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->EquivalentInjection.begin(), element->EquivalentInjection.end(), element2) == element->EquivalentInjection.end())
		{
			element->EquivalentInjection.push_back(element2);
			return assign_EquivalentInjection_ReactiveCapabilityCurve(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachine_InitialReactiveCapabilityCurve(BaseClass*, BaseClass*);
bool assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ReactiveCapabilityCurve* element = dynamic_cast<ReactiveCapabilityCurve*>(BaseClass_ptr1);
	SynchronousMachine* element2 = dynamic_cast<SynchronousMachine*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->InitiallyUsedBySynchronousMachines.begin(), element->InitiallyUsedBySynchronousMachines.end(), element2) == element->InitiallyUsedBySynchronousMachines.end())
		{
			element->InitiallyUsedBySynchronousMachines.push_back(element2);
			return assign_SynchronousMachine_InitialReactiveCapabilityCurve(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char ReactiveCapabilityCurve::debugName[] = "ReactiveCapabilityCurve";
const char* ReactiveCapabilityCurve::debugString() const
{
	return ReactiveCapabilityCurve::debugName;
}

void ReactiveCapabilityCurve::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ReactiveCapabilityCurve", &ReactiveCapabilityCurve_factory);
}

void ReactiveCapabilityCurve::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ReactiveCapabilityCurve::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ReactiveCapabilityCurve.EquivalentInjection", &assign_ReactiveCapabilityCurve_EquivalentInjection);
	assign_map.emplace("ReactiveCapabilityCurve.InitiallyUsedBySynchronousMachines", &assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines);
}

void ReactiveCapabilityCurve::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Curve::addPrimitiveGetFnsToMap(get_map);
}

void ReactiveCapabilityCurve::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Curve::addClassGetFnsToMap(get_map);
}

void ReactiveCapabilityCurve::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Curve::addEnumGetFnsToMap(get_map);
}

bool ReactiveCapabilityCurve::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ReactiveCapabilityCurve" &&
		dynamic_cast<ReactiveCapabilityCurve*>(otherObject) != nullptr;
}

const BaseClassDefiner ReactiveCapabilityCurve::declare()
{
	return BaseClassDefiner(ReactiveCapabilityCurve::addConstructToMap, ReactiveCapabilityCurve::addPrimitiveAssignFnsToMap, ReactiveCapabilityCurve::addClassAssignFnsToMap, ReactiveCapabilityCurve::debugName);
}

std::map<std::string, AttrDetails> ReactiveCapabilityCurve::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Curve::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ReactiveCapabilityCurve_factory()
	{
		return new ReactiveCapabilityCurve;
	}
}
