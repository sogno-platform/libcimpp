#ifndef StringMeasurementValue_H
#define StringMeasurementValue_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "MeasurementValue.hpp"
#include "BaseClassDefiner.hpp"
#include "String.hpp"

namespace CIMPP
{
	class StringMeasurement;

	/*
	StringMeasurementValue represents a measurement value of type string.
	*/
	class StringMeasurementValue : public MeasurementValue
	{
	public:
		/* constructor initialising all attributes to null */
		StringMeasurementValue();
		~StringMeasurementValue() override;

		CIMPP::StringMeasurement* StringMeasurement;  /* Measurement to which this value is connected. Default: 0 */
		CIMPP::String value;  /* The value to supervise. Default: '' */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* StringMeasurementValue_factory();
}
#endif