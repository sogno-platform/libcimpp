#include <sstream>
#include "BaseClass.hpp"
#include "SvShuntCompensatorSections.hpp"

#include "Simple_Float.hpp"
#include "ShuntCompensator.hpp"

using namespace CIMPP;

SvShuntCompensatorSections::SvShuntCompensatorSections() {};

SvShuntCompensatorSections::~SvShuntCompensatorSections() {};



bool assign_ShuntCompensator_SvShuntCompensatorSections(BaseClass*, BaseClass*);
bool assign_SvShuntCompensatorSections_ShuntCompensator(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SvShuntCompensatorSections* element = dynamic_cast<SvShuntCompensatorSections*>(BaseClass_ptr1)) {
                element->ShuntCompensator = dynamic_cast<ShuntCompensator*>(BaseClass_ptr2);
                if(element->ShuntCompensator != nullptr)
                        return assign_ShuntCompensator_SvShuntCompensatorSections(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}


bool assign_SvShuntCompensatorSections_sections(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SvShuntCompensatorSections* element = dynamic_cast<SvShuntCompensatorSections*>(BaseClass_ptr1)) {
                buffer >> element->sections;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* SvShuntCompensatorSections_factory() {
		return new SvShuntCompensatorSections;
	}
}

void SvShuntCompensatorSections::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SvShuntCompensatorSections"), &SvShuntCompensatorSections_factory));
}

void SvShuntCompensatorSections::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:SvShuntCompensatorSections.sections"), &assign_SvShuntCompensatorSections_sections));
	}

void SvShuntCompensatorSections::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:SvShuntCompensatorSections.ShuntCompensator"), &assign_SvShuntCompensatorSections_ShuntCompensator));
}

const char SvShuntCompensatorSections::debugName[] = "SvShuntCompensatorSections";
const char* SvShuntCompensatorSections::debugString()
{
	return SvShuntCompensatorSections::debugName;
}

const BaseClassDefiner SvShuntCompensatorSections::declare()
{
	return BaseClassDefiner(SvShuntCompensatorSections::addConstructToMap, SvShuntCompensatorSections::addPrimitiveAssignFnsToMap, SvShuntCompensatorSections::addClassAssignFnsToMap, SvShuntCompensatorSections::debugName);
}


