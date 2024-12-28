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

PowerSystemResource::PowerSystemResource() : Location(nullptr) {};
PowerSystemResource::~PowerSystemResource() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
	CGMESProfile::EQ_BD,
	CGMESProfile::EQ,
	CGMESProfile::GL,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PowerSystemResource.Controls", { CGMESProfile::EQ, } },
	{ "cim:PowerSystemResource.Location", { CGMESProfile::GL, } },
	{ "cim:PowerSystemResource.Measurements", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
PowerSystemResource::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PowerSystemResource::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.insert(std::make_pair(std::string("cim:PowerSystemResource"), &PowerSystemResource_factory));
}

void PowerSystemResource::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PowerSystemResource::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PowerSystemResource.Controls"), &assign_PowerSystemResource_Controls));
	assign_map.insert(std::make_pair(std::string("cim:PowerSystemResource.Location"), &assign_PowerSystemResource_Location));
	assign_map.insert(std::make_pair(std::string("cim:PowerSystemResource.Measurements"), &assign_PowerSystemResource_Measurements));
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

const BaseClassDefiner PowerSystemResource::declare()
{
	return BaseClassDefiner(PowerSystemResource::addConstructToMap, PowerSystemResource::addPrimitiveAssignFnsToMap, PowerSystemResource::addClassAssignFnsToMap, PowerSystemResource::debugName);
}

namespace CIMPP
{
	BaseClass* PowerSystemResource_factory()
	{
		return new PowerSystemResource;
	}
}
