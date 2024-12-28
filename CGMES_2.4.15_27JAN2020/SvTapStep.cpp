/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SvTapStep.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "TapChanger.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

SvTapStep::SvTapStep() : TapChanger(nullptr) {};
SvTapStep::~SvTapStep() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::SV,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SvTapStep.TapChanger", { CGMESProfile::SV, } },
	{ "cim:SvTapStep.position", { CGMESProfile::SV, } },
};

std::list<CGMESProfile>
SvTapStep::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SvTapStep::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_SvTapStep_position(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SvTapStep* element = dynamic_cast<SvTapStep*>(BaseClass_ptr1))
	{
		buffer >> element->position;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_TapChanger_SvTapStep(BaseClass*, BaseClass*);
bool assign_SvTapStep_TapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SvTapStep* element = dynamic_cast<SvTapStep*>(BaseClass_ptr1);
	TapChanger* element2 = dynamic_cast<TapChanger*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TapChanger != element2)
		{
			element->TapChanger = element2;
			return assign_TapChanger_SvTapStep(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_SvTapStep_position(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SvTapStep* element = dynamic_cast<const SvTapStep*>(BaseClass_ptr1))
	{
		buffer << element->position;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_SvTapStep_TapChanger(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const SvTapStep* element = dynamic_cast<const SvTapStep*>(BaseClass_ptr1))
	{
		if (element->TapChanger != 0)
		{
			BaseClass_list.push_back(element->TapChanger);
			return true;
		}
	}
	return false;
}


const char SvTapStep::debugName[] = "SvTapStep";
const char* SvTapStep::debugString() const
{
	return SvTapStep::debugName;
}

void SvTapStep::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SvTapStep"), &SvTapStep_factory));
}

void SvTapStep::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SvTapStep.position"), &assign_SvTapStep_position));
}

void SvTapStep::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SvTapStep.TapChanger"), &assign_SvTapStep_TapChanger));
}

void SvTapStep::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:SvTapStep.position", &get_SvTapStep_position);
}

void SvTapStep::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:SvTapStep.TapChanger", &get_SvTapStep_TapChanger);
}

void SvTapStep::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SvTapStep::declare()
{
	return BaseClassDefiner(SvTapStep::addConstructToMap, SvTapStep::addPrimitiveAssignFnsToMap, SvTapStep::addClassAssignFnsToMap, SvTapStep::debugName);
}

namespace CIMPP
{
	BaseClass* SvTapStep_factory()
	{
		return new SvTapStep;
	}
}
