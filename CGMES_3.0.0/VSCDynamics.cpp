/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VSCDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "VsConverter.hpp"

using namespace CIMPP;

VSCDynamics::VSCDynamics() : VsConverter(nullptr) {};
VSCDynamics::~VSCDynamics() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:VSCDynamics.VsConverter", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
VSCDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
VSCDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = HVDCDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_VsConverter_VSCDynamics(BaseClass*, BaseClass*);
bool assign_VSCDynamics_VsConverter(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VSCDynamics* element = dynamic_cast<VSCDynamics*>(BaseClass_ptr1);
	VsConverter* element2 = dynamic_cast<VsConverter*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VsConverter != element2)
		{
			element->VsConverter = element2;
			return assign_VsConverter_VSCDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_VSCDynamics_VsConverter(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const VSCDynamics* element = dynamic_cast<const VSCDynamics*>(BaseClass_ptr1))
	{
		if (element->VsConverter != 0)
		{
			BaseClass_list.push_back(element->VsConverter);
			return true;
		}
	}
	return false;
}


const char VSCDynamics::debugName[] = "VSCDynamics";
const char* VSCDynamics::debugString() const
{
	return VSCDynamics::debugName;
}

void VSCDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VSCDynamics"), &VSCDynamics_factory));
}

void VSCDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void VSCDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VSCDynamics.VsConverter"), &assign_VSCDynamics_VsConverter));
}

void VSCDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	HVDCDynamics::addPrimitiveGetFnsToMap(get_map);
}

void VSCDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	HVDCDynamics::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:VSCDynamics.VsConverter", &get_VSCDynamics_VsConverter);
}

void VSCDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	HVDCDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner VSCDynamics::declare()
{
	return BaseClassDefiner(VSCDynamics::addConstructToMap, VSCDynamics::addPrimitiveAssignFnsToMap, VSCDynamics::addClassAssignFnsToMap, VSCDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* VSCDynamics_factory()
	{
		return new VSCDynamics;
	}
}
