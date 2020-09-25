#ifndef AnalogValue_H
#define AnalogValue_H

#include "MeasurementValue.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"

namespace CIMPP {


class Analog;
class AnalogControl;
	/*
	AnalogValue represents an analog MeasurementValue.
	*/
	class AnalogValue: public MeasurementValue
	{

	public:
					CIMPP::Analog* Analog; 	/* The values connected to this measurement. Default: 0 */
					CIMPP::AnalogControl* AnalogControl; 	/* The MeasurementValue that is controlled. Default: 0 */
					CIMPP::Simple_Float value; 	/* The value to supervise. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		AnalogValue();
		virtual ~AnalogValue();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* AnalogValue_factory();
}
#endif
