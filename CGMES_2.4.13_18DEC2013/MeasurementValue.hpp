#ifndef MeasurementValue_H
#define MeasurementValue_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "DateTime.hpp"
#include "PerCent.hpp"

namespace CIMPP
{
	class MeasurementValueQuality;
	class MeasurementValueSource;

	/*
	The current state for a measurement. A state value is an instance of a measurement from a specific source. Measurements can be associated with many state values, each representing a different source for the measurement.
	*/
	class MeasurementValue : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		MeasurementValue();
		~MeasurementValue() override;

		CIMPP::MeasurementValueQuality* MeasurementValueQuality;  /* A MeasurementValue has a MeasurementValueQuality associated with it. Default: 0 */
		CIMPP::MeasurementValueSource* MeasurementValueSource;  /* The MeasurementValues updated by the source. Default: 0 */
		CIMPP::PerCent sensorAccuracy;  /* The limit, expressed as a percentage of the sensor maximum, that errors will not exceed when the sensor is used under  reference conditions. Default: nullptr */
		CIMPP::DateTime timeStamp;  /* The time when the value was last updated Default: '' */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* MeasurementValue_factory();
}
#endif
