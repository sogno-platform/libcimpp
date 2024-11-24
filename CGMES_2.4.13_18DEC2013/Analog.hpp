#ifndef Analog_H
#define Analog_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Measurement.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"

namespace CIMPP
{
	class AnalogLimitSet;
	class AnalogValue;

	/*
	Analog represents an analog Measurement.
	*/
	class Analog : public Measurement
	{
	public:
		/* constructor initialising all attributes to null */
		Analog();
		~Analog() override;

		std::list<CIMPP::AnalogValue*> AnalogValues;  /* Measurement to which this value is connected. Default: 0 */
		std::list<CIMPP::AnalogLimitSet*> LimitSets;  /* The Measurements using the LimitSet. Default: 0 */
		CIMPP::Boolean positiveFlowIn;  /* If true then this measurement is an active power, reactive power or current with the convention that a positive value measured at the Terminal means power is flowing into the related PowerSystemResource. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Analog_factory();
}
#endif
