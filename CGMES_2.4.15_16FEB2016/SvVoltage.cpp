#include <sstream>
#include "BaseClass.hpp"
#include "SvVoltage.hpp"

#include "TopologicalNode.hpp"
#include "AngleDegrees.hpp"
#include "Voltage.hpp"

using namespace CIMPP;

SvVoltage::SvVoltage(): TopologicalNode(nullptr) {};

SvVoltage::~SvVoltage() {};



bool assign_SvVoltage_angle(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SvVoltage* element = dynamic_cast<SvVoltage*>(BaseClass_ptr1)) {
                buffer >> element->angle;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_SvVoltage_v(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SvVoltage* element = dynamic_cast<SvVoltage*>(BaseClass_ptr1)) {
                buffer >> element->v;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_TopologicalNode_SvVoltage(BaseClass*, BaseClass*);
bool assign_SvVoltage_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SvVoltage* element = dynamic_cast<SvVoltage*>(BaseClass_ptr1)) {
                element->TopologicalNode = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
                if(element->TopologicalNode != nullptr)
                        return assign_TopologicalNode_SvVoltage(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* SvVoltage_factory() {
		return new SvVoltage;
	}
}

void SvVoltage::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SvVoltage"), &SvVoltage_factory));
}

void SvVoltage::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:SvVoltage.angle"), &assign_SvVoltage_angle));
	assign_map.insert(std::make_pair(std::string("cim:SvVoltage.v"), &assign_SvVoltage_v));
}

void SvVoltage::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:SvVoltage.TopologicalNode"), &assign_SvVoltage_TopologicalNode));
		}

const char SvVoltage::debugName[] = "SvVoltage";
const char* SvVoltage::debugString()
{
	return SvVoltage::debugName;
}

const BaseClassDefiner SvVoltage::declare()
{
	return BaseClassDefiner(SvVoltage::addConstructToMap, SvVoltage::addPrimitiveAssignFnsToMap, SvVoltage::addClassAssignFnsToMap, SvVoltage::debugName);
}
