/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerSystemResource.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Control.hpp"
#include "Location.hpp"
#include "Measurement.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PowerSystemResource(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::DY,
			CGMESProfile::EQ_BD,
			CGMESProfile::EQ,
			CGMESProfile::GL,
			CGMESProfile::SSH,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "PowerSystemResource.Controls", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "PowerSystemResource.Location", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::GL, } } },
		{ "PowerSystemResource.Measurements", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

PowerSystemResource::PowerSystemResource() : Location(nullptr) {}
PowerSystemResource::~PowerSystemResource() {}

const std::list<std::string>& PowerSystemResource::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PowerSystemResource::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PowerSystemResource::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PowerSystemResource::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PowerSystemResource::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PowerSystemResource::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PowerSystemResource::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_Control_PowerSystemResource(BaseClass*, BaseClass*);
bool assign_PowerSystemResource_Controls(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerSystemResource* element = dynamic_cast<PowerSystemResource*>(BaseClass_ptr1);
	Control* element2 = dynamic_cast<Control*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Controls.begin(), element->Controls.end(), element2) == element->Controls.end())
		{
			element->Controls.push_back(element2);
			return assign_Control_PowerSystemResource(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Location_PowerSystemResources(BaseClass*, BaseClass*);
bool assign_PowerSystemResource_Location(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerSystemResource* element = dynamic_cast<PowerSystemResource*>(BaseClass_ptr1);
	Location* element2 = dynamic_cast<Location*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Location != element2)
		{
			element->Location = element2;
			return assign_Location_PowerSystemResources(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Measurement_PowerSystemResource(BaseClass*, BaseClass*);
bool assign_PowerSystemResource_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerSystemResource* element = dynamic_cast<PowerSystemResource*>(BaseClass_ptr1);
	Measurement* element2 = dynamic_cast<Measurement*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Measurements.begin(), element->Measurements.end(), element2) == element->Measurements.end())
		{
			element->Measurements.push_back(element2);
			return assign_Measurement_PowerSystemResource(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}




const char PowerSystemResource::debugName[] = "PowerSystemResource";
const char* PowerSystemResource::debugString() const
{
	return PowerSystemResource::debugName;
}

void PowerSystemResource::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PowerSystemResource", &PowerSystemResource_factory);
}

void PowerSystemResource::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PowerSystemResource::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PowerSystemResource.Controls", &assign_PowerSystemResource_Controls);
	assign_map.emplace("PowerSystemResource.Location", &assign_PowerSystemResource_Location);
	assign_map.emplace("PowerSystemResource.Measurements", &assign_PowerSystemResource_Measurements);
}

void PowerSystemResource::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void PowerSystemResource::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void PowerSystemResource::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool PowerSystemResource::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PowerSystemResource" &&
		dynamic_cast<PowerSystemResource*>(otherObject) != nullptr;
}

const BaseClassDefiner PowerSystemResource::declare()
{
	return BaseClassDefiner(PowerSystemResource::addConstructToMap, PowerSystemResource::addPrimitiveAssignFnsToMap, PowerSystemResource::addClassAssignFnsToMap, PowerSystemResource::debugName);
}

std::map<std::string, AttrDetails> PowerSystemResource::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PowerSystemResource_factory()
	{
		return new PowerSystemResource;
	}
}
