#include <sstream>
#include "BaseClass.hpp"
#include "Quality61850.hpp"

#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Source.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Validity.hpp"

using namespace CIMPP;

Quality61850::Quality61850() {};

Quality61850::~Quality61850() {};















bool assign_Quality61850_badReference(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1)) {
                buffer >> element->badReference;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Quality61850_estimatorReplaced(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1)) {
                buffer >> element->estimatorReplaced;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Quality61850_failure(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1)) {
                buffer >> element->failure;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Quality61850_oldData(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1)) {
                buffer >> element->oldData;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Quality61850_operatorBlocked(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1)) {
                buffer >> element->operatorBlocked;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Quality61850_oscillatory(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1)) {
                buffer >> element->oscillatory;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Quality61850_outOfRange(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1)) {
                buffer >> element->outOfRange;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Quality61850_overFlow(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1)) {
                buffer >> element->overFlow;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Quality61850_source(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1)) {
                buffer >> element->source;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Quality61850_suspect(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1)) {
                buffer >> element->suspect;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Quality61850_test(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1)) {
                buffer >> element->test;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Quality61850_validity(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1)) {
                buffer >> element->validity;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* Quality61850_factory() {
		return new Quality61850;
	}
}

void Quality61850::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Quality61850"), &Quality61850_factory));
}

void Quality61850::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Quality61850.badReference"), &assign_Quality61850_badReference));
	assign_map.insert(std::make_pair(std::string("cim:Quality61850.estimatorReplaced"), &assign_Quality61850_estimatorReplaced));
	assign_map.insert(std::make_pair(std::string("cim:Quality61850.failure"), &assign_Quality61850_failure));
	assign_map.insert(std::make_pair(std::string("cim:Quality61850.oldData"), &assign_Quality61850_oldData));
	assign_map.insert(std::make_pair(std::string("cim:Quality61850.operatorBlocked"), &assign_Quality61850_operatorBlocked));
	assign_map.insert(std::make_pair(std::string("cim:Quality61850.oscillatory"), &assign_Quality61850_oscillatory));
	assign_map.insert(std::make_pair(std::string("cim:Quality61850.outOfRange"), &assign_Quality61850_outOfRange));
	assign_map.insert(std::make_pair(std::string("cim:Quality61850.overFlow"), &assign_Quality61850_overFlow));
	assign_map.insert(std::make_pair(std::string("cim:Quality61850.source"), &assign_Quality61850_source));
	assign_map.insert(std::make_pair(std::string("cim:Quality61850.suspect"), &assign_Quality61850_suspect));
	assign_map.insert(std::make_pair(std::string("cim:Quality61850.test"), &assign_Quality61850_test));
	assign_map.insert(std::make_pair(std::string("cim:Quality61850.validity"), &assign_Quality61850_validity));
}

void Quality61850::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
												}

const char Quality61850::debugName[] = "Quality61850";
const char* Quality61850::debugString()
{
	return Quality61850::debugName;
}

const BaseClassDefiner Quality61850::declare()
{
	return BaseClassDefiner(Quality61850::addConstructToMap, Quality61850::addPrimitiveAssignFnsToMap, Quality61850::addClassAssignFnsToMap, Quality61850::debugName);
}


