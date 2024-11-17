#ifndef Discrete_H
#define Discrete_H

#include "Measurement.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DiscreteValue;
class ValueAliasSet;
	/*
	Discrete represents a discrete Measurement, i.e. a Measurement representing discrete values, e.g. a Breaker position.
	*/
	class Discrete: public Measurement
	{

	public:
					std::list<CIMPP::DiscreteValue*> DiscreteValues; 	/* Measurement to which this value is connected. Default: 0 */
					CIMPP::ValueAliasSet* ValueAliasSet; 	/* The ValueAliasSet used for translation of a MeasurementValue.value to a name. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		Discrete();
		virtual ~Discrete();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Discrete_factory();
}
#endif
