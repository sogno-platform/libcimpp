#ifndef DiscreteValue_H
#define DiscreteValue_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "MeasurementValue.hpp"
#include "BaseClassDefiner.hpp"
#include "Integer.hpp"

namespace CIMPP
{
	class Command;
	class Discrete;

	/*
	DiscreteValue represents a discrete MeasurementValue.
	*/
	class DiscreteValue : public MeasurementValue
	{
	public:
		/* constructor initialising all attributes to null */
		DiscreteValue();
		~DiscreteValue() override;

		CIMPP::Command* Command;  /* The MeasurementValue that is controlled. Default: 0 */
		CIMPP::Discrete* Discrete;  /* The values connected to this measurement. Default: 0 */
		CIMPP::Integer value;  /* The value to supervise. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DiscreteValue_factory();
}
#endif
