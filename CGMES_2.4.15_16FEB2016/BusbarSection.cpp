#include <sstream>
#include "Connector.hpp"
#include "BusbarSection.hpp"

#include "CurrentFlow.hpp"

using namespace CIMPP;

BusbarSection::BusbarSection() {};

BusbarSection::~BusbarSection() {};


bool assign_BusbarSection_ipMax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(BusbarSection* element = dynamic_cast<BusbarSection*>(BaseClass_ptr1)) {
                buffer >> element->ipMax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}



namespace CIMPP {
	BaseClass* BusbarSection_factory() {
		return new BusbarSection;
	}
}

void BusbarSection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:BusbarSection"), &BusbarSection_factory));
}

void BusbarSection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:BusbarSection.ipMax"), &assign_BusbarSection_ipMax));
}

void BusbarSection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	}

const char BusbarSection::debugName[] = "BusbarSection";
const char* BusbarSection::debugString()
{
	return BusbarSection::debugName;
}

const BaseClassDefiner BusbarSection::declare()
{
	return BaseClassDefiner(BusbarSection::addConstructToMap, BusbarSection::addPrimitiveAssignFnsToMap, BusbarSection::addClassAssignFnsToMap, BusbarSection::debugName);
}
