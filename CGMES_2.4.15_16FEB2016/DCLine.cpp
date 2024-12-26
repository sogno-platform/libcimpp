#include <sstream>
#include "DCEquipmentContainer.hpp"
#include "DCLine.hpp"

#include "SubGeographicalRegion.hpp"

using namespace CIMPP;

DCLine::DCLine(): Region(nullptr) {};

DCLine::~DCLine() {};




bool assign_SubGeographicalRegion_DCLines(BaseClass*, BaseClass*);
bool assign_DCLine_Region(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCLine* element = dynamic_cast<DCLine*>(BaseClass_ptr1)) {
                element->Region = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr2);
                if(element->Region != nullptr)
                        return assign_SubGeographicalRegion_DCLines(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* DCLine_factory() {
		return new DCLine;
	}
}

void DCLine::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCLine"), &DCLine_factory));
}

void DCLine::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void DCLine::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DCLine.Region"), &assign_DCLine_Region));
}

const char DCLine::debugName[] = "DCLine";
const char* DCLine::debugString()
{
	return DCLine::debugName;
}

const BaseClassDefiner DCLine::declare()
{
	return BaseClassDefiner(DCLine::addConstructToMap, DCLine::addPrimitiveAssignFnsToMap, DCLine::addClassAssignFnsToMap, DCLine::debugName);
}
