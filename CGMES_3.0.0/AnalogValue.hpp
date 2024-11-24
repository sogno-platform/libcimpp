#ifndef AnalogValue_H
#define AnalogValue_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "MeasurementValue.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class Analog;
	class AnalogControl;

	/*
	AnalogValue represents an analog MeasurementValue.
	*/
	class AnalogValue : public MeasurementValue
	{
	public:
		/* constructor initialising all attributes to null */
		AnalogValue();
		~AnalogValue() override;

		CIMPP::Analog* Analog;  /* Measurement to which this value is connected. Default: 0 */
		CIMPP::AnalogControl* AnalogControl;  /* The Control variable associated with the MeasurementValue. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* AnalogValue_factory();
}
#endif
