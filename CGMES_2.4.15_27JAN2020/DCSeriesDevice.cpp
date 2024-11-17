#include <sstream>
#include "DCConductingEquipment.hpp"
#include "DCSeriesDevice.hpp"

#include "Inductance.hpp"
#include "Voltage.hpp"
#include "Resistance.hpp"

using namespace CIMPP;

DCSeriesDevice::DCSeriesDevice() {};

DCSeriesDevice::~DCSeriesDevice() {};


bool assign_DCSeriesDevice_inductance(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DCSeriesDevice* element = dynamic_cast<DCSeriesDevice*>(BaseClass_ptr1)) {
                buffer >> element->inductance;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DCSeriesDevice_ratedUdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DCSeriesDevice* element = dynamic_cast<DCSeriesDevice*>(BaseClass_ptr1)) {
                buffer >> element->ratedUdc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DCSeriesDevice_resistance(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DCSeriesDevice* element = dynamic_cast<DCSeriesDevice*>(BaseClass_ptr1)) {
                buffer >> element->resistance;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}





namespace CIMPP {
	BaseClass* DCSeriesDevice_factory() {
		return new DCSeriesDevice;
	}
}

void DCSeriesDevice::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCSeriesDevice"), &DCSeriesDevice_factory));
}

void DCSeriesDevice::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DCSeriesDevice.inductance"), &assign_DCSeriesDevice_inductance));
	assign_map.insert(std::make_pair(std::string("cim:DCSeriesDevice.ratedUdc"), &assign_DCSeriesDevice_ratedUdc));
	assign_map.insert(std::make_pair(std::string("cim:DCSeriesDevice.resistance"), &assign_DCSeriesDevice_resistance));
}

void DCSeriesDevice::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
			}

const char DCSeriesDevice::debugName[] = "DCSeriesDevice";
const char* DCSeriesDevice::debugString()
{
	return DCSeriesDevice::debugName;
}

const BaseClassDefiner DCSeriesDevice::declare()
{
	return BaseClassDefiner(DCSeriesDevice::addConstructToMap, DCSeriesDevice::addPrimitiveAssignFnsToMap, DCSeriesDevice::addClassAssignFnsToMap, DCSeriesDevice::debugName);
}
