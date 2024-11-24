#ifndef DiscreteValue_H
#define DiscreteValue_H

#include "MeasurementValue.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Integer.hpp"

namespace CIMPP {


class Command;
class Discrete;
	/*
	DiscreteValue represents a discrete MeasurementValue.
	*/
	class DiscreteValue: public MeasurementValue
	{

	public:
					CIMPP::Command* Command; 	/* The MeasurementValue that is controlled. Default: 0 */
					CIMPP::Discrete* Discrete; 	/* The values connected to this measurement. Default: 0 */
					CIMPP::Integer value; 	/* The value to supervise. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		DiscreteValue();
		virtual ~DiscreteValue();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DiscreteValue_factory();
}
#endif
