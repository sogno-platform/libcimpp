#ifndef SeriesCompensator_H
#define SeriesCompensator_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "CurrentFlow.hpp"
#include "Reactance.hpp"
#include "Resistance.hpp"
#include "Voltage.hpp"

namespace CIMPP
{

	/*
	A Series Compensator is a series capacitor or reactor or an AC transmission line without charging susceptance.  It is a two terminal device.
	*/
	class SeriesCompensator : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		SeriesCompensator();
		~SeriesCompensator() override;

		CIMPP::Resistance r;  /* Positive sequence resistance. Default: nullptr */
		CIMPP::Resistance r0;  /* Zero sequence resistance. Default: nullptr */
		CIMPP::Boolean varistorPresent;  /* Describe if a metal oxide varistor (mov) for over voltage protection is configured at the series compensator. Default: false */
		CIMPP::CurrentFlow varistorRatedCurrent;  /* The maximum current the varistor is designed to handle at specified duration. Default: nullptr */
		CIMPP::Voltage varistorVoltageThreshold;  /* The dc voltage at which the varistor start conducting. Default: nullptr */
		CIMPP::Reactance x;  /* Positive sequence reactance. Default: nullptr */
		CIMPP::Reactance x0;  /* Zero sequence reactance. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SeriesCompensator_factory();
}
#endif
