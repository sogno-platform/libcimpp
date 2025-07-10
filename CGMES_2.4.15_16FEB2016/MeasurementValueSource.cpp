/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MeasurementValueSource.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "MeasurementValue.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		MeasurementValueSource(),
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
		{ "MeasurementValueSource.MeasurementValues", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

MeasurementValueSource::MeasurementValueSource() {}
MeasurementValueSource::~MeasurementValueSource() {}

const std::list<std::string>& MeasurementValueSource::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& MeasurementValueSource::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& MeasurementValueSource::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& MeasurementValueSource::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& MeasurementValueSource::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& MeasurementValueSource::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& MeasurementValueSource::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_MeasurementValue_MeasurementValueSource(BaseClass*, BaseClass*);
bool assign_MeasurementValueSource_MeasurementValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MeasurementValueSource* element = dynamic_cast<MeasurementValueSource*>(BaseClass_ptr1);
	MeasurementValue* element2 = dynamic_cast<MeasurementValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->MeasurementValues.begin(), element->MeasurementValues.end(), element2) == element->MeasurementValues.end())
		{
			element->MeasurementValues.push_back(element2);
			return assign_MeasurementValue_MeasurementValueSource(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char MeasurementValueSource::debugName[] = "MeasurementValueSource";
const char* MeasurementValueSource::debugString() const
{
	return MeasurementValueSource::debugName;
}

void MeasurementValueSource::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("MeasurementValueSource", &MeasurementValueSource_factory);
}

void MeasurementValueSource::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void MeasurementValueSource::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("MeasurementValueSource.MeasurementValues", &assign_MeasurementValueSource_MeasurementValues);
}

void MeasurementValueSource::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void MeasurementValueSource::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void MeasurementValueSource::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool MeasurementValueSource::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "MeasurementValueSource" &&
		dynamic_cast<MeasurementValueSource*>(otherObject) != nullptr;
}

const BaseClassDefiner MeasurementValueSource::declare()
{
	return BaseClassDefiner(MeasurementValueSource::addConstructToMap, MeasurementValueSource::addPrimitiveAssignFnsToMap, MeasurementValueSource::addClassAssignFnsToMap, MeasurementValueSource::debugName);
}

std::map<std::string, AttrDetails> MeasurementValueSource::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* MeasurementValueSource_factory()
	{
		return new MeasurementValueSource;
	}
}
