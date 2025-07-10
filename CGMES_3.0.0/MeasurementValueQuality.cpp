/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MeasurementValueQuality.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "MeasurementValue.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		MeasurementValueQuality(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::OP,
		},
		CGMESProfile::OP
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "MeasurementValueQuality.MeasurementValue", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
	};
    return ClassAttrDetailsMap;
}

MeasurementValueQuality::MeasurementValueQuality() : MeasurementValue(nullptr) {}
MeasurementValueQuality::~MeasurementValueQuality() {}

const std::list<std::string>& MeasurementValueQuality::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& MeasurementValueQuality::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& MeasurementValueQuality::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& MeasurementValueQuality::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& MeasurementValueQuality::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& MeasurementValueQuality::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& MeasurementValueQuality::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_MeasurementValue_MeasurementValueQuality(BaseClass*, BaseClass*);
bool assign_MeasurementValueQuality_MeasurementValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MeasurementValueQuality* element = dynamic_cast<MeasurementValueQuality*>(BaseClass_ptr1);
	MeasurementValue* element2 = dynamic_cast<MeasurementValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->MeasurementValue != element2)
		{
			element->MeasurementValue = element2;
			return assign_MeasurementValue_MeasurementValueQuality(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_MeasurementValueQuality_MeasurementValue(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const MeasurementValueQuality* element = dynamic_cast<const MeasurementValueQuality*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->MeasurementValue != 0)
		{
			BaseClass_list.push_back(element->MeasurementValue);
			return true;
		}
	}
	return false;
}

const char MeasurementValueQuality::debugName[] = "MeasurementValueQuality";
const char* MeasurementValueQuality::debugString() const
{
	return MeasurementValueQuality::debugName;
}

void MeasurementValueQuality::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("MeasurementValueQuality", &MeasurementValueQuality_factory);
}

void MeasurementValueQuality::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void MeasurementValueQuality::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("MeasurementValueQuality.MeasurementValue", &assign_MeasurementValueQuality_MeasurementValue);
}

void MeasurementValueQuality::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Quality61850::addPrimitiveGetFnsToMap(get_map);
}

void MeasurementValueQuality::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Quality61850::addClassGetFnsToMap(get_map);
	get_map.emplace("MeasurementValueQuality.MeasurementValue", &get_MeasurementValueQuality_MeasurementValue);
}

void MeasurementValueQuality::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Quality61850::addEnumGetFnsToMap(get_map);
}

bool MeasurementValueQuality::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "MeasurementValueQuality" &&
		dynamic_cast<MeasurementValueQuality*>(otherObject) != nullptr;
}

const BaseClassDefiner MeasurementValueQuality::declare()
{
	return BaseClassDefiner(MeasurementValueQuality::addConstructToMap, MeasurementValueQuality::addPrimitiveAssignFnsToMap, MeasurementValueQuality::addClassAssignFnsToMap, MeasurementValueQuality::debugName);
}

std::map<std::string, AttrDetails> MeasurementValueQuality::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Quality61850::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* MeasurementValueQuality_factory()
	{
		return new MeasurementValueQuality;
	}
}
