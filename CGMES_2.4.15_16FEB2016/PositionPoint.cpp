#include <sstream>
#include "BaseClass.hpp"
#include "PositionPoint.hpp"

#include "Location.hpp"
#include "Integer.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

PositionPoint::PositionPoint(): Location(nullptr) {};

PositionPoint::~PositionPoint() {};



bool assign_PositionPoint_sequenceNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1)) {
                buffer >> element->sequenceNumber;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PositionPoint_xPosition(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1)) {
		element->xPosition = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PositionPoint_yPosition(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1)) {
		element->yPosition = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PositionPoint_zPosition(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1)) {
		element->zPosition = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_Location_PositionPoints(BaseClass*, BaseClass*);
bool assign_PositionPoint_Location(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1)) {
                element->Location = dynamic_cast<Location*>(BaseClass_ptr2);
                if(element->Location != nullptr)
                        return assign_Location_PositionPoints(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}





namespace CIMPP {
	BaseClass* PositionPoint_factory() {
		return new PositionPoint;
	}
}

void PositionPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PositionPoint"), &PositionPoint_factory));
}

void PositionPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:PositionPoint.sequenceNumber"), &assign_PositionPoint_sequenceNumber));
	assign_map.insert(std::make_pair(std::string("cim:PositionPoint.xPosition"), &assign_PositionPoint_xPosition));
	assign_map.insert(std::make_pair(std::string("cim:PositionPoint.yPosition"), &assign_PositionPoint_yPosition));
	assign_map.insert(std::make_pair(std::string("cim:PositionPoint.zPosition"), &assign_PositionPoint_zPosition));
}

void PositionPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PositionPoint.Location"), &assign_PositionPoint_Location));
				}

const char PositionPoint::debugName[] = "PositionPoint";
const char* PositionPoint::debugString()
{
	return PositionPoint::debugName;
}

const BaseClassDefiner PositionPoint::declare()
{
	return BaseClassDefiner(PositionPoint::addConstructToMap, PositionPoint::addPrimitiveAssignFnsToMap, PositionPoint::addClassAssignFnsToMap, PositionPoint::debugName);
}
