#ifndef StringMeasurement_H
#define StringMeasurement_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Measurement.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class StringMeasurementValue;

	/*
	StringMeasurement represents a measurement with values of type string.
	*/
	class StringMeasurement : public Measurement
	{
	public:
		/* constructor initialising all attributes to null */
		StringMeasurement();
		~StringMeasurement() override;

		std::list<CIMPP::StringMeasurementValue*> StringMeasurementValues;  /* The values connected to this measurement. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* StringMeasurement_factory();
}
#endif
