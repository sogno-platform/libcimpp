/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GrossToNetActivePowerCurve.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "GeneratingUnit.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GrossToNetActivePowerCurve(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "GrossToNetActivePowerCurve.GeneratingUnit", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

GrossToNetActivePowerCurve::GrossToNetActivePowerCurve() : GeneratingUnit(nullptr) {}
GrossToNetActivePowerCurve::~GrossToNetActivePowerCurve() {}

const std::list<std::string>& GrossToNetActivePowerCurve::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GrossToNetActivePowerCurve::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GrossToNetActivePowerCurve::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GrossToNetActivePowerCurve::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GrossToNetActivePowerCurve::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GrossToNetActivePowerCurve::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GrossToNetActivePowerCurve::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GeneratingUnit_GrossToNetActivePowerCurves(BaseClass*, BaseClass*);
bool assign_GrossToNetActivePowerCurve_GeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	GrossToNetActivePowerCurve* element = dynamic_cast<GrossToNetActivePowerCurve*>(BaseClass_ptr1);
	GeneratingUnit* element2 = dynamic_cast<GeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->GeneratingUnit != element2)
		{
			element->GeneratingUnit = element2;
			return assign_GeneratingUnit_GrossToNetActivePowerCurves(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_GrossToNetActivePowerCurve_GeneratingUnit(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const GrossToNetActivePowerCurve* element = dynamic_cast<const GrossToNetActivePowerCurve*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->GeneratingUnit != 0)
		{
			BaseClass_list.push_back(element->GeneratingUnit);
			return true;
		}
	}
	return false;
}

const char GrossToNetActivePowerCurve::debugName[] = "GrossToNetActivePowerCurve";
const char* GrossToNetActivePowerCurve::debugString() const
{
	return GrossToNetActivePowerCurve::debugName;
}

void GrossToNetActivePowerCurve::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GrossToNetActivePowerCurve", &GrossToNetActivePowerCurve_factory);
}

void GrossToNetActivePowerCurve::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void GrossToNetActivePowerCurve::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("GrossToNetActivePowerCurve.GeneratingUnit", &assign_GrossToNetActivePowerCurve_GeneratingUnit);
}

void GrossToNetActivePowerCurve::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Curve::addPrimitiveGetFnsToMap(get_map);
}

void GrossToNetActivePowerCurve::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Curve::addClassGetFnsToMap(get_map);
	get_map.emplace("GrossToNetActivePowerCurve.GeneratingUnit", &get_GrossToNetActivePowerCurve_GeneratingUnit);
}

void GrossToNetActivePowerCurve::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Curve::addEnumGetFnsToMap(get_map);
}

bool GrossToNetActivePowerCurve::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GrossToNetActivePowerCurve" &&
		dynamic_cast<GrossToNetActivePowerCurve*>(otherObject) != nullptr;
}

const BaseClassDefiner GrossToNetActivePowerCurve::declare()
{
	return BaseClassDefiner(GrossToNetActivePowerCurve::addConstructToMap, GrossToNetActivePowerCurve::addPrimitiveAssignFnsToMap, GrossToNetActivePowerCurve::addClassAssignFnsToMap, GrossToNetActivePowerCurve::debugName);
}

std::map<std::string, AttrDetails> GrossToNetActivePowerCurve::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Curve::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GrossToNetActivePowerCurve_factory()
	{
		return new GrossToNetActivePowerCurve;
	}
}
