#ifndef Accumulator_H
#define Accumulator_H
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
	class AccumulatorLimitSet;
	class AccumulatorValue;

	/** \brief Accumulator represents an accumulated (counted) Measurement, e.g. an energy value. */
	class Accumulator : public Measurement
	{
	public:
		/* constructor initialising all attributes to null */
		Accumulator();
		~Accumulator() override;

		/** \brief Measurement to which this value is connected. Default: 0 */
		std::list<CIMPP::AccumulatorValue*> AccumulatorValues;

		/** \brief The Measurements using the LimitSet. Default: 0 */
		std::list<CIMPP::AccumulatorLimitSet*> LimitSets;

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

	BaseClass* Accumulator_factory();
}
#endif
