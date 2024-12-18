/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChanger.hpp"

#include <algorithm>
#include <sstream>

#include "TransformerEnd.hpp"

using namespace CIMPP;

PhaseTapChanger::PhaseTapChanger() : TransformerEnd(nullptr) {};
PhaseTapChanger::~PhaseTapChanger() {};




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
