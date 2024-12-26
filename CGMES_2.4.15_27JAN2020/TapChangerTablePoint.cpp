#include <sstream>
#include "BaseClass.hpp"
#include "TapChangerTablePoint.hpp"

#include "PerCent.hpp"
#include "PerCent.hpp"
#include "PerCent.hpp"
#include "Simple_Float.hpp"
#include "Integer.hpp"
#include "PerCent.hpp"

using namespace CIMPP;

TapChangerTablePoint::TapChangerTablePoint() {};

TapChangerTablePoint::~TapChangerTablePoint() {};


bool assign_TapChangerTablePoint_b(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1)) {
                buffer >> element->b;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TapChangerTablePoint_g(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1)) {
                buffer >> element->g;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TapChangerTablePoint_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1)) {
                buffer >> element->r;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TapChangerTablePoint_ratio(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1)) {
                buffer >> element->ratio;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TapChangerTablePoint_step(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1)) {
                buffer >> element->step;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TapChangerTablePoint_x(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1)) {
                buffer >> element->x;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}








namespace CIMPP {
	BaseClass* TapChangerTablePoint_factory() {
		return new TapChangerTablePoint;
	}
}

void TapChangerTablePoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:TapChangerTablePoint"), &TapChangerTablePoint_factory));
}

void TapChangerTablePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:TapChangerTablePoint.b"), &assign_TapChangerTablePoint_b));
	assign_map.insert(std::make_pair(std::string("cim:TapChangerTablePoint.g"), &assign_TapChangerTablePoint_g));
	assign_map.insert(std::make_pair(std::string("cim:TapChangerTablePoint.r"), &assign_TapChangerTablePoint_r));
	assign_map.insert(std::make_pair(std::string("cim:TapChangerTablePoint.ratio"), &assign_TapChangerTablePoint_ratio));
	assign_map.insert(std::make_pair(std::string("cim:TapChangerTablePoint.step"), &assign_TapChangerTablePoint_step));
	assign_map.insert(std::make_pair(std::string("cim:TapChangerTablePoint.x"), &assign_TapChangerTablePoint_x));
}

void TapChangerTablePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
						}

const char TapChangerTablePoint::debugName[] = "TapChangerTablePoint";
const char* TapChangerTablePoint::debugString()
{
	return TapChangerTablePoint::debugName;
}

const BaseClassDefiner TapChangerTablePoint::declare()
{
	return BaseClassDefiner(TapChangerTablePoint::addConstructToMap, TapChangerTablePoint::addPrimitiveAssignFnsToMap, TapChangerTablePoint::addClassAssignFnsToMap, TapChangerTablePoint::debugName);
}
