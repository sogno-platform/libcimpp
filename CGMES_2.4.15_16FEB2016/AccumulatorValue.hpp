#ifndef AccumulatorValue_H
#define AccumulatorValue_H

#include "MeasurementValue.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Integer.hpp"

namespace CIMPP {


class Accumulator;
class AccumulatorReset;
	/*
	AccumulatorValue represents an accumulated (counted) MeasurementValue.
	*/
	class AccumulatorValue: public MeasurementValue
	{

	public:
					CIMPP::Accumulator* Accumulator; 	/* The values connected to this measurement. Default: 0 */
					CIMPP::AccumulatorReset* AccumulatorReset; 	/* The command that reset the accumulator value. Default: 0 */
					CIMPP::Integer value; 	/* The value to supervise. The value is positive. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		AccumulatorValue();
		virtual ~AccumulatorValue();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* AccumulatorValue_factory();
}
#endif
