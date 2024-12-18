#ifndef StringMeasurementValue_H
#define StringMeasurementValue_H

#include "MeasurementValue.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "String.hpp"

namespace CIMPP {


class StringMeasurement;
	/*
	StringMeasurementValue represents a measurement value of type string.
	*/
	class StringMeasurementValue: public MeasurementValue
	{

	public:
					CIMPP::StringMeasurement* StringMeasurement; 	/* Measurement to which this value is connected. Default: 0 */
					CIMPP::String value; 	/* The value to supervise. Default: '' */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		StringMeasurementValue();
		virtual ~StringMeasurementValue();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* StringMeasurementValue_factory();
}
#endif
