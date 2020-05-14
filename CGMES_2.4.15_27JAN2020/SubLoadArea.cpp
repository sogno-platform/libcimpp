#include <sstream>
#include "EnergyArea.hpp"
#include "SubLoadArea.hpp"

#include "LoadArea.hpp"
#include "LoadGroup.hpp"

using namespace CIMPP;

SubLoadArea::SubLoadArea() {};

SubLoadArea::~SubLoadArea() {};


bool assign_LoadArea_SubLoadAreas(BaseClass*, BaseClass*);
bool assign_SubLoadArea_LoadArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SubLoadArea* element = dynamic_cast<SubLoadArea*>(BaseClass_ptr1)) {
                element->LoadArea = dynamic_cast<LoadArea*>(BaseClass_ptr2);
                if(element->LoadArea != nullptr)
                        return assign_LoadArea_SubLoadAreas(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_SubLoadArea_LoadGroups(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SubLoadArea* element = dynamic_cast<SubLoadArea*>(BaseClass_ptr1)) {
		if(dynamic_cast<LoadGroup*>(BaseClass_ptr2) != nullptr) {
                        element->LoadGroups.push_back(dynamic_cast<LoadGroup*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}




namespace CIMPP {
	BaseClass* SubLoadArea_factory() {
		return new SubLoadArea;
	}
}

void SubLoadArea::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SubLoadArea"), &SubLoadArea_factory));
}

void SubLoadArea::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void SubLoadArea::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:SubLoadArea.LoadArea"), &assign_SubLoadArea_LoadArea));
	assign_map.insert(std::make_pair(std::string("cim:SubLoadArea.LoadGroups"), &assign_SubLoadArea_LoadGroups));
}

const char SubLoadArea::debugName[] = "SubLoadArea";
const char* SubLoadArea::debugString()
{
	return SubLoadArea::debugName;
}

const BaseClassDefiner SubLoadArea::declare()
{
	return BaseClassDefiner(SubLoadArea::addConstructToMap, SubLoadArea::addPrimitiveAssignFnsToMap, SubLoadArea::addClassAssignFnsToMap, SubLoadArea::debugName);
}


