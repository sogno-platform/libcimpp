#ifndef MeasurementValueQuality_H
#define MeasurementValueQuality_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Quality61850.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class MeasurementValue;

	/*
	Measurement quality flags. Bits 0-10 are defined for substation automation in draft IEC 61850 part 7-3. Bits 11-15 are reserved for future expansion by that document. Bits 16-31 are reserved for EMS applications.
	*/
	class MeasurementValueQuality : public Quality61850
	{
	public:
		/* constructor initialising all attributes to null */
		MeasurementValueQuality();
		~MeasurementValueQuality() override;

		CIMPP::MeasurementValue* MeasurementValue;  /* A MeasurementValue has a MeasurementValueQuality associated with it. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* MeasurementValueQuality_factory();
}
#endif
