#include <sstream>
#include "EnergyArea.hpp"
#include "LoadArea.hpp"

#include "SubLoadArea.hpp"

using namespace CIMPP;

LoadArea::LoadArea() {};

LoadArea::~LoadArea() {};




bool assign_LoadArea_SubLoadAreas(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(LoadArea* element = dynamic_cast<LoadArea*>(BaseClass_ptr1)) {
		if(dynamic_cast<SubLoadArea*>(BaseClass_ptr2) != nullptr) {
                        element->SubLoadAreas.push_back(dynamic_cast<SubLoadArea*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* LoadArea_factory() {
		return new LoadArea;
	}
}

void LoadArea::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:LoadArea"), &LoadArea_factory));
}

void LoadArea::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void LoadArea::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:LoadArea.SubLoadAreas"), &assign_LoadArea_SubLoadAreas));
}

const char LoadArea::debugName[] = "LoadArea";
const char* LoadArea::debugString()
{
	return LoadArea::debugName;
}

const BaseClassDefiner LoadArea::declare()
{
	return BaseClassDefiner(LoadArea::addConstructToMap, LoadArea::addPrimitiveAssignFnsToMap, LoadArea::addClassAssignFnsToMap, LoadArea::debugName);
}
