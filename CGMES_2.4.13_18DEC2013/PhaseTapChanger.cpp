/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChanger.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "TransformerEnd.hpp"

using namespace CIMPP;

PhaseTapChanger::PhaseTapChanger() : TransformerEnd(nullptr) {};
PhaseTapChanger::~PhaseTapChanger() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PhaseTapChanger.TransformerEnd", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
PhaseTapChanger::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PhaseTapChanger::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TapChanger::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_TransformerEnd_PhaseTapChanger(BaseClass*, BaseClass*);
bool assign_PhaseTapChanger_TransformerEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PhaseTapChanger* element = dynamic_cast<PhaseTapChanger*>(BaseClass_ptr1);
	TransformerEnd* element2 = dynamic_cast<TransformerEnd*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TransformerEnd != element2)
		{
			element->TransformerEnd = element2;
			return assign_TransformerEnd_PhaseTapChanger(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_PhaseTapChanger_TransformerEnd(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const PhaseTapChanger* element = dynamic_cast<const PhaseTapChanger*>(BaseClass_ptr1))
	{
		if (element->TransformerEnd != 0)
		{
			BaseClass_list.push_back(element->TransformerEnd);
			return true;
		}
	}
	return false;
}


const char PhaseTapChanger::debugName[] = "PhaseTapChanger";
const char* PhaseTapChanger::debugString() const
{
	return PhaseTapChanger::debugName;
}

void PhaseTapChanger::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PhaseTapChanger"), &PhaseTapChanger_factory));
}

void PhaseTapChanger::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PhaseTapChanger::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChanger.TransformerEnd"), &assign_PhaseTapChanger_TransformerEnd));
}

void PhaseTapChanger::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TapChanger::addPrimitiveGetFnsToMap(get_map);
}

void PhaseTapChanger::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TapChanger::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:PhaseTapChanger.TransformerEnd", &get_PhaseTapChanger_TransformerEnd);
}

void PhaseTapChanger::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TapChanger::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PhaseTapChanger::declare()
{
	return BaseClassDefiner(PhaseTapChanger::addConstructToMap, PhaseTapChanger::addPrimitiveAssignFnsToMap, PhaseTapChanger::addClassAssignFnsToMap, PhaseTapChanger::debugName);
}

namespace CIMPP
{
	BaseClass* PhaseTapChanger_factory()
	{
		return new PhaseTapChanger;
	}
}
