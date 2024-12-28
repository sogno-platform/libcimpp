#ifndef DiscreteValue_H
#define DiscreteValue_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "MeasurementValue.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

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

		CIMPP::Command* Command;  /* The Control variable associated with the MeasurementValue. Default: 0 */
		CIMPP::Discrete* Discrete;  /* Measurement to which this value is connected. Default: 0 */

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

	BaseClass* DiscreteValue_factory();
}
#endif
