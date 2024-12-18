#include <sstream>
#include "TapChanger.hpp"
#include "PhaseTapChanger.hpp"

#include "TransformerEnd.hpp"

using namespace CIMPP;

PhaseTapChanger::PhaseTapChanger(): TransformerEnd(nullptr) {};

PhaseTapChanger::~PhaseTapChanger() {};




bool assign_TransformerEnd_PhaseTapChanger(BaseClass*, BaseClass*);
bool assign_PhaseTapChanger_TransformerEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PhaseTapChanger* element = dynamic_cast<PhaseTapChanger*>(BaseClass_ptr1)) {
                element->TransformerEnd = dynamic_cast<TransformerEnd*>(BaseClass_ptr2);
                if(element->TransformerEnd != nullptr)
                        return assign_TransformerEnd_PhaseTapChanger(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* PhaseTapChanger_factory() {
		return new PhaseTapChanger;
	}
}

void PhaseTapChanger::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PhaseTapChanger"), &PhaseTapChanger_factory));
}

void PhaseTapChanger::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void PhaseTapChanger::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChanger.TransformerEnd"), &assign_PhaseTapChanger_TransformerEnd));
}

const char PhaseTapChanger::debugName[] = "PhaseTapChanger";
const char* PhaseTapChanger::debugString()
{
	return PhaseTapChanger::debugName;
}

const BaseClassDefiner PhaseTapChanger::declare()
{
	return BaseClassDefiner(PhaseTapChanger::addConstructToMap, PhaseTapChanger::addPrimitiveAssignFnsToMap, PhaseTapChanger::addClassAssignFnsToMap, PhaseTapChanger::debugName);
}
