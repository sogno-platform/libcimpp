#ifndef Discrete_H
#define Discrete_H
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
	class DiscreteValue;
	class ValueAliasSet;

	/*
	Discrete represents a discrete Measurement, i.e. a Measurement representing discrete values, e.g. a Breaker position.
	*/
	class Discrete : public Measurement
	{
	public:
		/* constructor initialising all attributes to null */
		Discrete();
		~Discrete() override;

		std::list<CIMPP::DiscreteValue*> DiscreteValues;  /* The values connected to this measurement. Default: 0 */
		CIMPP::ValueAliasSet* ValueAliasSet;  /* The ValueAliasSet used for translation of a MeasurementValue.value to a name. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Discrete_factory();
}
#endif
