#include <sstream>
#include "IdentifiedObject.hpp"
#include "Curve.hpp"

#include "CurveStyle.hpp"
#include "UnitSymbol.hpp"
#include "UnitSymbol.hpp"
#include "UnitSymbol.hpp"
#include "CurveData.hpp"

using namespace CIMPP;

Curve::Curve() {};

Curve::~Curve() {};






bool assign_Curve_CurveDatas(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Curve* element = dynamic_cast<Curve*>(BaseClass_ptr1)) {
		if(dynamic_cast<CurveData*>(BaseClass_ptr2) != nullptr) {
                        element->CurveDatas.push_back(dynamic_cast<CurveData*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


bool assign_Curve_curveStyle(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Curve* element = dynamic_cast<Curve*>(BaseClass_ptr1)) {
                buffer >> element->curveStyle;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Curve_xUnit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Curve* element = dynamic_cast<Curve*>(BaseClass_ptr1)) {
                buffer >> element->xUnit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Curve_y1Unit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Curve* element = dynamic_cast<Curve*>(BaseClass_ptr1)) {
                buffer >> element->y1Unit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Curve_y2Unit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Curve* element = dynamic_cast<Curve*>(BaseClass_ptr1)) {
                buffer >> element->y2Unit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* Curve_factory() {
		return new Curve;
	}
}

void Curve::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Curve"), &Curve_factory));
}

void Curve::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Curve.curveStyle"), &assign_Curve_curveStyle));
	assign_map.insert(std::make_pair(std::string("cim:Curve.xUnit"), &assign_Curve_xUnit));
	assign_map.insert(std::make_pair(std::string("cim:Curve.y1Unit"), &assign_Curve_y1Unit));
	assign_map.insert(std::make_pair(std::string("cim:Curve.y2Unit"), &assign_Curve_y2Unit));
	}

void Curve::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
					assign_map.insert(std::make_pair(std::string("cim:Curve.CurveDatas"), &assign_Curve_CurveDatas));
}

const char Curve::debugName[] = "Curve";
const char* Curve::debugString()
{
	return Curve::debugName;
}

const BaseClassDefiner Curve::declare()
{
	return BaseClassDefiner(Curve::addConstructToMap, Curve::addPrimitiveAssignFnsToMap, Curve::addClassAssignFnsToMap, Curve::debugName);
}


