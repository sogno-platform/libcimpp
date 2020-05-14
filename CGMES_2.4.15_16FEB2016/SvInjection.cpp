#include <sstream>
#include "BaseClass.hpp"
#include "SvInjection.hpp"

#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "TopologicalNode.hpp"

using namespace CIMPP;

SvInjection::SvInjection() {};

SvInjection::~SvInjection() {};




bool assign_TopologicalNode_SvInjection(BaseClass*, BaseClass*);
bool assign_SvInjection_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SvInjection* element = dynamic_cast<SvInjection*>(BaseClass_ptr1)) {
                element->TopologicalNode = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
                if(element->TopologicalNode != nullptr)
                        return assign_TopologicalNode_SvInjection(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}


bool assign_SvInjection_pInjection(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SvInjection* element = dynamic_cast<SvInjection*>(BaseClass_ptr1)) {
                buffer >> element->pInjection;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_SvInjection_qInjection(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SvInjection* element = dynamic_cast<SvInjection*>(BaseClass_ptr1)) {
                buffer >> element->qInjection;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* SvInjection_factory() {
		return new SvInjection;
	}
}

void SvInjection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SvInjection"), &SvInjection_factory));
}

void SvInjection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:SvInjection.pInjection"), &assign_SvInjection_pInjection));
	assign_map.insert(std::make_pair(std::string("cim:SvInjection.qInjection"), &assign_SvInjection_qInjection));
	}

void SvInjection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:SvInjection.TopologicalNode"), &assign_SvInjection_TopologicalNode));
}

const char SvInjection::debugName[] = "SvInjection";
const char* SvInjection::debugString()
{
	return SvInjection::debugName;
}

const BaseClassDefiner SvInjection::declare()
{
	return BaseClassDefiner(SvInjection::addConstructToMap, SvInjection::addPrimitiveAssignFnsToMap, SvInjection::addClassAssignFnsToMap, SvInjection::debugName);
}


