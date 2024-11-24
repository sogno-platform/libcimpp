#ifndef MeasurementValueSource_H
#define MeasurementValueSource_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class MeasurementValue;

	/*
	MeasurementValueSource describes the alternative sources updating a MeasurementValue. User conventions for how to use the MeasurementValueSource attributes are defined in IEC 61970-301.
	*/
	class MeasurementValueSource : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		MeasurementValueSource();
		~MeasurementValueSource() override;

		std::list<CIMPP::MeasurementValue*> MeasurementValues;  /* The MeasurementValues updated by the source. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* MeasurementValueSource_factory();
}
#endif
