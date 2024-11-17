#ifndef Accumulator_H
#define Accumulator_H

#include "Measurement.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class AccumulatorValue;
class AccumulatorLimitSet;
	/*
	Accumulator represents an accumulated (counted) Measurement, e.g. an energy value.
	*/
	class Accumulator: public Measurement
	{

	public:
					std::list<CIMPP::AccumulatorValue*> AccumulatorValues; 	/* Measurement to which this value is connected. Default: 0 */
					std::list<CIMPP::AccumulatorLimitSet*> LimitSets; 	/* The Measurements using the LimitSet. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		Accumulator();
		virtual ~Accumulator();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Accumulator_factory();
}
#endif
