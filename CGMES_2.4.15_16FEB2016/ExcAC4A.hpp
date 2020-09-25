#ifndef ExcAC4A_H
#define ExcAC4A_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Modified IEEE AC4A alternator-supplied rectifier excitation system with different minimum controller output.
	*/
	class ExcAC4A: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU vimax; 	/* Maximum voltage regulator input limit (Vimax).  Typical Value = 10. Default: nullptr */
					CIMPP::PU vimin; 	/* Minimum voltage regulator input limit (Vimin).  Typical Value = -10. Default: nullptr */
					CIMPP::Seconds tc; 	/* Voltage regulator time constant (Tc).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds tb; 	/* Voltage regulator time constant (Tb).  Typical Value = 10. Default: nullptr */
					CIMPP::PU ka; 	/* Voltage regulator gain (Ka).  Typical Value = 200. Default: nullptr */
					CIMPP::Seconds ta; 	/* Voltage regulator time constant (Ta).  Typical Value = 0.015. Default: nullptr */
					CIMPP::PU vrmax; 	/* Maximum voltage regulator output (Vrmax).  Typical Value = 5.64. Default: nullptr */
					CIMPP::PU vrmin; 	/* Minimum voltage regulator output (Vrmin).  Typical Value = -4.53. Default: nullptr */
					CIMPP::PU kc; 	/* Rectifier loading factor proportional to commutating reactance (Kc).  Typical Value = 0. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ExcAC4A();
		virtual ~ExcAC4A();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcAC4A_factory();
}
#endif
