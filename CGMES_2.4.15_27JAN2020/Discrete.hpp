#ifndef Discrete_H
#define Discrete_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "Measurement.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

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

		std::list<CIMPP::DiscreteValue*> DiscreteValues;  /* Measurement to which this value is connected. Default: 0 */
		CIMPP::ValueAliasSet* ValueAliasSet;  /* The ValueAliasSet used for translation of a MeasurementValue.value to a name. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* Discrete_factory();
}
#endif
