#ifndef Analog_H
#define Analog_H

#include "Measurement.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"

namespace CIMPP {


class AnalogValue;
class AnalogLimitSet;
	/*
	Analog represents an analog Measurement.
	*/
	class Analog: public Measurement
	{

	public:
					CIMPP::Boolean positiveFlowIn; 	/* If true then this measurement is an active power, reactive power or current with the convention that a positive value measured at the Terminal means power is flowing into the related PowerSystemResource. Default: false */
					std::list<CIMPP::AnalogValue*> AnalogValues; 	/* Measurement to which this value is connected. Default: 0 */
					std::list<CIMPP::AnalogLimitSet*> LimitSets; 	/* The Measurements using the LimitSet. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		Analog();
		virtual ~Analog();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Analog_factory();
}
#endif
