/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindPlantFreqPcontrolIEC.hpp"
#include "WindPlantReactiveControlIEC.hpp"

using namespace CIMPP;

WindPlantIEC::WindPlantIEC() : WindPlantFreqPcontrolIEC(nullptr), WindPlantReactiveControlIEC(nullptr) {};
WindPlantIEC::~WindPlantIEC() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindPlantIEC.WindPlantFreqPcontrolIEC", { CGMESProfile::DY, } },
	{ "cim:WindPlantIEC.WindPlantReactiveControlIEC", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindPlantIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindPlantIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WindPlantDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_WindPlantFreqPcontrolIEC_WindPlantIEC(BaseClass*, BaseClass*);
bool assign_WindPlantIEC_WindPlantFreqPcontrolIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantIEC* element = dynamic_cast<WindPlantIEC*>(BaseClass_ptr1);
	WindPlantFreqPcontrolIEC* element2 = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantFreqPcontrolIEC != element2)
		{
			element->WindPlantFreqPcontrolIEC = element2;
			return assign_WindPlantFreqPcontrolIEC_WindPlantIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_WindPlantReactiveControlIEC_WindPlantIEC(BaseClass*, BaseClass*);
bool assign_WindPlantIEC_WindPlantReactiveControlIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantIEC* element = dynamic_cast<WindPlantIEC*>(BaseClass_ptr1);
	WindPlantReactiveControlIEC* element2 = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantReactiveControlIEC != element2)
		{
			element->WindPlantReactiveControlIEC = element2;
			return assign_WindPlantReactiveControlIEC_WindPlantIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_WindPlantIEC_WindPlantFreqPcontrolIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const WindPlantIEC* element = dynamic_cast<const WindPlantIEC*>(BaseClass_ptr1))
	{
		if (element->WindPlantFreqPcontrolIEC != 0)
		{
			BaseClass_list.push_back(element->WindPlantFreqPcontrolIEC);
			return true;
		}
	}
	return false;
}

bool get_WindPlantIEC_WindPlantReactiveControlIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const WindPlantIEC* element = dynamic_cast<const WindPlantIEC*>(BaseClass_ptr1))
	{
		if (element->WindPlantReactiveControlIEC != 0)
		{
			BaseClass_list.push_back(element->WindPlantReactiveControlIEC);
			return true;
		}
	}
	return false;
}


const char WindPlantIEC::debugName[] = "WindPlantIEC";
const char* WindPlantIEC::debugString() const
{
	return WindPlantIEC::debugName;
}

void WindPlantIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindPlantIEC"), &WindPlantIEC_factory));
}

void WindPlantIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindPlantIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindPlantIEC.WindPlantFreqPcontrolIEC"), &assign_WindPlantIEC_WindPlantFreqPcontrolIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantIEC.WindPlantReactiveControlIEC"), &assign_WindPlantIEC_WindPlantReactiveControlIEC));
}

void WindPlantIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindPlantDynamics::addPrimitiveGetFnsToMap(get_map);
}

void WindPlantIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindPlantDynamics::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:WindPlantIEC.WindPlantFreqPcontrolIEC", &get_WindPlantIEC_WindPlantFreqPcontrolIEC);
	get_map.emplace("cim:WindPlantIEC.WindPlantReactiveControlIEC", &get_WindPlantIEC_WindPlantReactiveControlIEC);
}

void WindPlantIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindPlantDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindPlantIEC::declare()
{
	return BaseClassDefiner(WindPlantIEC::addConstructToMap, WindPlantIEC::addPrimitiveAssignFnsToMap, WindPlantIEC::addClassAssignFnsToMap, WindPlantIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindPlantIEC_factory()
	{
		return new WindPlantIEC;
	}
}
