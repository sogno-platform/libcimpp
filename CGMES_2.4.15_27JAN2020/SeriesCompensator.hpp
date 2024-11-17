#ifndef SeriesCompensator_H
#define SeriesCompensator_H

#include "ConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Resistance.hpp"
#include "Boolean.hpp"
#include "CurrentFlow.hpp"
#include "Voltage.hpp"
#include "Reactance.hpp"

namespace CIMPP {


	/*
	A Series Compensator is a series capacitor or reactor or an AC transmission line without charging susceptance.  It is a two terminal device.
	*/
	class SeriesCompensator: public ConductingEquipment
	{

	public:
					CIMPP::Resistance r; 	/* Positive sequence resistance. Default: nullptr */
					CIMPP::Resistance r0; 	/* Zero sequence resistance. Default: nullptr */
					CIMPP::Boolean varistorPresent; 	/* Describe if a metal oxide varistor (mov) for over voltage protection is configured at the series compensator. Default: false */
					CIMPP::CurrentFlow varistorRatedCurrent; 	/* The maximum current the varistor is designed to handle at specified duration. Default: nullptr */
					CIMPP::Voltage varistorVoltageThreshold; 	/* The dc voltage at which the varistor start conducting. Default: nullptr */
					CIMPP::Reactance x; 	/* Positive sequence reactance. Default: nullptr */
					CIMPP::Reactance x0; 	/* Zero sequence reactance. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		SeriesCompensator();
		virtual ~SeriesCompensator();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SeriesCompensator_factory();
}
#endif
