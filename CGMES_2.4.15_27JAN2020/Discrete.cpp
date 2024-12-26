#include <sstream>
#include "Measurement.hpp"
#include "Discrete.hpp"

#include "DiscreteValue.hpp"
#include "ValueAliasSet.hpp"

using namespace CIMPP;

Discrete::Discrete(): ValueAliasSet(nullptr) {};

Discrete::~Discrete() {};





bool assign_Discrete_DiscreteValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Discrete* element = dynamic_cast<Discrete*>(BaseClass_ptr1)) {
		if(dynamic_cast<DiscreteValue*>(BaseClass_ptr2) != nullptr) {
                        element->DiscreteValues.push_back(dynamic_cast<DiscreteValue*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ValueAliasSet_Discretes(BaseClass*, BaseClass*);
bool assign_Discrete_ValueAliasSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Discrete* element = dynamic_cast<Discrete*>(BaseClass_ptr1)) {
                element->ValueAliasSet = dynamic_cast<ValueAliasSet*>(BaseClass_ptr2);
                if(element->ValueAliasSet != nullptr)
                        return assign_ValueAliasSet_Discretes(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* Discrete_factory() {
		return new Discrete;
	}
}

void Discrete::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Discrete"), &Discrete_factory));
}

void Discrete::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void Discrete::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Discrete.DiscreteValues"), &assign_Discrete_DiscreteValues));
	assign_map.insert(std::make_pair(std::string("cim:Discrete.ValueAliasSet"), &assign_Discrete_ValueAliasSet));
}

const char Discrete::debugName[] = "Discrete";
const char* Discrete::debugString()
{
	return Discrete::debugName;
}

const BaseClassDefiner Discrete::declare()
{
	return BaseClassDefiner(Discrete::addConstructToMap, Discrete::addPrimitiveAssignFnsToMap, Discrete::addClassAssignFnsToMap, Discrete::debugName);
}
