#include <sstream>
#include "IdentifiedObject.hpp"
#include "LoadGroup.hpp"

#include "SubLoadArea.hpp"

using namespace CIMPP;

LoadGroup::LoadGroup(): SubLoadArea(nullptr) {};

LoadGroup::~LoadGroup() {};




bool assign_SubLoadArea_LoadGroups(BaseClass*, BaseClass*);
bool assign_LoadGroup_SubLoadArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(LoadGroup* element = dynamic_cast<LoadGroup*>(BaseClass_ptr1)) {
                element->SubLoadArea = dynamic_cast<SubLoadArea*>(BaseClass_ptr2);
                if(element->SubLoadArea != nullptr)
                        return assign_SubLoadArea_LoadGroups(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* LoadGroup_factory() {
		return new LoadGroup;
	}
}

void LoadGroup::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:LoadGroup"), &LoadGroup_factory));
}

void LoadGroup::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void LoadGroup::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:LoadGroup.SubLoadArea"), &assign_LoadGroup_SubLoadArea));
}

const char LoadGroup::debugName[] = "LoadGroup";
const char* LoadGroup::debugString()
{
	return LoadGroup::debugName;
}

const BaseClassDefiner LoadGroup::declare()
{
	return BaseClassDefiner(LoadGroup::addConstructToMap, LoadGroup::addPrimitiveAssignFnsToMap, LoadGroup::addClassAssignFnsToMap, LoadGroup::debugName);
}
