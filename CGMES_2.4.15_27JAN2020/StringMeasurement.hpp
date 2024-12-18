#ifndef StringMeasurement_H
#define StringMeasurement_H

#include "Measurement.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class StringMeasurementValue;
	/*
	StringMeasurement represents a measurement with values of type string.
	*/
	class StringMeasurement: public Measurement
	{

	public:
					std::list<CIMPP::StringMeasurementValue*> StringMeasurementValues; 	/* The values connected to this measurement. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		StringMeasurement();
		virtual ~StringMeasurement();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* StringMeasurement_factory();
}
#endif
