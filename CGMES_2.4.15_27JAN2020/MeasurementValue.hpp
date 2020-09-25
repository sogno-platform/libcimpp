#ifndef MeasurementValue_H
#define MeasurementValue_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PerCent.hpp"

namespace CIMPP {


class DateTime;
class MeasurementValueQuality;
class MeasurementValueSource;
	/*
	The current state for a measurement. A state value is an instance of a measurement from a specific source. Measurements can be associated with many state values, each representing a different source for the measurement.
	*/
	class MeasurementValue: public IdentifiedObject
	{

	public:
					CIMPP::DateTime* timeStamp; 	/* The time when the value was last updated Default: '' */
					CIMPP::PerCent sensorAccuracy; 	/* The limit, expressed as a percentage of the sensor maximum, that errors will not exceed when the sensor is used under  reference conditions. Default: nullptr */
					CIMPP::MeasurementValueQuality* MeasurementValueQuality; 	/* A MeasurementValue has a MeasurementValueQuality associated with it. Default: 0 */
					CIMPP::MeasurementValueSource* MeasurementValueSource; 	/* The MeasurementValues updated by the source. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		MeasurementValue();
		virtual ~MeasurementValue();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* MeasurementValue_factory();
}
#endif
